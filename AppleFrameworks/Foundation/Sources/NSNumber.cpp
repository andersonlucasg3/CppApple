#include "NSNumber.h"

namespace NS 
{
    _NS_INLINE Value* Value::value(const void* pValue, const char* pType)
    {
        return Object::sendMessage<Value*>(_NS_PRIVATE_CLS(NSValue), _NS_PRIVATE_SEL(valueWithBytes_objCType_), pValue, pType);
    }

    _NS_INLINE Value* Value::value(const void* pPointer)
    {
        return Object::sendMessage<Value*>(_NS_PRIVATE_CLS(NSValue), _NS_PRIVATE_SEL(valueWithPointer_), pPointer);
    }

    _NS_INLINE Value* Value::alloc()
    {
        return Object::alloc<Value>(_NS_PRIVATE_CLS(NSValue));
    }

    _NS_INLINE Value* Value::init(const void* pValue, const char* pType)
    {
        return Object::sendMessage<Value*>(this, _NS_PRIVATE_SEL(initWithBytes_objCType_), pValue, pType);
    }

    _NS_INLINE Value* Value::init(const class Coder* pCoder)
    {
        return Object::sendMessage<Value*>(this, _NS_PRIVATE_SEL(initWithCoder_), pCoder);
    }

    _NS_INLINE void Value::getValue(void* pValue, UInteger size) const
    {
        Object::sendMessage<void>(this, _NS_PRIVATE_SEL(getValue_size_), pValue, size);
    }

    _NS_INLINE const char* Value::objCType() const
    {
        return Object::sendMessage<const char*>(this, _NS_PRIVATE_SEL(objCType));
    }

    _NS_INLINE bool Value::isEqualToValue(Value* pValue) const
    {
        return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(isEqualToValue_), pValue);
    }

    _NS_INLINE void* Value::pointerValue() const
    {
        return Object::sendMessage<void*>(this, _NS_PRIVATE_SEL(pointerValue));
    }

    _NS_INLINE Number* Number::number(char value)
    {
        return Object::sendMessage<Number*>(_NS_PRIVATE_CLS(NSNumber), _NS_PRIVATE_SEL(numberWithChar_), value);
    }

    _NS_INLINE Number* Number::number(unsigned char value)
    {
        return Object::sendMessage<Number*>(_NS_PRIVATE_CLS(NSNumber), _NS_PRIVATE_SEL(numberWithUnsignedChar_), value);
    }

    _NS_INLINE Number* Number::number(short value)
    {
        return Object::sendMessage<Number*>(_NS_PRIVATE_CLS(NSNumber), _NS_PRIVATE_SEL(numberWithShort_), value);
    }

    _NS_INLINE Number* Number::number(unsigned short value)
    {
        return Object::sendMessage<Number*>(_NS_PRIVATE_CLS(NSNumber), _NS_PRIVATE_SEL(numberWithUnsignedShort_), value);
    }

    _NS_INLINE Number* Number::number(int value)
    {
        return Object::sendMessage<Number*>(_NS_PRIVATE_CLS(NSNumber), _NS_PRIVATE_SEL(numberWithInt_), value);
    }

    _NS_INLINE Number* Number::number(unsigned int value)
    {
        return Object::sendMessage<Number*>(_NS_PRIVATE_CLS(NSNumber), _NS_PRIVATE_SEL(numberWithUnsignedInt_), value);
    }

    _NS_INLINE Number* Number::number(long value)
    {
        return Object::sendMessage<Number*>(_NS_PRIVATE_CLS(NSNumber), _NS_PRIVATE_SEL(numberWithLong_), value);
    }

    _NS_INLINE Number* Number::number(unsigned long value)
    {
        return Object::sendMessage<Number*>(_NS_PRIVATE_CLS(NSNumber), _NS_PRIVATE_SEL(numberWithUnsignedLong_), value);
    }

    _NS_INLINE Number* Number::number(long long value)
    {
        return Object::sendMessage<Number*>(_NS_PRIVATE_CLS(NSNumber), _NS_PRIVATE_SEL(numberWithLongLong_), value);
    }

    _NS_INLINE Number* Number::number(unsigned long long value)
    {
        return Object::sendMessage<Number*>(_NS_PRIVATE_CLS(NSNumber), _NS_PRIVATE_SEL(numberWithUnsignedLongLong_), value);
    }

    _NS_INLINE Number* Number::number(float value)
    {
        return Object::sendMessage<Number*>(_NS_PRIVATE_CLS(NSNumber), _NS_PRIVATE_SEL(numberWithFloat_), value);
    }

    _NS_INLINE Number* Number::number(double value)
    {
        return Object::sendMessage<Number*>(_NS_PRIVATE_CLS(NSNumber), _NS_PRIVATE_SEL(numberWithDouble_), value);
    }

    _NS_INLINE Number* Number::number(bool value)
    {
        return Object::sendMessage<Number*>(_NS_PRIVATE_CLS(NSNumber), _NS_PRIVATE_SEL(numberWithBool_), value);
    }

    _NS_INLINE Number* Number::alloc()
    {
        return Object::alloc<Number>(_NS_PRIVATE_CLS(NSNumber));
    }

    _NS_INLINE Number* Number::init(const Coder* pCoder)
    {
        return Object::sendMessage<Number*>(this, _NS_PRIVATE_SEL(initWithCoder_), pCoder);
    }

    _NS_INLINE Number* Number::init(char value)
    {
        return Object::sendMessage<Number*>(this, _NS_PRIVATE_SEL(initWithChar_), value);
    }

    _NS_INLINE Number* Number::init(unsigned char value)
    {
        return Object::sendMessage<Number*>(this, _NS_PRIVATE_SEL(initWithUnsignedChar_), value);
    }

    _NS_INLINE Number* Number::init(short value)
    {
        return Object::sendMessage<Number*>(this, _NS_PRIVATE_SEL(initWithShort_), value);
    }

    _NS_INLINE Number* Number::init(unsigned short value)
    {
        return Object::sendMessage<Number*>(this, _NS_PRIVATE_SEL(initWithUnsignedShort_), value);
    }

    _NS_INLINE Number* Number::init(int value)
    {
        return Object::sendMessage<Number*>(this, _NS_PRIVATE_SEL(initWithInt_), value);
    }

    _NS_INLINE Number* Number::init(unsigned int value)
    {
        return Object::sendMessage<Number*>(this, _NS_PRIVATE_SEL(initWithUnsignedInt_), value);
    }

    _NS_INLINE Number* Number::init(long value)
    {
        return Object::sendMessage<Number*>(this, _NS_PRIVATE_SEL(initWithLong_), value);
    }

    _NS_INLINE Number* Number::init(unsigned long value)
    {
        return Object::sendMessage<Number*>(this, _NS_PRIVATE_SEL(initWithUnsignedLong_), value);
    }

    _NS_INLINE Number* Number::init(long long value)
    {
        return Object::sendMessage<Number*>(this, _NS_PRIVATE_SEL(initWithLongLong_), value);
    }

    _NS_INLINE Number* Number::init(unsigned long long value)
    {
        return Object::sendMessage<Number*>(this, _NS_PRIVATE_SEL(initWithUnsignedLongLong_), value);
    }

    _NS_INLINE Number* Number::init(float value)
    {
        return Object::sendMessage<Number*>(this, _NS_PRIVATE_SEL(initWithFloat_), value);
    }

    _NS_INLINE Number* Number::init(double value)
    {
        return Object::sendMessage<Number*>(this, _NS_PRIVATE_SEL(initWithDouble_), value);
    }

    _NS_INLINE Number* Number::init(bool value)
    {
        return Object::sendMessage<Number*>(this, _NS_PRIVATE_SEL(initWithBool_), value);
    }

    _NS_INLINE char Number::charValue() const
    {
        return Object::sendMessage<char>(this, _NS_PRIVATE_SEL(charValue));
    }

    _NS_INLINE unsigned char Number::unsignedCharValue() const
    {
        return Object::sendMessage<unsigned char>(this, _NS_PRIVATE_SEL(unsignedCharValue));
    }

    _NS_INLINE short Number::shortValue() const
    {
        return Object::sendMessage<short>(this, _NS_PRIVATE_SEL(shortValue));
    }

    _NS_INLINE unsigned short Number::unsignedShortValue() const
    {
        return Object::sendMessage<unsigned short>(this, _NS_PRIVATE_SEL(unsignedShortValue));
    }

    _NS_INLINE int Number::intValue() const
    {
        return Object::sendMessage<int>(this, _NS_PRIVATE_SEL(intValue));
    }

    _NS_INLINE unsigned int Number::unsignedIntValue() const
    {
        return Object::sendMessage<unsigned int>(this, _NS_PRIVATE_SEL(unsignedIntValue));
    }

    _NS_INLINE long Number::longValue() const
    {
        return Object::sendMessage<long>(this, _NS_PRIVATE_SEL(longValue));
    }

    _NS_INLINE unsigned long Number::unsignedLongValue() const
    {
        return Object::sendMessage<unsigned long>(this, _NS_PRIVATE_SEL(unsignedLongValue));
    }

    _NS_INLINE long long Number::longLongValue() const
    {
        return Object::sendMessage<long long>(this, _NS_PRIVATE_SEL(longLongValue));
    }

    _NS_INLINE unsigned long long Number::unsignedLongLongValue() const
    {
        return Object::sendMessage<unsigned long long>(this, _NS_PRIVATE_SEL(unsignedLongLongValue));
    }

    _NS_INLINE float Number::floatValue() const
    {
        return Object::sendMessage<float>(this, _NS_PRIVATE_SEL(floatValue));
    }

    _NS_INLINE double Number::doubleValue() const
    {
        return Object::sendMessage<double>(this, _NS_PRIVATE_SEL(doubleValue));
    }

    _NS_INLINE bool Number::boolValue() const
    {
        return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(boolValue));
    }

    _NS_INLINE Integer Number::integerValue() const
    {
        return Object::sendMessage<Integer>(this, _NS_PRIVATE_SEL(integerValue));
    }

    _NS_INLINE UInteger Number::unsignedIntegerValue() const
    {
        return Object::sendMessage<UInteger>(this, _NS_PRIVATE_SEL(unsignedIntegerValue));
    }

    _NS_INLINE String* Number::stringValue() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(stringValue));
    }

    _NS_INLINE ComparisonResult Number::compare(const Number* pOtherNumber) const
    {
        return Object::sendMessage<ComparisonResult>(this, _NS_PRIVATE_SEL(compare_), pOtherNumber);
    }

    _NS_INLINE bool Number::isEqualToNumber(const Number* pNumber) const
    {
        return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(isEqualToNumber_), pNumber);
    }

    _NS_INLINE String* Number::descriptionWithLocale(const Object* pLocale) const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(descriptionWithLocale_), pLocale);
    }
}