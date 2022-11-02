// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexiv_msgs:msg/CartesianState.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_STATE__STRUCT_HPP_
#define FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'orientation'
#include "geometry_msgs/msg/detail/quaternion__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexiv_msgs__msg__CartesianState __attribute__((deprecated))
#else
# define DEPRECATED__flexiv_msgs__msg__CartesianState __declspec(deprecated)
#endif

namespace flexiv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CartesianState_
{
  using Type = CartesianState_<ContainerAllocator>;

  explicit CartesianState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_init),
    orientation(_init)
  {
    (void)_init;
  }

  explicit CartesianState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : position(_alloc, _init),
    orientation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _position_type position;
  using _orientation_type =
    geometry_msgs::msg::Quaternion_<ContainerAllocator>;
  _orientation_type orientation;

  // setters for named parameter idiom
  Type & set__position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->position = _arg;
    return *this;
  }
  Type & set__orientation(
    const geometry_msgs::msg::Quaternion_<ContainerAllocator> & _arg)
  {
    this->orientation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexiv_msgs::msg::CartesianState_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexiv_msgs::msg::CartesianState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexiv_msgs::msg::CartesianState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexiv_msgs::msg::CartesianState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexiv_msgs::msg::CartesianState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexiv_msgs::msg::CartesianState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexiv_msgs::msg::CartesianState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexiv_msgs::msg::CartesianState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexiv_msgs::msg::CartesianState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexiv_msgs::msg::CartesianState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexiv_msgs__msg__CartesianState
    std::shared_ptr<flexiv_msgs::msg::CartesianState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexiv_msgs__msg__CartesianState
    std::shared_ptr<flexiv_msgs::msg::CartesianState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianState_ & other) const
  {
    if (this->position != other.position) {
      return false;
    }
    if (this->orientation != other.orientation) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianState_

// alias to use template instance with default allocator
using CartesianState =
  flexiv_msgs::msg::CartesianState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flexiv_msgs

#endif  // FLEXIV_MSGS__MSG__DETAIL__CARTESIAN_STATE__STRUCT_HPP_
