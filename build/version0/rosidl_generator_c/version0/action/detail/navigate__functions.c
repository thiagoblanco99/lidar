// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from version0:action/Navigate.idl
// generated code does not contain a copyright notice
#include "version0/action/detail/navigate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `goal_point`
#include "geometry_msgs/msg/detail/point__functions.h"

bool
version0__action__Navigate_Goal__init(version0__action__Navigate_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__init(&msg->goal_point)) {
    version0__action__Navigate_Goal__fini(msg);
    return false;
  }
  return true;
}

void
version0__action__Navigate_Goal__fini(version0__action__Navigate_Goal * msg)
{
  if (!msg) {
    return;
  }
  // goal_point
  geometry_msgs__msg__Point__fini(&msg->goal_point);
}

bool
version0__action__Navigate_Goal__are_equal(const version0__action__Navigate_Goal * lhs, const version0__action__Navigate_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->goal_point), &(rhs->goal_point)))
  {
    return false;
  }
  return true;
}

bool
version0__action__Navigate_Goal__copy(
  const version0__action__Navigate_Goal * input,
  version0__action__Navigate_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_point
  if (!geometry_msgs__msg__Point__copy(
      &(input->goal_point), &(output->goal_point)))
  {
    return false;
  }
  return true;
}

version0__action__Navigate_Goal *
version0__action__Navigate_Goal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_Goal * msg = (version0__action__Navigate_Goal *)allocator.allocate(sizeof(version0__action__Navigate_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(version0__action__Navigate_Goal));
  bool success = version0__action__Navigate_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
version0__action__Navigate_Goal__destroy(version0__action__Navigate_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    version0__action__Navigate_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
version0__action__Navigate_Goal__Sequence__init(version0__action__Navigate_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_Goal * data = NULL;

  if (size) {
    data = (version0__action__Navigate_Goal *)allocator.zero_allocate(size, sizeof(version0__action__Navigate_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = version0__action__Navigate_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        version0__action__Navigate_Goal__fini(&data[i - 1]);
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
version0__action__Navigate_Goal__Sequence__fini(version0__action__Navigate_Goal__Sequence * array)
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
      version0__action__Navigate_Goal__fini(&array->data[i]);
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

version0__action__Navigate_Goal__Sequence *
version0__action__Navigate_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_Goal__Sequence * array = (version0__action__Navigate_Goal__Sequence *)allocator.allocate(sizeof(version0__action__Navigate_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = version0__action__Navigate_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
version0__action__Navigate_Goal__Sequence__destroy(version0__action__Navigate_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    version0__action__Navigate_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
version0__action__Navigate_Goal__Sequence__are_equal(const version0__action__Navigate_Goal__Sequence * lhs, const version0__action__Navigate_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!version0__action__Navigate_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
version0__action__Navigate_Goal__Sequence__copy(
  const version0__action__Navigate_Goal__Sequence * input,
  version0__action__Navigate_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(version0__action__Navigate_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    version0__action__Navigate_Goal * data =
      (version0__action__Navigate_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!version0__action__Navigate_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          version0__action__Navigate_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!version0__action__Navigate_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
version0__action__Navigate_Result__init(version0__action__Navigate_Result * msg)
{
  if (!msg) {
    return false;
  }
  // elapsed_time
  return true;
}

void
version0__action__Navigate_Result__fini(version0__action__Navigate_Result * msg)
{
  if (!msg) {
    return;
  }
  // elapsed_time
}

bool
version0__action__Navigate_Result__are_equal(const version0__action__Navigate_Result * lhs, const version0__action__Navigate_Result * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // elapsed_time
  if (lhs->elapsed_time != rhs->elapsed_time) {
    return false;
  }
  return true;
}

bool
version0__action__Navigate_Result__copy(
  const version0__action__Navigate_Result * input,
  version0__action__Navigate_Result * output)
{
  if (!input || !output) {
    return false;
  }
  // elapsed_time
  output->elapsed_time = input->elapsed_time;
  return true;
}

version0__action__Navigate_Result *
version0__action__Navigate_Result__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_Result * msg = (version0__action__Navigate_Result *)allocator.allocate(sizeof(version0__action__Navigate_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(version0__action__Navigate_Result));
  bool success = version0__action__Navigate_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
version0__action__Navigate_Result__destroy(version0__action__Navigate_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    version0__action__Navigate_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
version0__action__Navigate_Result__Sequence__init(version0__action__Navigate_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_Result * data = NULL;

  if (size) {
    data = (version0__action__Navigate_Result *)allocator.zero_allocate(size, sizeof(version0__action__Navigate_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = version0__action__Navigate_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        version0__action__Navigate_Result__fini(&data[i - 1]);
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
version0__action__Navigate_Result__Sequence__fini(version0__action__Navigate_Result__Sequence * array)
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
      version0__action__Navigate_Result__fini(&array->data[i]);
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

version0__action__Navigate_Result__Sequence *
version0__action__Navigate_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_Result__Sequence * array = (version0__action__Navigate_Result__Sequence *)allocator.allocate(sizeof(version0__action__Navigate_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = version0__action__Navigate_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
version0__action__Navigate_Result__Sequence__destroy(version0__action__Navigate_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    version0__action__Navigate_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
version0__action__Navigate_Result__Sequence__are_equal(const version0__action__Navigate_Result__Sequence * lhs, const version0__action__Navigate_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!version0__action__Navigate_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
version0__action__Navigate_Result__Sequence__copy(
  const version0__action__Navigate_Result__Sequence * input,
  version0__action__Navigate_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(version0__action__Navigate_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    version0__action__Navigate_Result * data =
      (version0__action__Navigate_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!version0__action__Navigate_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          version0__action__Navigate_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!version0__action__Navigate_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
version0__action__Navigate_Feedback__init(version0__action__Navigate_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // distance_to_point
  return true;
}

void
version0__action__Navigate_Feedback__fini(version0__action__Navigate_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // distance_to_point
}

bool
version0__action__Navigate_Feedback__are_equal(const version0__action__Navigate_Feedback * lhs, const version0__action__Navigate_Feedback * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // distance_to_point
  if (lhs->distance_to_point != rhs->distance_to_point) {
    return false;
  }
  return true;
}

bool
version0__action__Navigate_Feedback__copy(
  const version0__action__Navigate_Feedback * input,
  version0__action__Navigate_Feedback * output)
{
  if (!input || !output) {
    return false;
  }
  // distance_to_point
  output->distance_to_point = input->distance_to_point;
  return true;
}

version0__action__Navigate_Feedback *
version0__action__Navigate_Feedback__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_Feedback * msg = (version0__action__Navigate_Feedback *)allocator.allocate(sizeof(version0__action__Navigate_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(version0__action__Navigate_Feedback));
  bool success = version0__action__Navigate_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
version0__action__Navigate_Feedback__destroy(version0__action__Navigate_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    version0__action__Navigate_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
version0__action__Navigate_Feedback__Sequence__init(version0__action__Navigate_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_Feedback * data = NULL;

  if (size) {
    data = (version0__action__Navigate_Feedback *)allocator.zero_allocate(size, sizeof(version0__action__Navigate_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = version0__action__Navigate_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        version0__action__Navigate_Feedback__fini(&data[i - 1]);
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
version0__action__Navigate_Feedback__Sequence__fini(version0__action__Navigate_Feedback__Sequence * array)
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
      version0__action__Navigate_Feedback__fini(&array->data[i]);
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

version0__action__Navigate_Feedback__Sequence *
version0__action__Navigate_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_Feedback__Sequence * array = (version0__action__Navigate_Feedback__Sequence *)allocator.allocate(sizeof(version0__action__Navigate_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = version0__action__Navigate_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
version0__action__Navigate_Feedback__Sequence__destroy(version0__action__Navigate_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    version0__action__Navigate_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
version0__action__Navigate_Feedback__Sequence__are_equal(const version0__action__Navigate_Feedback__Sequence * lhs, const version0__action__Navigate_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!version0__action__Navigate_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
version0__action__Navigate_Feedback__Sequence__copy(
  const version0__action__Navigate_Feedback__Sequence * input,
  version0__action__Navigate_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(version0__action__Navigate_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    version0__action__Navigate_Feedback * data =
      (version0__action__Navigate_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!version0__action__Navigate_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          version0__action__Navigate_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!version0__action__Navigate_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "version0/action/detail/navigate__functions.h"

bool
version0__action__Navigate_SendGoal_Request__init(version0__action__Navigate_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    version0__action__Navigate_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!version0__action__Navigate_Goal__init(&msg->goal)) {
    version0__action__Navigate_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
version0__action__Navigate_SendGoal_Request__fini(version0__action__Navigate_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  version0__action__Navigate_Goal__fini(&msg->goal);
}

bool
version0__action__Navigate_SendGoal_Request__are_equal(const version0__action__Navigate_SendGoal_Request * lhs, const version0__action__Navigate_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!version0__action__Navigate_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
version0__action__Navigate_SendGoal_Request__copy(
  const version0__action__Navigate_SendGoal_Request * input,
  version0__action__Navigate_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!version0__action__Navigate_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

version0__action__Navigate_SendGoal_Request *
version0__action__Navigate_SendGoal_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_SendGoal_Request * msg = (version0__action__Navigate_SendGoal_Request *)allocator.allocate(sizeof(version0__action__Navigate_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(version0__action__Navigate_SendGoal_Request));
  bool success = version0__action__Navigate_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
version0__action__Navigate_SendGoal_Request__destroy(version0__action__Navigate_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    version0__action__Navigate_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
version0__action__Navigate_SendGoal_Request__Sequence__init(version0__action__Navigate_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_SendGoal_Request * data = NULL;

  if (size) {
    data = (version0__action__Navigate_SendGoal_Request *)allocator.zero_allocate(size, sizeof(version0__action__Navigate_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = version0__action__Navigate_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        version0__action__Navigate_SendGoal_Request__fini(&data[i - 1]);
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
version0__action__Navigate_SendGoal_Request__Sequence__fini(version0__action__Navigate_SendGoal_Request__Sequence * array)
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
      version0__action__Navigate_SendGoal_Request__fini(&array->data[i]);
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

version0__action__Navigate_SendGoal_Request__Sequence *
version0__action__Navigate_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_SendGoal_Request__Sequence * array = (version0__action__Navigate_SendGoal_Request__Sequence *)allocator.allocate(sizeof(version0__action__Navigate_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = version0__action__Navigate_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
version0__action__Navigate_SendGoal_Request__Sequence__destroy(version0__action__Navigate_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    version0__action__Navigate_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
version0__action__Navigate_SendGoal_Request__Sequence__are_equal(const version0__action__Navigate_SendGoal_Request__Sequence * lhs, const version0__action__Navigate_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!version0__action__Navigate_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
version0__action__Navigate_SendGoal_Request__Sequence__copy(
  const version0__action__Navigate_SendGoal_Request__Sequence * input,
  version0__action__Navigate_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(version0__action__Navigate_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    version0__action__Navigate_SendGoal_Request * data =
      (version0__action__Navigate_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!version0__action__Navigate_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          version0__action__Navigate_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!version0__action__Navigate_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
version0__action__Navigate_SendGoal_Response__init(version0__action__Navigate_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    version0__action__Navigate_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
version0__action__Navigate_SendGoal_Response__fini(version0__action__Navigate_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
version0__action__Navigate_SendGoal_Response__are_equal(const version0__action__Navigate_SendGoal_Response * lhs, const version0__action__Navigate_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
version0__action__Navigate_SendGoal_Response__copy(
  const version0__action__Navigate_SendGoal_Response * input,
  version0__action__Navigate_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

version0__action__Navigate_SendGoal_Response *
version0__action__Navigate_SendGoal_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_SendGoal_Response * msg = (version0__action__Navigate_SendGoal_Response *)allocator.allocate(sizeof(version0__action__Navigate_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(version0__action__Navigate_SendGoal_Response));
  bool success = version0__action__Navigate_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
version0__action__Navigate_SendGoal_Response__destroy(version0__action__Navigate_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    version0__action__Navigate_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
version0__action__Navigate_SendGoal_Response__Sequence__init(version0__action__Navigate_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_SendGoal_Response * data = NULL;

  if (size) {
    data = (version0__action__Navigate_SendGoal_Response *)allocator.zero_allocate(size, sizeof(version0__action__Navigate_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = version0__action__Navigate_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        version0__action__Navigate_SendGoal_Response__fini(&data[i - 1]);
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
version0__action__Navigate_SendGoal_Response__Sequence__fini(version0__action__Navigate_SendGoal_Response__Sequence * array)
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
      version0__action__Navigate_SendGoal_Response__fini(&array->data[i]);
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

version0__action__Navigate_SendGoal_Response__Sequence *
version0__action__Navigate_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_SendGoal_Response__Sequence * array = (version0__action__Navigate_SendGoal_Response__Sequence *)allocator.allocate(sizeof(version0__action__Navigate_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = version0__action__Navigate_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
version0__action__Navigate_SendGoal_Response__Sequence__destroy(version0__action__Navigate_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    version0__action__Navigate_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
version0__action__Navigate_SendGoal_Response__Sequence__are_equal(const version0__action__Navigate_SendGoal_Response__Sequence * lhs, const version0__action__Navigate_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!version0__action__Navigate_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
version0__action__Navigate_SendGoal_Response__Sequence__copy(
  const version0__action__Navigate_SendGoal_Response__Sequence * input,
  version0__action__Navigate_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(version0__action__Navigate_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    version0__action__Navigate_SendGoal_Response * data =
      (version0__action__Navigate_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!version0__action__Navigate_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          version0__action__Navigate_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!version0__action__Navigate_SendGoal_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
version0__action__Navigate_GetResult_Request__init(version0__action__Navigate_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    version0__action__Navigate_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
version0__action__Navigate_GetResult_Request__fini(version0__action__Navigate_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
version0__action__Navigate_GetResult_Request__are_equal(const version0__action__Navigate_GetResult_Request * lhs, const version0__action__Navigate_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
version0__action__Navigate_GetResult_Request__copy(
  const version0__action__Navigate_GetResult_Request * input,
  version0__action__Navigate_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

version0__action__Navigate_GetResult_Request *
version0__action__Navigate_GetResult_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_GetResult_Request * msg = (version0__action__Navigate_GetResult_Request *)allocator.allocate(sizeof(version0__action__Navigate_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(version0__action__Navigate_GetResult_Request));
  bool success = version0__action__Navigate_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
version0__action__Navigate_GetResult_Request__destroy(version0__action__Navigate_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    version0__action__Navigate_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
version0__action__Navigate_GetResult_Request__Sequence__init(version0__action__Navigate_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_GetResult_Request * data = NULL;

  if (size) {
    data = (version0__action__Navigate_GetResult_Request *)allocator.zero_allocate(size, sizeof(version0__action__Navigate_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = version0__action__Navigate_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        version0__action__Navigate_GetResult_Request__fini(&data[i - 1]);
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
version0__action__Navigate_GetResult_Request__Sequence__fini(version0__action__Navigate_GetResult_Request__Sequence * array)
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
      version0__action__Navigate_GetResult_Request__fini(&array->data[i]);
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

version0__action__Navigate_GetResult_Request__Sequence *
version0__action__Navigate_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_GetResult_Request__Sequence * array = (version0__action__Navigate_GetResult_Request__Sequence *)allocator.allocate(sizeof(version0__action__Navigate_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = version0__action__Navigate_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
version0__action__Navigate_GetResult_Request__Sequence__destroy(version0__action__Navigate_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    version0__action__Navigate_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
version0__action__Navigate_GetResult_Request__Sequence__are_equal(const version0__action__Navigate_GetResult_Request__Sequence * lhs, const version0__action__Navigate_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!version0__action__Navigate_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
version0__action__Navigate_GetResult_Request__Sequence__copy(
  const version0__action__Navigate_GetResult_Request__Sequence * input,
  version0__action__Navigate_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(version0__action__Navigate_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    version0__action__Navigate_GetResult_Request * data =
      (version0__action__Navigate_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!version0__action__Navigate_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          version0__action__Navigate_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!version0__action__Navigate_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "version0/action/detail/navigate__functions.h"

bool
version0__action__Navigate_GetResult_Response__init(version0__action__Navigate_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!version0__action__Navigate_Result__init(&msg->result)) {
    version0__action__Navigate_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
version0__action__Navigate_GetResult_Response__fini(version0__action__Navigate_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  version0__action__Navigate_Result__fini(&msg->result);
}

bool
version0__action__Navigate_GetResult_Response__are_equal(const version0__action__Navigate_GetResult_Response * lhs, const version0__action__Navigate_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!version0__action__Navigate_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
version0__action__Navigate_GetResult_Response__copy(
  const version0__action__Navigate_GetResult_Response * input,
  version0__action__Navigate_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!version0__action__Navigate_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

version0__action__Navigate_GetResult_Response *
version0__action__Navigate_GetResult_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_GetResult_Response * msg = (version0__action__Navigate_GetResult_Response *)allocator.allocate(sizeof(version0__action__Navigate_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(version0__action__Navigate_GetResult_Response));
  bool success = version0__action__Navigate_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
version0__action__Navigate_GetResult_Response__destroy(version0__action__Navigate_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    version0__action__Navigate_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
version0__action__Navigate_GetResult_Response__Sequence__init(version0__action__Navigate_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_GetResult_Response * data = NULL;

  if (size) {
    data = (version0__action__Navigate_GetResult_Response *)allocator.zero_allocate(size, sizeof(version0__action__Navigate_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = version0__action__Navigate_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        version0__action__Navigate_GetResult_Response__fini(&data[i - 1]);
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
version0__action__Navigate_GetResult_Response__Sequence__fini(version0__action__Navigate_GetResult_Response__Sequence * array)
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
      version0__action__Navigate_GetResult_Response__fini(&array->data[i]);
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

version0__action__Navigate_GetResult_Response__Sequence *
version0__action__Navigate_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_GetResult_Response__Sequence * array = (version0__action__Navigate_GetResult_Response__Sequence *)allocator.allocate(sizeof(version0__action__Navigate_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = version0__action__Navigate_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
version0__action__Navigate_GetResult_Response__Sequence__destroy(version0__action__Navigate_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    version0__action__Navigate_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
version0__action__Navigate_GetResult_Response__Sequence__are_equal(const version0__action__Navigate_GetResult_Response__Sequence * lhs, const version0__action__Navigate_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!version0__action__Navigate_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
version0__action__Navigate_GetResult_Response__Sequence__copy(
  const version0__action__Navigate_GetResult_Response__Sequence * input,
  version0__action__Navigate_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(version0__action__Navigate_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    version0__action__Navigate_GetResult_Response * data =
      (version0__action__Navigate_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!version0__action__Navigate_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          version0__action__Navigate_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!version0__action__Navigate_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "version0/action/detail/navigate__functions.h"

bool
version0__action__Navigate_FeedbackMessage__init(version0__action__Navigate_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    version0__action__Navigate_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!version0__action__Navigate_Feedback__init(&msg->feedback)) {
    version0__action__Navigate_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
version0__action__Navigate_FeedbackMessage__fini(version0__action__Navigate_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  version0__action__Navigate_Feedback__fini(&msg->feedback);
}

bool
version0__action__Navigate_FeedbackMessage__are_equal(const version0__action__Navigate_FeedbackMessage * lhs, const version0__action__Navigate_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!version0__action__Navigate_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
version0__action__Navigate_FeedbackMessage__copy(
  const version0__action__Navigate_FeedbackMessage * input,
  version0__action__Navigate_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!version0__action__Navigate_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

version0__action__Navigate_FeedbackMessage *
version0__action__Navigate_FeedbackMessage__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_FeedbackMessage * msg = (version0__action__Navigate_FeedbackMessage *)allocator.allocate(sizeof(version0__action__Navigate_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(version0__action__Navigate_FeedbackMessage));
  bool success = version0__action__Navigate_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
version0__action__Navigate_FeedbackMessage__destroy(version0__action__Navigate_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    version0__action__Navigate_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
version0__action__Navigate_FeedbackMessage__Sequence__init(version0__action__Navigate_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_FeedbackMessage * data = NULL;

  if (size) {
    data = (version0__action__Navigate_FeedbackMessage *)allocator.zero_allocate(size, sizeof(version0__action__Navigate_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = version0__action__Navigate_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        version0__action__Navigate_FeedbackMessage__fini(&data[i - 1]);
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
version0__action__Navigate_FeedbackMessage__Sequence__fini(version0__action__Navigate_FeedbackMessage__Sequence * array)
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
      version0__action__Navigate_FeedbackMessage__fini(&array->data[i]);
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

version0__action__Navigate_FeedbackMessage__Sequence *
version0__action__Navigate_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  version0__action__Navigate_FeedbackMessage__Sequence * array = (version0__action__Navigate_FeedbackMessage__Sequence *)allocator.allocate(sizeof(version0__action__Navigate_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = version0__action__Navigate_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
version0__action__Navigate_FeedbackMessage__Sequence__destroy(version0__action__Navigate_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    version0__action__Navigate_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
version0__action__Navigate_FeedbackMessage__Sequence__are_equal(const version0__action__Navigate_FeedbackMessage__Sequence * lhs, const version0__action__Navigate_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!version0__action__Navigate_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
version0__action__Navigate_FeedbackMessage__Sequence__copy(
  const version0__action__Navigate_FeedbackMessage__Sequence * input,
  version0__action__Navigate_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(version0__action__Navigate_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    version0__action__Navigate_FeedbackMessage * data =
      (version0__action__Navigate_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!version0__action__Navigate_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          version0__action__Navigate_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!version0__action__Navigate_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
