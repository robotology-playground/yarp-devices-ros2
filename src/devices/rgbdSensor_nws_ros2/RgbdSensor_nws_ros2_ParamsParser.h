/*
 * SPDX-FileCopyrightText: 2023-2023 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */


// Generated by yarpDeviceParamParserGenerator (1.0)
// This is an automatically generated file. Please do not edit it.
// It will be re-generated if the cmake flag ALLOW_DEVICE_PARAM_PARSER_GERNERATION is ON.

// Generated on: Mon Sep  2 10:47:31 2024


#ifndef RGBDSENSOR_NWS_ROS2_PARAMSPARSER_H
#define RGBDSENSOR_NWS_ROS2_PARAMSPARSER_H

#include <yarp/os/Searchable.h>
#include <yarp/dev/IDeviceDriverParams.h>
#include <string>
#include <cmath>

/**
* This class is the parameters parser for class RgbdSensor_nws_ros2.
*
* These are the used parameters:
* | Group name | Parameter name   | Type   | Units | Default Value | Required | Description                                                               | Notes                         |
* |:----------:|:----------------:|:------:|:-----:|:-------------:|:--------:|:-------------------------------------------------------------------------:|:-----------------------------:|
* | -          | period           | double | s     | 0.02          | 0        | refresh period of the broadcasted values in s                             | -                             |
* | -          | node_name        | string | -     | -             | 1        | name of the ros2 node                                                     | -                             |
* | -          | color_topic_name | string | -     | -             | 1        | ros rgb topic (it's also the base name for the rgb camera_info topic)     | must start with a leading '/' |
* | -          | depth_topic_name | string | -     | -             | 1        | ros depth topic (it's also the base name for the depth camera_info topic) | must start with a leading '/' |
* | -          | force_info_synch | int    | -     | 0             | 0        | if 1, it forces synching images time stamp with and cameras time stamp    | -                             |
* | -          | depth_frame_id   | string | -     | -             | 1        | The depth image frame                                                     | -                             |
* | -          | color_frame_id   | string | -     | -             | 1        | The color image frame                                                     | -                             |
*
* The device can be launched by yarpdev using one of the following examples (with and without all optional parameters):
* \code{.unparsed}
* yarpdev --device rgbdSensor_nws_ros2 --period 0.02 --node_name <mandatory_value> --color_topic_name <mandatory_value> --depth_topic_name <mandatory_value> --force_info_synch 0 --depth_frame_id <mandatory_value> --color_frame_id <mandatory_value>
* \endcode
*
* \code{.unparsed}
* yarpdev --device rgbdSensor_nws_ros2 --node_name <mandatory_value> --color_topic_name <mandatory_value> --depth_topic_name <mandatory_value> --depth_frame_id <mandatory_value> --color_frame_id <mandatory_value>
* \endcode
*
*/

class RgbdSensor_nws_ros2_ParamsParser : public yarp::dev::IDeviceDriverParams
{
public:
    RgbdSensor_nws_ros2_ParamsParser();
    ~RgbdSensor_nws_ros2_ParamsParser() override = default;

public:
    const std::string m_device_classname = {"RgbdSensor_nws_ros2"};
    const std::string m_device_name = {"rgbdSensor_nws_ros2"};
    bool m_parser_is_strict = false;
    struct parser_version_type
    {
         int major = 1;
         int minor = 0;
    };
    const parser_version_type m_parser_version = {};

    const std::string m_period_defaultValue = {"0.02"};
    const std::string m_node_name_defaultValue = {""};
    const std::string m_color_topic_name_defaultValue = {""};
    const std::string m_depth_topic_name_defaultValue = {""};
    const std::string m_force_info_synch_defaultValue = {"0"};
    const std::string m_depth_frame_id_defaultValue = {""};
    const std::string m_color_frame_id_defaultValue = {""};

    double m_period = {0.02};
    std::string m_node_name = {}; //This default value is autogenerated. It is highly recommended to provide a suggested value also for mandatory parameters.
    std::string m_color_topic_name = {}; //This default value is autogenerated. It is highly recommended to provide a suggested value also for mandatory parameters.
    std::string m_depth_topic_name = {}; //This default value is autogenerated. It is highly recommended to provide a suggested value also for mandatory parameters.
    int m_force_info_synch = {0};
    std::string m_depth_frame_id = {}; //This default value is autogenerated. It is highly recommended to provide a suggested value also for mandatory parameters.
    std::string m_color_frame_id = {}; //This default value is autogenerated. It is highly recommended to provide a suggested value also for mandatory parameters.

    bool          parseParams(const yarp::os::Searchable & config) override;
    std::string   getDeviceClassName() const override { return m_device_classname; }
    std::string   getDeviceName() const override { return m_device_name; }
    std::string   getDocumentationOfDeviceParams() const override;
    std::vector<std::string> getListOfParams() const override;
};

#endif
