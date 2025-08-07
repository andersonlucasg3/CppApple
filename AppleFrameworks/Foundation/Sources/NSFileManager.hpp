#pragma once

#include "NSPrivate.hpp"
#include "NSDictionary.hpp"
#include "NSObject.hpp"
#include "NSString.hpp"
#include "NSError.hpp"
#include "NSURL.hpp"

namespace NS
{
_NS_ENUM(NS::UInteger, SearchPathDirectory) {
    ApplicationDirectory = 1,
    LibraryDirectory = 5,
    UserDirectory = 7,
    DocumentDirectory = 9,
    CachesDirectory = 13,
};

_NS_ENUM(NS::UInteger, SearchPathDomainMask) {
    UserDomainMask = 1,
    LocalDomainMask = 2,
    NetworkDomainMask = 4,
    SystemDomainMask = 8,
    AllDomainsMask = 0x0FFFF,
};

class FileManager : Referencing<FileManager>
{
public:
    static FileManager *defaultManager();

    NS::URL* urlForDirectory(NS::SearchPathDirectory directory, NS::SearchPathDomainMask domain, NS::URL* appropriateForURL, bool shouldCreate, NS::Error** error) const;
    bool createDirectoryAtPath(NS::String* path, bool withIntermediateDirectories, NS::Dictionary* attributes, NS::Error** error) const;
    bool createDirectoryAtURL(NS::URL* url, bool withIntermediateDirectories, NS::Dictionary* attributes, NS::Error** error) const;
    bool removeItemAtPath(NS::String* path, NS::Error** error) const;
    bool removeItemAtURL(NS::URL* url, NS::Error **error) const;
    bool fileExistsAtPath(NS::String* path) const;
    bool fileExistsAtPath(NS::String* path, bool* isDirectory) const;
};

namespace Private
{
    namespace Class
    {
        _NS_PRIVATE_DEF_CLS(NSFileManager);
    }

    namespace Selector
    {
        _NS_PRIVATE_DEF_SEL(defaultManager, "defaultManager");
        _NS_PRIVATE_DEF_SEL(urlForDirectory_inDomain_appropriateForURL_create_error_, "URLForDirectory:inDomain:appropriateForURL:create:error:");
        _NS_PRIVATE_DEF_SEL(createDirectoryAtPath_withIntermediateDirectories_attributes_error_, "createDirectoryAtPath:withIntermediateDirectories:attributes:error:");
        _NS_PRIVATE_DEF_SEL(createDirectoryAtURL_withIntermediateDirectories_attributes_error_, "createDirectoryAtURL:withIntermediateDirectories:attributes:error:");
        _NS_PRIVATE_DEF_SEL(removeItemAtPath_error_, "removeItemAtPath:error:");
        _NS_PRIVATE_DEF_SEL(removeItemAtURL_error_, "removeItemAtURL:error:");
        _NS_PRIVATE_DEF_SEL(fileExistsAtPath_, "fileExistsAtPath:");
        _NS_PRIVATE_DEF_SEL(fileExistsAtPath_isDirectory_, "fileExistsAtPath:isDirectory:");
    }
}
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

_NS_INLINE NS::FileManager* NS::FileManager::defaultManager()
{
    return Object::sendMessage<FileManager*>(_NS_PRIVATE_CLS(NSFileManager), _NS_PRIVATE_SEL(defaultManager));
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

_NS_INLINE NS::URL* NS::FileManager::urlForDirectory(NS::SearchPathDirectory directory, NS::SearchPathDomainMask domain, NS::URL* appropriateForURL, bool shouldCreate, NS::Error** error) const
{
    return Object::sendMessage<NS::URL*>(this, _NS_PRIVATE_SEL(urlForDirectory_inDomain_appropriateForURL_create_error_), directory, domain, appropriateForURL, shouldCreate, error);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

_NS_INLINE bool NS::FileManager::createDirectoryAtPath(NS::String* path, bool withIntermediateDirectories, NS::Dictionary* attributes, NS::Error** error) const
{
    return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(createDirectoryAtPath_withIntermediateDirectories_attributes_error_), path, withIntermediateDirectories, attributes, error);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

_NS_INLINE bool NS::FileManager::createDirectoryAtURL(NS::URL* url, bool withIntermediateDirectories, NS::Dictionary* attributes, NS::Error** error) const
{
    return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(createDirectoryAtURL_withIntermediateDirectories_attributes_error_), url, withIntermediateDirectories, attributes, error);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

_NS_INLINE bool NS::FileManager::removeItemAtPath(NS::String* path, NS::Error** error) const
{
    return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(removeItemAtPath_error_), path, error);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

_NS_INLINE bool NS::FileManager::removeItemAtURL(NS::URL* url, NS::Error** error) const
{
    return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(removeItemAtURL_error_), url, error);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

_NS_INLINE bool NS::FileManager::fileExistsAtPath(NS::String* path) const
{
    return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(fileExistsAtPath_), path);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------

_NS_INLINE bool NS::FileManager::fileExistsAtPath(NS::String* path, bool* isDirectory) const
{
    return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(fileExistsAtPath_), path, isDirectory);
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------
