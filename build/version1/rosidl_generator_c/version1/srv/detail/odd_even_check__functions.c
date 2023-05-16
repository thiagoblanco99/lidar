// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from version1:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice
#include "version1/srv/detail/odd_even_check__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
version1__srv__OddEvenCheck_Request__init(version1__srv__OddEvenCheck_Request * msg)
{
  if (!msg) {
    return false;
  }
  // number
  return true;
}

void
version1__srv__OddEvenCheck_Request__fini(version1__srv__OddEvenCheck_Request * msg)
{
  if (!msg) {
    return;
  }
  // number
}

bool
version1__srv__OddEvenCheck_Request__are_equal(const version1__srv__OddEvenCheck_Request * lhs, const version1__srv__OddEvenCheck_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // number
  if (lhs->number != rhs->number) {
    return false;
  }
  return true;
}

bool
version1__srv__OddEvenCheck_Request__copy(
  const version1__srv__OddEvenCheck_Request * input,
  version1__srv__OddEvenCheck_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // number
  output->number = input->number;
  return true;
}

version1__srv__OddEvenCheck_Request *
version1__srv__OddEvenCheck_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version1__srv__OddEvenCheck_Request * msg = (version1__srv__OddEvenCheck_Request *)allocator.allocate(sizeof(version1__srv__OddEvenCheck_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(version1__srv__OddEvenCheck_Request));
  bool success = version1__srv__OddEvenCheck_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
version1__srv__OddEvenCheck_Request__destroy(version1__srv__OddEvenCheck_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    version1__srv__OddEvenCheck_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
version1__srv__OddEvenCheck_Request__Sequence__init(version1__srv__OddEvenCheck_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version1__srv__OddEvenCheck_Request * data = NULL;

  if (size) {
    data = (version1__srv__OddEvenCheck_Request *)allocator.zero_allocate(size, sizeof(version1__srv__OddEvenCheck_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = version1__srv__OddEvenCheck_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        version1__srv__OddEvenCheck_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
version1__srv__OddEvenCheck_Request__Sequence__fini(version1__srv__OddEvenCheck_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      version1__srv__OddEvenCheck_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

version1__srv__OddEvenCheck_Request__Sequence *
version1__srv__OddEvenCheck_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version1__srv__OddEvenCheck_Request__Sequence * array = (version1__srv__OddEvenCheck_Request__Sequence *)allocator.allocate(sizeof(version1__srv__OddEvenCheck_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = version1__srv__OddEvenCheck_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
version1__srv__OddEvenCheck_Request__Sequence__destroy(version1__srv__OddEvenCheck_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    version1__srv__OddEvenCheck_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
version1__srv__OddEvenCheck_Request__Sequence__are_equal(const version1__srv__OddEvenCheck_Request__Sequence * lhs, const version1__srv__OddEvenCheck_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!version1__srv__OddEvenCheck_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
version1__srv__OddEvenCheck_Request__Sequence__copy(
  const version1__srv__OddEvenCheck_Request__Sequence * input,
  version1__srv__OddEvenCheck_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(version1__srv__OddEvenCheck_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    version1__srv__OddEvenCheck_Request * data =
      (version1__srv__OddEvenCheck_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!version1__srv__OddEvenCheck_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          version1__srv__OddEvenCheck_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!version1__srv__OddEvenCheck_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `decision`
#include "rosidl_runtime_c/string_functions.h"

bool
version1__srv__OddEvenCheck_Response__init(version1__srv__OddEvenCheck_Response * msg)
{
  if (!msg) {
    return false;
  }
  // decision
  if (!rosidl_runtime_c__String__init(&msg->decision)) {
    version1__srv__OddEvenCheck_Response__fini(msg);
    return false;
  }
  return true;
}

void
version1__srv__OddEvenCheck_Response__fini(version1__srv__OddEvenCheck_Response * msg)
{
  if (!msg) {
    return;
  }
  // decision
  rosidl_runtime_c__String__fini(&msg->decision);
}

bool
version1__srv__OddEvenCheck_Response__are_equal(const version1__srv__OddEvenCheck_Response * lhs, const version1__srv__OddEvenCheck_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // decision
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->decision), &(rhs->decision)))
  {
    return false;
  }
  return true;
}

bool
version1__srv__OddEvenCheck_Response__copy(
  const version1__srv__OddEvenCheck_Response * input,
  version1__srv__OddEvenCheck_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // decision
  if (!rosidl_runtime_c__String__copy(
      &(input->decision), &(output->decision)))
  {
    return false;
  }
  return true;
}

version1__srv__OddEvenCheck_Response *
version1__srv__OddEvenCheck_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version1__srv__OddEvenCheck_Response * msg = (version1__srv__OddEvenCheck_Response *)allocator.allocate(sizeof(version1__srv__OddEvenCheck_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(version1__srv__OddEvenCheck_Response));
  bool success = version1__srv__OddEvenCheck_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
version1__srv__OddEvenCheck_Response__destroy(version1__srv__OddEvenCheck_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    version1__srv__OddEvenCheck_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
version1__srv__OddEvenCheck_Response__Sequence__init(version1__srv__OddEvenCheck_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version1__srv__OddEvenCheck_Response * data = NULL;

  if (size) {
    data = (version1__srv__OddEvenCheck_Response *)allocator.zero_allocate(size, sizeof(version1__srv__OddEvenCheck_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = version1__srv__OddEvenCheck_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        version1__srv__OddEvenCheck_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
version1__srv__OddEvenCheck_Response__Sequence__fini(version1__srv__OddEvenCheck_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      version1__srv__OddEvenCheck_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

version1__srv__OddEvenCheck_Response__Sequence *
version1__srv__OddEvenCheck_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version1__srv__OddEvenCheck_Response__Sequence * array = (version1__srv__OddEvenCheck_Response__Sequence *)allocator.allocate(sizeof(version1__srv__OddEvenCheck_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = version1__srv__OddEvenCheck_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
version1__srv__OddEvenCheck_Response__Sequence__destroy(version1__srv__OddEvenCheck_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    version1__srv__OddEvenCheck_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
version1__srv__OddEvenCheck_Response__Sequence__are_equal(const version1__srv__OddEvenCheck_Response__Sequence * lhs, const version1__srv__OddEvenCheck_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!version1__srv__OddEvenCheck_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
version1__srv__OddEvenCheck_Response__Sequence__copy(
  const version1__srv__OddEvenCheck_Response__Sequence * input,
  version1__srv__OddEvenCheck_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(version1__srv__OddEvenCheck_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    version1__srv__OddEvenCheck_Response * data =
      (version1__srv__OddEvenCheck_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!version1__srv__OddEvenCheck_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          version1__srv__OddEvenCheck_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!version1__srv__OddEvenCheck_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
