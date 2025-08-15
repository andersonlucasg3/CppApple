#include "NSRange.h"

namespace NS
{
    _NS_INLINE Range::Range(UInteger loc, UInteger len)
    : location(loc)
    , length(len)
    {
    }

    _NS_INLINE Range Range::Make(UInteger loc, UInteger len)
    {
        return Range(loc, len);
    }

    _NS_INLINE bool Range::Equal(const Range& range) const
    {
        return (location == range.location) && (length == range.length);
    }

    _NS_INLINE bool Range::LocationInRange(UInteger loc) const
    {
        return (!(loc < location)) && ((loc - location) < length);
    }

    _NS_INLINE UInteger Range::Max() const
    {
        return location + length;
    }
}