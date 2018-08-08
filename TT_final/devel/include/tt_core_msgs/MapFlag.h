// Generated by gencpp from file tt_core_msgs/MapFlag.msg
// DO NOT EDIT!


#ifndef TT_CORE_MSGS_MESSAGE_MAPFLAG_H
#define TT_CORE_MSGS_MESSAGE_MAPFLAG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/Image.h>

namespace tt_core_msgs
{
template <class ContainerAllocator>
struct MapFlag_
{
  typedef MapFlag_<ContainerAllocator> Type;

  MapFlag_()
    : header()
    , flag(0)
    , track_state(0)
    , frame()  {
    }
  MapFlag_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , flag(0)
    , track_state(0)
    , frame(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _flag_type;
  _flag_type flag;

   typedef int32_t _track_state_type;
  _track_state_type track_state;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _frame_type;
  _frame_type frame;





  typedef boost::shared_ptr< ::tt_core_msgs::MapFlag_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tt_core_msgs::MapFlag_<ContainerAllocator> const> ConstPtr;

}; // struct MapFlag_

typedef ::tt_core_msgs::MapFlag_<std::allocator<void> > MapFlag;

typedef boost::shared_ptr< ::tt_core_msgs::MapFlag > MapFlagPtr;
typedef boost::shared_ptr< ::tt_core_msgs::MapFlag const> MapFlagConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tt_core_msgs::MapFlag_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tt_core_msgs::MapFlag_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tt_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': False, 'HasHeader': True}
// {'tt_core_msgs': ['/home/naverlabs/ros/TT_final/src/tt3_common/tt_core_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::tt_core_msgs::MapFlag_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tt_core_msgs::MapFlag_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tt_core_msgs::MapFlag_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tt_core_msgs::MapFlag_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tt_core_msgs::MapFlag_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tt_core_msgs::MapFlag_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tt_core_msgs::MapFlag_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ba6bf033f4a4f9846496e69db130ddf3";
  }

  static const char* value(const ::tt_core_msgs::MapFlag_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xba6bf033f4a4f984ULL;
  static const uint64_t static_value2 = 0x6496e69db130ddf3ULL;
};

template<class ContainerAllocator>
struct DataType< ::tt_core_msgs::MapFlag_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tt_core_msgs/MapFlag";
  }

  static const char* value(const ::tt_core_msgs::MapFlag_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tt_core_msgs::MapFlag_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 flag\n\
int32 track_state\n\
sensor_msgs/Image frame\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: sensor_msgs/Image\n\
# This message contains an uncompressed image\n\
# (0, 0) is at top-left corner of image\n\
#\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of cameara\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
                     # If the frame_id here and the frame_id of the CameraInfo\n\
                     # message associated with the image conflict\n\
                     # the behavior is undefined\n\
\n\
uint32 height         # image height, that is, number of rows\n\
uint32 width          # image width, that is, number of columns\n\
\n\
# The legal values for encoding are in file src/image_encodings.cpp\n\
# If you want to standardize a new string format, join\n\
# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n\
\n\
string encoding       # Encoding of pixels -- channel meaning, ordering, size\n\
                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n\
\n\
uint8 is_bigendian    # is this data bigendian?\n\
uint32 step           # Full row length in bytes\n\
uint8[] data          # actual matrix data, size is (step * rows)\n\
";
  }

  static const char* value(const ::tt_core_msgs::MapFlag_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tt_core_msgs::MapFlag_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.flag);
      stream.next(m.track_state);
      stream.next(m.frame);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MapFlag_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tt_core_msgs::MapFlag_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tt_core_msgs::MapFlag_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "flag: ";
    Printer<int32_t>::stream(s, indent + "  ", v.flag);
    s << indent << "track_state: ";
    Printer<int32_t>::stream(s, indent + "  ", v.track_state);
    s << indent << "frame: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.frame);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TT_CORE_MSGS_MESSAGE_MAPFLAG_H
