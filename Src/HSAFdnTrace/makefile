#MAKE FILE FOR HSATraceAgent
PROJECT_NAME=HSATraceAgent
DEPTH = ../..
include $(DEPTH)/Build/Linux/Common.mk

TARGETSO = $(OUTPUT_BIN_DIR)/lib$(GPU_PROFILER_LIB_PREFIX)$(PROJECT_NAME)$(TARGET_SUFFIX).so

ADDL_DEFINES = -DAMD_INTERNAL_BUILD
ADDL_CFLAGS = $(HSAFDN_CFLAGS)

INCLUDES = \
	-I. \
	-I$(COMMON_PROJ_DIR) \
	-I$(SRC_COMMON_DIR) \
	-I$(SRC_HSAFDNCOMMON_DIR) \
	-I$(HSA_DIR)/include \
	-I$(HSA_DIR)/include/hsa \
	-I$(HSA_DIR)/../include \
	-I$(HSA_DIR)/../include/rocprofiler \
	-I$(DYNAMICLIBRARYMODULE_DIR) \
	-I$(TSINGLETON_DIR) \
	-I$(DEVICEINFO_DIR)

LIBS = \
	$(HSAFDNCOMMON_LIBS) \
	$(COMMON_LIBS) \
	$(FRAMEWORK_LIBS) \
	$(STANDARD_LIBS)

LIBPATH = $(COMMON_LIB_PATHS)

SO_OBJS =  \
	./$(OBJ_DIR)/HSATraceAgent.o \
	./$(OBJ_DIR)/HSAFdnAPIInfoManager.o \
	./$(OBJ_DIR)/HSAAPIBase.o \
	./$(OBJ_DIR)/HSATraceStringUtils.o \
	./$(OBJ_DIR)/HSATraceInterceptionHelpers.o \
	./$(OBJ_DIR)/HSATraceInterception.o \
	./$(OBJ_DIR)/HSACoreAPITraceClasses.o \
	./$(OBJ_DIR)/HSAFinalizerExtensionAPITraceClasses.o \
	./$(OBJ_DIR)/HSAAMDAQLProfileExtensionAPITraceClasses.o \
	./$(OBJ_DIR)/HSAAMDExtensionAPITraceClasses.o \
	./$(OBJ_DIR)/HSAAMDLoaderExtensionAPITraceClasses.o \
	./$(OBJ_DIR)/HSAImageExtensionAPITraceClasses.o \
	./$(OBJ_DIR)/HSATraceStringOutput.o \
	./$(OBJ_DIR)/HSAAqlPacketInfo.o \
	./$(OBJ_DIR)/HSAAqlPacketTimeCollector.o \
	./$(OBJ_DIR)/HSASignalPool.o \
	./$(OBJ_DIR)/ProfilerTimer.o \
	./$(OBJ_DIR)/HSAFdnMaxApiTime.o \

include $(DEPTH)/Build/Linux/CommonTargets.mk

$(OBJ_DIR)/%.o: AutoGenerated/%.cpp
	$(BUILD_SRC)

# END OF MAKE FILE
