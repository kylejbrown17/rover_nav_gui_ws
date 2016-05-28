// Generated by gencpp from file rover_msgs/All.msg
// DO NOT EDIT!


#ifndef ROVER_MSGS_MESSAGE_ALL_H
#define ROVER_MSGS_MESSAGE_ALL_H


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
struct All_
{
  typedef All_<ContainerAllocator> Type;

  All_()
    : lw(0)
    , rw(0)
    , pan(0)
    , tilt(0)
    , camnum(0)
    , q1(0)
    , q2(0)
    , q3(0)
    , q4(0)
    , q5(0)
    , q6(0)
    , grip(0)
    , chutes(0)
    , shovel(0)  {
    }
  All_(const ContainerAllocator& _alloc)
    : lw(0)
    , rw(0)
    , pan(0)
    , tilt(0)
    , camnum(0)
    , q1(0)
    , q2(0)
    , q3(0)
    , q4(0)
    , q5(0)
    , q6(0)
    , grip(0)
    , chutes(0)
    , shovel(0)  {
  (void)_alloc;
    }



   typedef uint16_t _lw_type;
  _lw_type lw;

   typedef uint16_t _rw_type;
  _rw_type rw;

   typedef uint16_t _pan_type;
  _pan_type pan;

   typedef uint16_t _tilt_type;
  _tilt_type tilt;

   typedef uint8_t _camnum_type;
  _camnum_type camnum;

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

   typedef uint8_t _chutes_type;
  _chutes_type chutes;

   typedef uint16_t _shovel_type;
  _shovel_type shovel;




  typedef boost::shared_ptr< ::rover_msgs::All_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rover_msgs::All_<ContainerAllocator> const> ConstPtr;

}; // struct All_

typedef ::rover_msgs::All_<std::allocator<void> > All;

typedef boost::shared_ptr< ::rover_msgs::All > AllPtr;
typedef boost::shared_ptr< ::rover_msgs::All const> AllConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rover_msgs::All_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rover_msgs::All_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rover_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'rover_msgs': ['/home/halrover/git/kyle/rover_nav_gui_ws/src/rover_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rover_msgs::All_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rover_msgs::All_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rover_msgs::All_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rover_msgs::All_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rover_msgs::All_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rover_msgs::All_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rover_msgs::All_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d58546379b54b62019e6cb68da5f967c";
  }

  static const char* value(const ::rover_msgs::All_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd58546379b54b620ULL;
  static const uint64_t static_value2 = 0x19e6cb68da5f967cULL;
};

template<class ContainerAllocator>
struct DataType< ::rover_msgs::All_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rover_msgs/All";
  }

  static const char* value(const ::rover_msgs::All_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rover_msgs::All_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint16 lw\n\
uint16 rw\n\
uint16 pan\n\
uint16 tilt\n\
uint8 camnum\n\
uint16 q1\n\
uint16 q2\n\
uint16 q3\n\
uint16 q4\n\
uint16 q5\n\
uint16 q6\n\
uint16 grip\n\
uint8 chutes\n\
uint16 shovel\n\
\n\
";
  }

  static const char* value(const ::rover_msgs::All_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rover_msgs::All_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lw);
      stream.next(m.rw);
      stream.next(m.pan);
      stream.next(m.tilt);
      stream.next(m.camnum);
      stream.next(m.q1);
      stream.next(m.q2);
      stream.next(m.q3);
      stream.next(m.q4);
      stream.next(m.q5);
      stream.next(m.q6);
      stream.next(m.grip);
      stream.next(m.chutes);
      stream.next(m.shovel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct All_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rover_msgs::All_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rover_msgs::All_<ContainerAllocator>& v)
  {
    s << indent << "lw: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.lw);
    s << indent << "rw: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.rw);
    s << indent << "pan: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.pan);
    s << indent << "tilt: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.tilt);
    s << indent << "camnum: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.camnum);
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
    s << indent << "chutes: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.chutes);
    s << indent << "shovel: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.shovel);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROVER_MSGS_MESSAGE_ALL_H
