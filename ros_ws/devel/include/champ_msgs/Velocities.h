// Generated by gencpp from file champ_msgs/Velocities.msg
// DO NOT EDIT!


#ifndef CHAMP_MSGS_MESSAGE_VELOCITIES_H
#define CHAMP_MSGS_MESSAGE_VELOCITIES_H


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
struct Velocities_
{
  typedef Velocities_<ContainerAllocator> Type;

  Velocities_()
    : linear_x(0.0)
    , linear_y(0.0)
    , angular_z(0.0)  {
    }
  Velocities_(const ContainerAllocator& _alloc)
    : linear_x(0.0)
    , linear_y(0.0)
    , angular_z(0.0)  {
  (void)_alloc;
    }



   typedef float _linear_x_type;
  _linear_x_type linear_x;

   typedef float _linear_y_type;
  _linear_y_type linear_y;

   typedef float _angular_z_type;
  _angular_z_type angular_z;





  typedef boost::shared_ptr< ::champ_msgs::Velocities_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::champ_msgs::Velocities_<ContainerAllocator> const> ConstPtr;

}; // struct Velocities_

typedef ::champ_msgs::Velocities_<std::allocator<void> > Velocities;

typedef boost::shared_ptr< ::champ_msgs::Velocities > VelocitiesPtr;
typedef boost::shared_ptr< ::champ_msgs::Velocities const> VelocitiesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::champ_msgs::Velocities_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::champ_msgs::Velocities_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::champ_msgs::Velocities_<ContainerAllocator1> & lhs, const ::champ_msgs::Velocities_<ContainerAllocator2> & rhs)
{
  return lhs.linear_x == rhs.linear_x &&
    lhs.linear_y == rhs.linear_y &&
    lhs.angular_z == rhs.angular_z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::champ_msgs::Velocities_<ContainerAllocator1> & lhs, const ::champ_msgs::Velocities_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace champ_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::champ_msgs::Velocities_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::champ_msgs::Velocities_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::champ_msgs::Velocities_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::champ_msgs::Velocities_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::champ_msgs::Velocities_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::champ_msgs::Velocities_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::champ_msgs::Velocities_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0ee8ad4cb7809be2d5a0a76352fea86a";
  }

  static const char* value(const ::champ_msgs::Velocities_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0ee8ad4cb7809be2ULL;
  static const uint64_t static_value2 = 0xd5a0a76352fea86aULL;
};

template<class ContainerAllocator>
struct DataType< ::champ_msgs::Velocities_<ContainerAllocator> >
{
  static const char* value()
  {
    return "champ_msgs/Velocities";
  }

  static const char* value(const ::champ_msgs::Velocities_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::champ_msgs::Velocities_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"float32 linear_x\n"
"float32 linear_y\n"
"float32 angular_z\n"
;
  }

  static const char* value(const ::champ_msgs::Velocities_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::champ_msgs::Velocities_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.linear_x);
      stream.next(m.linear_y);
      stream.next(m.angular_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Velocities_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::champ_msgs::Velocities_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::champ_msgs::Velocities_<ContainerAllocator>& v)
  {
    s << indent << "linear_x: ";
    Printer<float>::stream(s, indent + "  ", v.linear_x);
    s << indent << "linear_y: ";
    Printer<float>::stream(s, indent + "  ", v.linear_y);
    s << indent << "angular_z: ";
    Printer<float>::stream(s, indent + "  ", v.angular_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CHAMP_MSGS_MESSAGE_VELOCITIES_H
