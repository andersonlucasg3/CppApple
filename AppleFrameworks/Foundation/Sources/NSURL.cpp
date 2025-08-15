#include "NSURL.h"

namespace NS 
{
    _NS_INLINE URL* URL::fileURLWithPath(const String* pPath)
    {
        return Object::sendMessage<URL*>(_NS_PRIVATE_CLS(NSURL), _NS_PRIVATE_SEL(fileURLWithPath_), pPath);
    }

    _NS_INLINE URL* URL::alloc()
    {
        return Object::alloc<URL>(_NS_PRIVATE_CLS(NSURL));
    }

    _NS_INLINE URL* URL::init()
    {
        return Object::init<URL>();
    }

    _NS_INLINE URL* URL::init(const String* pString)
    {
        return Object::sendMessage<URL*>(this, _NS_PRIVATE_SEL(initWithString_), pString);
    }

    _NS_INLINE URL* URL::initFileURLWithPath(const String* pPath)
    {
        return Object::sendMessage<URL*>(this, _NS_PRIVATE_SEL(initFileURLWithPath_), pPath);
    }

    _NS_INLINE String* URL::path() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(path));
    }

    _NS_INLINE const char* URL::fileSystemRepresentation() const
    {
        return Object::sendMessage<const char*>(this, _NS_PRIVATE_SEL(fileSystemRepresentation));
    }
}