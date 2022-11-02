// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from flexiv_msgs:msg/CartesianVelocity.idl
// generated code does not contain a copyright notice
#include "flexiv_msgs/msg/detail/cartesian_velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `linear`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `angular`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
flexiv_msgs__msg__CartesianVelocity__init(flexiv_msgs__msg__CartesianVelocity * msg)
{
  if (!msg) {
    return false;
  }
  // linear
  if (!geometry_msgs__msg__Point__init(&msg->linear)) {
    flexiv_msgs__msg__CartesianVelocity__fini(msg);
    return false;
  }
  // angular
  if (!geometry_msgs__msg__Quaternion__init(&msg->angular)) {
    flexiv_msgs__msg__CartesianVelocity__fini(msg);
    return false;
  }
  return true;
}

void
flexiv_msgs__msg__CartesianVelocity__fini(flexiv_msgs__msg__CartesianVelocity * msg)
{
  if (!msg) {
    return;
  }
  // linear
  geometry_msgs__msg__Point__fini(&msg->linear);
  // angular
  geometry_msgs__msg__Quaternion__fini(&msg->angular);
}

bool
flexiv_msgs__msg__CartesianVelocity__are_equal(const flexiv_msgs__msg__CartesianVelocity * lhs, const flexiv_msgs__msg__CartesianVelocity * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->linear), &(rhs->linear)))
  {
    return false;
  }
  // angular
  if (!geometry_msgs__msg__Quaternion__are_equal(
      &(lhs->angular), &(rhs->angular)))
  {
    return false;
  }
  return true;
}

bool
flexiv_msgs__msg__CartesianVelocity__copy(
  const flexiv_msgs__msg__CartesianVelocity * input,
  flexiv_msgs__msg__CartesianVelocity * output)
{
  if (!input || !output) {
    return false;
  }
  // linear
  if (!geometry_msgs__msg__Point__copy(
      &(input->linear), &(output->linear)))
  {
    return false;
  }
  // angular
  if (!geometry_msgs__msg__Quaternion__copy(
      &(input->angular), &(output->angular)))
  {
    return false;
  }
  return true;
}

flexiv_msgs__msg__CartesianVelocity *
flexiv_msgs__msg__CartesianVelocity__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexiv_msgs__msg__CartesianVelocity * msg = (flexiv_msgs__msg__CartesianVelocity *)allocator.allocate(sizeof(flexiv_msgs__msg__CartesianVelocity), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(flexiv_msgs__msg__CartesianVelocity));
  bool success = flexiv_msgs__msg__CartesianVelocity__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
flexiv_msgs__msg__CartesianVelocity__destroy(flexiv_msgs__msg__CartesianVelocity * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    flexiv_msgs__msg__CartesianVelocity__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
flexiv_msgs__msg__CartesianVelocity__Sequence__init(flexiv_msgs__msg__CartesianVelocity__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexiv_msgs__msg__CartesianVelocity * data = NULL;

  if (size) {
    data = (flexiv_msgs__msg__CartesianVelocity *)allocator.zero_allocate(size, sizeof(flexiv_msgs__msg__CartesianVelocity), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = flexiv_msgs__msg__CartesianVelocity__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        flexiv_msgs__msg__CartesianVelocity__fini(&data[i - 1]);
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
flexiv_msgs__msg__CartesianVelocity__Sequence__fini(flexiv_msgs__msg__CartesianVelocity__Sequence * array)
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
      flexiv_msgs__msg__CartesianVelocity__fini(&array->data[i]);
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

flexiv_msgs__msg__CartesianVelocity__Sequence *
flexiv_msgs__msg__CartesianVelocity__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  flexiv_msgs__msg__CartesianVelocity__Sequence * array = (flexiv_msgs__msg__CartesianVelocity__Sequence *)allocator.allocate(sizeof(flexiv_msgs__msg__CartesianVelocity__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = flexiv_msgs__msg__CartesianVelocity__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
flexiv_msgs__msg__CartesianVelocity__Sequence__destroy(flexiv_msgs__msg__CartesianVelocity__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    flexiv_msgs__msg__CartesianVelocity__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
flexiv_msgs__msg__CartesianVelocity__Sequence__are_equal(const flexiv_msgs__msg__CartesianVelocity__Sequence * lhs, const flexiv_msgs__msg__CartesianVelocity__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!flexiv_msgs__msg__CartesianVelocity__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
flexiv_msgs__msg__CartesianVelocity__Sequence__copy(
  const flexiv_msgs__msg__CartesianVelocity__Sequence * input,
  flexiv_msgs__msg__CartesianVelocity__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(flexiv_msgs__msg__CartesianVelocity);
    flexiv_msgs__msg__CartesianVelocity * data =
      (flexiv_msgs__msg__CartesianVelocity *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!flexiv_msgs__msg__CartesianVelocity__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          flexiv_msgs__msg__CartesianVelocity__fini(&data[i]);
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
    if (!flexiv_msgs__msg__CartesianVelocity__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
