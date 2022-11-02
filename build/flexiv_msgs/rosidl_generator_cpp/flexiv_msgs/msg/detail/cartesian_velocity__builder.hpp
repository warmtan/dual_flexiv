// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexiv_msgs:msg/CartesianVelocity.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__BUILDER_HPP_
#define FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__BUILDER_HPP_

#include "flexiv_msgs/msg/detail/cartesian_velocity__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace flexiv_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianVelocity_angular
{
public:
  explicit Init_CartesianVelocity_angular(::flexiv_msgs::msg::CartesianVelocity & msg)
  : msg_(msg)
  {}
  ::flexiv_msgs::msg::CartesianVelocity angular(::flexiv_msgs::msg::CartesianVelocity::_angular_type arg)
  {
    msg_.angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexiv_msgs::msg::CartesianVelocity msg_;
};

class Init_CartesianVelocity_linear
{
public:
  Init_CartesianVelocity_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianVelocity_angular linear(::flexiv_msgs::msg::CartesianVelocity::_linear_type arg)
  {
    msg_.linear = std::move(arg);
    return Init_CartesianVelocity_angular(msg_);
  }

private:
  ::flexiv_msgs::msg::CartesianVelocity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexiv_msgs::msg::CartesianVelocity>()
{
  return flexiv_msgs::msg::builder::Init_CartesianVelocity_linear();
}

}  // namespace flexiv_msgs

#endif  // FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__BUILDER_HPP_
