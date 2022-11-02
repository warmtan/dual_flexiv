// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexiv_msgs:msg/CartesianVelocity.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__STRUCT_HPP_
#define FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'linear'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'angular'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexiv_msgs__msg__CartesianVelocity __attribute__((deprecated))
#else
# define DEPRECATED__flexiv_msgs__msg__CartesianVelocity __declspec(deprecated)
#endif

namespace flexiv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianVelocity_
{
  using Type = CartesianVelocity_<ContainerAllocator>;

  explicit CartesianVelocity_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear(_init),
    angular(_init)
  {
    (void)_init;
  }

  explicit CartesianVelocity_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : linear(_alloc, _init),
    angular(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _linear_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _linear_type linear;
  using _angular_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _angular_type angular;

  // setters for named parameter idiom
  Type & set__linear(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->linear = _arg;
    return *this;
  }
  Type & set__angular(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->angular = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexiv_msgs::msg::CartesianVelocity_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexiv_msgs::msg::CartesianVelocity_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexiv_msgs::msg::CartesianVelocity_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexiv_msgs::msg::CartesianVelocity_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexiv_msgs::msg::CartesianVelocity_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexiv_msgs::msg::CartesianVelocity_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexiv_msgs::msg::CartesianVelocity_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexiv_msgs::msg::CartesianVelocity_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexiv_msgs::msg::CartesianVelocity_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexiv_msgs::msg::CartesianVelocity_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexiv_msgs__msg__CartesianVelocity
    std::shared_ptr<flexiv_msgs::msg::CartesianVelocity_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexiv_msgs__msg__CartesianVelocity
    std::shared_ptr<flexiv_msgs::msg::CartesianVelocity_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianVelocity_ & other) const
  {
    if (this->linear != other.linear) {
      return false;
    }
    if (this->angular != other.angular) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianVelocity_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianVelocity_

// alias to use template instance with default allocator
using CartesianVelocity =
  flexiv_msgs::msg::CartesianVelocity_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flexiv_msgs

#endif  // FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_VELOCITY__STRUCT_HPP_
