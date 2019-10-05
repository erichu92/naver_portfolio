// Generated by gencpp from file chusa_msgs/TfFromTiltRequest.msg
// DO NOT EDIT!


#ifndef CHUSA_MSGS_MESSAGE_TFFROMTILTREQUEST_H
#define CHUSA_MSGS_MESSAGE_TFFROMTILTREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace chusa_msgs
{
template <class ContainerAllocator>
struct TfFromTiltRequest_
{
  typedef TfFromTiltRequest_<ContainerAllocator> Type;

  TfFromTiltRequest_()
    : tilt(0.0)  {
    }
  TfFromTiltRequest_(const ContainerAllocator& _alloc)
    : tilt(0.0)  {
  (void)_alloc;
    }



   typedef float _tilt_type;
  _tilt_type tilt;





  typedef boost::shared_ptr< ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> const> ConstPtr;

}; // struct TfFromTiltRequest_

typedef ::chusa_msgs::TfFromTiltRequest_<std::allocator<void> > TfFromTiltRequest;

typedef boost::shared_ptr< ::chusa_msgs::TfFromTiltRequest > TfFromTiltRequestPtr;
typedef boost::shared_ptr< ::chusa_msgs::TfFromTiltRequest const> TfFromTiltRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace chusa_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'chusa_msgs': ['/home/jaeho/pi/src/chusa_msgs/msg', '/home/jaeho/pi/src/chusa_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0bcecc00ec52f2816884a23e17cf9156";
  }

  static const char* value(const ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0bcecc00ec52f281ULL;
  static const uint64_t static_value2 = 0x6884a23e17cf9156ULL;
};

template<class ContainerAllocator>
struct DataType< ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "chusa_msgs/TfFromTiltRequest";
  }

  static const char* value(const ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 tilt\n"
;
  }

  static const char* value(const ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tilt);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TfFromTiltRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::chusa_msgs::TfFromTiltRequest_<ContainerAllocator>& v)
  {
    s << indent << "tilt: ";
    Printer<float>::stream(s, indent + "  ", v.tilt);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CHUSA_MSGS_MESSAGE_TFFROMTILTREQUEST_H