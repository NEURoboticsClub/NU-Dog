cmake_minimum_required(VERSION 2.8.3)
project(proof_of_concept_3_dof_legs_description)

find_package(catkin REQUIRED COMPONENTS
  rospy
)

catkin_package(
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)