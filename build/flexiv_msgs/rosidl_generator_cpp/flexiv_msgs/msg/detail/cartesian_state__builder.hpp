// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from flexiv_msgs:msg/CartesianState.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_STATE__BUILDER_HPP_
#define FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_STATE__BUILDER_HPP_

#include "flexiv_msgs/msg/detail/cartesian_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace flexiv_msgs
{

namespace msg
{

namespace builder
{

class Init_CartesianState_orientation
{
public:
  explicit Init_CartesianState_orientation(::flexiv_msgs::msg::CartesianState & msg)
  : msg_(msg)
  {}
  ::flexiv_msgs::msg::CartesianState orientation(::flexiv_msgs::msg::CartesianState::_orientation_type arg)
  {
    msg_.orientation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::flexiv_msgs::msg::CartesianState msg_;
};

class Init_CartesianState_position
{
public:
  Init_CartesianState_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CartesianState_orientation position(::flexiv_msgs::msg::CartesianState::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_CartesianState_orientation(msg_);
  }

private:
  ::flexiv_msgs::msg::CartesianState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::flexiv_msgs::msg::CartesianState>()
{
  return flexiv_msgs::msg::builder::Init_CartesianState_position();
}

}  // namespace flexiv_msgs

#endif  // FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_STATE__BUILDER_HPP_
