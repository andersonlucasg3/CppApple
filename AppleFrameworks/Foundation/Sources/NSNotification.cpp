#include "NSNotification.h"

namespace NS 
{
    _NS_INLINE String* Notification::name() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(name));
    }

    _NS_INLINE Object* Notification::object() const
    {
        return Object::sendMessage<Object*>(this, _NS_PRIVATE_SEL(object));
    }

    _NS_INLINE Dictionary* Notification::userInfo() const
    {
        return Object::sendMessage<Dictionary*>(this, _NS_PRIVATE_SEL(userInfo));
    }

    _NS_INLINE NotificationCenter* NotificationCenter::defaultCenter()
    {
        return Object::sendMessage<NotificationCenter*>(_NS_PRIVATE_CLS(NSNotificationCenter), _NS_PRIVATE_SEL(defaultCenter));
    }

    _NS_INLINE Object* NotificationCenter::addObserver(NotificationName name, Object* pObj, void* pQueue, ObserverBlock block)
    {
        return Object::sendMessage<Object*>(this, _NS_PRIVATE_SEL(addObserverName_object_queue_block_), name, pObj, pQueue, block);
    }

    _NS_INLINE Object* NotificationCenter::addObserver(NotificationName name, Object* pObj, void* pQueue, ObserverFunction &handler)
    {
        __block ObserverFunction blockFunction = handler;

        return addObserver(name, pObj, pQueue, ^(Notification* pNotif) {blockFunction(pNotif);});
    }

    _NS_INLINE void NotificationCenter::removeObserver(Object* pObserver)
    {
        return Object::sendMessage<void>(this, _NS_PRIVATE_SEL(removeObserver_), pObserver);
    }
}