// Generated by gencpp from file tt_core_msgs/CameraCropResponse.msg
// DO NOT EDIT!


#ifndef TT_CORE_MSGS_MESSAGE_CAMERACROPRESPONSE_H
#define TT_CORE_MSGS_MESSAGE_CAMERACROPRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <tt_core_msgs/ROIPointArray.h>

namespace tt_core_msgs
{
template <class ContainerAllocator>
struct CameraCropResponse_
{
  typedef CameraCropResponse_<ContainerAllocator> Type;

  CameraCropResponse_()
    : resArray()  {
    }
  CameraCropResponse_(const ContainerAllocator& _alloc)
    : resArray(_alloc)  {
  (void)_alloc;
    }



   typedef  ::tt_core_msgs::ROIPointArray_<ContainerAllocator>  _resArray_type;
  _resArray_type resArray;





  typedef boost::shared_ptr< ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CameraCropResponse_

typedef ::tt_core_msgs::CameraCropResponse_<std::allocator<void> > CameraCropResponse;

typedef boost::shared_ptr< ::tt_core_msgs::CameraCropResponse > CameraCropResponsePtr;
typedef boost::shared_ptr< ::tt_core_msgs::CameraCropResponse const> CameraCropResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace tt_core_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsMessage': True, 'IsFixedSize': False, 'HasHeader': False}
// {'tt_core_msgs': ['/home/naverlabs/ros/TT_final/src/tt3_common/tt_core_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__dir__', '__doc__', '__eq__', '__format__', '__ge__', '__getattribute__', '__gt__', '__hash__', '__init__', '__init_subclass__', '__le__', '__lt__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsMessage< ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6f77acffcd254437b0746fa3647a8257";
  }

  static const char* value(const ::tt_core_msgs::CameraCropResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6f77acffcd254437ULL;
  static const uint64_t static_value2 = 0xb0746fa3647a8257ULL;
};

template<class ContainerAllocator>
struct DataType< ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tt_core_msgs/CameraCropResponse";
  }

  static const char* value(const ::tt_core_msgs::CameraCropResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "tt_core_msgs/ROIPointArray resArray\n\
\n\
\n\
================================================================================\n\
MSG: tt_core_msgs/ROIPointArray\n\
Header header\n\
int32[] id\n\
int32[] tag\n\
sensor_msgs/CompressedImage[] FrameArray\n\
geometry_msgs/Vector3[] Vector3DArray\n\
float32[] extra\n\
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
MSG: sensor_msgs/CompressedImage\n\
# This message contains a compressed image\n\
\n\
Header header        # Header timestamp should be acquisition time of image\n\
                     # Header frame_id should be optical frame of camera\n\
                     # origin of frame should be optical center of cameara\n\
                     # +x should point to the right in the image\n\
                     # +y should point down in the image\n\
                     # +z should point into to plane of the image\n\
\n\
string format        # Specifies the format of the data\n\
                     #   Acceptable values:\n\
                     #     jpeg, png\n\
uint8[] data         # Compressed image buffer\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::tt_core_msgs::CameraCropResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.resArray);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CameraCropResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::tt_core_msgs::CameraCropResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::tt_core_msgs::CameraCropResponse_<ContainerAllocator>& v)
  {
    s << indent << "resArray: ";
    s << std::endl;
    Printer< ::tt_core_msgs::ROIPointArray_<ContainerAllocator> >::stream(s, indent + "  ", v.resArray);
  }
};

} // namespace message_operations
} // namespace ros

#endif // TT_CORE_MSGS_MESSAGE_CAMERACROPRESPONSE_H
