// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llm_interfaces:msg/ChatGPT.idl
// generated code does not contain a copyright notice

#ifndef LLM_INTERFACES__MSG__DETAIL__CHAT_GPT__STRUCT_HPP_
#define LLM_INTERFACES__MSG__DETAIL__CHAT_GPT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__llm_interfaces__msg__ChatGPT __attribute__((deprecated))
#else
# define DEPRECATED__llm_interfaces__msg__ChatGPT __declspec(deprecated)
#endif

namespace llm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ChatGPT_
{
  using Type = ChatGPT_<ContainerAllocator>;

  explicit ChatGPT_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
    }
  }

  explicit ChatGPT_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->text = "";
    }
  }

  // field types and members
  using _text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _text_type text;

  // setters for named parameter idiom
  Type & set__text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->text = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llm_interfaces::msg::ChatGPT_<ContainerAllocator> *;
  using ConstRawPtr =
    const llm_interfaces::msg::ChatGPT_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llm_interfaces::msg::ChatGPT_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llm_interfaces::msg::ChatGPT_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llm_interfaces::msg::ChatGPT_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llm_interfaces::msg::ChatGPT_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llm_interfaces::msg::ChatGPT_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llm_interfaces::msg::ChatGPT_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llm_interfaces::msg::ChatGPT_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llm_interfaces::msg::ChatGPT_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llm_interfaces__msg__ChatGPT
    std::shared_ptr<llm_interfaces::msg::ChatGPT_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llm_interfaces__msg__ChatGPT
    std::shared_ptr<llm_interfaces::msg::ChatGPT_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChatGPT_ & other) const
  {
    if (this->text != other.text) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChatGPT_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChatGPT_

// alias to use template instance with default allocator
using ChatGPT =
  llm_interfaces::msg::ChatGPT_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace llm_interfaces

#endif  // LLM_INTERFACES__MSG__DETAIL__CHAT_GPT__STRUCT_HPP_
