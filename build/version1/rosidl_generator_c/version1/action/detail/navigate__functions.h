// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from version1:action/Navigate.idl
// generated code does not contain a copyright notice

#ifndef VERSION1__ACTION__DETAIL__NAVIGATE__FUNCTIONS_H_
#define VERSION1__ACTION__DETAIL__NAVIGATE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "version1/msg/rosidl_generator_c__visibility_control.h"

#include "version1/action/detail/navigate__struct.h"

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * version1__action__Navigate_Goal
 * )) before or use
 * version1__action__Navigate_Goal__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Goal__init(version1__action__Navigate_Goal * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_Goal__fini(version1__action__Navigate_Goal * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * version1__action__Navigate_Goal__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_Goal *
version1__action__Navigate_Goal__create();

/// Destroy action/Navigate message.
/**
 * It calls
 * version1__action__Navigate_Goal__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_Goal__destroy(version1__action__Navigate_Goal * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Goal__are_equal(const version1__action__Navigate_Goal * lhs, const version1__action__Navigate_Goal * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Goal__copy(
  const version1__action__Navigate_Goal * input,
  version1__action__Navigate_Goal * output);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * version1__action__Navigate_Goal__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Goal__Sequence__init(version1__action__Navigate_Goal__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_Goal__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_Goal__Sequence__fini(version1__action__Navigate_Goal__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * version1__action__Navigate_Goal__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_Goal__Sequence *
version1__action__Navigate_Goal__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_Goal__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_Goal__Sequence__destroy(version1__action__Navigate_Goal__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Goal__Sequence__are_equal(const version1__action__Navigate_Goal__Sequence * lhs, const version1__action__Navigate_Goal__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Goal__Sequence__copy(
  const version1__action__Navigate_Goal__Sequence * input,
  version1__action__Navigate_Goal__Sequence * output);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * version1__action__Navigate_Result
 * )) before or use
 * version1__action__Navigate_Result__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Result__init(version1__action__Navigate_Result * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_Result__fini(version1__action__Navigate_Result * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * version1__action__Navigate_Result__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_Result *
version1__action__Navigate_Result__create();

/// Destroy action/Navigate message.
/**
 * It calls
 * version1__action__Navigate_Result__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_Result__destroy(version1__action__Navigate_Result * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Result__are_equal(const version1__action__Navigate_Result * lhs, const version1__action__Navigate_Result * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Result__copy(
  const version1__action__Navigate_Result * input,
  version1__action__Navigate_Result * output);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * version1__action__Navigate_Result__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Result__Sequence__init(version1__action__Navigate_Result__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_Result__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_Result__Sequence__fini(version1__action__Navigate_Result__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * version1__action__Navigate_Result__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_Result__Sequence *
version1__action__Navigate_Result__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_Result__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_Result__Sequence__destroy(version1__action__Navigate_Result__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Result__Sequence__are_equal(const version1__action__Navigate_Result__Sequence * lhs, const version1__action__Navigate_Result__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Result__Sequence__copy(
  const version1__action__Navigate_Result__Sequence * input,
  version1__action__Navigate_Result__Sequence * output);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * version1__action__Navigate_Feedback
 * )) before or use
 * version1__action__Navigate_Feedback__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Feedback__init(version1__action__Navigate_Feedback * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_Feedback__fini(version1__action__Navigate_Feedback * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * version1__action__Navigate_Feedback__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_Feedback *
version1__action__Navigate_Feedback__create();

/// Destroy action/Navigate message.
/**
 * It calls
 * version1__action__Navigate_Feedback__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_Feedback__destroy(version1__action__Navigate_Feedback * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Feedback__are_equal(const version1__action__Navigate_Feedback * lhs, const version1__action__Navigate_Feedback * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Feedback__copy(
  const version1__action__Navigate_Feedback * input,
  version1__action__Navigate_Feedback * output);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * version1__action__Navigate_Feedback__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Feedback__Sequence__init(version1__action__Navigate_Feedback__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_Feedback__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_Feedback__Sequence__fini(version1__action__Navigate_Feedback__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * version1__action__Navigate_Feedback__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_Feedback__Sequence *
version1__action__Navigate_Feedback__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_Feedback__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_Feedback__Sequence__destroy(version1__action__Navigate_Feedback__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Feedback__Sequence__are_equal(const version1__action__Navigate_Feedback__Sequence * lhs, const version1__action__Navigate_Feedback__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_Feedback__Sequence__copy(
  const version1__action__Navigate_Feedback__Sequence * input,
  version1__action__Navigate_Feedback__Sequence * output);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * version1__action__Navigate_SendGoal_Request
 * )) before or use
 * version1__action__Navigate_SendGoal_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_SendGoal_Request__init(version1__action__Navigate_SendGoal_Request * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_SendGoal_Request__fini(version1__action__Navigate_SendGoal_Request * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * version1__action__Navigate_SendGoal_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_SendGoal_Request *
version1__action__Navigate_SendGoal_Request__create();

/// Destroy action/Navigate message.
/**
 * It calls
 * version1__action__Navigate_SendGoal_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_SendGoal_Request__destroy(version1__action__Navigate_SendGoal_Request * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_SendGoal_Request__are_equal(const version1__action__Navigate_SendGoal_Request * lhs, const version1__action__Navigate_SendGoal_Request * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_SendGoal_Request__copy(
  const version1__action__Navigate_SendGoal_Request * input,
  version1__action__Navigate_SendGoal_Request * output);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * version1__action__Navigate_SendGoal_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_SendGoal_Request__Sequence__init(version1__action__Navigate_SendGoal_Request__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_SendGoal_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_SendGoal_Request__Sequence__fini(version1__action__Navigate_SendGoal_Request__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * version1__action__Navigate_SendGoal_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_SendGoal_Request__Sequence *
version1__action__Navigate_SendGoal_Request__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_SendGoal_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_SendGoal_Request__Sequence__destroy(version1__action__Navigate_SendGoal_Request__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_SendGoal_Request__Sequence__are_equal(const version1__action__Navigate_SendGoal_Request__Sequence * lhs, const version1__action__Navigate_SendGoal_Request__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_SendGoal_Request__Sequence__copy(
  const version1__action__Navigate_SendGoal_Request__Sequence * input,
  version1__action__Navigate_SendGoal_Request__Sequence * output);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * version1__action__Navigate_SendGoal_Response
 * )) before or use
 * version1__action__Navigate_SendGoal_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_SendGoal_Response__init(version1__action__Navigate_SendGoal_Response * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_SendGoal_Response__fini(version1__action__Navigate_SendGoal_Response * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * version1__action__Navigate_SendGoal_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_SendGoal_Response *
version1__action__Navigate_SendGoal_Response__create();

/// Destroy action/Navigate message.
/**
 * It calls
 * version1__action__Navigate_SendGoal_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_SendGoal_Response__destroy(version1__action__Navigate_SendGoal_Response * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_SendGoal_Response__are_equal(const version1__action__Navigate_SendGoal_Response * lhs, const version1__action__Navigate_SendGoal_Response * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_SendGoal_Response__copy(
  const version1__action__Navigate_SendGoal_Response * input,
  version1__action__Navigate_SendGoal_Response * output);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * version1__action__Navigate_SendGoal_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_SendGoal_Response__Sequence__init(version1__action__Navigate_SendGoal_Response__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_SendGoal_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_SendGoal_Response__Sequence__fini(version1__action__Navigate_SendGoal_Response__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * version1__action__Navigate_SendGoal_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_SendGoal_Response__Sequence *
version1__action__Navigate_SendGoal_Response__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_SendGoal_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_SendGoal_Response__Sequence__destroy(version1__action__Navigate_SendGoal_Response__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_SendGoal_Response__Sequence__are_equal(const version1__action__Navigate_SendGoal_Response__Sequence * lhs, const version1__action__Navigate_SendGoal_Response__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_SendGoal_Response__Sequence__copy(
  const version1__action__Navigate_SendGoal_Response__Sequence * input,
  version1__action__Navigate_SendGoal_Response__Sequence * output);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * version1__action__Navigate_GetResult_Request
 * )) before or use
 * version1__action__Navigate_GetResult_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_GetResult_Request__init(version1__action__Navigate_GetResult_Request * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_GetResult_Request__fini(version1__action__Navigate_GetResult_Request * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * version1__action__Navigate_GetResult_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_GetResult_Request *
version1__action__Navigate_GetResult_Request__create();

/// Destroy action/Navigate message.
/**
 * It calls
 * version1__action__Navigate_GetResult_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_GetResult_Request__destroy(version1__action__Navigate_GetResult_Request * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_GetResult_Request__are_equal(const version1__action__Navigate_GetResult_Request * lhs, const version1__action__Navigate_GetResult_Request * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_GetResult_Request__copy(
  const version1__action__Navigate_GetResult_Request * input,
  version1__action__Navigate_GetResult_Request * output);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * version1__action__Navigate_GetResult_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_GetResult_Request__Sequence__init(version1__action__Navigate_GetResult_Request__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_GetResult_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_GetResult_Request__Sequence__fini(version1__action__Navigate_GetResult_Request__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * version1__action__Navigate_GetResult_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_GetResult_Request__Sequence *
version1__action__Navigate_GetResult_Request__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_GetResult_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_GetResult_Request__Sequence__destroy(version1__action__Navigate_GetResult_Request__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_GetResult_Request__Sequence__are_equal(const version1__action__Navigate_GetResult_Request__Sequence * lhs, const version1__action__Navigate_GetResult_Request__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_GetResult_Request__Sequence__copy(
  const version1__action__Navigate_GetResult_Request__Sequence * input,
  version1__action__Navigate_GetResult_Request__Sequence * output);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * version1__action__Navigate_GetResult_Response
 * )) before or use
 * version1__action__Navigate_GetResult_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_GetResult_Response__init(version1__action__Navigate_GetResult_Response * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_GetResult_Response__fini(version1__action__Navigate_GetResult_Response * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * version1__action__Navigate_GetResult_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_GetResult_Response *
version1__action__Navigate_GetResult_Response__create();

/// Destroy action/Navigate message.
/**
 * It calls
 * version1__action__Navigate_GetResult_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_GetResult_Response__destroy(version1__action__Navigate_GetResult_Response * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_GetResult_Response__are_equal(const version1__action__Navigate_GetResult_Response * lhs, const version1__action__Navigate_GetResult_Response * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_GetResult_Response__copy(
  const version1__action__Navigate_GetResult_Response * input,
  version1__action__Navigate_GetResult_Response * output);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * version1__action__Navigate_GetResult_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_GetResult_Response__Sequence__init(version1__action__Navigate_GetResult_Response__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_GetResult_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_GetResult_Response__Sequence__fini(version1__action__Navigate_GetResult_Response__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * version1__action__Navigate_GetResult_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_GetResult_Response__Sequence *
version1__action__Navigate_GetResult_Response__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_GetResult_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_GetResult_Response__Sequence__destroy(version1__action__Navigate_GetResult_Response__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_GetResult_Response__Sequence__are_equal(const version1__action__Navigate_GetResult_Response__Sequence * lhs, const version1__action__Navigate_GetResult_Response__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_GetResult_Response__Sequence__copy(
  const version1__action__Navigate_GetResult_Response__Sequence * input,
  version1__action__Navigate_GetResult_Response__Sequence * output);

/// Initialize action/Navigate message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * version1__action__Navigate_FeedbackMessage
 * )) before or use
 * version1__action__Navigate_FeedbackMessage__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_FeedbackMessage__init(version1__action__Navigate_FeedbackMessage * msg);

/// Finalize action/Navigate message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_FeedbackMessage__fini(version1__action__Navigate_FeedbackMessage * msg);

/// Create action/Navigate message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * version1__action__Navigate_FeedbackMessage__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_FeedbackMessage *
version1__action__Navigate_FeedbackMessage__create();

/// Destroy action/Navigate message.
/**
 * It calls
 * version1__action__Navigate_FeedbackMessage__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_FeedbackMessage__destroy(version1__action__Navigate_FeedbackMessage * msg);

/// Check for action/Navigate message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_FeedbackMessage__are_equal(const version1__action__Navigate_FeedbackMessage * lhs, const version1__action__Navigate_FeedbackMessage * rhs);

/// Copy a action/Navigate message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_FeedbackMessage__copy(
  const version1__action__Navigate_FeedbackMessage * input,
  version1__action__Navigate_FeedbackMessage * output);

/// Initialize array of action/Navigate messages.
/**
 * It allocates the memory for the number of elements and calls
 * version1__action__Navigate_FeedbackMessage__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_FeedbackMessage__Sequence__init(version1__action__Navigate_FeedbackMessage__Sequence * array, size_t size);

/// Finalize array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_FeedbackMessage__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_FeedbackMessage__Sequence__fini(version1__action__Navigate_FeedbackMessage__Sequence * array);

/// Create array of action/Navigate messages.
/**
 * It allocates the memory for the array and calls
 * version1__action__Navigate_FeedbackMessage__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
version1__action__Navigate_FeedbackMessage__Sequence *
version1__action__Navigate_FeedbackMessage__Sequence__create(size_t size);

/// Destroy array of action/Navigate messages.
/**
 * It calls
 * version1__action__Navigate_FeedbackMessage__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
void
version1__action__Navigate_FeedbackMessage__Sequence__destroy(version1__action__Navigate_FeedbackMessage__Sequence * array);

/// Check for action/Navigate message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_FeedbackMessage__Sequence__are_equal(const version1__action__Navigate_FeedbackMessage__Sequence * lhs, const version1__action__Navigate_FeedbackMessage__Sequence * rhs);

/// Copy an array of action/Navigate messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_version1
bool
version1__action__Navigate_FeedbackMessage__Sequence__copy(
  const version1__action__Navigate_FeedbackMessage__Sequence * input,
  version1__action__Navigate_FeedbackMessage__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // VERSION1__ACTION__DETAIL__NAVIGATE__FUNCTIONS_H_
