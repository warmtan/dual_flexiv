// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexiv_msgs:msg/ExternalForce.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__EXTERNAL_FORCE__BUILDER_HPP_
#define FLEXIV_MSGS__MSG__DETAIL__EXTERNAL_FORCE__BUILDER_HPP_

#include "flexiv_msgs/msg/detail/external_force__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace flexiv_msgs
{

namespace msg
{

namespace builder
{

class Init_ExternalForce_moment
{
public:
  explicit Init_ExternalForce_moment(::flexiv_msgs::msg::ExternalForce & msg)
  : msg_(msg)
  {}
  ::flexiv_msgs::msg::ExternalForce moment(::flexiv_msgs::msg::ExternalForce::_moment_type arg)
  {
    msg_.moment = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexiv_msgs::msg::ExternalForce msg_;
};

class Init_ExternalForce_force
{
public:
  Init_ExternalForce_force()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ExternalForce_moment force(::flexiv_msgs::msg::ExternalForce::_force_type arg)
  {
    msg_.force = std::move(arg);
    return Init_ExternalForce_moment(msg_);
  }

private:
  ::flexiv_msgs::msg::ExternalForce msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexiv_msgs::msg::ExternalForce>()
{
  return flexiv_msgs::msg::builder::Init_ExternalForce_force();
}

}  // namespace flexiv_msgs

#endif  // FLEXIV_MSGS__MSG__DETAIL__EXTERNAL_FORCE__BUILDER_HPP_
