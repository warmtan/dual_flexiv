// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexiv_msgs:msg/ExternalForce.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__EXTERNAL_FORCE__STRUCT_HPP_
#define FLEXIV_MSGS__MSG__DETAIL__EXTERNAL_FORCE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'force'
// Member 'moment'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__flexiv_msgs__msg__ExternalForce __attribute__((deprecated))
#else
# define DEPRECATED__flexiv_msgs__msg__ExternalForce __declspec(deprecated)
#endif

namespace flexiv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ExternalForce_
{
  using Type = ExternalForce_<ContainerAllocator>;

  explicit ExternalForce_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : force(_init),
    moment(_init)
  {
    (void)_init;
  }

  explicit ExternalForce_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : force(_alloc, _init),
    moment(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _force_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _force_type force;
  using _moment_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _moment_type moment;

  // setters for named parameter idiom
  Type & set__force(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->force = _arg;
    return *this;
  }
  Type & set__moment(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->moment = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    flexiv_msgs::msg::ExternalForce_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexiv_msgs::msg::ExternalForce_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexiv_msgs::msg::ExternalForce_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexiv_msgs::msg::ExternalForce_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexiv_msgs::msg::ExternalForce_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexiv_msgs::msg::ExternalForce_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexiv_msgs::msg::ExternalForce_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexiv_msgs::msg::ExternalForce_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexiv_msgs::msg::ExternalForce_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexiv_msgs::msg::ExternalForce_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexiv_msgs__msg__ExternalForce
    std::shared_ptr<flexiv_msgs::msg::ExternalForce_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexiv_msgs__msg__ExternalForce
    std::shared_ptr<flexiv_msgs::msg::ExternalForce_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ExternalForce_ & other) const
  {
    if (this->force != other.force) {
      return false;
    }
    if (this->moment != other.moment) {
      return false;
    }
    return true;
  }
  bool operator!=(const ExternalForce_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ExternalForce_

// alias to use template instance with default allocator
using ExternalForce =
  flexiv_msgs::msg::ExternalForce_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace flexiv_msgs

#endif  // FLEXIV_MSGS__MSG__DETAIL__EXTERNAL_FORCE__STRUCT_HPP_
