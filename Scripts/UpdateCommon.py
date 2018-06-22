#! /usr/bin/python
#
# Simple script to update a set of common directories that are needed as dependencies of the current project

import os
import shutil
import string
import subprocess
import sys
import urllib
import zipfile
import tarfile
import platform

MACHINE_OS = ""
if "windows" in platform.system().lower():
    MACHINE_OS = "Windows"
elif "cygwin" in platform.system().lower():
    MACHINE_OS = "Windows"
elif "linux" in platform.system().lower():
    MACHINE_OS = "Linux"
else:
    print("Operating system not recognized correctly")
    sys.exit(1)

# RCP git project to folder map definitions
# - GitHubMapping
from UpdateCommonMap import *
if MACHINE_OS == "Linux":
    from UpdateCommonMap import downloadMappingLin as downloadMapping
    from UpdateCommonMap import vkStableClocksMappingLin as vkStableClocksMapping
else:
    from UpdateCommonMap import downloadMappingWin as downloadMapping
    from UpdateCommonMap import vkStableClocksMappingWin as vkStableClocksMapping

# to allow the script to be run from anywhere - not just the cwd - store the absolute path to the script file
scriptRoot = os.path.dirname(os.path.realpath(__file__))

# for each GitHub dependency - test if it has already been fetched - if not, then fetch it,
# otherwise update it to top of tree

for key in GitHubMapping:
    # convert targetPath to OS specific format
    tmppath = os.path.join(scriptRoot, "..", GitHubMapping[key])
    # clean up path, collapsing any ../ and converting / to \ for Windows
    targetPath = os.path.normpath(tmppath)
    if os.path.isdir(targetPath):
        print("\nDirectory " + targetPath + " exists, using 'git pull' to get latest")
        sys.stdout.flush()
        sys.stderr.flush()
        p = subprocess.Popen(["git","pull"], cwd=targetPath)
        p.wait()
        sys.stdout.flush()
        sys.stderr.flush()
    else:
        print("\nDirectory " + targetPath + " does not exist, using 'git clone' to get latest")
        gitamdRoot = "https://github.com/GPUOpen-Tools/" + key
        commandArgs = ["git", "clone", gitamdRoot, targetPath]
        sys.stdout.flush()
        sys.stderr.flush()
        p = subprocess.Popen( commandArgs )
        p.wait()
        sys.stdout.flush()
        sys.stderr.flush()

def downloadandunzip(key, value):
    # convert targetPath to OS specific format
    tmppath = os.path.join(scriptRoot, "..", value)
    # clean up path, collapsing any ../ and converting / to \ for Windows
    targetPath = os.path.normpath(tmppath)
    if False == os.path.isdir(targetPath):
        os.makedirs(targetPath)
    zipfileName = key.split('/')[-1].split('#')[0].split('?')[0]
    #zipfileName = os.path.basename(key)
    zipPath = os.path.join(targetPath, zipfileName)
    if False == os.path.isfile(zipPath):
        print("\nDownloading " + key + " into " + zipPath)
        urllib.urlretrieve(key, zipPath)
        if os.path.splitext(zipPath)[1] == ".zip":
            zipfile.ZipFile(zipPath).extractall(targetPath)
        elif os.path.splitext(zipPath)[1] == ".tgz":
            tarfile.open(zipPath).extractall(targetPath)

def handleVkStableClocks(key, value):
    tmppath = os.path.join(scriptRoot, "..", value[0])
    targetPath = os.path.normpath(os.path.join(tmppath, value[1]))
    if False == os.path.isdir(targetPath):
        os.makedirs(targetPath)
    srcPath =  os.path.normpath(os.path.join(tmppath, value[2], key))
    dstPath = os.path.normpath(os.path.join(targetPath, key))
    if False == os.path.isfile(dstPath):
       if True == os.path.isfile(srcPath):
           print("Copying " + srcPath + " to " + dstPath)
           shutil.copy2(srcPath, dstPath)

for key in downloadMapping:
    downloadandunzip(key, downloadMapping[key])

for key in vkStableClocksMapping:
    handleVkStableClocks(key, vkStableClocksMapping[key])
