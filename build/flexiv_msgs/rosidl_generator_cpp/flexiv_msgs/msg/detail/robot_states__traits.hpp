// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexiv_msgs:msg/RobotStates.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__ROBOT_STATES__TRAITS_HPP_
#define FLEXIV_MSGS__MSG__DETAIL__ROBOT_STATES__TRAITS_HPP_

#include "flexiv_msgs/msg/detail/robot_states__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'tcp_pose'
// Member 'tcp_pose_des'
// Member 'cam_pose'
// Member 'flange_pose'
// Member 'end_link_pose'
#include "flexiv_msgs/msg/detail/cartesian_state__traits.hpp"
// Member 'tcp_vel'
#include "flexiv_msgs/msg/detail/cartesian_velocity__traits.hpp"
// Member 'ext_force_tcp_frame'
// Member 'ext_force_base_frame'
#include "flexiv_msgs/msg/detail/external_force__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<flexiv_msgs::msg::RobotStates>()
{
  return "flexiv_msgs::msg::RobotStates";
}

template<>
inline const char * name<flexiv_msgs::msg::RobotStates>()
{
  return "flexiv_msgs/msg/RobotStates";
}

template<>
struct has_fixed_size<flexiv_msgs::msg::RobotStates>
  : std::integral_constant<bool, has_fixed_size<flexiv_msgs::msg::CartesianState>::value && has_fixed_size<flexiv_msgs::msg::CartesianVelocity>::value && has_fixed_size<flexiv_msgs::msg::ExternalForce>::value> {};

template<>
struct has_bounded_size<flexiv_msgs::msg::RobotStates>
  : std::integral_constant<bool, has_bounded_size<flexiv_msgs::msg::CartesianState>::value && has_bounded_size<flexiv_msgs::msg::CartesianVelocity>::value && has_bounded_size<flexiv_msgs::msg::ExternalForce>::value> {};

template<>
struct is_message<flexiv_msgs::msg::RobotStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEXIV_MSGS__MSG__DETAIL__ROBOT_STATES__TRAITS_HPP_
