
if(CONFIG_ANYANY_ENABLED)
    list(APPEND ADD_REQUIREMENTS anyany)
endif()
if(CONFIG_BACKWARD_CPP_ENABLED)
    list(APPEND ADD_REQUIREMENTS Backward_cpp)
endif()
if(CONFIG_CIMG_COMPONENT_ENABLED)
    list(APPEND ADD_REQUIREMENTS Cimg)
endif()
if(CONFIG_COMPONENT1_ENABLED)
    list(APPEND ADD_REQUIREMENTS component1)
endif()
if(CONFIG_CPPSTATE_ENABLED)
    list(APPEND ADD_REQUIREMENTS cppstate)
endif()
if(CONFIG_DEVICE_DRIVER_ENABLED)
    list(APPEND ADD_REQUIREMENTS DeviceDriver)
endif()
if(CONFIG_EVENTPP_ENABLED)
    list(APPEND ADD_REQUIREMENTS eventpp)
endif()
if(CONFIG_GEAR_LIBS_ENABLED)
    list(APPEND ADD_REQUIREMENTS gear_libs)
endif()
if(CONFIG_LHV_ENABLED)
    list(APPEND ADD_REQUIREMENTS hv)
endif()
if(CONFIG_LVGL_COMPONENT_ENABLED)
    list(APPEND ADD_REQUIREMENTS lvgl_component)
endif()
if(CONFIG_MINICV2_COMPONENT_ENABLED)
    list(APPEND ADD_REQUIREMENTS minicv2)
endif()
if(CONFIG_MONGOOSE_ENABLED)
    list(APPEND ADD_REQUIREMENTS mongoose)
endif()
if(CONFIG_NANOJPEG_ENABLED)
    list(APPEND ADD_REQUIREMENTS nanojpeg)
endif()
if(CONFIG_NANO_LOG_ENABLED)
    list(APPEND ADD_REQUIREMENTS nanolog)
endif()
if(CONFIG_NANOMSG_ENABLED)
    list(APPEND ADD_REQUIREMENTS nanomsg)
endif()
if(CONFIG_NNG_ENABLED)
    list(APPEND ADD_REQUIREMENTS nng)
endif()
if(CONFIG_SIMPLEINI_ENABLED)
    list(APPEND ADD_REQUIREMENTS simpleini)
endif()
if(CONFIG_SINGLE_HEADER_LIBS_ENABLED)
    list(APPEND ADD_REQUIREMENTS single_header_libs)
endif()
if(CONFIG_STB_ENABLED)
    list(APPEND ADD_REQUIREMENTS stb)
endif()
if(CONFIG_TBOX_ENABLED)
    list(APPEND ADD_REQUIREMENTS tbox)
endif()
if(CONFIG_TIMERCPP_ENABLED)
    list(APPEND ADD_REQUIREMENTS timercpp)
endif()
if(CONFIG_TINY_JPEG_ENABLED)
    list(APPEND ADD_REQUIREMENTS tinyjpeg)
endif()
if(CONFIG_TOOLKIT_ENABLED)
    list(APPEND ADD_REQUIREMENTS toolkit)
endif()
if(CONFIG_U8G2_COMPONENT_ENABLED)
    list(APPEND ADD_REQUIREMENTS u8g2_component)
endif()
if(CONFIG_UTILITIES_ENABLED)
    list(APPEND ADD_REQUIREMENTS utilities)
endif()
if(CONFIG_SOEM_ENABLED)
    list(APPEND ADD_REQUIREMENTS SOEM)
endif()
if(CONFIG_C_PERIPHERY_COMPONENT_ENABLED)
    list(APPEND ADD_REQUIREMENTS c_periphery)
endif()

