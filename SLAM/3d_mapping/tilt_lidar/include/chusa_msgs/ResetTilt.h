// Generated by gencpp from file chusa_msgs/ResetTilt.msg
// DO NOT EDIT!


#ifndef CHUSA_MSGS_MESSAGE_RESETTILT_H
#define CHUSA_MSGS_MESSAGE_RESETTILT_H

#include <ros/service_traits.h>


#include <chusa_msgs/ResetTiltRequest.h>
#include <chusa_msgs/ResetTiltResponse.h>


namespace chusa_msgs
{

struct ResetTilt
{

typedef ResetTiltRequest Request;
typedef ResetTiltResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ResetTilt
} // namespace chusa_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::chusa_msgs::ResetTilt > {
  static const char* value()
  {
    return "ba4b0b221fb425ac5eaf73f71ae34971";
  }

  static const char* value(const ::chusa_msgs::ResetTilt&) { return value(); }
};

template<>
struct DataType< ::chusa_msgs::ResetTilt > {
  static const char* value()
  {
    return "chusa_msgs/ResetTilt";
  }

  static const char* value(const ::chusa_msgs::ResetTilt&) { return value(); }
};


// service_traits::MD5Sum< ::chusa_msgs::ResetTiltRequest> should match 
// service_traits::MD5Sum< ::chusa_msgs::ResetTilt > 
template<>
struct MD5Sum< ::chusa_msgs::ResetTiltRequest>
{
  static const char* value()
  {
    return MD5Sum< ::chusa_msgs::ResetTilt >::value();
  }
  static const char* value(const ::chusa_msgs::ResetTiltRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::chusa_msgs::ResetTiltRequest> should match 
// service_traits::DataType< ::chusa_msgs::ResetTilt > 
template<>
struct DataType< ::chusa_msgs::ResetTiltRequest>
{
  static const char* value()
  {
    return DataType< ::chusa_msgs::ResetTilt >::value();
  }
  static const char* value(const ::chusa_msgs::ResetTiltRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::chusa_msgs::ResetTiltResponse> should match 
// service_traits::MD5Sum< ::chusa_msgs::ResetTilt > 
template<>
struct MD5Sum< ::chusa_msgs::ResetTiltResponse>
{
  static const char* value()
  {
    return MD5Sum< ::chusa_msgs::ResetTilt >::value();
  }
  static const char* value(const ::chusa_msgs::ResetTiltResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::chusa_msgs::ResetTiltResponse> should match 
// service_traits::DataType< ::chusa_msgs::ResetTilt > 
template<>
struct DataType< ::chusa_msgs::ResetTiltResponse>
{
  static const char* value()
  {
    return DataType< ::chusa_msgs::ResetTilt >::value();
  }
  static const char* value(const ::chusa_msgs::ResetTiltResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CHUSA_MSGS_MESSAGE_RESETTILT_H
