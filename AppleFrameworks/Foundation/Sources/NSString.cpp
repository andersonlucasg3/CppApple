#include "NSString.h"

#include "NSPrivate.h"

namespace NS
{
    _NS_INLINE String* String::string()
    {
        return Object::sendMessage<String*>(_NS_PRIVATE_CLS(NSString), _NS_PRIVATE_SEL(string));
    }

    _NS_INLINE String* String::string(const String* pString)
    {
        return Object::sendMessage<String*>(_NS_PRIVATE_CLS(NSString), _NS_PRIVATE_SEL(stringWithString_), pString);
    }

    _NS_INLINE String* String::string(const char* pString, StringEncoding encoding)
    {
        return Object::sendMessage<String*>(_NS_PRIVATE_CLS(NSString), _NS_PRIVATE_SEL(stringWithCString_encoding_), pString, encoding);
    }

    _NS_INLINE String* String::alloc()
    {
        return Object::alloc<String>(_NS_PRIVATE_CLS(NSString));
    }

    _NS_INLINE String* String::init()
    {
        return Object::init<String>();
    }

    _NS_INLINE String* String::init(const String* pString)
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(initWithString_), pString);
    }

    _NS_INLINE String* String::init(const char* pString, StringEncoding encoding)
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(initWithCString_encoding_), pString, encoding);
    }

    _NS_INLINE String* String::init(void* pBytes, UInteger len, StringEncoding encoding, bool freeBuffer)
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(initWithBytesNoCopy_length_encoding_freeWhenDone_), pBytes, len, encoding, freeBuffer);
    }

    _NS_INLINE unichar String::character(UInteger index) const
    {
        return Object::sendMessage<unichar>(this, _NS_PRIVATE_SEL(characterAtIndex_), index);
    }

    _NS_INLINE UInteger String::length() const
    {
        return Object::sendMessage<UInteger>(this, _NS_PRIVATE_SEL(length));
    }

    _NS_INLINE const char* String::cString(StringEncoding encoding) const
    {
        return Object::sendMessage<const char*>(this, _NS_PRIVATE_SEL(cStringUsingEncoding_), encoding);
    }

    _NS_INLINE const char* String::utf8String() const
    {
        return Object::sendMessage<const char*>(this, _NS_PRIVATE_SEL(UTF8String));
    }

    _NS_INLINE UInteger String::maximumLengthOfBytes(StringEncoding encoding) const
    {
        return Object::sendMessage<UInteger>(this, _NS_PRIVATE_SEL(maximumLengthOfBytesUsingEncoding_), encoding);
    }

    _NS_INLINE UInteger String::lengthOfBytes(StringEncoding encoding) const
    {
        return Object::sendMessage<UInteger>(this, _NS_PRIVATE_SEL(lengthOfBytesUsingEncoding_), encoding);
    }

    _NS_INLINE bool String::isEqualToString(const String* pString) const
    {
        return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(isEqualToString_), pString);
    }

    _NS_INLINE Range String::rangeOfString(const String* pString, StringCompareOptions options) const
    {
        return Object::sendMessage<Range>(this, _NS_PRIVATE_SEL(rangeOfString_options_), pString, options);
    }

    _NS_INLINE const char* String::fileSystemRepresentation() const
    {
        return Object::sendMessage<const char*>(this, _NS_PRIVATE_SEL(fileSystemRepresentation));
    }

    _NS_INLINE String* String::stringByResolvingSymlinksInPath() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(stringByResolvingSymlinksInPath));
    }

    _NS_INLINE String* String::stringByAppendingString(const String* pString) const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(stringByAppendingString_), pString);
    }

    _NS_INLINE ComparisonResult String::caseInsensitiveCompare(const String* pString) const
    {
        return Object::sendMessage<ComparisonResult>(this, _NS_PRIVATE_SEL(caseInsensitiveCompare_), pString);
    }
}