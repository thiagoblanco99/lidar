// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from version0:srv/OddEvenCheck.idl
// generated code does not contain a copyright notice

#ifndef VERSION0__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_
#define VERSION0__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "version0/srv/detail/odd_even_check__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace version0
{

namespace srv
{

namespace builder
{

class Init_OddEvenCheck_Request_number
{
public:
  Init_OddEvenCheck_Request_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::version0::srv::OddEvenCheck_Request number(::version0::srv::OddEvenCheck_Request::_number_type arg)
  {
    msg_.number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::version0::srv::OddEvenCheck_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::version0::srv::OddEvenCheck_Request>()
{
  return version0::srv::builder::Init_OddEvenCheck_Request_number();
}

}  // namespace version0


namespace version0
{

namespace srv
{

namespace builder
{

class Init_OddEvenCheck_Response_decision
{
public:
  Init_OddEvenCheck_Response_decision()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::version0::srv::OddEvenCheck_Response decision(::version0::srv::OddEvenCheck_Response::_decision_type arg)
  {
    msg_.decision = std::move(arg);
    return std::move(msg_);
  }

private:
  ::version0::srv::OddEvenCheck_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::version0::srv::OddEvenCheck_Response>()
{
  return version0::srv::builder::Init_OddEvenCheck_Response_decision();
}

}  // namespace version0

#endif  // VERSION0__SRV__DETAIL__ODD_EVEN_CHECK__BUILDER_HPP_
