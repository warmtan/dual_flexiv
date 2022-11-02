// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexiv_msgs:msg/CartesianVelocity.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__TRAITS_HPP_
#define FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__TRAITS_HPP_

#include "flexiv_msgs/msg/detail/cartesian_velocity__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'linear'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'angular'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<flexiv_msgs::msg::CartesianVelocity>()
{
  return "flexiv_msgs::msg::CartesianVelocity";
}

template<>
inline const char * name<flexiv_msgs::msg::CartesianVelocity>()
{
  return "flexiv_msgs/msg/CartesianVelocity";
}

template<>
struct has_fixed_size<flexiv_msgs::msg::CartesianVelocity>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct has_bounded_size<flexiv_msgs::msg::CartesianVelocity>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Quaternion>::value> {};

template<>
struct is_message<flexiv_msgs::msg::CartesianVelocity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__TRAITS_HPP_
