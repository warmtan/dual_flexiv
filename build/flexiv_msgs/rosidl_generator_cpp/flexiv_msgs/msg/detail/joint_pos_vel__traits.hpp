// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexiv_msgs:msg/JointPosVel.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__JOINT_POS_VEL__TRAITS_HPP_
#define FLEXIV_MSGS__MSG__DETAIL__JOINT_POS_VEL__TRAITS_HPP_

#include "flexiv_msgs/msg/detail/joint_pos_vel__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<flexiv_msgs::msg::JointPosVel>()
{
  return "flexiv_msgs::msg::JointPosVel";
}

template<>
inline const char * name<flexiv_msgs::msg::JointPosVel>()
{
  return "flexiv_msgs/msg/JointPosVel";
}

template<>
struct has_fixed_size<flexiv_msgs::msg::JointPosVel>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<flexiv_msgs::msg::JointPosVel>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<flexiv_msgs::msg::JointPosVel>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEXIV_MSGS__MSG__DETAIL__JOINT_POS_VEL__TRAITS_HPP_
