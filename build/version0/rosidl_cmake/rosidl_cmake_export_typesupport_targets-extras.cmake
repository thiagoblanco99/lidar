# generated from
# rosidl_cmake/cmake/template/rosidl_cmake_export_typesupport_targets.cmake.in

set(_exported_typesupport_targets
  "__rosidl_generator_c:version0__rosidl_generator_c;__rosidl_typesupport_fastrtps_c:version0__rosidl_typesupport_fastrtps_c;__rosidl_generator_cpp:version0__rosidl_generator_cpp;__rosidl_typesupport_fastrtps_cpp:version0__rosidl_typesupport_fastrtps_cpp;__rosidl_typesupport_introspection_c:version0__rosidl_typesupport_introspection_c;__rosidl_typesupport_c:version0__rosidl_typesupport_c;__rosidl_typesupport_introspection_cpp:version0__rosidl_typesupport_introspection_cpp;__rosidl_typesupport_cpp:version0__rosidl_typesupport_cpp;__rosidl_generator_py:version0__rosidl_generator_py")

# populate version0_TARGETS_<suffix>
if(NOT _exported_typesupport_targets STREQUAL "")
  # loop over typesupport targets
  foreach(_tuple ${_exported_typesupport_targets})
    string(REPLACE ":" ";" _tuple "${_tuple}")
    list(GET _tuple 0 _suffix)
    list(GET _tuple 1 _target)

    set(_target "version0::${_target}")
    if(NOT TARGET "${_target}")
      # the exported target must exist
      message(WARNING "Package 'version0' exports the typesupport target '${_target}' which doesn't exist")
    else()
      list(APPEND version0_TARGETS${_suffix} "${_target}")
    endif()
  endforeach()
endif()
