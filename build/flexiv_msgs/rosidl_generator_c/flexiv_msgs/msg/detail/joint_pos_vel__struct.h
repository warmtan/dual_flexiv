// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexiv_msgs:msg/JointPosVel.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__JOINT_POS_VEL__STRUCT_H_
#define FLEXIV_MSGS__MSG__DETAIL__JOINT_POS_VEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/JointPosVel in the package flexiv_msgs.
typedef struct flexiv_msgs__msg__JointPosVel
{
  double positions[7];
  double velocities[7];
} flexiv_msgs__msg__JointPosVel;

// Struct for a sequence of flexiv_msgs__msg__JointPosVel.
typedef struct flexiv_msgs__msg__JointPosVel__Sequence
{
  flexiv_msgs__msg__JointPosVel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexiv_msgs__msg__JointPosVel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXIV_MSGS__MSG__DETAIL__JOINT_POS_VEL__STRUCT_H_
