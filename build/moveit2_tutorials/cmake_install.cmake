# Install script for directory: /home/robotflow/dual_flexiv/src/moveit2_tutorials

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/robotflow/dual_flexiv/install/moveit2_tutorials")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/robotflow/dual_flexiv/build/moveit2_tutorials/ament_cmake_symlink_install/ament_cmake_symlink_install.cmake")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/robotflow/dual_flexiv/build/moveit2_tutorials/doc/motion_planning_api/cmake_install.cmake")
  include("/home/robotflow/dual_flexiv/build/moveit2_tutorials/doc/move_group_interface/cmake_install.cmake")
  include("/home/robotflow/dual_flexiv/build/moveit2_tutorials/doc/moveit_cpp/cmake_install.cmake")
  include("/home/robotflow/dual_flexiv/build/moveit2_tutorials/doc/planning_scene/cmake_install.cmake")
  include("/home/robotflow/dual_flexiv/build/moveit2_tutorials/doc/planning_scene_ros_api/cmake_install.cmake")
  include("/home/robotflow/dual_flexiv/build/moveit2_tutorials/doc/quickstart_in_rviz/cmake_install.cmake")
  include("/home/robotflow/dual_flexiv/build/moveit2_tutorials/doc/realtime_servo/cmake_install.cmake")
  include("/home/robotflow/dual_flexiv/build/moveit2_tutorials/doc/robot_model_and_robot_state/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/robotflow/dual_flexiv/build/moveit2_tutorials/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
