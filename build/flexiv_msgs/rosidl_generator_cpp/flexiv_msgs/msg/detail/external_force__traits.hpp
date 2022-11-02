// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from flexiv_msgs:msg/ExternalForce.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__EXTERNAL_FORCE__TRAITS_HPP_
#define FLEXIV_MSGS__MSG__DETAIL__EXTERNAL_FORCE__TRAITS_HPP_

#include "flexiv_msgs/msg/detail/external_force__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'force'
// Member 'moment'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<flexiv_msgs::msg::ExternalForce>()
{
  return "flexiv_msgs::msg::ExternalForce";
}

template<>
inline const char * name<flexiv_msgs::msg::ExternalForce>()
{
  return "flexiv_msgs/msg/ExternalForce";
}

template<>
struct has_fixed_size<flexiv_msgs::msg::ExternalForce>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<flexiv_msgs::msg::ExternalForce>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<flexiv_msgs::msg::ExternalForce>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // FLEXIV_MSGS__MSG__DETAIL__EXTERNAL_FORCE__TRAITS_HPP_
