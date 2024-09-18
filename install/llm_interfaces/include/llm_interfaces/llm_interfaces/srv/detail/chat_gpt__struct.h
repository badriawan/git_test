// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from llm_interfaces:srv/ChatGPT.idl
// generated code does not contain a copyright notice

#ifndef LLM_INTERFACES__SRV__DETAIL__CHAT_GPT__STRUCT_H_
#define LLM_INTERFACES__SRV__DETAIL__CHAT_GPT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'request_text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ChatGPT in the package llm_interfaces.
typedef struct llm_interfaces__srv__ChatGPT_Request
{
  rosidl_runtime_c__String request_text;
} llm_interfaces__srv__ChatGPT_Request;

// Struct for a sequence of llm_interfaces__srv__ChatGPT_Request.
typedef struct llm_interfaces__srv__ChatGPT_Request__Sequence
{
  llm_interfaces__srv__ChatGPT_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_interfaces__srv__ChatGPT_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'response_text'
// already included above
// #include "rosidl_runtime_c/string.h"

/// Struct defined in srv/ChatGPT in the package llm_interfaces.
typedef struct llm_interfaces__srv__ChatGPT_Response
{
  rosidl_runtime_c__String response_text;
} llm_interfaces__srv__ChatGPT_Response;

// Struct for a sequence of llm_interfaces__srv__ChatGPT_Response.
typedef struct llm_interfaces__srv__ChatGPT_Response__Sequence
{
  llm_interfaces__srv__ChatGPT_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} llm_interfaces__srv__ChatGPT_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LLM_INTERFACES__SRV__DETAIL__CHAT_GPT__STRUCT_H_
