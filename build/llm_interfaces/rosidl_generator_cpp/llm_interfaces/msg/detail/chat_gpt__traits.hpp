// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from llm_interfaces:msg/ChatGPT.idl
// generated code does not contain a copyright notice

#ifndef LLM_INTERFACES__MSG__DETAIL__CHAT_GPT__TRAITS_HPP_
#define LLM_INTERFACES__MSG__DETAIL__CHAT_GPT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "llm_interfaces/msg/detail/chat_gpt__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace llm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChatGPT & msg,
  std::ostream & out)
{
  out << "{";
  // member: text
  {
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChatGPT & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "text: ";
    rosidl_generator_traits::value_to_yaml(msg.text, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChatGPT & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace llm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use llm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const llm_interfaces::msg::ChatGPT & msg,
  std::ostream & out, size_t indentation = 0)
{
  llm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use llm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const llm_interfaces::msg::ChatGPT & msg)
{
  return llm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<llm_interfaces::msg::ChatGPT>()
{
  return "llm_interfaces::msg::ChatGPT";
}

template<>
inline const char * name<llm_interfaces::msg::ChatGPT>()
{
  return "llm_interfaces/msg/ChatGPT";
}

template<>
struct has_fixed_size<llm_interfaces::msg::ChatGPT>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<llm_interfaces::msg::ChatGPT>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<llm_interfaces::msg::ChatGPT>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LLM_INTERFACES__MSG__DETAIL__CHAT_GPT__TRAITS_HPP_
