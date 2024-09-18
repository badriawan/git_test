// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from llm_interfaces:msg/ChatGPT.idl
// generated code does not contain a copyright notice

#ifndef LLM_INTERFACES__MSG__DETAIL__CHAT_GPT__FUNCTIONS_H_
#define LLM_INTERFACES__MSG__DETAIL__CHAT_GPT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "llm_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "llm_interfaces/msg/detail/chat_gpt__struct.h"

/// Initialize msg/ChatGPT message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * llm_interfaces__msg__ChatGPT
 * )) before or use
 * llm_interfaces__msg__ChatGPT__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_interfaces
bool
llm_interfaces__msg__ChatGPT__init(llm_interfaces__msg__ChatGPT * msg);

/// Finalize msg/ChatGPT message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_interfaces
void
llm_interfaces__msg__ChatGPT__fini(llm_interfaces__msg__ChatGPT * msg);

/// Create msg/ChatGPT message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * llm_interfaces__msg__ChatGPT__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_interfaces
llm_interfaces__msg__ChatGPT *
llm_interfaces__msg__ChatGPT__create();

/// Destroy msg/ChatGPT message.
/**
 * It calls
 * llm_interfaces__msg__ChatGPT__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_interfaces
void
llm_interfaces__msg__ChatGPT__destroy(llm_interfaces__msg__ChatGPT * msg);

/// Check for msg/ChatGPT message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_interfaces
bool
llm_interfaces__msg__ChatGPT__are_equal(const llm_interfaces__msg__ChatGPT * lhs, const llm_interfaces__msg__ChatGPT * rhs);

/// Copy a msg/ChatGPT message.
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
ROSIDL_GENERATOR_C_PUBLIC_llm_interfaces
bool
llm_interfaces__msg__ChatGPT__copy(
  const llm_interfaces__msg__ChatGPT * input,
  llm_interfaces__msg__ChatGPT * output);

/// Initialize array of msg/ChatGPT messages.
/**
 * It allocates the memory for the number of elements and calls
 * llm_interfaces__msg__ChatGPT__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_interfaces
bool
llm_interfaces__msg__ChatGPT__Sequence__init(llm_interfaces__msg__ChatGPT__Sequence * array, size_t size);

/// Finalize array of msg/ChatGPT messages.
/**
 * It calls
 * llm_interfaces__msg__ChatGPT__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_interfaces
void
llm_interfaces__msg__ChatGPT__Sequence__fini(llm_interfaces__msg__ChatGPT__Sequence * array);

/// Create array of msg/ChatGPT messages.
/**
 * It allocates the memory for the array and calls
 * llm_interfaces__msg__ChatGPT__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_interfaces
llm_interfaces__msg__ChatGPT__Sequence *
llm_interfaces__msg__ChatGPT__Sequence__create(size_t size);

/// Destroy array of msg/ChatGPT messages.
/**
 * It calls
 * llm_interfaces__msg__ChatGPT__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_interfaces
void
llm_interfaces__msg__ChatGPT__Sequence__destroy(llm_interfaces__msg__ChatGPT__Sequence * array);

/// Check for msg/ChatGPT message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_llm_interfaces
bool
llm_interfaces__msg__ChatGPT__Sequence__are_equal(const llm_interfaces__msg__ChatGPT__Sequence * lhs, const llm_interfaces__msg__ChatGPT__Sequence * rhs);

/// Copy an array of msg/ChatGPT messages.
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
ROSIDL_GENERATOR_C_PUBLIC_llm_interfaces
bool
llm_interfaces__msg__ChatGPT__Sequence__copy(
  const llm_interfaces__msg__ChatGPT__Sequence * input,
  llm_interfaces__msg__ChatGPT__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LLM_INTERFACES__MSG__DETAIL__CHAT_GPT__FUNCTIONS_H_
