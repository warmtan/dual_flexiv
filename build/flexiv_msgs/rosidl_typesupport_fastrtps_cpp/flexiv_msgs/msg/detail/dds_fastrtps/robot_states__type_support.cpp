// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from flexiv_msgs:msg/RobotStates.idl
// generated code does not contain a copyright notice
#include "flexiv_msgs/msg/detail/robot_states__rosidl_typesupport_fastrtps_cpp.hpp"
#include "flexiv_msgs/msg/detail/robot_states__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace flexiv_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const flexiv_msgs::msg::CartesianState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  flexiv_msgs::msg::CartesianState &);
size_t get_serialized_size(
  const flexiv_msgs::msg::CartesianState &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace flexiv_msgs

namespace flexiv_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const flexiv_msgs::msg::CartesianState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  flexiv_msgs::msg::CartesianState &);
size_t get_serialized_size(
  const flexiv_msgs::msg::CartesianState &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace flexiv_msgs

namespace flexiv_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const flexiv_msgs::msg::CartesianVelocity &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  flexiv_msgs::msg::CartesianVelocity &);
size_t get_serialized_size(
  const flexiv_msgs::msg::CartesianVelocity &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianVelocity(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace flexiv_msgs

namespace flexiv_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const flexiv_msgs::msg::CartesianState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  flexiv_msgs::msg::CartesianState &);
size_t get_serialized_size(
  const flexiv_msgs::msg::CartesianState &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace flexiv_msgs

namespace flexiv_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const flexiv_msgs::msg::CartesianState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  flexiv_msgs::msg::CartesianState &);
size_t get_serialized_size(
  const flexiv_msgs::msg::CartesianState &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace flexiv_msgs

namespace flexiv_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const flexiv_msgs::msg::CartesianState &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  flexiv_msgs::msg::CartesianState &);
size_t get_serialized_size(
  const flexiv_msgs::msg::CartesianState &,
  size_t current_alignment);
size_t
max_serialized_size_CartesianState(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace flexiv_msgs

namespace flexiv_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const flexiv_msgs::msg::ExternalForce &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  flexiv_msgs::msg::ExternalForce &);
size_t get_serialized_size(
  const flexiv_msgs::msg::ExternalForce &,
  size_t current_alignment);
size_t
max_serialized_size_ExternalForce(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace flexiv_msgs

namespace flexiv_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const flexiv_msgs::msg::ExternalForce &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  flexiv_msgs::msg::ExternalForce &);
size_t get_serialized_size(
  const flexiv_msgs::msg::ExternalForce &,
  size_t current_alignment);
size_t
max_serialized_size_ExternalForce(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace flexiv_msgs


namespace flexiv_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexiv_msgs
cdr_serialize(
  const flexiv_msgs::msg::RobotStates & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: q
  {
    cdr << ros_message.q;
  }
  // Member: theta
  {
    cdr << ros_message.theta;
  }
  // Member: dq
  {
    cdr << ros_message.dq;
  }
  // Member: dtheta
  {
    cdr << ros_message.dtheta;
  }
  // Member: tau
  {
    cdr << ros_message.tau;
  }
  // Member: tau_des
  {
    cdr << ros_message.tau_des;
  }
  // Member: tau_dot
  {
    cdr << ros_message.tau_dot;
  }
  // Member: tau_ext
  {
    cdr << ros_message.tau_ext;
  }
  // Member: tcp_pose
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tcp_pose,
    cdr);
  // Member: tcp_pose_des
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tcp_pose_des,
    cdr);
  // Member: tcp_vel
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.tcp_vel,
    cdr);
  // Member: cam_pose
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.cam_pose,
    cdr);
  // Member: flange_pose
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.flange_pose,
    cdr);
  // Member: end_link_pose
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.end_link_pose,
    cdr);
  // Member: ext_force_tcp_frame
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ext_force_tcp_frame,
    cdr);
  // Member: ext_force_base_frame
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.ext_force_base_frame,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexiv_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  flexiv_msgs::msg::RobotStates & ros_message)
{
  // Member: q
  {
    cdr >> ros_message.q;
  }

  // Member: theta
  {
    cdr >> ros_message.theta;
  }

  // Member: dq
  {
    cdr >> ros_message.dq;
  }

  // Member: dtheta
  {
    cdr >> ros_message.dtheta;
  }

  // Member: tau
  {
    cdr >> ros_message.tau;
  }

  // Member: tau_des
  {
    cdr >> ros_message.tau_des;
  }

  // Member: tau_dot
  {
    cdr >> ros_message.tau_dot;
  }

  // Member: tau_ext
  {
    cdr >> ros_message.tau_ext;
  }

  // Member: tcp_pose
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tcp_pose);

  // Member: tcp_pose_des
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tcp_pose_des);

  // Member: tcp_vel
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.tcp_vel);

  // Member: cam_pose
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.cam_pose);

  // Member: flange_pose
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.flange_pose);

  // Member: end_link_pose
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.end_link_pose);

  // Member: ext_force_tcp_frame
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ext_force_tcp_frame);

  // Member: ext_force_base_frame
  flexiv_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.ext_force_base_frame);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexiv_msgs
get_serialized_size(
  const flexiv_msgs::msg::RobotStates & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: q
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.q[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: theta
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.theta[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dq
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.dq[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dtheta
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.dtheta[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tau
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.tau[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tau_des
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.tau_des[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tau_dot
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.tau_dot[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tau_ext
  {
    size_t array_size = 7;
    size_t item_size = sizeof(ros_message.tau_ext[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tcp_pose

  current_alignment +=
    flexiv_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tcp_pose, current_alignment);
  // Member: tcp_pose_des

  current_alignment +=
    flexiv_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tcp_pose_des, current_alignment);
  // Member: tcp_vel

  current_alignment +=
    flexiv_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.tcp_vel, current_alignment);
  // Member: cam_pose

  current_alignment +=
    flexiv_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.cam_pose, current_alignment);
  // Member: flange_pose

  current_alignment +=
    flexiv_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.flange_pose, current_alignment);
  // Member: end_link_pose

  current_alignment +=
    flexiv_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.end_link_pose, current_alignment);
  // Member: ext_force_tcp_frame

  current_alignment +=
    flexiv_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ext_force_tcp_frame, current_alignment);
  // Member: ext_force_base_frame

  current_alignment +=
    flexiv_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.ext_force_base_frame, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_flexiv_msgs
max_serialized_size_RobotStates(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: q
  {
    size_t array_size = 7;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: theta
  {
    size_t array_size = 7;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dq
  {
    size_t array_size = 7;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: dtheta
  {
    size_t array_size = 7;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tau
  {
    size_t array_size = 7;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tau_des
  {
    size_t array_size = 7;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tau_dot
  {
    size_t array_size = 7;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tau_ext
  {
    size_t array_size = 7;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: tcp_pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        flexiv_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianState(
        full_bounded, current_alignment);
    }
  }

  // Member: tcp_pose_des
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        flexiv_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianState(
        full_bounded, current_alignment);
    }
  }

  // Member: tcp_vel
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        flexiv_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianVelocity(
        full_bounded, current_alignment);
    }
  }

  // Member: cam_pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        flexiv_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianState(
        full_bounded, current_alignment);
    }
  }

  // Member: flange_pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        flexiv_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianState(
        full_bounded, current_alignment);
    }
  }

  // Member: end_link_pose
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        flexiv_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CartesianState(
        full_bounded, current_alignment);
    }
  }

  // Member: ext_force_tcp_frame
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        flexiv_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ExternalForce(
        full_bounded, current_alignment);
    }
  }

  // Member: ext_force_base_frame
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        flexiv_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_ExternalForce(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _RobotStates__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const flexiv_msgs::msg::RobotStates *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _RobotStates__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<flexiv_msgs::msg::RobotStates *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _RobotStates__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const flexiv_msgs::msg::RobotStates *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _RobotStates__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_RobotStates(full_bounded, 0);
}

static message_type_support_callbacks_t _RobotStates__callbacks = {
  "flexiv_msgs::msg",
  "RobotStates",
  _RobotStates__cdr_serialize,
  _RobotStates__cdr_deserialize,
  _RobotStates__get_serialized_size,
  _RobotStates__max_serialized_size
};

static rosidl_message_type_support_t _RobotStates__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_RobotStates__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace flexiv_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_flexiv_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<flexiv_msgs::msg::RobotStates>()
{
  return &flexiv_msgs::msg::typesupport_fastrtps_cpp::_RobotStates__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, flexiv_msgs, msg, RobotStates)() {
  return &flexiv_msgs::msg::typesupport_fastrtps_cpp::_RobotStates__handle;
}

#ifdef __cplusplus
}
#endif
