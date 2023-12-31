// Generated by gencpp from file champ_msgs/Contacts.msg
// DO NOT EDIT!


#ifndef CHAMP_MSGS_MESSAGE_CONTACTS_H
#define CHAMP_MSGS_MESSAGE_CONTACTS_H


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
struct Contacts_
{
  typedef Contacts_<ContainerAllocator> Type;

  Contacts_()
    : contacts()  {
    }
  Contacts_(const ContainerAllocator& _alloc)
    : contacts(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<uint8_t>> _contacts_type;
  _contacts_type contacts;





  typedef boost::shared_ptr< ::champ_msgs::Contacts_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::champ_msgs::Contacts_<ContainerAllocator> const> ConstPtr;

}; // struct Contacts_

typedef ::champ_msgs::Contacts_<std::allocator<void> > Contacts;

typedef boost::shared_ptr< ::champ_msgs::Contacts > ContactsPtr;
typedef boost::shared_ptr< ::champ_msgs::Contacts const> ContactsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::champ_msgs::Contacts_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::champ_msgs::Contacts_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::champ_msgs::Contacts_<ContainerAllocator1> & lhs, const ::champ_msgs::Contacts_<ContainerAllocator2> & rhs)
{
  return lhs.contacts == rhs.contacts;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::champ_msgs::Contacts_<ContainerAllocator1> & lhs, const ::champ_msgs::Contacts_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace champ_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::champ_msgs::Contacts_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::champ_msgs::Contacts_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::champ_msgs::Contacts_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::champ_msgs::Contacts_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::champ_msgs::Contacts_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::champ_msgs::Contacts_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::champ_msgs::Contacts_<ContainerAllocator> >
{
  static const char* value()
  {
    return "3470d51bc28d5527f9ed97eb122d52f4";
  }

  static const char* value(const ::champ_msgs::Contacts_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x3470d51bc28d5527ULL;
  static const uint64_t static_value2 = 0xf9ed97eb122d52f4ULL;
};

template<class ContainerAllocator>
struct DataType< ::champ_msgs::Contacts_<ContainerAllocator> >
{
  static const char* value()
  {
    return "champ_msgs/Contacts";
  }

  static const char* value(const ::champ_msgs::Contacts_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::champ_msgs::Contacts_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool[] contacts\n"
;
  }

  static const char* value(const ::champ_msgs::Contacts_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::champ_msgs::Contacts_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.contacts);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Contacts_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::champ_msgs::Contacts_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::champ_msgs::Contacts_<ContainerAllocator>& v)
  {
    s << indent << "contacts[]" << std::endl;
    for (size_t i = 0; i < v.contacts.size(); ++i)
    {
      s << indent << "  contacts[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.contacts[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CHAMP_MSGS_MESSAGE_CONTACTS_H
