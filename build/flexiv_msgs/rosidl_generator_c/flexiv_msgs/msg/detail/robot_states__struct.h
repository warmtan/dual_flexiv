// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from flexiv_msgs:msg/RobotStates.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__ROBOT_STATES__STRUCT_H_
#define FLEXIV_MSGS__MSG__DETAIL__ROBOT_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'tcp_pose'
// Member 'tcp_pose_des'
// Member 'cam_pose'
// Member 'flange_pose'
// Member 'end_link_pose'
#include "flexiv_msgs/msg/detail/cartesian_state__struct.h"
// Member 'tcp_vel'
#include "flexiv_msgs/msg/detail/cartesian_velocity__struct.h"
// Member 'ext_force_tcp_frame'
// Member 'ext_force_base_frame'
#include "flexiv_msgs/msg/detail/external_force__struct.h"

// Struct defined in msg/RobotStates in the package flexiv_msgs.
typedef struct flexiv_msgs__msg__RobotStates
{
  double q[7];
  double theta[7];
  double dq[7];
  double dtheta[7];
  double tau[7];
  double tau_des[7];
  double tau_dot[7];
  double tau_ext[7];
  flexiv_msgs__msg__CartesianState tcp_pose;
  flexiv_msgs__msg__CartesianState tcp_pose_des;
  flexiv_msgs__msg__CartesianVelocity tcp_vel;
  flexiv_msgs__msg__CartesianState cam_pose;
  flexiv_msgs__msg__CartesianState flange_pose;
  flexiv_msgs__msg__CartesianState end_link_pose;
  flexiv_msgs__msg__ExternalForce ext_force_tcp_frame;
  flexiv_msgs__msg__ExternalForce ext_force_base_frame;
} flexiv_msgs__msg__RobotStates;

// Struct for a sequence of flexiv_msgs__msg__RobotStates.
typedef struct flexiv_msgs__msg__RobotStates__Sequence
{
  flexiv_msgs__msg__RobotStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} flexiv_msgs__msg__RobotStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FLEXIV_MSGS__MSG__DETAIL__ROBOT_STATES__STRUCT_H_
