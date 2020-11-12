# Build the RCP Profiler

```shell
$ python Scripts/UpdateCommon.py
```

In ```Build/Linux/CXLInit.py```, CTRL + F for print statements and add () around the strings to be printed.

In ```Common/Src/AMDTActivityLogger.cpp```, add "-Wno-cast-function-type" to line 19.

In ```Src/CLTraceAgent/CLEventManager.cpp```, change line 237 to "return nullEvent;".

```shell
$ chmod +x build_rcp.sh
$ ./build_rcp.sh skip-hsaprofiler boostlibdir /opt/boost_1_59/lib
```