#include "NSAutoreleasePool.h"

namespace NS 
{
    _NS_INLINE NS::AutoreleasePool* NS::AutoreleasePool::alloc()
    {
        return NS::Object::alloc<AutoreleasePool>(_NS_PRIVATE_CLS(NSAutoreleasePool));
    }

    _NS_INLINE NS::AutoreleasePool* NS::AutoreleasePool::init()
    {
        return NS::Object::init<AutoreleasePool>();
    }

    _NS_INLINE void NS::AutoreleasePool::drain()
    {
        Object::sendMessage<void>(this, _NS_PRIVATE_SEL(drain));
    }

    _NS_INLINE void NS::AutoreleasePool::addObject(Object* pObject)
    {
        Object::sendMessage<void>(this, _NS_PRIVATE_SEL(addObject_), pObject);
    }

    _NS_INLINE void NS::AutoreleasePool::showPools()
    {
        Object::sendMessage<void>(_NS_PRIVATE_CLS(NSAutoreleasePool), _NS_PRIVATE_SEL(showPools));
    }
}