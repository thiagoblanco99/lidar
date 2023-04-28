// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from version0:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice

#ifndef VERSION0__SRV__DETAIL__ODD_EVEN_CHECK__STRUCT_H_
#define VERSION0__SRV__DETAIL__ODD_EVEN_CHECK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/OddEvenCheck in the package version0.
typedef struct version0__srv__OddEvenCheck_Request
{
  int64_t number;
} version0__srv__OddEvenCheck_Request;

// Struct for a sequence of version0__srv__OddEvenCheck_Request.
typedef struct version0__srv__OddEvenCheck_Request__Sequence
{
  version0__srv__OddEvenCheck_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} version0__srv__OddEvenCheck_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'decision'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/OddEvenCheck in the package version0.
typedef struct version0__srv__OddEvenCheck_Response
{
  rosidl_runtime_c__String decision;
} version0__srv__OddEvenCheck_Response;

// Struct for a sequence of version0__srv__OddEvenCheck_Response.
typedef struct version0__srv__OddEvenCheck_Response__Sequence
{
  version0__srv__OddEvenCheck_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} version0__srv__OddEvenCheck_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VERSION0__SRV__DETAIL__ODD_EVEN_CHECK__STRUCT_H_
