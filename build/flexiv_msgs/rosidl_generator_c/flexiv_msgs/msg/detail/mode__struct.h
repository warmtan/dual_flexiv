// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexiv_msgs:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__MODE__STRUCT_H_
#define FLEXIV_MSGS__MSG__DETAIL__MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_UNKNOWN'.
enum
{
  flexiv_msgs__msg__Mode__MODE_UNKNOWN = -1
};

/// Constant 'MODE_IDLE'.
enum
{
  flexiv_msgs__msg__Mode__MODE_IDLE = 0
};

/// Constant 'MODE_JOINT_TORQUE'.
enum
{
  flexiv_msgs__msg__Mode__MODE_JOINT_TORQUE = 1
};

/// Constant 'MODE_JOINT_POSITION'.
enum
{
  flexiv_msgs__msg__Mode__MODE_JOINT_POSITION = 2
};

/// Constant 'MODE_JOINT_POSITION_NRT'.
enum
{
  flexiv_msgs__msg__Mode__MODE_JOINT_POSITION_NRT = 3
};

/// Constant 'MODE_PLAN_EXECUTION'.
enum
{
  flexiv_msgs__msg__Mode__MODE_PLAN_EXECUTION = 4
};

/// Constant 'MODE_PRIMITIVE_EXECUTION'.
enum
{
  flexiv_msgs__msg__Mode__MODE_PRIMITIVE_EXECUTION = 5
};

/// Constant 'MODE_CARTESIAN_IMPEDANCE'.
enum
{
  flexiv_msgs__msg__Mode__MODE_CARTESIAN_IMPEDANCE = 6
};

/// Constant 'MODE_CARTESIAN_IMPEDANCE_NRT'.
enum
{
  flexiv_msgs__msg__Mode__MODE_CARTESIAN_IMPEDANCE_NRT = 7
};

// Struct defined in msg/Mode in the package flexiv_msgs.
typedef struct flexiv_msgs__msg__Mode
{
  uint8_t structure_needs_at_least_one_member;
} flexiv_msgs__msg__Mode;

// Struct for a sequence of flexiv_msgs__msg__Mode.
typedef struct flexiv_msgs__msg__Mode__Sequence
{
  flexiv_msgs__msg__Mode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexiv_msgs__msg__Mode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXIV_MSGS__MSG__DETAIL__MODE__STRUCT_H_
