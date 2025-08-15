#include "NSBundle.h"

_NS_PRIVATE_DEF_CONST(NS::NotificationName, BundleDidLoadNotification);
_NS_PRIVATE_DEF_CONST(NS::NotificationName, BundleResourceRequestLowDiskSpaceNotification);

namespace NS 
{
    _NS_INLINE String* LocalizedString(const String* pKey, const String*)
    {
        return Bundle::mainBundle()->localizedString(pKey, nullptr, nullptr);
    }

    _NS_INLINE String* LocalizedStringFromTable(const String* pKey, const String* pTbl, const String*)
    {
        return Bundle::mainBundle()->localizedString(pKey, nullptr, pTbl);
    }

    _NS_INLINE String* LocalizedStringFromTableInBundle(const String* pKey, const String* pTbl, const Bundle* pBdl, const String*)
    {
        return pBdl->localizedString(pKey, nullptr, pTbl);
    }

    _NS_INLINE String* LocalizedStringWithDefaultValue(const String* pKey, const String* pTbl, const Bundle* pBdl, const String* pVal, const String*)
    {
        return pBdl->localizedString(pKey, pVal, pTbl);
    }

    _NS_INLINE Bundle* Bundle::mainBundle()
    {
        return Object::sendMessage<Bundle*>(_NS_PRIVATE_CLS(NSBundle), _NS_PRIVATE_SEL(mainBundle));
    }

    _NS_INLINE Bundle* Bundle::bundle(const class String* pPath)
    {
        return Object::sendMessage<Bundle*>(_NS_PRIVATE_CLS(NSBundle), _NS_PRIVATE_SEL(bundleWithPath_), pPath);
    }

    _NS_INLINE Bundle* Bundle::bundle(const class URL* pURL)
    {
        return Object::sendMessage<Bundle*>(_NS_PRIVATE_CLS(NSBundle), _NS_PRIVATE_SEL(bundleWithURL_), pURL);
    }

    _NS_INLINE Array* Bundle::allBundles()
    {
        return Object::sendMessage<Array*>(_NS_PRIVATE_CLS(NSBundle), _NS_PRIVATE_SEL(allBundles));
    }

    _NS_INLINE Array* Bundle::allFrameworks()
    {
        return Object::sendMessage<Array*>(_NS_PRIVATE_CLS(NSBundle), _NS_PRIVATE_SEL(allFrameworks));
    }

    _NS_INLINE Bundle* Bundle::alloc()
    {
        return Object::sendMessage<Bundle*>(_NS_PRIVATE_CLS(NSBundle), _NS_PRIVATE_SEL(alloc));
    }

    _NS_INLINE Bundle* Bundle::init(const String* pPath)
    {
        return Object::sendMessage<Bundle*>(this, _NS_PRIVATE_SEL(initWithPath_), pPath);
    }

    _NS_INLINE Bundle* Bundle::init(const URL* pURL)
    {
        return Object::sendMessage<Bundle*>(this, _NS_PRIVATE_SEL(initWithURL_), pURL);
    }

    _NS_INLINE bool Bundle::load()
    {
        return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(load));
    }

    _NS_INLINE bool Bundle::unload()
    {
        return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(unload));
    }

    _NS_INLINE bool Bundle::isLoaded() const
    {
        return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(isLoaded));
    }

    _NS_INLINE bool Bundle::preflightAndReturnError(Error** pError) const
    {
        return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(preflightAndReturnError_), pError);
    }

    _NS_INLINE bool Bundle::loadAndReturnError(Error** pError)
    {
        return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(loadAndReturnError_), pError);
    }

    _NS_INLINE URL* Bundle::bundleURL() const
    {
        return Object::sendMessage<URL*>(this, _NS_PRIVATE_SEL(bundleURL));
    }

    _NS_INLINE URL* Bundle::resourceURL() const
    {
        return Object::sendMessage<URL*>(this, _NS_PRIVATE_SEL(resourceURL));
    }

    _NS_INLINE URL* Bundle::executableURL() const
    {
        return Object::sendMessage<URL*>(this, _NS_PRIVATE_SEL(executableURL));
    }

    _NS_INLINE URL* Bundle::URLForAuxiliaryExecutable(const String* pExecutableName) const
    {
        return Object::sendMessage<URL*>(this, _NS_PRIVATE_SEL(URLForAuxiliaryExecutable_), pExecutableName);
    }

    _NS_INLINE URL* Bundle::privateFrameworksURL() const
    {
        return Object::sendMessage<URL*>(this, _NS_PRIVATE_SEL(privateFrameworksURL));
    }

    _NS_INLINE URL* Bundle::sharedFrameworksURL() const
    {
        return Object::sendMessage<URL*>(this, _NS_PRIVATE_SEL(sharedFrameworksURL));
    }

    _NS_INLINE URL* Bundle::sharedSupportURL() const
    {
        return Object::sendMessage<URL*>(this, _NS_PRIVATE_SEL(sharedSupportURL));
    }

    _NS_INLINE URL* Bundle::builtInPlugInsURL() const
    {
        return Object::sendMessage<URL*>(this, _NS_PRIVATE_SEL(builtInPlugInsURL));
    }

    _NS_INLINE URL* Bundle::appStoreReceiptURL() const
    {
        return Object::sendMessage<URL*>(this, _NS_PRIVATE_SEL(appStoreReceiptURL));
    }

    _NS_INLINE String* Bundle::bundlePath() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(bundlePath));
    }

    _NS_INLINE String* Bundle::resourcePath() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(resourcePath));
    }

    _NS_INLINE String* Bundle::executablePath() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(executablePath));
    }

    _NS_INLINE String* Bundle::pathForAuxiliaryExecutable(const String* pExecutableName) const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(pathForAuxiliaryExecutable_), pExecutableName);
    }

    _NS_INLINE String* Bundle::privateFrameworksPath() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(privateFrameworksPath));
    }

    _NS_INLINE String* Bundle::sharedFrameworksPath() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(sharedFrameworksPath));
    }

    _NS_INLINE String* Bundle::sharedSupportPath() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(sharedSupportPath));
    }

    _NS_INLINE String* Bundle::builtInPlugInsPath() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(builtInPlugInsPath));
    }

    _NS_INLINE String* Bundle::bundleIdentifier() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(bundleIdentifier));
    }

    _NS_INLINE Dictionary* Bundle::infoDictionary() const
    {
        return Object::sendMessage<Dictionary*>(this, _NS_PRIVATE_SEL(infoDictionary));
    }

    _NS_INLINE Dictionary* Bundle::localizedInfoDictionary() const
    {
        return Object::sendMessage<Dictionary*>(this, _NS_PRIVATE_SEL(localizedInfoDictionary));
    }

    _NS_INLINE Object* Bundle::objectForInfoDictionaryKey(const String* pKey)
    {
        return Object::sendMessage<Object*>(this, _NS_PRIVATE_SEL(objectForInfoDictionaryKey_), pKey);
    }

    _NS_INLINE String* Bundle::localizedString(const String* pKey, const String* pValue /* = nullptr */, const String* pTableName /* = nullptr */) const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(localizedStringForKey_value_table_), pKey, pValue, pTableName);
    }
}