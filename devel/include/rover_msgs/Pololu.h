// Generated by gencpp from file rover_msgs/Pololu.msg
// DO NOT EDIT!


#ifndef ROVER_MSGS_MESSAGE_POLOLU_H
#define ROVER_MSGS_MESSAGE_POLOLU_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rover_msgs
{
template <class ContainerAllocator>
struct Pololu_
{
  typedef Pololu_<ContainerAllocator> Type;

  Pololu_()
    : q1(0)
    , q2(0)
    , q3(0)
    , q4(0)
    , q5(0)
    , q6(0)
    , grip(0)  {
    }
  Pololu_(const ContainerAllocator& _alloc)
    : q1(0)
    , q2(0)
    , q3(0)
    , q4(0)
    , q5(0)
    , q6(0)
    , grip(0)  {
    }



   typedef uint16_t _q1_type;
  _q1_type q1;

   typedef uint16_t _q2_type;
  _q2_type q2;

   typedef uint16_t _q3_type;
  _q3_type q3;

   typedef uint16_t _q4_type;
  _q4_type q4;

   typedef uint16_t _q5_type;
  _q5_type q5;

   typedef uint16_t _q6_type;
  _q6_type q6;

   typedef uint16_t _grip_type;
  _grip_type grip;




  typedef boost::shared_ptr< ::rover_msgs::Pololu_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rover_msgs::Pololu_<ContainerAllocator> const> ConstPtr;

}; // struct Pololu_

typedef ::rover_msgs::Pololu_<std::allocator<void> > Pololu;

typedef boost::shared_ptr< ::rover_msgs::Pololu > PololuPtr;
typedef boost::shared_ptr< ::rover_msgs::Pololu const> PololuConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rover_msgs::Pololu_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rover_msgs::Pololu_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rover_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'rover_msgs': ['/home/kyle/gitMars/ros_nav_gui_ws/src/rover_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rover_msgs::Pololu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rover_msgs::Pololu_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rover_msgs::Pololu_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rover_msgs::Pololu_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rover_msgs::Pololu_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rover_msgs::Pololu_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rover_msgs::Pololu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "981b3dedffc3376c9ed31b487f6742c3";
  }

  static const char* value(const ::rover_msgs::Pololu_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x981b3dedffc3376cULL;
  static const uint64_t static_value2 = 0x9ed31b487f6742c3ULL;
};

template<class ContainerAllocator>
struct DataType< ::rover_msgs::Pololu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rover_msgs/Pololu";
  }

  static const char* value(const ::rover_msgs::Pololu_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rover_msgs::Pololu_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 q1\n\
uint16 q2\n\
uint16 q3\n\
uint16 q4\n\
uint16 q5\n\
uint16 q6\n\
uint16 grip\n\
";
  }

  static const char* value(const ::rover_msgs::Pololu_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rover_msgs::Pololu_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.q1);
      stream.next(m.q2);
      stream.next(m.q3);
      stream.next(m.q4);
      stream.next(m.q5);
      stream.next(m.q6);
      stream.next(m.grip);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Pololu_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rover_msgs::Pololu_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rover_msgs::Pololu_<ContainerAllocator>& v)
  {
    s << indent << "q1: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.q1);
    s << indent << "q2: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.q2);
    s << indent << "q3: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.q3);
    s << indent << "q4: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.q4);
    s << indent << "q5: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.q5);
    s << indent << "q6: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.q6);
    s << indent << "grip: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.grip);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROVER_MSGS_MESSAGE_POLOLU_H
