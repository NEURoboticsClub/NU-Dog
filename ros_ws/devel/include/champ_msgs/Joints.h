// Generated by gencpp from file champ_msgs/Joints.msg
// DO NOT EDIT!


#ifndef CHAMP_MSGS_MESSAGE_JOINTS_H
#define CHAMP_MSGS_MESSAGE_JOINTS_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace champ_msgs
{
template <class ContainerAllocator>
struct Joints_
{
  typedef Joints_<ContainerAllocator> Type;

  Joints_()
    : position()  {
    }
  Joints_(const ContainerAllocator& _alloc)
    : position(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _position_type;
  _position_type position;





  typedef boost::shared_ptr< ::champ_msgs::Joints_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::champ_msgs::Joints_<ContainerAllocator> const> ConstPtr;

}; // struct Joints_

typedef ::champ_msgs::Joints_<std::allocator<void> > Joints;

typedef boost::shared_ptr< ::champ_msgs::Joints > JointsPtr;
typedef boost::shared_ptr< ::champ_msgs::Joints const> JointsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::champ_msgs::Joints_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::champ_msgs::Joints_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::champ_msgs::Joints_<ContainerAllocator1> & lhs, const ::champ_msgs::Joints_<ContainerAllocator2> & rhs)
{
  return lhs.position == rhs.position;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::champ_msgs::Joints_<ContainerAllocator1> & lhs, const ::champ_msgs::Joints_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace champ_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::champ_msgs::Joints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::champ_msgs::Joints_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::champ_msgs::Joints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::champ_msgs::Joints_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::champ_msgs::Joints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::champ_msgs::Joints_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::champ_msgs::Joints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8ec164ae840396df197eeb512c1b8515";
  }

  static const char* value(const ::champ_msgs::Joints_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8ec164ae840396dfULL;
  static const uint64_t static_value2 = 0x197eeb512c1b8515ULL;
};

template<class ContainerAllocator>
struct DataType< ::champ_msgs::Joints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "champ_msgs/Joints";
  }

  static const char* value(const ::champ_msgs::Joints_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::champ_msgs::Joints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] position\n"
;
  }

  static const char* value(const ::champ_msgs::Joints_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::champ_msgs::Joints_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Joints_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::champ_msgs::Joints_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::champ_msgs::Joints_<ContainerAllocator>& v)
  {
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.position[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CHAMP_MSGS_MESSAGE_JOINTS_H
