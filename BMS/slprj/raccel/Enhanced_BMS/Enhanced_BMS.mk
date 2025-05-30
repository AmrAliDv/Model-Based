﻿# Copyright 1994-2022 The MathWorks, Inc.
#
#
# Abstract:
#       Template makefile for building a Windows-based stand-alone embedded
#       real-time version of Simulink model using generated C code and the
#          Microsoft Visual C/C++ compiler for x64.
#
#       Note that this template is automatically customized by the build 
#       procedure to create "<model>.mk"
#
#       The following defines can be used to modify the behavior of the
#       build:
#         OPT_OPTS       - Optimization option. See DEFAULT_OPT_OPTS in
#                          vctools.mak for default.
#         OPTS           - User specific options.
#         CPP_OPTS       - C++ compiler options.
#         USER_SRCS      - Additional user sources, such as files needed by
#                          S-functions.
#         USER_INCLUDES  - Additional include paths
#                          (i.e. USER_INCLUDES="-Iwhere-ever -Iwhere-ever2")
#
#       To enable debugging:
#         set DEBUG_BUILD = 1, which will trigger OPTS=-Zi (may vary with
#                               compiler version, see compiler doc) 
#
#       This template makefile is designed to be used with a system target
#       file that contains 'rtwgensettings.BuildDirSuffix' see ert.tlc


#------------------------ Macros read by make_rtw -----------------------------
#
# The following macros are read by the build procedure:
#
#  MAKECMD         - This is the command used to invoke the make utility
#  HOST            - What platform this template makefile is targeted for
#                    (i.e. PC or UNIX)
#  BUILD           - Invoke make from the build procedure (yes/no)?
#  SYS_TARGET_FILE - Name of system target file.

MAKECMD         = nmake
HOST            = PC
BUILD           = yes
SYS_TARGET_FILE = any
BUILD_SUCCESS	= ^#^#^# Created

# Opt in to simplified format by specifying compatible Toolchain
TOOLCHAIN_NAME = [\
    "Microsoft Visual C++ 2022 v17.0 | nmake (64-bit Windows)", \
    "Microsoft Visual C++ 2019 v16.0 | nmake (64-bit Windows)", \
    "Microsoft Visual C++ 2017 v15.0 | nmake (64-bit Windows)"]

#---------------------- Tokens expanded by make_rtw ---------------------------
#
# The following tokens, when wrapped with "|>" and "<|" are expanded by the
# build procedure.
#
#  MODEL_NAME          - Name of the Simulink block diagram
#  MODEL_MODULES       - Any additional generated source modules
#  MAKEFILE_NAME       - Name of makefile created from template makefile <model>.mk
#  MATLAB_ROOT         - Path to where MATLAB is installed.
#  S_FUNCTIONS_LIB     - List of S-functions libraries to link.
#  NUMST               - Number of sample times
#  NCSTATES            - Number of continuous states
#  BUILDARGS           - Options passed in at the command line.
#  MULTITASKING        - yes (1) or no (0): Is solver mode multitasking
#  INTEGER_CODE        - yes (1) or no (0): Is generated code purely integer
#  MAT_FILE            - yes (1) or no (0): Should mat file logging be done,
#                        if 0, the generated code runs indefinitely
#  MULTI_INSTANCE_CODE - Is the generated code multi instantiable (1/0)?
#  MODELREFS           - List of referenced models
#  SHRLIBTARGET        - Is this build intended for generation of a shared library instead 
#                        of executable (1/0)?
#  MAKEFILEBUILDER_TGT - Is this build performed by the MakefileBuilder class
#                        e.g. to create a PIL executable?
#  STANDALONE_SUPPRESS_EXE - Build the standalone target but only create object code modules 
#                            and do not build an executable

MODEL                   = Enhanced_BMS
MODULES                 = Enhanced_BMS_7ded21a_1_ds.c Enhanced_BMS_7ded21a_1_ds_zc.c Enhanced_BMS_7ded21a_1_ds_tdxy_p.c Enhanced_BMS_7ded21a_1_ds_y.c Enhanced_BMS_7ded21a_1_ds_nldv.c Enhanced_BMS_7ded21a_1_ds_eq_tol.c Enhanced_BMS_7ded21a_1_ds_qx_p.c Enhanced_BMS_7ded21a_1_ds_sclv.c Enhanced_BMS_7ded21a_1_ds_obs_all.c Enhanced_BMS_7ded21a_1_ds_obs_exp.c Enhanced_BMS_7ded21a_1_ds_var_tol.c Enhanced_BMS_7ded21a_1_ds_mode.c Enhanced_BMS_7ded21a_1_ds_vmm.c Enhanced_BMS_7ded21a_1_ds_dxm_p.c Enhanced_BMS_7ded21a_1_ds_m.c Enhanced_BMS_7ded21a_1_ds_log.c Enhanced_BMS_7ded21a_1_ds_obs_act.c Enhanced_BMS_7ded21a_1_ds_imax.c Enhanced_BMS_7ded21a_1_ds_imin.c Enhanced_BMS_7ded21a_1_ds_dxicrm_p.c Enhanced_BMS_7ded21a_1_ds_obs_il.c Enhanced_BMS_7ded21a_1_ds_dxicr_p.c Enhanced_BMS_7ded21a_1_ds_vpf.c Enhanced_BMS_7ded21a_1_ds_m_p.c Enhanced_BMS_7ded21a_1_ds_slf0.c Enhanced_BMS_7ded21a_1_ds_slf.c Enhanced_BMS_7ded21a_1_ds_tdxf_p.c Enhanced_BMS_7ded21a_1_ds_a_p.c Enhanced_BMS_7ded21a_1_ds_duf_p.c Enhanced_BMS_7ded21a_1_ds_ic.c Enhanced_BMS_7ded21a_1_ds_slv.c Enhanced_BMS_7ded21a_1_ds_vmf.c Enhanced_BMS_7ded21a_1_ds_dxf_p.c Enhanced_BMS_7ded21a_1_ds_dxf.c Enhanced_BMS_7ded21a_1_ds_f.c Enhanced_BMS_7ded21a_1_ds_dxy.c Enhanced_BMS_7ded21a_1_ds_tduf_p.c Enhanced_BMS_7ded21a_1_ds_vsf.c Enhanced_BMS_7ded21a_1_ds_a.c Enhanced_BMS_7ded21a_1_ds_dxdelt_p.c Enhanced_BMS_7ded21a_1_ds_dxm.c Enhanced_BMS_7ded21a_1_ds_lv.c Enhanced_BMS_7ded21a_1_ds_dnf_v_x.c Enhanced_BMS_7ded21a_1_ds_dnf_p.c Enhanced_BMS_7ded21a_1_ds_mdxy_p.c Enhanced_BMS_7ded21a_1_ds_dxy_p.c Enhanced_BMS_7ded21a_1_ds_dxcer_p.c Enhanced_BMS_7ded21a_1_ds_icrm_p.c Enhanced_BMS_7ded21a_1_ds_duf.c Enhanced_BMS_7ded21a_1_ds_assert.c Enhanced_BMS_7ded21a_1.c Enhanced_BMS_7ded21a_1_gateway.c rt_backsubrr_dbl.c rt_forwardsubrr_dbl.c rt_lu_real.c rt_matrixlib_dbl.c Enhanced_BMS.c Enhanced_BMS_capi.c Enhanced_BMS_data.c Enhanced_BMS_tgtconn.c rt_nonfinite.c raccel_main.c raccel_sup.c raccel_mat.c simulink_solver_api.c raccel_utils.c slsa_sim_common_utils.c ext_svr.c updown.c ext_work.c rtiostream_interface.c rtiostream_tcpip.c rtiostream_utils.c
PRODUCT                 = Enhanced_BMS.exe
MAKEFILE                = Enhanced_BMS.mk
MATLAB_ROOT             = D:\MATLAB
ALT_MATLAB_ROOT         = D:\MATLAB
START_DIR               = D:\study\First Part\Enhanced_BMS
S_FUNCTIONS_LIB         = 
NUMST                   = 2
NCSTATES                = 0
BUILDARGS               =  RSIM_SOLVER_SELECTION=1 PCMATLABROOT="D:\\MATLAB" EXTMODE_STATIC_ALLOC=0 EXTMODE_STATIC_ALLOC_SIZE=1000000 EXTMODE_TRANSPORT=0 TMW_EXTMODE_TESTING=0 RSIM_PARAMETER_LOADING=1 OPTS="-DTGTCONN -DIS_SIM_TARGET -DNRT -DRSIM_PARAMETER_LOADING -DRSIM_WITH_SL_SOLVER -DENABLE_SLEXEC_SSBRIDGE=1 -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=0 -DON_TARGET_WAIT_FOR_START=0 -DTID01EQ=0"
MULTITASKING            = 0
INTEGER_CODE            = 0
MAT_FILE                = 1
ALLOCATIONFCN           = 0
ONESTEPFCN              = 0
TERMFCN                 = 1
ENABLE_SLEXEC_SSBRIDGE  = 1
MULTI_INSTANCE_CODE     = 0
CLASSIC_INTERFACE       = 1
MODELREFS               = 
TARGET_LANG_EXT         = c
SHRLIBTARGET            = 0
MAKEFILEBUILDER_TGT     = 0
STANDALONE_SUPPRESS_EXE = 0
OPTIMIZATION_FLAGS      = /DNDEBUG /Od /Oy-
ADDITIONAL_LDFLAGS      =  -LARGEADDRESSAWARE
INTERLEAVED_COMPLEX_FLAGS = -R2018a
DEFINES_CUSTOM          = -DEXT_MODE -DIS_RAPID_ACCEL 
DEFINES_OTHER           = -DHAVESTDIO
COMPILE_FLAGS_OTHER     = 
SYSTEM_LIBS             = /LIBPATH:"D:\MATLAB\extern\lib\win64\microsoft" libmwipp.lib libut.lib libmx.lib libmex.lib libmat.lib libmwmathutil.lib libmwslsa_engine.lib libmwslexec_simbridge.lib libmwsl_fileio.lib libmwsigstream.lib libmwsl_AsyncioQueue.lib libmwsl_services.lib libmwsdi_raccel.lib libmwi18n.lib libmwcoder_target_services.lib libmwcoder_ParamTuningTgtAppSvc.lib libmwslpointerutil.lib libmwsl_simtarget_instrumentation.lib libfixedpoint.lib libmwslexec_simlog.lib libmwstringutil.lib
MODEL_HAS_DYNAMICALLY_LOADED_SFCNS = 0

# To enable debugging:
# set DEBUG_BUILD = 1
DEBUG_BUILD             = 0

#--------------------------- Model and reference models -----------------------
MODELLIB                  = 
MODELREF_LINK_LIBS        = 
MODELREF_LINK_RSPFILE     = Enhanced_BMS_ref.rsp
COMPILER_COMMAND_FILE     = Enhanced_BMS_comp.rsp
RELATIVE_PATH_TO_ANCHOR   = ..\..\..
MODELREF_TARGET_TYPE      = NONE

!if "$(MATLAB_ROOT)" != "$(ALT_MATLAB_ROOT)"
MATLAB_ROOT = $(ALT_MATLAB_ROOT)
!endif

#--------------------------- Tool Specifications ------------------------------
!include $(MATLAB_ROOT)\rtw\c\tools\vctools.mak

CMD_FILE             = $(MODEL).rsp

#------------------------------ Include/Lib Path ------------------------------

INCLUDE = .;$(RELATIVE_PATH_TO_ANCHOR);$(INCLUDE)

#----------------- Compiler and Linker Options --------------------------------

# Optimization Options
OPT_OPTS = $(DEFAULT_OPT_OPTS)

# General User Options
!if "$(DEBUG_BUILD)" == "0"
DBG_FLAG =
!else
#   Set OPT_OPTS=-Zi and any additional flags for debugging
DBG_FLAG = -Zi
!endif

!if "$(OPTIMIZATION_FLAGS)" != ""
CC_OPTS = $(OPTS) $(COMPILE_FLAGS_OTHER) $(OPTIMIZATION_FLAGS)
!else
CC_OPTS = $(OPTS) $(COMPILE_FLAGS_OTHER) $(OPT_OPTS) 
!endif

# Defines
CPP_REQ_DEFINES = -DMODEL=$(MODEL) -DNUMST=$(NUMST) -DNCSTATES=$(NCSTATES) \
		  -DMAT_FILE=$(MAT_FILE) -DINTEGER_CODE=$(INTEGER_CODE) \
		  -DONESTEPFCN=$(ONESTEPFCN) -DTERMFCN=$(TERMFCN) \
		  -DHAVESTDIO -DMULTI_INSTANCE_CODE=$(MULTI_INSTANCE_CODE) \
		  -DCLASSIC_INTERFACE=$(CLASSIC_INTERFACE) \
		  -DALLOCATIONFCN=$(ALLOCATIONFCN) \
		  $(DEFINES_CUSTOM) $(DEFINES_OTHER)

!if "$(MODELREF_TARGET_TYPE)" == "SIM"
!if "$(ENABLE_SLEXEC_SSBRIDGE)" != "0"
CPP_REQ_DEFINES = $(CPP_REQ_DEFINES) -DENABLE_SLEXEC_SSBRIDGE=$(ENABLE_SLEXEC_SSBRIDGE)
!endif
!else
CPP_REQ_DEFINES = $(CPP_REQ_DEFINES) -DMT=$(MULTITASKING)
!endif

CPP_REQ_DEFINES = $(CPP_REQ_DEFINES) -DMODEL_HAS_DYNAMICALLY_LOADED_SFCNS=$(MODEL_HAS_DYNAMICALLY_LOADED_SFCNS)

CVARSFLAG = $(cvarsdll)

CFLAGS = $(cflags) @$(COMPILER_COMMAND_FILE) $(CVARSFLAG) \
	 -D_CRT_SECURE_NO_WARNINGS $(DBG_FLAG) $(CC_OPTS) $(CPP_REQ_DEFINES) \
	 $(USER_INCLUDES)

CPPFLAGS = $(cflags) @$(COMPILER_COMMAND_FILE) $(CVARSFLAG) \
	   -EHs -D_CRT_SECURE_NO_WARNINGS $(DBG_FLAG) $(CPP_OPTS) $(CC_OPTS) \
	   $(CPP_REQ_DEFINES) $(USER_INCLUDES)

LDFLAGS = $(ldebug) $(conflags) $(conlibs) $(ADDITIONAL_LDFLAGS)

#----------------------------- Source Files -----------------------------------

ADD_SRCS =

SRCS = $(ADD_SRCS) $(MODULES) $(USER_SRCS)

USER_SRCS =


OBJS_CPP_UPPER = $(SRCS:.CPP=.obj)
OBJS_CPP_LOWER = $(OBJS_CPP_UPPER:.cpp=.obj)
OBJS_C_UPPER = $(OBJS_CPP_LOWER:.C=.obj)
OBJS = $(OBJS_C_UPPER:.c=.obj)

#-------------------------- Additional Libraries -------------------------------

LIBS = 

!if "$(OPT_OPTS)" == "$(DEFAULT_OPT_OPTS)"
!if $(INTEGER_CODE) == 0
!if "$(MODELREF_TARGET_TYPE)" == "SIM"
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\lib\ssc_sli_rtwsfcn_vcx64.lib
!else
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\lib\ssc_sli_ert_vcx64.lib
!endif
!else
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\lib\ssc_sli_int_ert_vcx64.lib
!endif
!else
LIBS = $(LIBS) ssc_sli.lib
!endif

!if "$(OPT_OPTS)" == "$(DEFAULT_OPT_OPTS)"
!if $(INTEGER_CODE) == 0
!if "$(MODELREF_TARGET_TYPE)" == "SIM"
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\ssc_core\lib\ssc_core_rtwsfcn_vcx64.lib
!else
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\ssc_core\lib\ssc_core_ert_vcx64.lib
!endif
!else
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\ssc_core\lib\ssc_core_int_ert_vcx64.lib
!endif
!else
LIBS = $(LIBS) ssc_core.lib
!endif

!if "$(OPT_OPTS)" == "$(DEFAULT_OPT_OPTS)"
!if $(INTEGER_CODE) == 0
!if "$(MODELREF_TARGET_TYPE)" == "SIM"
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\ssc_st\lib\ssc_st_rtwsfcn_vcx64.lib
!else
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\ssc_st\lib\ssc_st_ert_vcx64.lib
!endif
!else
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\ssc_st\lib\ssc_st_int_ert_vcx64.lib
!endif
!else
LIBS = $(LIBS) ssc_st.lib
!endif

!if "$(OPT_OPTS)" == "$(DEFAULT_OPT_OPTS)"
!if $(INTEGER_CODE) == 0
!if "$(MODELREF_TARGET_TYPE)" == "SIM"
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\mc\lib\mc_rtwsfcn_vcx64.lib
!else
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\mc\lib\mc_ert_vcx64.lib
!endif
!else
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\mc\lib\mc_int_ert_vcx64.lib
!endif
!else
LIBS = $(LIBS) mc.lib
!endif

!if "$(OPT_OPTS)" == "$(DEFAULT_OPT_OPTS)"
!if $(INTEGER_CODE) == 0
!if "$(MODELREF_TARGET_TYPE)" == "SIM"
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\ex\lib\ex_rtwsfcn_vcx64.lib
!else
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\ex\lib\ex_ert_vcx64.lib
!endif
!else
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\ex\lib\ex_int_ert_vcx64.lib
!endif
!else
LIBS = $(LIBS) ex.lib
!endif

!if "$(OPT_OPTS)" == "$(DEFAULT_OPT_OPTS)"
!if $(INTEGER_CODE) == 0
!if "$(MODELREF_TARGET_TYPE)" == "SIM"
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\pm\lib\pm_rtwsfcn_vcx64.lib
!else
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\pm\lib\pm_ert_vcx64.lib
!endif
!else
LIBS = $(LIBS) $(MATLAB_ROOT)\extern\physmod\win64\pm\lib\pm_int_ert_vcx64.lib
!endif
!else
LIBS = $(LIBS) pm.lib
!endif


LIBS = $(LIBS) $(S_FUNCTIONS_LIB)

#--------------------------------- Rules --------------------------------------
all: set_environment_variables $(PRODUCT)

!if "$(MODELREF_TARGET_TYPE)" == "NONE"
#--- Shared library target (.dll) ---
!if $(SHRLIBTARGET)==1
$(PRODUCT) : $(OBJS) $(LIBS) $(MODELREF_LINK_LIBS)
	@cmd /C "echo ### Linking ..."
	$(LD) $(LDFLAGS) $(LIBS) $(SYSTEM_LIBS) \
    @$(CMD_FILE) @$(MODELREF_LINK_RSPFILE) -dll -def:$(MODEL).def -out:$@
	@cmd /C "echo $(BUILD_SUCCESS) dynamically linked library  $(PRODUCT)"
!else
!if $(MAKEFILEBUILDER_TGT)==1
PREBUILT_SRCS  = $(MODULES)
PREBUILT_OBJS_CPP_UPPER = $(PREBUILT_SRCS:.CPP=.obj)
PREBUILT_OBJS_CPP_LOWER = $(PREBUILT_OBJS_CPP_UPPER:.cpp=.obj)
PREBUILT_OBJS_C_UPPER = $(PREBUILT_OBJS_CPP_LOWER:.C=.obj)
PREBUILT_OBJS = $(PREBUILT_OBJS_C_UPPER:.c=.obj)
$(PRODUCT) : $(PREBUILT_OBJS) $(OBJS) $(MODELLIB) $(LIBS) $(MODELREF_LINK_LIBS)
	@cmd /C "echo ### Linking ..."
	$(LD) $(LDFLAGS) $(MODELLIB) $(LIBS) $(PREBUILT_OBJS) @$(CMD_FILE) @$(MODELREF_LINK_RSPFILE) -out:$@
	@cmd /C "echo $(BUILD_SUCCESS) executable $(PRODUCT)"
!else
!if $(STANDALONE_SUPPRESS_EXE)==1
#  Build object code only for top level model
.PHONY: $(PRODUCT)
$(PRODUCT) : $(OBJS) $(LIBS)
	@cmd /C "echo $(BUILD_SUCCESS) object modules $(PRODUCT)"
!else
#--- Stand-alone model (.exe) ---
$(PRODUCT) : $(OBJS) $(LIBS) $(MODELREF_LINK_LIBS)
	@cmd /C "echo ### Linking ..."
	$(LD) $(LDFLAGS) $(LIBS) @$(CMD_FILE) @$(MODELREF_LINK_RSPFILE) $(SYSTEM_LIBS) -out:$@
	@cmd /C "echo $(BUILD_SUCCESS) executable $(PRODUCT)"
!endif
!endif
!endif
!else
#--- Library target ---
$(PRODUCT) : $(OBJS) 
	@cmd /C "echo ### Linking ..."
	$(LD) -lib /OUT:$(MODELLIB) @$(CMD_FILE)
	@cmd /C "echo  $(BUILD_SUCCESS) static library $(MODELLIB)"
!endif	


#-------------------------- Support for building modules ----------------------
{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\extern\physmod\win64\ssc_st\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\simulink\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\toolbox\simulink\blocks\src}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src\ext_mode\common}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\toolbox\coder\rtiostream\src\rtiostreamtcpip}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(MATLAB_ROOT)\toolbox\coder\rtiostream\src\utils}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

raccel_main.obj : $(MATLAB_ROOT)\rtw\c\raccel\raccel_main.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\rtw\c\raccel\raccel_main.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\raccel\raccel_main.c

raccel_sup.obj : $(MATLAB_ROOT)\rtw\c\raccel\raccel_sup.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\rtw\c\raccel\raccel_sup.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\raccel\raccel_sup.c

raccel_mat.obj : $(MATLAB_ROOT)\rtw\c\raccel\raccel_mat.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\rtw\c\raccel\raccel_mat.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\raccel\raccel_mat.c

simulink_solver_api.obj : $(MATLAB_ROOT)\simulink\include\simulink_solver_api.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\simulink\include\simulink_solver_api.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\simulink\include\simulink_solver_api.c

raccel_utils.obj : $(MATLAB_ROOT)\rtw\c\src\rapid\raccel_utils.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\rtw\c\src\rapid\raccel_utils.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\rapid\raccel_utils.c

slsa_sim_common_utils.obj : $(MATLAB_ROOT)\rtw\c\src\rapid\slsa_sim_common_utils.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\rtw\c\src\rapid\slsa_sim_common_utils.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\rapid\slsa_sim_common_utils.c

ext_svr.obj : $(MATLAB_ROOT)\rtw\c\src\ext_mode\common\ext_svr.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\rtw\c\src\ext_mode\common\ext_svr.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\ext_mode\common\ext_svr.c

updown.obj : $(MATLAB_ROOT)\rtw\c\src\ext_mode\common\updown.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\rtw\c\src\ext_mode\common\updown.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\ext_mode\common\updown.c

ext_work.obj : $(MATLAB_ROOT)\rtw\c\src\ext_mode\common\ext_work.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\rtw\c\src\ext_mode\common\ext_work.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\ext_mode\common\ext_work.c

rtiostream_interface.obj : $(MATLAB_ROOT)\rtw\c\src\ext_mode\common\rtiostream_interface.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\rtw\c\src\ext_mode\common\rtiostream_interface.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\rtw\c\src\ext_mode\common\rtiostream_interface.c

rtiostream_tcpip.obj : $(MATLAB_ROOT)\toolbox\coder\rtiostream\src\rtiostreamtcpip\rtiostream_tcpip.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\toolbox\coder\rtiostream\src\rtiostreamtcpip\rtiostream_tcpip.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\toolbox\coder\rtiostream\src\rtiostreamtcpip\rtiostream_tcpip.c

rtiostream_utils.obj : $(MATLAB_ROOT)\toolbox\coder\rtiostream\src\utils\rtiostream_utils.c
	@cmd /C "echo ### Compiling $(MATLAB_ROOT)\toolbox\coder\rtiostream\src\utils\rtiostream_utils.c
	$(CC) $(CFLAGS) $(MATLAB_ROOT)\toolbox\coder\rtiostream\src\utils\rtiostream_utils.c



{$(MATLAB_ROOT)\extern\physmod\win64\ex\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\extern\physmod\win64\mc\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\extern\physmod\win64\pm\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\extern\physmod\win64\ssc_core\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\extern\physmod\win64\ssc_sli\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\extern\physmod\win64\ssc_st\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\simulink\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\toolbox\simulink\blocks\src}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\rtw\c\src\ext_mode\common}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\toolbox\coder\rtiostream\src\rtiostreamtcpip}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

{$(MATLAB_ROOT)\toolbox\coder\rtiostream\src\utils}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<




# Put these rules last, otherwise nmake will check toolboxes first

{$(RELATIVE_PATH_TO_ANCHOR)}.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

{$(RELATIVE_PATH_TO_ANCHOR)}.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

.c.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CFLAGS) $<

.cpp.obj :
	@cmd /C "echo ### Compiling $<"
	$(CC) $(CPPFLAGS) $<

set_environment_variables:
	@set INCLUDE=$(INCLUDE)
	@set LIB=$(LIB)

# Libraries:



MODULES_ssc_sli = \
    ssc_sli_01dba599.obj \
    ssc_sli_0267402d.obj \
    ssc_sli_0763c151.obj \
    ssc_sli_0bd269e6.obj \
    ssc_sli_0d6d0780.obj \
    ssc_sli_136b443c.obj \
    ssc_sli_136f97a1.obj \
    ssc_sli_140b3534.obj \
    ssc_sli_15d5f6ce.obj \
    ssc_sli_1c690f90.obj \
    ssc_sli_1db813e8.obj \
    ssc_sli_256cd4b6.obj \
    ssc_sli_2bbd58a4.obj \
    ssc_sli_2f6ea1cd.obj \
    ssc_sli_360cfd63.obj \
    ssc_sli_37d957ac.obj \
    ssc_sli_3fb4607e.obj \
    ssc_sli_40d56d93.obj \
    ssc_sli_42b14021.obj \
    ssc_sli_43618287.obj \
    ssc_sli_466b08dd.obj \
    ssc_sli_496799bd.obj \
    ssc_sli_4e028390.obj \
    ssc_sli_550a4805.obj \
    ssc_sli_56b8ac8d.obj \
    ssc_sli_5a0cb974.obj \
    ssc_sli_5cb3d0df.obj \
    ssc_sli_5d63aeeb.obj \
    ssc_sli_62d81790.obj \
    ssc_sli_6305062f.obj \
    ssc_sli_65bed6fb.obj \
    ssc_sli_77063d8b.obj \
    ssc_sli_7a618260.obj \
    ssc_sli_7f65db03.obj \
    ssc_sli_880e593a.obj \
    ssc_sli_89d0f30a.obj \
    ssc_sli_8a64c4e2.obj \
    ssc_sli_93019ea6.obj \
    ssc_sli_9abcdb7f.obj \
    ssc_sli_9b67747c.obj \
    ssc_sli_9c030181.obj \
    ssc_sli_9dd1cff8.obj \
    ssc_sli_a1da431d.obj \
    ssc_sli_a4dfa663.obj \
    ssc_sli_c7dda239.obj \
    ssc_sli_d064c978.obj \
    ssc_sli_d3d59c3a.obj \
    ssc_sli_d80c44d2.obj \
    ssc_sli_dcd66f69.obj \
    ssc_sli_e66fe6d5.obj \
    ssc_sli_e7b327bb.obj \
    ssc_sli_eb0a5702.obj \
    ssc_sli_edbee55c.obj \
    ssc_sli_f6bd9cc8.obj \
    ssc_sli_f9b5dbc5.obj \
    ssc_sli_fa09e530.obj \
    ssc_sli_fa0ce53e.obj \
    ssc_sli_fbdf29da.obj \


ssc_sli.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_ssc_sli)
	@cmd /C "echo ### Creating $@"
	$(LIBCMD) /nologo /out:$@ $(MODULES_ssc_sli)
	@cmd /C "echo ### $@ Created"

MODULES_ssc_core = \
    ssc_core_01dcc633.obj \
    ssc_core_04da2c69.obj \
    ssc_core_05058dd9.obj \
    ssc_core_06ba68a6.obj \
    ssc_core_09b5fa6e.obj \
    ssc_core_0bd666aa.obj \
    ssc_core_0cb8a17f.obj \
    ssc_core_0d65be6c.obj \
    ssc_core_0f019bd9.obj \
    ssc_core_0f0420a6.obj \
    ssc_core_18bf4d77.obj \
    ssc_core_1c6b0332.obj \
    ssc_core_1fd25120.obj \
    ssc_core_24b4cdee.obj \
    ssc_core_280c0222.obj \
    ssc_core_2cd54448.obj \
    ssc_core_3169e4b7.obj \
    ssc_core_32d8b307.obj \
    ssc_core_3306c008.obj \
    ssc_core_360a4baf.obj \
    ssc_core_37d4ea84.obj \
    ssc_core_3e6774ce.obj \
    ssc_core_40db642d.obj \
    ssc_core_40dfdbdc.obj \
    ssc_core_41017299.obj \
    ssc_core_4666b45b.obj \
    ssc_core_48b1386a.obj \
    ssc_core_4ad9135b.obj \
    ssc_core_4db6bd68.obj \
    ssc_core_4db86fcc.obj \
    ssc_core_4e03e39d.obj \
    ssc_core_4e04eecd.obj \
    ssc_core_4e06e3bd.obj \
    ssc_core_54d55ae9.obj \
    ssc_core_5505224d.obj \
    ssc_core_550b4c41.obj \
    ssc_core_56b1a2bf.obj \
    ssc_core_576cd129.obj \
    ssc_core_59b034b8.obj \
    ssc_core_5a046b27.obj \
    ssc_core_5d6ba758.obj \
    ssc_core_67d1f118.obj \
    ssc_core_68da074b.obj \
    ssc_core_6b663a17.obj \
    ssc_core_6b6b89d2.obj \
    ssc_core_6dd833f3.obj \
    ssc_core_7209d3a5.obj \
    ssc_core_73d9c2b7.obj \
    ssc_core_76d825be.obj \
    ssc_core_770cead7.obj \
    ssc_core_7a613edb.obj \
    ssc_core_83db8762.obj \
    ssc_core_856738f2.obj \
    ssc_core_8569edc5.obj \
    ssc_core_89d7fa79.obj \
    ssc_core_8a6471dc.obj \
    ssc_core_8cd9cb37.obj \
    ssc_core_8d0064b8.obj \
    ssc_core_96061071.obj \
    ssc_core_990fe1a4.obj \
    ssc_core_9b607b15.obj \
    ssc_core_9b671e57.obj \
    ssc_core_9c016445.obj \
    ssc_core_9c01d168.obj \
    ssc_core_9dd110ad.obj \
    ssc_core_9fb0e229.obj \
    ssc_core_9fb25b4f.obj \
    ssc_core_9fb2e56c.obj \
    ssc_core_a1d393be.obj \
    ssc_core_a269ab09.obj \
    ssc_core_a4d4c45e.obj \
    ssc_core_a4da1d0a.obj \
    ssc_core_a6b78ccc.obj \
    ssc_core_a76299bc.obj \
    ssc_core_a867d880.obj \
    ssc_core_a9bbaecc.obj \
    ssc_core_a9bf1ff2.obj \
    ssc_core_aa09f23c.obj \
    ssc_core_abd05c18.obj \
    ssc_core_abd5e7b4.obj \
    ssc_core_acb64294.obj \
    ssc_core_acb6462e.obj \
    ssc_core_b1038cbb.obj \
    ssc_core_b10e34f4.obj \
    ssc_core_b2b3b239.obj \
    ssc_core_b369cd13.obj \
    ssc_core_b402b40d.obj \
    ssc_core_b7b88213.obj \
    ssc_core_b96ebc21.obj \
    ssc_core_bad68669.obj \
    ssc_core_bc648043.obj \
    ssc_core_bfdb08db.obj \
    ssc_core_c3003040.obj \
    ssc_core_c5b050d7.obj \
    ssc_core_c5b63cb2.obj \
    ssc_core_c607b660.obj \
    ssc_core_c8d83e88.obj \
    ssc_core_cab615c8.obj \
    ssc_core_cabdc251.obj \
    ssc_core_cc067f58.obj \
    ssc_core_cc0bcab0.obj \
    ssc_core_ce6a84bb.obj \
    ssc_core_d06d763c.obj \
    ssc_core_d3d34d7c.obj \
    ssc_core_d4b9397b.obj \
    ssc_core_d70a6a09.obj \
    ssc_core_d807fa59.obj \
    ssc_core_dcda6edd.obj \
    ssc_core_deb7fd8d.obj \
    ssc_core_e0d0866d.obj \
    ssc_core_e2b61d72.obj \
    ssc_core_e400c1c2.obj \
    ssc_core_ead8f455.obj \
    ssc_core_edb836de.obj \
    ssc_core_ee000fbe.obj \
    ssc_core_ee01086d.obj \
    ssc_core_f9b6dbed.obj \
    ssc_core_fa09e9e6.obj \
    ssc_core_fbd34e62.obj \
    ssc_core_ff06d9a4.obj \


ssc_core.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_ssc_core)
	@cmd /C "echo ### Creating $@"
	$(LIBCMD) /nologo /out:$@ $(MODULES_ssc_core)
	@cmd /C "echo ### $@ Created"

MODULES_ssc_st = \
    ssc_st_12be8102.obj \
    ssc_st_43603aca.obj \
    ssc_st_59ba8c5e.obj \
    ssc_st_65b906f8.obj \
    ssc_st_7a6183ce.obj \
    ssc_st_7f64b2fa.obj \
    ssc_st_870f70cf.obj \
    ssc_st_a3b260e9.obj \
    ssc_st_a7639c45.obj \
    ssc_st_a868d115.obj \
    ssc_st_d56af4a2.obj \
    ssc_st_d56c266e.obj \


ssc_st.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_ssc_st)
	@cmd /C "echo ### Creating $@"
	$(LIBCMD) /nologo /out:$@ $(MODULES_ssc_st)
	@cmd /C "echo ### $@ Created"

MODULES_mc = \
    mc_026e4f4b.obj \
    mc_03b98f6f.obj \
    mc_0764157d.obj \
    mc_0bd30dee.obj \
    mc_0d6fd085.obj \
    mc_0ed73c49.obj \
    mc_0edc34e3.obj \
    mc_10d4ab75.obj \
    mc_11086079.obj \
    mc_110e6c6c.obj \
    mc_1407e917.obj \
    mc_140e3c4c.obj \
    mc_15d12d95.obj \
    mc_15d828ca.obj \
    mc_220ba961.obj \
    mc_2565d6e0.obj \
    mc_2a642f54.obj \
    mc_2a6a9b24.obj \
    mc_2a6b417d.obj \
    mc_2bbf87e3.obj \
    mc_2cdc96b4.obj \
    mc_32d501e3.obj \
    mc_32dc008a.obj \
    mc_3b6a945d.obj \
    mc_3e66abdf.obj \
    mc_4105189f.obj \
    mc_47b8cebe.obj \
    mc_47b91db1.obj \
    mc_4b0301c6.obj \
    mc_4c6117e3.obj \
    mc_51d4094e.obj \
    mc_52623861.obj \
    mc_52688a58.obj \
    mc_53b1fc84.obj \
    mc_53b6fcf3.obj \
    mc_550847c3.obj \
    mc_5766048f.obj \
    mc_59b6e413.obj \
    mc_5bd2c9c1.obj \
    mc_5d65cd86.obj \
    mc_5edd42ef.obj \
    mc_630208f8.obj \
    mc_630dda0e.obj \
    mc_67da200d.obj \
    mc_67da4f41.obj \
    mc_6b6d311a.obj \
    mc_6e61d16c.obj \
    mc_6fb1c336.obj \
    mc_7207b6f4.obj \
    mc_7809a65c.obj \
    mc_7a613aec.obj \
    mc_7bbf41f0.obj \
    mc_7cd58f0b.obj \
    mc_7cdbe436.obj \
    mc_7d0547c8.obj \
    mc_7d099de7.obj \
    mc_7eb21b39.obj \
    mc_81b0ada5.obj \
    mc_81b5717e.obj \
    mc_84b5f9fb.obj \
    mc_870ec75e.obj \
    mc_89d597cf.obj \
    mc_90b6aa0a.obj \
    mc_95b62b73.obj \
    mc_9ab7d9b0.obj \
    mc_9b6376d1.obj \
    mc_9b6c1529.obj \
    mc_a00e5f46.obj \
    mc_a2647600.obj \
    mc_a26bab1a.obj \
    mc_a3b90582.obj \
    mc_a6b5ed24.obj \
    mc_a7684938.obj \
    mc_a865d1dd.obj \
    mc_acb3fad7.obj \
    mc_af0bc203.obj \
    mc_af0cc4c9.obj \
    mc_b0de9cbc.obj \
    mc_b2b86ae3.obj \
    mc_b362c5eb.obj \
    mc_b7b03d44.obj \
    mc_b96a0bad.obj \
    mc_bb0520ee.obj \
    mc_bdbb9b78.obj \
    mc_c2dbf4b2.obj \
    mc_c7de7352.obj \
    mc_c8d25d23.obj \
    mc_cab8a1f9.obj \
    mc_ce6656ce.obj \
    mc_d20085b7.obj \
    mc_d9d38185.obj \
    mc_dbbb14d2.obj \
    mc_dcdddfae.obj \
    mc_debb448f.obj \
    mc_e7b99cf6.obj \
    mc_e7bc2f1a.obj \
    mc_e9661c4a.obj \
    mc_e969ae87.obj \
    mc_edbf543c.obj \
    mc_ee000fbe.obj \
    mc_efdea3a7.obj \
    mc_f0012953.obj \
    mc_f00d2f9b.obj \
    mc_f3be157c.obj \
    mc_fbd54145.obj \
    mc_fcb15a9b.obj \
    mc_fd619d14.obj \
    mc_fd6341bb.obj \


mc.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_mc)
	@cmd /C "echo ### Creating $@"
	$(LIBCMD) /nologo /out:$@ $(MODULES_mc)
	@cmd /C "echo ### $@ Created"

MODULES_ex = \
    ex_04d5441d.obj \
    ex_06bcd123.obj \
    ex_136645f8.obj \
    ex_17bc61ac.obj \
    ex_18b4440a.obj \
    ex_2bb3e2ac.obj \
    ex_2cdf97d7.obj \
    ex_2ebcd5b2.obj \
    ex_316a81de.obj \
    ex_316a8f13.obj \
    ex_36012fa7.obj \
    ex_40d5be33.obj \
    ex_440d4aba.obj \
    ex_45d28653.obj \
    ex_47b11894.obj \
    ex_47b17260.obj \
    ex_50027bf1.obj \
    ex_53bcffa7.obj \
    ex_57660158.obj \
    ex_60b4e4f8.obj \
    ex_690b7cd0.obj \
    ex_6dd531e9.obj \
    ex_6dd8e72d.obj \
    ex_76dd91b2.obj \
    ex_79d100f1.obj \
    ex_7cd25341.obj \
    ex_7d002618.obj \
    ex_81be18a2.obj \
    ex_8a6fc761.obj \
    ex_8ebb89cc.obj \
    ex_98d223a6.obj \
    ex_a1dafa44.obj \
    ex_acbcf277.obj \
    ex_aed5de1e.obj \
    ex_b2b40ad5.obj \
    ex_bb0efd4b.obj \
    ex_c9069dae.obj \
    ex_d9d686a8.obj \
    ex_debffef2.obj \
    ex_e10a4cd8.obj \
    ex_e40d74b8.obj \
    ex_eb0d559b.obj \
    ex_f26168b3.obj \
    ex_f6bb4c2d.obj \
    ex_f7688368.obj \
    ex_f866102d.obj \
    ex_f9b702ea.obj \


ex.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_ex)
	@cmd /C "echo ### Creating $@"
	$(LIBCMD) /nologo /out:$@ $(MODULES_ex)
	@cmd /C "echo ### $@ Created"

MODULES_pm = \
    pm_09bc42e2.obj \
    pm_14098e54.obj \
    pm_26dc3230.obj \
    pm_4fd5f5b9.obj \
    pm_9dd7a82d.obj \
    pm_fed8c2c9.obj \


pm.lib : rtw_proj.tmw $(MAKEFILE) $(MODULES_pm)
	@cmd /C "echo ### Creating $@"
	$(LIBCMD) /nologo /out:$@ $(MODULES_pm)
	@cmd /C "echo ### $@ Created"




#----------------------------- Dependencies -----------------------------------

$(OBJS) : $(MAKEFILE) rtw_proj.tmw
