# SPDX-FileCopyrightText: 2023 Istituto Italiano di Tecnologia (IIT)
# SPDX-License-Identifier: BSD-3-Clause

yarp_prepare_plugin(rgbdSensor_nws_ros2
  CATEGORY device
  TYPE RgbdSensor_nws_ros2
  INCLUDE RgbdSensor_nws_ros2.h
  EXTRA_CONFIG WRAPPER=rgbdSensor_nws_ros2
  INTERNAL ON
)

if(NOT SKIP_rgbdSensor_nws_ros2)
  yarp_add_plugin(yarp_rgbdSensor_nws_ros2)
  generateDeviceParamsParser(RgbdSensor_nws_ros2 rgbdSensor_nws_ros2)

  target_sources(yarp_rgbdSensor_nws_ros2
    PRIVATE
      RgbdSensor_nws_ros2.cpp
      RgbdSensor_nws_ros2.h
      RgbdSensor_nws_ros2_ParamsParser.h
      RgbdSensor_nws_ros2_ParamsParser.cpp
  )
  target_sources(yarp_rgbdSensor_nws_ros2 PRIVATE $<TARGET_OBJECTS:Ros2Utils>)

  target_include_directories(yarp_rgbdSensor_nws_ros2 PRIVATE $<TARGET_PROPERTY:Ros2Utils,INTERFACE_INCLUDE_DIRECTORIES>)

  target_link_libraries(yarp_rgbdSensor_nws_ros2
    PRIVATE
      YARP::YARP_os
      YARP::YARP_sig
      YARP::YARP_dev
      rclcpp::rclcpp
      sensor_msgs::sensor_msgs__rosidl_typesupport_cpp
      Ros2Utils
  )

  yarp_install(
    TARGETS yarp_rgbdSensor_nws_ros2
    EXPORT yarp-device-rgbdSensor_nws_ros2
    COMPONENT yarp-device-rgbdSensor_nws_ros2
    LIBRARY DESTINATION ${YARP_DYNAMIC_PLUGINS_INSTALL_DIR}
    ARCHIVE DESTINATION ${YARP_STATIC_PLUGINS_INSTALL_DIR}
    YARP_INI DESTINATION ${YARP_PLUGIN_MANIFESTS_INSTALL_DIR}
  )

  set_property(TARGET yarp_rgbdSensor_nws_ros2 PROPERTY FOLDER "Plugins/Device")

  if(YARP_COMPILE_TESTS)
    add_subdirectory(tests)
  endif()
endif()
