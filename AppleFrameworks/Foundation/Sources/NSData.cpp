#include "NSData.h"

namespace NS 
{
    _NS_INLINE void* Data::mutableBytes() const
    {
        return Object::sendMessage<void*>(this, _NS_PRIVATE_SEL(mutableBytes));
    }

    _NS_INLINE UInteger Data::length() const
    {
        return Object::sendMessage<UInteger>(this, _NS_PRIVATE_SEL(length));
    }
}