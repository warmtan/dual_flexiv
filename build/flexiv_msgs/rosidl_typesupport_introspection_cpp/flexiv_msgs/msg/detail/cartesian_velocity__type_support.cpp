// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from flexiv_msgs:msg/CartesianVelocity.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "flexiv_msgs/msg/detail/cartesian_velocity__struct.hpp"
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

void CartesianVelocity_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) flexiv_msgs::msg::CartesianVelocity(_init);
}

void CartesianVelocity_fini_function(void * message_memory)
{
  auto typed_message = static_cast<flexiv_msgs::msg::CartesianVelocity *>(message_memory);
  typed_message->~CartesianVelocity();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember CartesianVelocity_message_member_array[2] = {
  {
    "linear",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::CartesianVelocity, linear),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "angular",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Quaternion>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs::msg::CartesianVelocity, angular),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers CartesianVelocity_message_members = {
  "flexiv_msgs::msg",  // message namespace
  "CartesianVelocity",  // message name
  2,  // number of fields
  sizeof(flexiv_msgs::msg::CartesianVelocity),
  CartesianVelocity_message_member_array,  // message members
  CartesianVelocity_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianVelocity_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t CartesianVelocity_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &CartesianVelocity_message_members,
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
get_message_type_support_handle<flexiv_msgs::msg::CartesianVelocity>()
{
  return &::flexiv_msgs::msg::rosidl_typesupport_introspection_cpp::CartesianVelocity_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, flexiv_msgs, msg, CartesianVelocity)() {
  return &::flexiv_msgs::msg::rosidl_typesupport_introspection_cpp::CartesianVelocity_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
