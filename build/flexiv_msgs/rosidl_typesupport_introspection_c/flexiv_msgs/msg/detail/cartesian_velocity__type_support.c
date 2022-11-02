// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from flexiv_msgs:msg/CartesianVelocity.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "flexiv_msgs/msg/detail/cartesian_velocity__rosidl_typesupport_introspection_c.h"
#include "flexiv_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "flexiv_msgs/msg/detail/cartesian_velocity__functions.h"
#include "flexiv_msgs/msg/detail/cartesian_velocity__struct.h"


// Include directives for member types
// Member `linear`
#include "geometry_msgs/msg/point.h"
// Member `linear`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `angular`
#include "geometry_msgs/msg/quaternion.h"
// Member `angular`
#include "geometry_msgs/msg/detail/quaternion__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void CartesianVelocity__rosidl_typesupport_introspection_c__CartesianVelocity_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  flexiv_msgs__msg__CartesianVelocity__init(message_memory);
}

void CartesianVelocity__rosidl_typesupport_introspection_c__CartesianVelocity_fini_function(void * message_memory)
{
  flexiv_msgs__msg__CartesianVelocity__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember CartesianVelocity__rosidl_typesupport_introspection_c__CartesianVelocity_message_member_array[2] = {
  {
    "linear",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs__msg__CartesianVelocity, linear),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(flexiv_msgs__msg__CartesianVelocity, angular),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers CartesianVelocity__rosidl_typesupport_introspection_c__CartesianVelocity_message_members = {
  "flexiv_msgs__msg",  // message namespace
  "CartesianVelocity",  // message name
  2,  // number of fields
  sizeof(flexiv_msgs__msg__CartesianVelocity),
  CartesianVelocity__rosidl_typesupport_introspection_c__CartesianVelocity_message_member_array,  // message members
  CartesianVelocity__rosidl_typesupport_introspection_c__CartesianVelocity_init_function,  // function to initialize message memory (memory has to be allocated)
  CartesianVelocity__rosidl_typesupport_introspection_c__CartesianVelocity_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t CartesianVelocity__rosidl_typesupport_introspection_c__CartesianVelocity_message_type_support_handle = {
  0,
  &CartesianVelocity__rosidl_typesupport_introspection_c__CartesianVelocity_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_flexiv_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, flexiv_msgs, msg, CartesianVelocity)() {
  CartesianVelocity__rosidl_typesupport_introspection_c__CartesianVelocity_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  CartesianVelocity__rosidl_typesupport_introspection_c__CartesianVelocity_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Quaternion)();
  if (!CartesianVelocity__rosidl_typesupport_introspection_c__CartesianVelocity_message_type_support_handle.typesupport_identifier) {
    CartesianVelocity__rosidl_typesupport_introspection_c__CartesianVelocity_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &CartesianVelocity__rosidl_typesupport_introspection_c__CartesianVelocity_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
