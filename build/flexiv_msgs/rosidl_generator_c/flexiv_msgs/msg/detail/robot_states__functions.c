// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexiv_msgs:msg/RobotStates.idl
// generated code does not contain a copyright notice
#include "flexiv_msgs/msg/detail/robot_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `tcp_pose`
// Member `tcp_pose_des`
// Member `cam_pose`
// Member `flange_pose`
// Member `end_link_pose`
#include "flexiv_msgs/msg/detail/cartesian_state__functions.h"
// Member `tcp_vel`
#include "flexiv_msgs/msg/detail/cartesian_velocity__functions.h"
// Member `ext_force_tcp_frame`
// Member `ext_force_base_frame`
#include "flexiv_msgs/msg/detail/external_force__functions.h"

bool
flexiv_msgs__msg__RobotStates__init(flexiv_msgs__msg__RobotStates * msg)
{
  if (!msg) {
    return false;
  }
  // q
  // theta
  // dq
  // dtheta
  // tau
  // tau_des
  // tau_dot
  // tau_ext
  // tcp_pose
  if (!flexiv_msgs__msg__CartesianState__init(&msg->tcp_pose)) {
    flexiv_msgs__msg__RobotStates__fini(msg);
    return false;
  }
  // tcp_pose_des
  if (!flexiv_msgs__msg__CartesianState__init(&msg->tcp_pose_des)) {
    flexiv_msgs__msg__RobotStates__fini(msg);
    return false;
  }
  // tcp_vel
  if (!flexiv_msgs__msg__CartesianVelocity__init(&msg->tcp_vel)) {
    flexiv_msgs__msg__RobotStates__fini(msg);
    return false;
  }
  // cam_pose
  if (!flexiv_msgs__msg__CartesianState__init(&msg->cam_pose)) {
    flexiv_msgs__msg__RobotStates__fini(msg);
    return false;
  }
  // flange_pose
  if (!flexiv_msgs__msg__CartesianState__init(&msg->flange_pose)) {
    flexiv_msgs__msg__RobotStates__fini(msg);
    return false;
  }
  // end_link_pose
  if (!flexiv_msgs__msg__CartesianState__init(&msg->end_link_pose)) {
    flexiv_msgs__msg__RobotStates__fini(msg);
    return false;
  }
  // ext_force_tcp_frame
  if (!flexiv_msgs__msg__ExternalForce__init(&msg->ext_force_tcp_frame)) {
    flexiv_msgs__msg__RobotStates__fini(msg);
    return false;
  }
  // ext_force_base_frame
  if (!flexiv_msgs__msg__ExternalForce__init(&msg->ext_force_base_frame)) {
    flexiv_msgs__msg__RobotStates__fini(msg);
    return false;
  }
  return true;
}

void
flexiv_msgs__msg__RobotStates__fini(flexiv_msgs__msg__RobotStates * msg)
{
  if (!msg) {
    return;
  }
  // q
  // theta
  // dq
  // dtheta
  // tau
  // tau_des
  // tau_dot
  // tau_ext
  // tcp_pose
  flexiv_msgs__msg__CartesianState__fini(&msg->tcp_pose);
  // tcp_pose_des
  flexiv_msgs__msg__CartesianState__fini(&msg->tcp_pose_des);
  // tcp_vel
  flexiv_msgs__msg__CartesianVelocity__fini(&msg->tcp_vel);
  // cam_pose
  flexiv_msgs__msg__CartesianState__fini(&msg->cam_pose);
  // flange_pose
  flexiv_msgs__msg__CartesianState__fini(&msg->flange_pose);
  // end_link_pose
  flexiv_msgs__msg__CartesianState__fini(&msg->end_link_pose);
  // ext_force_tcp_frame
  flexiv_msgs__msg__ExternalForce__fini(&msg->ext_force_tcp_frame);
  // ext_force_base_frame
  flexiv_msgs__msg__ExternalForce__fini(&msg->ext_force_base_frame);
}

bool
flexiv_msgs__msg__RobotStates__are_equal(const flexiv_msgs__msg__RobotStates * lhs, const flexiv_msgs__msg__RobotStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // q
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->q[i] != rhs->q[i]) {
      return false;
    }
  }
  // theta
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->theta[i] != rhs->theta[i]) {
      return false;
    }
  }
  // dq
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->dq[i] != rhs->dq[i]) {
      return false;
    }
  }
  // dtheta
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->dtheta[i] != rhs->dtheta[i]) {
      return false;
    }
  }
  // tau
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->tau[i] != rhs->tau[i]) {
      return false;
    }
  }
  // tau_des
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->tau_des[i] != rhs->tau_des[i]) {
      return false;
    }
  }
  // tau_dot
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->tau_dot[i] != rhs->tau_dot[i]) {
      return false;
    }
  }
  // tau_ext
  for (size_t i = 0; i < 7; ++i) {
    if (lhs->tau_ext[i] != rhs->tau_ext[i]) {
      return false;
    }
  }
  // tcp_pose
  if (!flexiv_msgs__msg__CartesianState__are_equal(
      &(lhs->tcp_pose), &(rhs->tcp_pose)))
  {
    return false;
  }
  // tcp_pose_des
  if (!flexiv_msgs__msg__CartesianState__are_equal(
      &(lhs->tcp_pose_des), &(rhs->tcp_pose_des)))
  {
    return false;
  }
  // tcp_vel
  if (!flexiv_msgs__msg__CartesianVelocity__are_equal(
      &(lhs->tcp_vel), &(rhs->tcp_vel)))
  {
    return false;
  }
  // cam_pose
  if (!flexiv_msgs__msg__CartesianState__are_equal(
      &(lhs->cam_pose), &(rhs->cam_pose)))
  {
    return false;
  }
  // flange_pose
  if (!flexiv_msgs__msg__CartesianState__are_equal(
      &(lhs->flange_pose), &(rhs->flange_pose)))
  {
    return false;
  }
  // end_link_pose
  if (!flexiv_msgs__msg__CartesianState__are_equal(
      &(lhs->end_link_pose), &(rhs->end_link_pose)))
  {
    return false;
  }
  // ext_force_tcp_frame
  if (!flexiv_msgs__msg__ExternalForce__are_equal(
      &(lhs->ext_force_tcp_frame), &(rhs->ext_force_tcp_frame)))
  {
    return false;
  }
  // ext_force_base_frame
  if (!flexiv_msgs__msg__ExternalForce__are_equal(
      &(lhs->ext_force_base_frame), &(rhs->ext_force_base_frame)))
  {
    return false;
  }
  return true;
}

bool
flexiv_msgs__msg__RobotStates__copy(
  const flexiv_msgs__msg__RobotStates * input,
  flexiv_msgs__msg__RobotStates * output)
{
  if (!input || !output) {
    return false;
  }
  // q
  for (size_t i = 0; i < 7; ++i) {
    output->q[i] = input->q[i];
  }
  // theta
  for (size_t i = 0; i < 7; ++i) {
    output->theta[i] = input->theta[i];
  }
  // dq
  for (size_t i = 0; i < 7; ++i) {
    output->dq[i] = input->dq[i];
  }
  // dtheta
  for (size_t i = 0; i < 7; ++i) {
    output->dtheta[i] = input->dtheta[i];
  }
  // tau
  for (size_t i = 0; i < 7; ++i) {
    output->tau[i] = input->tau[i];
  }
  // tau_des
  for (size_t i = 0; i < 7; ++i) {
    output->tau_des[i] = input->tau_des[i];
  }
  // tau_dot
  for (size_t i = 0; i < 7; ++i) {
    output->tau_dot[i] = input->tau_dot[i];
  }
  // tau_ext
  for (size_t i = 0; i < 7; ++i) {
    output->tau_ext[i] = input->tau_ext[i];
  }
  // tcp_pose
  if (!flexiv_msgs__msg__CartesianState__copy(
      &(input->tcp_pose), &(output->tcp_pose)))
  {
    return false;
  }
  // tcp_pose_des
  if (!flexiv_msgs__msg__CartesianState__copy(
      &(input->tcp_pose_des), &(output->tcp_pose_des)))
  {
    return false;
  }
  // tcp_vel
  if (!flexiv_msgs__msg__CartesianVelocity__copy(
      &(input->tcp_vel), &(output->tcp_vel)))
  {
    return false;
  }
  // cam_pose
  if (!flexiv_msgs__msg__CartesianState__copy(
      &(input->cam_pose), &(output->cam_pose)))
  {
    return false;
  }
  // flange_pose
  if (!flexiv_msgs__msg__CartesianState__copy(
      &(input->flange_pose), &(output->flange_pose)))
  {
    return false;
  }
  // end_link_pose
  if (!flexiv_msgs__msg__CartesianState__copy(
      &(input->end_link_pose), &(output->end_link_pose)))
  {
    return false;
  }
  // ext_force_tcp_frame
  if (!flexiv_msgs__msg__ExternalForce__copy(
      &(input->ext_force_tcp_frame), &(output->ext_force_tcp_frame)))
  {
    return false;
  }
  // ext_force_base_frame
  if (!flexiv_msgs__msg__ExternalForce__copy(
      &(input->ext_force_base_frame), &(output->ext_force_base_frame)))
  {
    return false;
  }
  return true;
}

flexiv_msgs__msg__RobotStates *
flexiv_msgs__msg__RobotStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexiv_msgs__msg__RobotStates * msg = (flexiv_msgs__msg__RobotStates *)allocator.allocate(sizeof(flexiv_msgs__msg__RobotStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexiv_msgs__msg__RobotStates));
  bool success = flexiv_msgs__msg__RobotStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexiv_msgs__msg__RobotStates__destroy(flexiv_msgs__msg__RobotStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexiv_msgs__msg__RobotStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexiv_msgs__msg__RobotStates__Sequence__init(flexiv_msgs__msg__RobotStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexiv_msgs__msg__RobotStates * data = NULL;

  if (size) {
    data = (flexiv_msgs__msg__RobotStates *)allocator.zero_allocate(size, sizeof(flexiv_msgs__msg__RobotStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexiv_msgs__msg__RobotStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexiv_msgs__msg__RobotStates__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
flexiv_msgs__msg__RobotStates__Sequence__fini(flexiv_msgs__msg__RobotStates__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      flexiv_msgs__msg__RobotStates__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

flexiv_msgs__msg__RobotStates__Sequence *
flexiv_msgs__msg__RobotStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexiv_msgs__msg__RobotStates__Sequence * array = (flexiv_msgs__msg__RobotStates__Sequence *)allocator.allocate(sizeof(flexiv_msgs__msg__RobotStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexiv_msgs__msg__RobotStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexiv_msgs__msg__RobotStates__Sequence__destroy(flexiv_msgs__msg__RobotStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexiv_msgs__msg__RobotStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexiv_msgs__msg__RobotStates__Sequence__are_equal(const flexiv_msgs__msg__RobotStates__Sequence * lhs, const flexiv_msgs__msg__RobotStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexiv_msgs__msg__RobotStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexiv_msgs__msg__RobotStates__Sequence__copy(
  const flexiv_msgs__msg__RobotStates__Sequence * input,
  flexiv_msgs__msg__RobotStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexiv_msgs__msg__RobotStates);
    flexiv_msgs__msg__RobotStates * data =
      (flexiv_msgs__msg__RobotStates *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexiv_msgs__msg__RobotStates__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          flexiv_msgs__msg__RobotStates__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!flexiv_msgs__msg__RobotStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
