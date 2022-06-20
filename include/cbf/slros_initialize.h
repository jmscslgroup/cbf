#ifndef _SLROS_INITIALIZE_H_
#define _SLROS_INITIALIZE_H_

#include "slros_busmsg_conversion.h"
#include "slros_generic.h"
#include "cbf_types.h"

extern ros::NodeHandle * SLROSNodePtr;
extern const std::string SLROSNodeName;

// For Block cbf/Subscribe
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_cbf_std_msgs_Float64> Sub_cbf_546;

// For Block cbf/Subscribe4
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_cbf_geometry_msgs_Twist> Sub_cbf_547;

// For Block cbf/Subscribe5
extern SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_cbf_geometry_msgs_Twist> Sub_cbf_548;

// For Block cbf/Subscribe6
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_cbf_std_msgs_Float64> Sub_cbf_549;

// For Block cbf/Subscribe7
extern SimulinkSubscriber<std_msgs::Bool, SL_Bus_cbf_std_msgs_Bool> Sub_cbf_550;

// For Block cbf/Subscribe8
extern SimulinkSubscriber<std_msgs::Float64, SL_Bus_cbf_std_msgs_Float64> Sub_cbf_551;

// For Block cbf/Publish1
extern SimulinkPublisher<std_msgs::Float64, SL_Bus_cbf_std_msgs_Float64> Pub_cbf_543;

// For Block cbf/Publish2
extern SimulinkPublisher<geometry_msgs::Twist, SL_Bus_cbf_geometry_msgs_Twist> Pub_cbf_544;

// For Block cbf/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_540;

// For Block cbf/cbf_filter/Get Parameter1
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_567;

// For Block cbf/cbf_filter/Get Parameter2
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_568;

// For Block cbf/cbf_filter/Get Parameter3
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_569;

// For Block cbf/cbf_filter/Get Parameter4
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_570;

// For Block cbf/cbf_filter/Get Parameter5
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_571;

// For Block cbf/cbf_filter/Get Parameter6
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_572;

// For Block cbf/cbf_filter/Get Parameter7
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_573;

// For Block cbf/cbf_filter/Get Parameter8
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_574;

// For Block cbf/cbf_filter/Get Parameter9
extern SimulinkParameterGetter<real64_T, double> ParamGet_cbf_575;

void slros_node_init(int argc, char** argv);

#endif
