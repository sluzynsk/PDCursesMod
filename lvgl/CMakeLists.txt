cmake_minimum_required(VERSION 3.11)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE "MinSizeRel" CACHE STRING "Choose the type of build, options are: Debug, Release, or MinSizeRel." FORCE)
  message(STATUS "No build type specified, defaulting to MinSizeRel.")
endif()

PROJECT(lvgl VERSION "${PROJECT_VERSION}" LANGUAGES C)
MESSAGE(STATUS "${PROJECT_NAME} version: ${PROJECT_VERSION}")

include(project_common)

