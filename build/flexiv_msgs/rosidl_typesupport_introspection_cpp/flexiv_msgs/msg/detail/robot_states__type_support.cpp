// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from flexiv_msgs:msg/RobotStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "flexiv_msgs/msg/detail/robot_states__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace flexiv_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void RobotStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexiv_msgs::msg::RobotStates(_init);
}

void RobotStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexiv_msgs::msg::RobotStates *>(message_memory);
  typed_message->~RobotStates();
}

size_t size_function__RobotStates__q(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__RobotStates__q(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotStates__q(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

size_t size_function__RobotStates__theta(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__RobotStates__theta(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotStates__theta(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

size_t size_function__RobotStates__dq(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__RobotStates__dq(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotStates__dq(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

size_t size_function__RobotStates__dtheta(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__RobotStates__dtheta(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotStates__dtheta(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

size_t size_function__RobotStates__tau(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__RobotStates__tau(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotStates__tau(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

size_t size_function__RobotStates__tau_des(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__RobotStates__tau_des(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotStates__tau_des(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

size_t size_function__RobotStates__tau_dot(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__RobotStates__tau_dot(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotStates__tau_dot(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

size_t size_function__RobotStates__tau_ext(const void * untyped_member)
{
  (void)untyped_member;
  return 7;
}

const void * get_const_function__RobotStates__tau_ext(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 7> *>(untyped_member);
  return &member[index];
}

void * get_function__RobotStates__tau_ext(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 7> *>(untyped_member);
  return &member[index];
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember RobotStates_message_member_array[16] = {
  {
    "q",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, q),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotStates__q,  // size() function pointer
    get_const_function__RobotStates__q,  // get_const(index) function pointer
    get_function__RobotStates__q,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "theta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, theta),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotStates__theta,  // size() function pointer
    get_const_function__RobotStates__theta,  // get_const(index) function pointer
    get_function__RobotStates__theta,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dq",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, dq),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotStates__dq,  // size() function pointer
    get_const_function__RobotStates__dq,  // get_const(index) function pointer
    get_function__RobotStates__dq,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dtheta",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, dtheta),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotStates__dtheta,  // size() function pointer
    get_const_function__RobotStates__dtheta,  // get_const(index) function pointer
    get_function__RobotStates__dtheta,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tau",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, tau),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotStates__tau,  // size() function pointer
    get_const_function__RobotStates__tau,  // get_const(index) function pointer
    get_function__RobotStates__tau,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tau_des",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, tau_des),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotStates__tau_des,  // size() function pointer
    get_const_function__RobotStates__tau_des,  // get_const(index) function pointer
    get_function__RobotStates__tau_des,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tau_dot",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, tau_dot),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotStates__tau_dot,  // size() function pointer
    get_const_function__RobotStates__tau_dot,  // get_const(index) function pointer
    get_function__RobotStates__tau_dot,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tau_ext",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    7,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, tau_ext),  // bytes offset in struct
    nullptr,  // default value
    size_function__RobotStates__tau_ext,  // size() function pointer
    get_const_function__RobotStates__tau_ext,  // get_const(index) function pointer
    get_function__RobotStates__tau_ext,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tcp_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexiv_msgs::msg::CartesianState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, tcp_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tcp_pose_des",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexiv_msgs::msg::CartesianState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, tcp_pose_des),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "tcp_vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexiv_msgs::msg::CartesianVelocity>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, tcp_vel),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "cam_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexiv_msgs::msg::CartesianState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, cam_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flange_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexiv_msgs::msg::CartesianState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, flange_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "end_link_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexiv_msgs::msg::CartesianState>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, end_link_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ext_force_tcp_frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexiv_msgs::msg::ExternalForce>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, ext_force_tcp_frame),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ext_force_base_frame",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<flexiv_msgs::msg::ExternalForce>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::RobotStates, ext_force_base_frame),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers RobotStates_message_members = {
  "flexiv_msgs::msg",  // message namespace
  "RobotStates",  // message name
  16,  // number of fields
  sizeof(flexiv_msgs::msg::RobotStates),
  RobotStates_message_member_array,  // message members
  RobotStates_init_function,  // function to initialize message memory (memory has to be allocated)
  RobotStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t RobotStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &RobotStates_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace flexiv_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<flexiv_msgs::msg::RobotStates>()
{
  return &::flexiv_msgs::msg::rosidl_typesupport_introspection_cpp::RobotStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexiv_msgs, msg, RobotStates)() {
  return &::flexiv_msgs::msg::rosidl_typesupport_introspection_cpp::RobotStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
