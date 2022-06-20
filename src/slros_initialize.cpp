#include "slros_initialize.h"

ros::NodeHandle * SLROSNodePtr;
const std::string SLROSNodeName = "cbf";

// For Block cbf/Subscribe
SimulinkSubscriber<std_msgs::Float64, SL_Bus_cbf_std_msgs_Float64> Sub_cbf_546;

// For Block cbf/Subscribe4
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_cbf_geometry_msgs_Twist> Sub_cbf_547;

// For Block cbf/Subscribe5
SimulinkSubscriber<geometry_msgs::Twist, SL_Bus_cbf_geometry_msgs_Twist> Sub_cbf_548;

// For Block cbf/Subscribe6
SimulinkSubscriber<std_msgs::Float64, SL_Bus_cbf_std_msgs_Float64> Sub_cbf_549;

// For Block cbf/Subscribe7
SimulinkSubscriber<std_msgs::Bool, SL_Bus_cbf_std_msgs_Bool> Sub_cbf_550;

// For Block cbf/Subscribe8
SimulinkSubscriber<std_msgs::Float64, SL_Bus_cbf_std_msgs_Float64> Sub_cbf_551;

// For Block cbf/Publish1
SimulinkPublisher<std_msgs::Float64, SL_Bus_cbf_std_msgs_Float64> Pub_cbf_543;

// For Block cbf/Publish2
SimulinkPublisher<geometry_msgs::Twist, SL_Bus_cbf_geometry_msgs_Twist> Pub_cbf_544;

// For Block cbf/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_540;

// For Block cbf/cbf_filter/Get Parameter1
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_567;

// For Block cbf/cbf_filter/Get Parameter2
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_568;

// For Block cbf/cbf_filter/Get Parameter3
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_569;

// For Block cbf/cbf_filter/Get Parameter4
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_570;

// For Block cbf/cbf_filter/Get Parameter5
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_571;

// For Block cbf/cbf_filter/Get Parameter6
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_572;

// For Block cbf/cbf_filter/Get Parameter7
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_573;

// For Block cbf/cbf_filter/Get Parameter8
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_574;

// For Block cbf/cbf_filter/Get Parameter9
SimulinkParameterGetter<real64_T, double> ParamGet_cbf_575;

void slros_node_init(int argc, char** argv)
{
  ros::init(argc, argv, SLROSNodeName);
  SLROSNodePtr = new ros::NodeHandle();
}

