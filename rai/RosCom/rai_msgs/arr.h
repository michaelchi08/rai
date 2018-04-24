// Generated by gencpp from file rai_msgs/arr.msg
// DO NOT EDIT!


#ifndef RAI_MSGS_MESSAGE_ARR_H
#define RAI_MSGS_MESSAGE_ARR_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rai_msgs
{
template <class ContainerAllocator>
struct arr_
{
  typedef arr_<ContainerAllocator> Type;

  arr_()
    : dim()
    , data()  {
    }
  arr_(const ContainerAllocator& _alloc)
    : dim(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _dim_type;
  _dim_type dim;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::rai_msgs::arr_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rai_msgs::arr_<ContainerAllocator> const> ConstPtr;

}; // struct arr_

typedef ::rai_msgs::arr_<std::allocator<void> > arr;

typedef boost::shared_ptr< ::rai_msgs::arr > arrPtr;
typedef boost::shared_ptr< ::rai_msgs::arr const> arrConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rai_msgs::arr_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rai_msgs::arr_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rai_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/msg'], 'rai_msgs': ['/home/mtoussai/git/mlr/share/rai/rai/RosCom/rai_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rai_msgs::arr_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rai_msgs::arr_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rai_msgs::arr_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rai_msgs::arr_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rai_msgs::arr_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rai_msgs::arr_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rai_msgs::arr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9af84693bc01dbfdd54f042c54849c23";
  }

  static const char* value(const ::rai_msgs::arr_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9af84693bc01dbfdULL;
  static const uint64_t static_value2 = 0xd54f042c54849c23ULL;
};

template<class ContainerAllocator>
struct DataType< ::rai_msgs::arr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rai_msgs/arr";
  }

  static const char* value(const ::rai_msgs::arr_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rai_msgs::arr_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32[] dim\n\
float64[] data\n\
";
  }

  static const char* value(const ::rai_msgs::arr_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rai_msgs::arr_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dim);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct arr_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rai_msgs::arr_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rai_msgs::arr_<ContainerAllocator>& v)
  {
    s << indent << "dim[]" << std::endl;
    for (size_t i = 0; i < v.dim.size(); ++i)
    {
      s << indent << "  dim[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.dim[i]);
    }
    s << indent << "data[]" << std::endl;
    for (size_t i = 0; i < v.data.size(); ++i)
    {
      s << indent << "  data[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.data[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // RAI_MSGS_MESSAGE_ARR_H
