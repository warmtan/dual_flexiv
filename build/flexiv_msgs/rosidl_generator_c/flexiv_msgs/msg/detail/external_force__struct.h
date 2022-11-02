// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexiv_msgs:msg/ExternalForce.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__EXTERNAL_FORCE__STRUCT_H_
#define FLEXIV_MSGS__MSG__DETAIL__EXTERNAL_FORCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'force'
// Member 'moment'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/ExternalForce in the package flexiv_msgs.
typedef struct flexiv_msgs__msg__ExternalForce
{
  geometry_msgs__msg__Vector3 force;
  geometry_msgs__msg__Vector3 moment;
} flexiv_msgs__msg__ExternalForce;

// Struct for a sequence of flexiv_msgs__msg__ExternalForce.
typedef struct flexiv_msgs__msg__ExternalForce__Sequence
{
  flexiv_msgs__msg__ExternalForce * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexiv_msgs__msg__ExternalForce__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXIV_MSGS__MSG__DETAIL__EXTERNAL_FORCE__STRUCT_H_
