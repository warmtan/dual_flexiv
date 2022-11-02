// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexiv_msgs:msg/CartesianState.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_STATE__STRUCT_H_
#define FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.h"

// Struct defined in msg/CartesianState in the package flexiv_msgs.
typedef struct flexiv_msgs__msg__CartesianState
{
  geometry_msgs__msg__Point position;
  geometry_msgs__msg__Quaternion orientation;
} flexiv_msgs__msg__CartesianState;

// Struct for a sequence of flexiv_msgs__msg__CartesianState.
typedef struct flexiv_msgs__msg__CartesianState__Sequence
{
  flexiv_msgs__msg__CartesianState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexiv_msgs__msg__CartesianState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_STATE__STRUCT_H_
