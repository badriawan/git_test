// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from llm_interfaces:srv/ChatGPT.idl
// generated code does not contain a copyright notice

#ifndef LLM_INTERFACES__SRV__DETAIL__CHAT_GPT__STRUCT_HPP_
#define LLM_INTERFACES__SRV__DETAIL__CHAT_GPT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__llm_interfaces__srv__ChatGPT_Request __attribute__((deprecated))
#else
# define DEPRECATED__llm_interfaces__srv__ChatGPT_Request __declspec(deprecated)
#endif

namespace llm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChatGPT_Request_
{
  using Type = ChatGPT_Request_<ContainerAllocator>;

  explicit ChatGPT_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_text = "";
    }
  }

  explicit ChatGPT_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : request_text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->request_text = "";
    }
  }

  // field types and members
  using _request_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _request_text_type request_text;

  // setters for named parameter idiom
  Type & set__request_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->request_text = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llm_interfaces::srv::ChatGPT_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const llm_interfaces::srv::ChatGPT_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llm_interfaces::srv::ChatGPT_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llm_interfaces::srv::ChatGPT_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llm_interfaces::srv::ChatGPT_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llm_interfaces::srv::ChatGPT_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llm_interfaces::srv::ChatGPT_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llm_interfaces::srv::ChatGPT_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llm_interfaces::srv::ChatGPT_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llm_interfaces::srv::ChatGPT_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llm_interfaces__srv__ChatGPT_Request
    std::shared_ptr<llm_interfaces::srv::ChatGPT_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llm_interfaces__srv__ChatGPT_Request
    std::shared_ptr<llm_interfaces::srv::ChatGPT_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChatGPT_Request_ & other) const
  {
    if (this->request_text != other.request_text) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChatGPT_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChatGPT_Request_

// alias to use template instance with default allocator
using ChatGPT_Request =
  llm_interfaces::srv::ChatGPT_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace llm_interfaces


#ifndef _WIN32
# define DEPRECATED__llm_interfaces__srv__ChatGPT_Response __attribute__((deprecated))
#else
# define DEPRECATED__llm_interfaces__srv__ChatGPT_Response __declspec(deprecated)
#endif

namespace llm_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChatGPT_Response_
{
  using Type = ChatGPT_Response_<ContainerAllocator>;

  explicit ChatGPT_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response_text = "";
    }
  }

  explicit ChatGPT_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : response_text(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->response_text = "";
    }
  }

  // field types and members
  using _response_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _response_text_type response_text;

  // setters for named parameter idiom
  Type & set__response_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->response_text = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    llm_interfaces::srv::ChatGPT_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const llm_interfaces::srv::ChatGPT_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<llm_interfaces::srv::ChatGPT_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<llm_interfaces::srv::ChatGPT_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      llm_interfaces::srv::ChatGPT_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<llm_interfaces::srv::ChatGPT_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      llm_interfaces::srv::ChatGPT_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<llm_interfaces::srv::ChatGPT_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<llm_interfaces::srv::ChatGPT_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<llm_interfaces::srv::ChatGPT_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__llm_interfaces__srv__ChatGPT_Response
    std::shared_ptr<llm_interfaces::srv::ChatGPT_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__llm_interfaces__srv__ChatGPT_Response
    std::shared_ptr<llm_interfaces::srv::ChatGPT_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChatGPT_Response_ & other) const
  {
    if (this->response_text != other.response_text) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChatGPT_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChatGPT_Response_

// alias to use template instance with default allocator
using ChatGPT_Response =
  llm_interfaces::srv::ChatGPT_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace llm_interfaces

namespace llm_interfaces
{

namespace srv
{

struct ChatGPT
{
  using Request = llm_interfaces::srv::ChatGPT_Request;
  using Response = llm_interfaces::srv::ChatGPT_Response;
};

}  // namespace srv

}  // namespace llm_interfaces

#endif  // LLM_INTERFACES__SRV__DETAIL__CHAT_GPT__STRUCT_HPP_
