# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/GitHub
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/2014master



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 

IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o


#Rules

# CommandBasedRobotTemplate
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedRobotTemplate/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate/$(MODE_DIR)

OBJECTS_CommandBasedRobotTemplate = CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate.out : $(OBJECTS_CommandBasedRobotTemplate)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_CommandBasedRobotTemplate) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean

CommandBasedRobotTemplate/$(MODE_DIR)/CommandBasedRobotTemplate_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate" ]; then cd "CommandBasedRobotTemplate"; rm -rf $(MODE_DIR); fi


# CommandBasedRobotTemplate_partialImage
ifeq ($(DEBUG_MODE),1)
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h -I$(WIND_BASE)/target/h/WPILib -I$(WIND_BASE)/target/h/wrn/coreip 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = $(WIND_BASE)/target/lib/WPILib.a 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : DEFINES = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : CPU = PPC603
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL = gnu
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp -mlongcall
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBPATH = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : LIBS = 
CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/% : OBJ_DIR := CommandBasedRobotTemplate_partialImage/$(MODE_DIR)

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/CommandBase.o : $(PRJ_ROOT_DIR)/CommandBase.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/CommandBasedRobot.o : $(PRJ_ROOT_DIR)/CommandBasedRobot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousFive.o : $(PRJ_ROOT_DIR)/Commands/CgAutonomousFive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousFour.o : $(PRJ_ROOT_DIR)/Commands/CgAutonomousFour.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousOne.o : $(PRJ_ROOT_DIR)/Commands/CgAutonomousOne.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousSix.o : $(PRJ_ROOT_DIR)/Commands/CgAutonomousSix.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousThree.o : $(PRJ_ROOT_DIR)/Commands/CgAutonomousThree.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousTwo.o : $(PRJ_ROOT_DIR)/Commands/CgAutonomousTwo.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgRetractAppendages.o : $(PRJ_ROOT_DIR)/Commands/CgRetractAppendages.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgShooterShoot.o : $(PRJ_ROOT_DIR)/Commands/CgShooterShoot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdCameraLightOff.o : $(PRJ_ROOT_DIR)/Commands/CmdCameraLightOff.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdCameraLightOn.o : $(PRJ_ROOT_DIR)/Commands/CmdCameraLightOn.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveAutonomous.o : $(PRJ_ROOT_DIR)/Commands/CmdDriveAutonomous.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveChangeMode.o : $(PRJ_ROOT_DIR)/Commands/CmdDriveChangeMode.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveProgrammed.o : $(PRJ_ROOT_DIR)/Commands/CmdDriveProgrammed.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveShiftHigh.o : $(PRJ_ROOT_DIR)/Commands/CmdDriveShiftHigh.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveShiftLow.o : $(PRJ_ROOT_DIR)/Commands/CmdDriveShiftLow.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveShiftToggle.o : $(PRJ_ROOT_DIR)/Commands/CmdDriveShiftToggle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveToggleFront.o : $(PRJ_ROOT_DIR)/Commands/CmdDriveToggleFront.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveWithJoystickArcade.o : $(PRJ_ROOT_DIR)/Commands/CmdDriveWithJoystickArcade.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveWithJoystickTank.o : $(PRJ_ROOT_DIR)/Commands/CmdDriveWithJoystickTank.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdFunnelsDeploy.o : $(PRJ_ROOT_DIR)/Commands/CmdFunnelsDeploy.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdFunnelsDeployAndWait.o : $(PRJ_ROOT_DIR)/Commands/CmdFunnelsDeployAndWait.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdFunnelsToggle.o : $(PRJ_ROOT_DIR)/Commands/CmdFunnelsToggle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdFunnelsUndeploy.o : $(PRJ_ROOT_DIR)/Commands/CmdFunnelsUndeploy.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderExtend.o : $(PRJ_ROOT_DIR)/Commands/CmdLoaderExtend.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderExtendAndWait.o : $(PRJ_ROOT_DIR)/Commands/CmdLoaderExtendAndWait.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderExtensionToggle.o : $(PRJ_ROOT_DIR)/Commands/CmdLoaderExtensionToggle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderIntakeToggle.o : $(PRJ_ROOT_DIR)/Commands/CmdLoaderIntakeToggle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderLoad.o : $(PRJ_ROOT_DIR)/Commands/CmdLoaderLoad.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderLoadingExtend.o : $(PRJ_ROOT_DIR)/Commands/CmdLoaderLoadingExtend.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderLoadingExtensionToggle.o : $(PRJ_ROOT_DIR)/Commands/CmdLoaderLoadingExtensionToggle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderRetract.o : $(PRJ_ROOT_DIR)/Commands/CmdLoaderRetract.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderStop.o : $(PRJ_ROOT_DIR)/Commands/CmdLoaderStop.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderUnjam.o : $(PRJ_ROOT_DIR)/Commands/CmdLoaderUnjam.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderUnjamToggle.o : $(PRJ_ROOT_DIR)/Commands/CmdLoaderUnjamToggle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterHardStopExtend.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterHardStopExtend.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterHardStopRetract.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterHardStopRetract.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterHardStopToggle.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterHardStopToggle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterLatch.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterLatch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterLatchToggle.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterLatchToggle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterMotorsDisengage.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterMotorsDisengage.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterMotorsEngage.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterMotorsEngage.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterMotorsToggle.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterMotorsToggle.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterPullBack.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterPullBack.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterReverse.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterReverse.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterReverseHeld.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterReverseHeld.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterShoot.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterShoot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterSlowPull.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterSlowPull.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterStop.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterStop.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterUnlatch.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterUnlatch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterUnlatchAutonomous.o : $(PRJ_ROOT_DIR)/Commands/CmdShooterUnlatchAutonomous.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdTelemetryRecordStart.o : $(PRJ_ROOT_DIR)/Commands/CmdTelemetryRecordStart.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdTelemetryRecordStop.o : $(PRJ_ROOT_DIR)/Commands/CmdTelemetryRecordStop.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWait.o : $(PRJ_ROOT_DIR)/Commands/CmdWait.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitAndDrive.o : $(PRJ_ROOT_DIR)/Commands/CmdWaitAndDrive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForBallLoaded.o : $(PRJ_ROOT_DIR)/Commands/CmdWaitForBallLoaded.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForBallProximity.o : $(PRJ_ROOT_DIR)/Commands/CmdWaitForBallProximity.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForHotGoal.o : $(PRJ_ROOT_DIR)/Commands/CmdWaitForHotGoal.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForHotGoalKinect.o : $(PRJ_ROOT_DIR)/Commands/CmdWaitForHotGoalKinect.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForLatch.o : $(PRJ_ROOT_DIR)/Commands/CmdWaitForLatch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForShooterDisengage.o : $(PRJ_ROOT_DIR)/Commands/CmdWaitForShooterDisengage.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForShooterEngage.o : $(PRJ_ROOT_DIR)/Commands/CmdWaitForShooterEngage.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForUnlatch.o : $(PRJ_ROOT_DIR)/Commands/CmdWaitForUnlatch.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/DecimalData.o : $(PRJ_ROOT_DIR)/InsightLT/DecimalData.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/DisplayData.o : $(PRJ_ROOT_DIR)/InsightLT/DisplayData.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/InsightLT.o : $(PRJ_ROOT_DIR)/InsightLT/InsightLT.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/IntegerData.o : $(PRJ_ROOT_DIR)/InsightLT/IntegerData.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/StringData.o : $(PRJ_ROOT_DIR)/InsightLT/StringData.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/Zone.o : $(PRJ_ROOT_DIR)/InsightLT/Zone.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/OI.o : $(PRJ_ROOT_DIR)/OI.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Drive.o : $(PRJ_ROOT_DIR)/Subsystems/Drive.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Funnels.o : $(PRJ_ROOT_DIR)/Subsystems/Funnels.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Loader.o : $(PRJ_ROOT_DIR)/Subsystems/Loader.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Pneumatics.o : $(PRJ_ROOT_DIR)/Subsystems/Pneumatics.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Shooter.o : $(PRJ_ROOT_DIR)/Subsystems/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Telemetry.o : $(PRJ_ROOT_DIR)/Telemetry.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Utilities.o : $(PRJ_ROOT_DIR)/Utilities.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Vision.o : $(PRJ_ROOT_DIR)/Vision.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP -mlongcall $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_CommandBasedRobotTemplate_partialImage = CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/CommandBase.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/CommandBasedRobot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousFive.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousFour.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousOne.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousSix.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousThree.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousTwo.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgRetractAppendages.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgShooterShoot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdCameraLightOff.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdCameraLightOn.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveAutonomous.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveChangeMode.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveProgrammed.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveShiftHigh.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveShiftLow.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveShiftToggle.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveToggleFront.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveWithJoystickArcade.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveWithJoystickTank.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdFunnelsDeploy.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdFunnelsDeployAndWait.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdFunnelsToggle.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdFunnelsUndeploy.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderExtend.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderExtendAndWait.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderExtensionToggle.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderIntakeToggle.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderLoad.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderLoadingExtend.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderLoadingExtensionToggle.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderRetract.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderStop.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderUnjam.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderUnjamToggle.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterHardStopExtend.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterHardStopRetract.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterHardStopToggle.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterLatch.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterLatchToggle.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterMotorsDisengage.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterMotorsEngage.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterMotorsToggle.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterPullBack.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterReverse.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterReverseHeld.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterShoot.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterSlowPull.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterStop.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterUnlatch.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterUnlatchAutonomous.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdTelemetryRecordStart.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdTelemetryRecordStop.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWait.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitAndDrive.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForBallLoaded.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForBallProximity.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForHotGoal.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForHotGoalKinect.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForLatch.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForShooterDisengage.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForShooterEngage.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForUnlatch.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/DecimalData.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/DisplayData.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/InsightLT.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/IntegerData.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/StringData.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/Zone.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/OI.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Drive.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Funnels.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Loader.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Pneumatics.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Shooter.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Telemetry.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Utilities.o \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Vision.o

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage.o : $(OBJECTS_CommandBasedRobotTemplate_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_CommandBasedRobotTemplate_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_compile_file : $(FILE) ;

_clean :: CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_clean

CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/CommandBasedRobotTemplate_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "CommandBasedRobotTemplate_partialImage" ]; then cd "CommandBasedRobotTemplate_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/CommandBase.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/CommandBasedRobot.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousFive.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousFour.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousOne.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousSix.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousThree.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgAutonomousTwo.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgRetractAppendages.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CgShooterShoot.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdCameraLightOff.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdCameraLightOn.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveAutonomous.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveChangeMode.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveProgrammed.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveShiftHigh.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveShiftLow.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveShiftToggle.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveToggleFront.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveWithJoystickArcade.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdDriveWithJoystickTank.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdFunnelsDeploy.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdFunnelsDeployAndWait.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdFunnelsToggle.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdFunnelsUndeploy.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderExtend.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderExtendAndWait.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderExtensionToggle.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderIntakeToggle.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderLoad.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderLoadingExtend.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderLoadingExtensionToggle.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderRetract.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderStop.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderUnjam.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdLoaderUnjamToggle.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterHardStopExtend.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterHardStopRetract.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterHardStopToggle.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterLatch.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterLatchToggle.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterMotorsDisengage.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterMotorsEngage.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterMotorsToggle.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterPullBack.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterReverse.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterReverseHeld.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterShoot.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterSlowPull.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterStop.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterUnlatch.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdShooterUnlatchAutonomous.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdTelemetryRecordStart.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdTelemetryRecordStop.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWait.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitAndDrive.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForBallLoaded.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForBallProximity.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForHotGoal.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForHotGoalKinect.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForLatch.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForShooterDisengage.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForShooterEngage.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Commands/CmdWaitForUnlatch.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/DecimalData.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/DisplayData.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/InsightLT.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/IntegerData.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/StringData.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/InsightLT/Zone.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/OI.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Drive.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Funnels.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Loader.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Pneumatics.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Subsystems/Shooter.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Telemetry.d CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Utilities.d \
	 CommandBasedRobotTemplate_partialImage/$(MODE_DIR)/Objects/2014master/Vision.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

main_all : external_build $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
