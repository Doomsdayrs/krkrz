# Debug option list
making. 
Will be listed sequentially.

### TVP\_TEXT\_READ\_ANSI\_MBCS
Read text as Shift_JIS.
The default is undefined and loaded as UTF-8.

### TVP\_TOUCH\_DISABLE
Set Window.enableTouch to false.
The default is true in an environment where touch devices are not defined and multi-touch is enabled.

### TVP_START_UP_SCRIPT_NAME
Specify the initial load script name.
The default is undefined and loads startup.tjs.

### TJS\_64BIT\_OS
It is used internally to determine whether it is a 64-bit environment.

### ENABLE_DEBUGGER
Specify whether to have the debugging function.
Enable and build when debugging with a debugger.

    // below
    TJS_TEXT_OUT_CRLF
    TJS_SUPPORT_VCL
    TJS_HOST_IS_BIG_ENDIAN
    TJS_DEBUG_DUMP_STRING
    TJS_DEBUG_TRACE
    TJS_DEBUG_PROFILE_TIMETJS_DEBUG_UNRELEASED_STRING
    TJS_DEBUG_CHECK_STRING_HEAP_INTEGRITY
    TJS_DEBUG_CHECK_STRING_HEAP_INTEGRITY
    TJS_HS_DEBUG_CHAIN
    TJS_STRICT_ERROR_CODE_CHECK
    TJS_NO_REGEXP
    TJS_VS_USE_SYSTEM_NEW
    TJS_NO_CONSTANT_FOLDING
    TJS_NO_MASK_MATHERR
    TJS_WITH_IS_NOT_RESERVED_WORD
    TVP_ENABLE_EXECUTE_AT_EXCEPTION
    TVP_NO_CHECK_WIDE_CHAR_SIZE
    TVP_SUPPORT_KPI
    TVP_SUPPORT_OLD_WAVEUNPACKER
    TVP_REPORT_HW_EXCEPTION
    TVP_DISABLE_SELECT_XP3_OR_FOLDER
    TVP_IGNORE_LOAD_TPM_PLUGIN
    TVP_LOG_TO_COMMANDLINE_CONSOLE
    TVP_IN_LOOP_TUNER
    TVP_IN_PLUGIN_STUB
    TVP_FORCE_BILINEAR
    TVP_TRANS_SHOW_FPS
    
    // Valid for the following release builds
    TJS_TEXT_OUT_CRLF
    TJS_JP_LOCALIZED
    TJS_DEBUG_DUMP_STRING
    TVP_LOG_TO_COMMANDLINE_CONSOLE
    DISABLE_EMBEDDED_GAME_PAD
    TVP_REPORT_HW_EXCEPTION
    TVP_ENABLE_EXECUTE_AT_EXCEPTION
