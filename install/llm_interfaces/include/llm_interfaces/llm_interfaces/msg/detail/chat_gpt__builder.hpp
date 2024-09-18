// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from llm_interfaces:msg/ChatGPT.idl
// generated code does not contain a copyright notice

#ifndef LLM_INTERFACES__MSG__DETAIL__CHAT_GPT__BUILDER_HPP_
#define LLM_INTERFACES__MSG__DETAIL__CHAT_GPT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "llm_interfaces/msg/detail/chat_gpt__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace llm_interfaces
{

namespace msg
{

namespace builder
{

class Init_ChatGPT_text
{
public:
  Init_ChatGPT_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::llm_interfaces::msg::ChatGPT text(::llm_interfaces::msg::ChatGPT::_text_type arg)
  {
    msg_.text = std::move(arg);
    return std::move(msg_);
  }

private:
  ::llm_interfaces::msg::ChatGPT msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::llm_interfaces::msg::ChatGPT>()
{
  return llm_interfaces::msg::builder::Init_ChatGPT_text();
}

}  // namespace llm_interfaces

#endif  // LLM_INTERFACES__MSG__DETAIL__CHAT_GPT__BUILDER_HPP_
