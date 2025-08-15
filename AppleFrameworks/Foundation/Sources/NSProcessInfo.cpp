#include "NSProcessInfo.h"

_NS_PRIVATE_DEF_CONST(NS::NotificationName, ProcessInfoThermalStateDidChangeNotification);
_NS_PRIVATE_DEF_CONST(NS::NotificationName, ProcessInfoPowerStateDidChangeNotification);

#if defined(METAL_ENABLED)
    // The linker searches for these symbols in the Metal framework, be sure to link it in as well:
    _NS_PRIVATE_DEF_CONST(NS::NotificationName, ProcessInfoPerformanceProfileDidChangeNotification);
    _NS_PRIVATE_DEF_CONST(NS::DeviceCertification, DeviceCertificationiPhonePerformanceGaming);
    _NS_PRIVATE_DEF_CONST(NS::ProcessPerformanceProfile, ProcessPerformanceProfileDefault);
    _NS_PRIVATE_DEF_CONST(NS::ProcessPerformanceProfile, ProcessPerformanceProfileSustained);
#endif // defined(METAL_ENABLED)

namespace NS 
{
    _NS_INLINE ProcessInfo* ProcessInfo::processInfo()
    {
        return Object::sendMessage<ProcessInfo*>(_NS_PRIVATE_CLS(NSProcessInfo), _NS_PRIVATE_SEL(processInfo));
    }

    _NS_INLINE Array* ProcessInfo::arguments() const
    {
        return Object::sendMessage<Array*>(this, _NS_PRIVATE_SEL(arguments));
    }

    _NS_INLINE Dictionary* ProcessInfo::environment() const
    {
        return Object::sendMessage<Dictionary*>(this, _NS_PRIVATE_SEL(environment));
    }

    _NS_INLINE String* ProcessInfo::hostName() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(hostName));
    }

    _NS_INLINE String* ProcessInfo::processName() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(processName));
    }

    _NS_INLINE void ProcessInfo::setProcessName(const String* pString)
    {
        Object::sendMessage<void>(this, _NS_PRIVATE_SEL(setProcessName_), pString);
    }

    _NS_INLINE int ProcessInfo::processIdentifier() const
    {
        return Object::sendMessage<int>(this, _NS_PRIVATE_SEL(processIdentifier));
    }

    _NS_INLINE String* ProcessInfo::globallyUniqueString() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(globallyUniqueString));
    }

    _NS_INLINE String* ProcessInfo::userName() const
    {
        return Object::sendMessageSafe<String*>(this, _NS_PRIVATE_SEL(userName));
    }

    _NS_INLINE String* ProcessInfo::fullUserName() const
    {
        return Object::sendMessageSafe<String*>(this, _NS_PRIVATE_SEL(fullUserName));
    }

    _NS_INLINE UInteger ProcessInfo::operatingSystem() const
    {
        return Object::sendMessage<UInteger>(this, _NS_PRIVATE_SEL(operatingSystem));
    }

    _NS_INLINE OperatingSystemVersion ProcessInfo::operatingSystemVersion() const
    {
        return Object::sendMessage<OperatingSystemVersion>(this, _NS_PRIVATE_SEL(operatingSystemVersion));
    }

    _NS_INLINE String* ProcessInfo::operatingSystemVersionString() const
    {
        return Object::sendMessage<String*>(this, _NS_PRIVATE_SEL(operatingSystemVersionString));
    }

    _NS_INLINE bool ProcessInfo::isOperatingSystemAtLeastVersion(OperatingSystemVersion version) const
    {
        return Object::sendMessage<bool>(this, _NS_PRIVATE_SEL(isOperatingSystemAtLeastVersion_), version);
    }

    _NS_INLINE UInteger ProcessInfo::processorCount() const
    {
        return Object::sendMessage<UInteger>(this, _NS_PRIVATE_SEL(processorCount));
    }

    _NS_INLINE UInteger ProcessInfo::activeProcessorCount() const
    {
        return Object::sendMessage<UInteger>(this, _NS_PRIVATE_SEL(activeProcessorCount));
    }

    _NS_INLINE unsigned long long ProcessInfo::physicalMemory() const
    {
        return Object::sendMessage<unsigned long long>(this, _NS_PRIVATE_SEL(physicalMemory));
    }

    _NS_INLINE TimeInterval ProcessInfo::systemUptime() const
    {
        return Object::sendMessage<TimeInterval>(this, _NS_PRIVATE_SEL(systemUptime));
    }

    _NS_INLINE void ProcessInfo::disableSuddenTermination()
    {
        Object::sendMessageSafe<void>(this, _NS_PRIVATE_SEL(disableSuddenTermination));
    }

    _NS_INLINE void ProcessInfo::enableSuddenTermination()
    {
        Object::sendMessageSafe<void>(this, _NS_PRIVATE_SEL(enableSuddenTermination));
    }

    _NS_INLINE void ProcessInfo::disableAutomaticTermination(const String* pReason)
    {
        Object::sendMessageSafe<void>(this, _NS_PRIVATE_SEL(disableAutomaticTermination_), pReason);
    }

    _NS_INLINE void ProcessInfo::enableAutomaticTermination(const String* pReason)
    {
        Object::sendMessageSafe<void>(this, _NS_PRIVATE_SEL(enableAutomaticTermination_), pReason);
    }

    _NS_INLINE bool ProcessInfo::automaticTerminationSupportEnabled() const
    {
        return Object::sendMessageSafe<bool>(this, _NS_PRIVATE_SEL(automaticTerminationSupportEnabled));
    }

    _NS_INLINE void ProcessInfo::setAutomaticTerminationSupportEnabled(bool enabled)
    {
        Object::sendMessageSafe<void>(this, _NS_PRIVATE_SEL(setAutomaticTerminationSupportEnabled_), enabled);
    }

    _NS_INLINE Object* ProcessInfo::beginActivity(ActivityOptions options, const String* pReason)
    {
        return Object::sendMessage<Object*>(this, _NS_PRIVATE_SEL(beginActivityWithOptions_reason_), options, pReason);
    }

    _NS_INLINE void ProcessInfo::endActivity(Object* pActivity)
    {
        Object::sendMessage<void>(this, _NS_PRIVATE_SEL(endActivity_), pActivity);
    }

    _NS_INLINE void ProcessInfo::performActivity(ActivityOptions options, const String* pReason, void (^block)(void))
    {
        Object::sendMessage<void>(this, _NS_PRIVATE_SEL(performActivityWithOptions_reason_usingBlock_), options, pReason, block);
    }

    _NS_INLINE void ProcessInfo::performActivity(ActivityOptions options, const String* pReason, const std::function<void()>& function)
    {
        __block std::function<void()> blockFunction = function;

        performActivity(options, pReason, ^() { blockFunction(); });
    }

    _NS_INLINE void ProcessInfo::performExpiringActivity(const String* pReason, void (^block)(bool expired))
    {
        Object::sendMessageSafe<void>(this, _NS_PRIVATE_SEL(performExpiringActivityWithReason_usingBlock_), pReason, block);
    }

    _NS_INLINE void ProcessInfo::performExpiringActivity(const String* pReason, const std::function<void(bool expired)>& function)
    {
        __block std::function<void(bool expired)> blockFunction = function;

        performExpiringActivity(pReason, ^(bool expired) { blockFunction(expired); });
    }

    _NS_INLINE ProcessInfoThermalState ProcessInfo::thermalState() const
    {
        return Object::sendMessage<ProcessInfoThermalState>(this, _NS_PRIVATE_SEL(thermalState));
    }

    _NS_INLINE bool ProcessInfo::isLowPowerModeEnabled() const
    {
        return Object::sendMessageSafe<bool>(this, _NS_PRIVATE_SEL(isLowPowerModeEnabled));
    }

    _NS_INLINE bool ProcessInfo::isiOSAppOnMac() const
    {
        return Object::sendMessageSafe<bool>(this, _NS_PRIVATE_SEL(isiOSAppOnMac));
    }

    _NS_INLINE bool ProcessInfo::isMacCatalystApp() const
    {
        return Object::sendMessageSafe<bool>(this, _NS_PRIVATE_SEL(isMacCatalystApp));
    }

#if defined(METAL_ENABLED)

    _NS_INLINE bool ProcessInfo::isDeviceCertified(DeviceCertification performanceTier) const
    {
        return Object::sendMessageSafe<bool>(this, _NS_PRIVATE_SEL(isDeviceCertified_), performanceTier);
    }

#endif // defined(METAL_ENABLED)

#if defined(METAL_ENABLED)

    _NS_INLINE bool ProcessInfo::hasPerformanceProfile(ProcessPerformanceProfile performanceProfile) const
    {
        return Object::sendMessageSafe<bool>(this, _NS_PRIVATE_SEL(hasPerformanceProfile_), performanceProfile);
    }

#endif // defined(METAL_ENABLED)
}