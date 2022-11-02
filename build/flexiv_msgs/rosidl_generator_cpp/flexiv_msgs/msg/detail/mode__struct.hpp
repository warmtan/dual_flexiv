// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from flexiv_msgs:msg/Mode.idl
// generated code does not contain a copyright notice

#ifndef FLEXIV_MSGS__MSG__DETAIL__MODE__STRUCT_HPP_
#define FLEXIV_MSGS__MSG__DETAIL__MODE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__flexiv_msgs__msg__Mode __attribute__((deprecated))
#else
# define DEPRECATED__flexiv_msgs__msg__Mode __declspec(deprecated)
#endif

namespace flexiv_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Mode_
{
  using Type = Mode_<ContainerAllocator>;

  explicit Mode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit Mode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations
  static constexpr int8_t MODE_UNKNOWN =
    -1;
  static constexpr uint8_t MODE_IDLE =
    0u;
  static constexpr uint8_t MODE_JOINT_TORQUE =
    1u;
  static constexpr uint8_t MODE_JOINT_POSITION =
    2u;
  static constexpr uint8_t MODE_JOINT_POSITION_NRT =
    3u;
  static constexpr uint8_t MODE_PLAN_EXECUTION =
    4u;
  static constexpr uint8_t MODE_PRIMITIVE_EXECUTION =
    5u;
  static constexpr uint8_t MODE_CARTESIAN_IMPEDANCE =
    6u;
  static constexpr uint8_t MODE_CARTESIAN_IMPEDANCE_NRT =
    7u;

  // pointer types
  using RawPtr =
    flexiv_msgs::msg::Mode_<ContainerAllocator> *;
  using ConstRawPtr =
    const flexiv_msgs::msg::Mode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<flexiv_msgs::msg::Mode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<flexiv_msgs::msg::Mode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      flexiv_msgs::msg::Mode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<flexiv_msgs::msg::Mode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      flexiv_msgs::msg::Mode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<flexiv_msgs::msg::Mode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<flexiv_msgs::msg::Mode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<flexiv_msgs::msg::Mode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__flexiv_msgs__msg__Mode
    std::shared_ptr<flexiv_msgs::msg::Mode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__flexiv_msgs__msg__Mode
    std::shared_ptr<flexiv_msgs::msg::Mode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Mode_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const Mode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Mode_

// alias to use template instance with default allocator
using Mode =
  flexiv_msgs::msg::Mode_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr int8_t Mode_<ContainerAllocator>::MODE_UNKNOWN;
template<typename ContainerAllocator>
constexpr uint8_t Mode_<ContainerAllocator>::MODE_IDLE;
template<typename ContainerAllocator>
constexpr uint8_t Mode_<ContainerAllocator>::MODE_JOINT_TORQUE;
template<typename ContainerAllocator>
constexpr uint8_t Mode_<ContainerAllocator>::MODE_JOINT_POSITION;
template<typename ContainerAllocator>
constexpr uint8_t Mode_<ContainerAllocator>::MODE_JOINT_POSITION_NRT;
template<typename ContainerAllocator>
constexpr uint8_t Mode_<ContainerAllocator>::MODE_PLAN_EXECUTION;
template<typename ContainerAllocator>
constexpr uint8_t Mode_<ContainerAllocator>::MODE_PRIMITIVE_EXECUTION;
template<typename ContainerAllocator>
constexpr uint8_t Mode_<ContainerAllocator>::MODE_CARTESIAN_IMPEDANCE;
template<typename ContainerAllocator>
constexpr uint8_t Mode_<ContainerAllocator>::MODE_CARTESIAN_IMPEDANCE_NRT;

}  // namespace msg

}  // namespace flexiv_msgs

#endif  // FLEXIV_MSGS__MSG__DETAIL__MODE__STRUCT_HPP_
