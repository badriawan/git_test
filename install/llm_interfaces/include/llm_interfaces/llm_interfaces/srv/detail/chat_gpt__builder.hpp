// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llm_interfaces:srv/ChatGPT.idl
// generated code does not contain a copyright notice

#ifndef LLM_INTERFACES__SRV__DETAIL__CHAT_GPT__BUILDER_HPP_
#define LLM_INTERFACES__SRV__DETAIL__CHAT_GPT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llm_interfaces/srv/detail/chat_gpt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChatGPT_Request_request_text
{
public:
  Init_ChatGPT_Request_request_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llm_interfaces::srv::ChatGPT_Request request_text(::llm_interfaces::srv::ChatGPT_Request::_request_text_type arg)
  {
    msg_.request_text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_interfaces::srv::ChatGPT_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_interfaces::srv::ChatGPT_Request>()
{
  return llm_interfaces::srv::builder::Init_ChatGPT_Request_request_text();
}

}  // namespace llm_interfaces


namespace llm_interfaces
{

namespace srv
{

namespace builder
{

class Init_ChatGPT_Response_response_text
{
public:
  Init_ChatGPT_Response_response_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llm_interfaces::srv::ChatGPT_Response response_text(::llm_interfaces::srv::ChatGPT_Response::_response_text_type arg)
  {
    msg_.response_text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_interfaces::srv::ChatGPT_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_interfaces::srv::ChatGPT_Response>()
{
  return llm_interfaces::srv::builder::Init_ChatGPT_Response_response_text();
}

}  // namespace llm_interfaces

#endif  // LLM_INTERFACES__SRV__DETAIL__CHAT_GPT__BUILDER_HPP_
