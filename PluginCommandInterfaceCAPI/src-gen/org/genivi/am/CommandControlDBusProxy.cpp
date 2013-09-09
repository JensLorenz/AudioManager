/*
* This file was generated by the CommonAPI Generators.
*
 * Copyright (C) 2013, BMW AG
 *
 * \author Christian Linke, christian.linke@bmw.de BMW 2012,2013
*/
#include "CommandControlDBusProxy.h"

namespace org {
namespace genivi {
namespace am {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createCommandControlDBusProxy(
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection) {
    return std::make_shared<CommandControlDBusProxy>(commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection);
}

__attribute__((constructor)) void registerCommandControlDBusProxy(void) {
    CommonAPI::DBus::DBusFactory::registerProxyFactoryMethod(CommandControl::getInterfaceId(),
       &createCommandControlDBusProxy);
}

CommandControlDBusProxy::CommandControlDBusProxy(
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection):
        CommonAPI::DBus::DBusProxy(commonApiAddress, interfaceName, busName, objectPath, dbusProxyconnection)
,        newMainConnection_(*this, "newMainConnection", "(qqqni)"),
                        removedMainConnection_(*this, "removedMainConnection", "q"),
                        newSink_(*this, "newSink", "(qs(iq)niq)"),
                        removedSink_(*this, "removedSink", "q"),
                        newSource_(*this, "newSource", "(qs(iq)q)"),
                        removedSource_(*this, "removedSource", "q"),
                        numberOfSinkClassesChanged_(*this, "numberOfSinkClassesChanged", ""),
                        numberOfSourceClassesChanged_(*this, "numberOfSourceClassesChanged", ""),
                        mainConnectionStateChanged_(*this, "mainConnectionStateChanged", "qi"),
                        mainSinkSoundPropertyChanged_(*this, "mainSinkSoundPropertyChanged", "q(qn)"),
                        mainSourceSoundPropertyChanged_(*this, "mainSourceSoundPropertyChanged", "q(qn)"),
                        sinkAvailabilityChanged_(*this, "sinkAvailabilityChanged", "q(iq)"),
                        sourceAvailabilityChanged_(*this, "sourceAvailabilityChanged", "q(iq)"),
                        volumeChanged_(*this, "volumeChanged", "qn"),
                        sinkMuteStateChanged_(*this, "sinkMuteStateChanged", "qi"),
                        systemPropertyChanged_(*this, "systemPropertyChanged", "(qn)"),
                        timingInformationChanged_(*this, "timingInformationChanged", "qn"),
                        sinkUpdated_(*this, "sinkUpdated", "qqa(qn)"),
                        sourceUpdated_(*this, "sourceUpdated", "qqa(qn)"),
                        sinkNotification_(*this, "sinkNotification", "q(qn)"),
                        sourceNotification_(*this, "sourceNotification", "q(qn)"),
                        mainSinkNotificationConfigurationChanged_(*this, "mainSinkNotificationConfigurationChanged", "q(qin)"),
                        mainSourceNotificationConfigurationChanged_(*this, "mainSourceNotificationConfigurationChanged", "q(qin)")
                 {
}


CommandControlDBusProxy::NewMainConnectionEvent& CommandControlDBusProxy::getNewMainConnectionEvent() {
    return newMainConnection_;
}
CommandControlDBusProxy::RemovedMainConnectionEvent& CommandControlDBusProxy::getRemovedMainConnectionEvent() {
    return removedMainConnection_;
}
CommandControlDBusProxy::NewSinkEvent& CommandControlDBusProxy::getNewSinkEvent() {
    return newSink_;
}
CommandControlDBusProxy::RemovedSinkEvent& CommandControlDBusProxy::getRemovedSinkEvent() {
    return removedSink_;
}
CommandControlDBusProxy::NewSourceEvent& CommandControlDBusProxy::getNewSourceEvent() {
    return newSource_;
}
CommandControlDBusProxy::RemovedSourceEvent& CommandControlDBusProxy::getRemovedSourceEvent() {
    return removedSource_;
}
CommandControlDBusProxy::NumberOfSinkClassesChangedEvent& CommandControlDBusProxy::getNumberOfSinkClassesChangedEvent() {
    return numberOfSinkClassesChanged_;
}
CommandControlDBusProxy::NumberOfSourceClassesChangedEvent& CommandControlDBusProxy::getNumberOfSourceClassesChangedEvent() {
    return numberOfSourceClassesChanged_;
}
CommandControlDBusProxy::MainConnectionStateChangedEvent& CommandControlDBusProxy::getMainConnectionStateChangedEvent() {
    return mainConnectionStateChanged_;
}
CommandControlDBusProxy::MainSinkSoundPropertyChangedEvent& CommandControlDBusProxy::getMainSinkSoundPropertyChangedEvent() {
    return mainSinkSoundPropertyChanged_;
}
CommandControlDBusProxy::MainSourceSoundPropertyChangedEvent& CommandControlDBusProxy::getMainSourceSoundPropertyChangedEvent() {
    return mainSourceSoundPropertyChanged_;
}
CommandControlDBusProxy::SinkAvailabilityChangedEvent& CommandControlDBusProxy::getSinkAvailabilityChangedEvent() {
    return sinkAvailabilityChanged_;
}
CommandControlDBusProxy::SourceAvailabilityChangedEvent& CommandControlDBusProxy::getSourceAvailabilityChangedEvent() {
    return sourceAvailabilityChanged_;
}
CommandControlDBusProxy::VolumeChangedEvent& CommandControlDBusProxy::getVolumeChangedEvent() {
    return volumeChanged_;
}
CommandControlDBusProxy::SinkMuteStateChangedEvent& CommandControlDBusProxy::getSinkMuteStateChangedEvent() {
    return sinkMuteStateChanged_;
}
CommandControlDBusProxy::SystemPropertyChangedEvent& CommandControlDBusProxy::getSystemPropertyChangedEvent() {
    return systemPropertyChanged_;
}
CommandControlDBusProxy::TimingInformationChangedEvent& CommandControlDBusProxy::getTimingInformationChangedEvent() {
    return timingInformationChanged_;
}
CommandControlDBusProxy::SinkUpdatedEvent& CommandControlDBusProxy::getSinkUpdatedEvent() {
    return sinkUpdated_;
}
CommandControlDBusProxy::SourceUpdatedEvent& CommandControlDBusProxy::getSourceUpdatedEvent() {
    return sourceUpdated_;
}
CommandControlDBusProxy::SinkNotificationEvent& CommandControlDBusProxy::getSinkNotificationEvent() {
    return sinkNotification_;
}
CommandControlDBusProxy::SourceNotificationEvent& CommandControlDBusProxy::getSourceNotificationEvent() {
    return sourceNotification_;
}
CommandControlDBusProxy::MainSinkNotificationConfigurationChangedEvent& CommandControlDBusProxy::getMainSinkNotificationConfigurationChangedEvent() {
    return mainSinkNotificationConfigurationChanged_;
}
CommandControlDBusProxy::MainSourceNotificationConfigurationChangedEvent& CommandControlDBusProxy::getMainSourceNotificationConfigurationChangedEvent() {
    return mainSourceNotificationConfigurationChanged_;
}

void CommandControlDBusProxy::connect(const am_sourceID_t& sourceID, const am_sinkID_t& sinkID, CommonAPI::CallStatus& callStatus, am_mainConnectionID_t& mainConnectionID, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sourceID_t, am_sinkID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_mainConnectionID_t, am_Error_e> >::callMethodWithReply(
        *this,
        "connect",
        "qq",
        sourceID, sinkID, 
        callStatus
        , mainConnectionID, error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::connectAsync(const am_sourceID_t& sourceID, const am_sinkID_t& sinkID, ConnectAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sourceID_t, am_sinkID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_mainConnectionID_t, am_Error_e> >::callMethodAsync(
        *this,
        "connect",
        "qq",
        sourceID, sinkID, 
        std::move(callback));
}
void CommandControlDBusProxy::disconnect(const am_mainConnectionID_t& mainConnectionID, CommonAPI::CallStatus& callStatus, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_mainConnectionID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodWithReply(
        *this,
        "disconnect",
        "q",
        mainConnectionID, 
        callStatus
        , error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::disconnectAsync(const am_mainConnectionID_t& mainConnectionID, DisconnectAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_mainConnectionID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodAsync(
        *this,
        "disconnect",
        "q",
        mainConnectionID, 
        std::move(callback));
}
void CommandControlDBusProxy::setVolume(const am_sinkID_t& sinkID, const am_mainVolume_t& volume, CommonAPI::CallStatus& callStatus, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sinkID_t, am_mainVolume_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodWithReply(
        *this,
        "setVolume",
        "qn",
        sinkID, volume, 
        callStatus
        , error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::setVolumeAsync(const am_sinkID_t& sinkID, const am_mainVolume_t& volume, SetVolumeAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sinkID_t, am_mainVolume_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodAsync(
        *this,
        "setVolume",
        "qn",
        sinkID, volume, 
        std::move(callback));
}
void CommandControlDBusProxy::volumeStep(const am_sinkID_t& sinkID, const int16_t& volumeStep, CommonAPI::CallStatus& callStatus, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sinkID_t, int16_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodWithReply(
        *this,
        "volumeStep",
        "qn",
        sinkID, volumeStep, 
        callStatus
        , error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::volumeStepAsync(const am_sinkID_t& sinkID, const int16_t& volumeStep, VolumeStepAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sinkID_t, int16_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodAsync(
        *this,
        "volumeStep",
        "qn",
        sinkID, volumeStep, 
        std::move(callback));
}
void CommandControlDBusProxy::setSinkMuteState(const am_sinkID_t& sinkID, const am_MuteState_e& muteState, CommonAPI::CallStatus& callStatus, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sinkID_t, am_MuteState_e>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodWithReply(
        *this,
        "setSinkMuteState",
        "qi",
        sinkID, muteState, 
        callStatus
        , error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::setSinkMuteStateAsync(const am_sinkID_t& sinkID, const am_MuteState_e& muteState, SetSinkMuteStateAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sinkID_t, am_MuteState_e>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodAsync(
        *this,
        "setSinkMuteState",
        "qi",
        sinkID, muteState, 
        std::move(callback));
}
void CommandControlDBusProxy::setMainSinkSoundProperty(const am_sinkID_t& sinkID, const am_MainSoundProperty_s& soundProperty, CommonAPI::CallStatus& callStatus, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sinkID_t, am_MainSoundProperty_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodWithReply(
        *this,
        "setMainSinkSoundProperty",
        "q(qn)",
        sinkID, soundProperty, 
        callStatus
        , error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::setMainSinkSoundPropertyAsync(const am_sinkID_t& sinkID, const am_MainSoundProperty_s& soundProperty, SetMainSinkSoundPropertyAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sinkID_t, am_MainSoundProperty_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodAsync(
        *this,
        "setMainSinkSoundProperty",
        "q(qn)",
        sinkID, soundProperty, 
        std::move(callback));
}
void CommandControlDBusProxy::setMainSourceSoundProperty(const am_sourceID_t& sourceID, const am_MainSoundProperty_s& soundProperty, CommonAPI::CallStatus& callStatus, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sourceID_t, am_MainSoundProperty_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodWithReply(
        *this,
        "setMainSourceSoundProperty",
        "q(qn)",
        sourceID, soundProperty, 
        callStatus
        , error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::setMainSourceSoundPropertyAsync(const am_sourceID_t& sourceID, const am_MainSoundProperty_s& soundProperty, SetMainSourceSoundPropertyAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sourceID_t, am_MainSoundProperty_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodAsync(
        *this,
        "setMainSourceSoundProperty",
        "q(qn)",
        sourceID, soundProperty, 
        std::move(callback));
}
void CommandControlDBusProxy::setSystemProperty(const am_SystemProperty_s& property, CommonAPI::CallStatus& callStatus, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_SystemProperty_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodWithReply(
        *this,
        "setSystemProperty",
        "(qn)",
        property, 
        callStatus
        , error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::setSystemPropertyAsync(const am_SystemProperty_s& property, SetSystemPropertyAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_SystemProperty_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodAsync(
        *this,
        "setSystemProperty",
        "(qn)",
        property, 
        std::move(callback));
}
void CommandControlDBusProxy::getListMainConnections(CommonAPI::CallStatus& callStatus, am_Error_e& error, am_MainConnection_L& listConnections) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e, am_MainConnection_L> >::callMethodWithReply(
        *this,
        "getListMainConnections",
        "",
        callStatus
        , error, listConnections);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::getListMainConnectionsAsync(GetListMainConnectionsAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e, am_MainConnection_L> >::callMethodAsync(
        *this,
        "getListMainConnections",
        "",
        std::move(callback));
}
void CommandControlDBusProxy::getListMainSinks(CommonAPI::CallStatus& callStatus, am_SinkType_L& listMainSinks, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_SinkType_L, am_Error_e> >::callMethodWithReply(
        *this,
        "getListMainSinks",
        "",
        callStatus
        , listMainSinks, error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::getListMainSinksAsync(GetListMainSinksAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_SinkType_L, am_Error_e> >::callMethodAsync(
        *this,
        "getListMainSinks",
        "",
        std::move(callback));
}
void CommandControlDBusProxy::getListMainSources(CommonAPI::CallStatus& callStatus, am_SourceType_L& listMainSources, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_SourceType_L, am_Error_e> >::callMethodWithReply(
        *this,
        "getListMainSources",
        "",
        callStatus
        , listMainSources, error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::getListMainSourcesAsync(GetListMainSourcesAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_SourceType_L, am_Error_e> >::callMethodAsync(
        *this,
        "getListMainSources",
        "",
        std::move(callback));
}
void CommandControlDBusProxy::getListMainSinkSoundProperties(const am_sinkID_t& sinkID, CommonAPI::CallStatus& callStatus, am_MainSoundProperty_L& listSoundProperties, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sinkID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_MainSoundProperty_L, am_Error_e> >::callMethodWithReply(
        *this,
        "getListMainSinkSoundProperties",
        "q",
        sinkID, 
        callStatus
        , listSoundProperties, error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::getListMainSinkSoundPropertiesAsync(const am_sinkID_t& sinkID, GetListMainSinkSoundPropertiesAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sinkID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_MainSoundProperty_L, am_Error_e> >::callMethodAsync(
        *this,
        "getListMainSinkSoundProperties",
        "q",
        sinkID, 
        std::move(callback));
}
void CommandControlDBusProxy::getListMainSourceSoundProperties(const am_sourceID_t& sourceID, CommonAPI::CallStatus& callStatus, am_MainSoundProperty_L& listSourceProperties, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sourceID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_MainSoundProperty_L, am_Error_e> >::callMethodWithReply(
        *this,
        "getListMainSourceSoundProperties",
        "q",
        sourceID, 
        callStatus
        , listSourceProperties, error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::getListMainSourceSoundPropertiesAsync(const am_sourceID_t& sourceID, GetListMainSourceSoundPropertiesAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sourceID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_MainSoundProperty_L, am_Error_e> >::callMethodAsync(
        *this,
        "getListMainSourceSoundProperties",
        "q",
        sourceID, 
        std::move(callback));
}
void CommandControlDBusProxy::getListSourceClasses(CommonAPI::CallStatus& callStatus, am_SourceClass_L& listSourceClasses, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_SourceClass_L, am_Error_e> >::callMethodWithReply(
        *this,
        "getListSourceClasses",
        "",
        callStatus
        , listSourceClasses, error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::getListSourceClassesAsync(GetListSourceClassesAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_SourceClass_L, am_Error_e> >::callMethodAsync(
        *this,
        "getListSourceClasses",
        "",
        std::move(callback));
}
void CommandControlDBusProxy::getListSinkClasses(CommonAPI::CallStatus& callStatus, am_SinkClass_L& listSinkClasses, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_SinkClass_L, am_Error_e> >::callMethodWithReply(
        *this,
        "getListSinkClasses",
        "",
        callStatus
        , listSinkClasses, error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::getListSinkClassesAsync(GetListSinkClassesAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_SinkClass_L, am_Error_e> >::callMethodAsync(
        *this,
        "getListSinkClasses",
        "",
        std::move(callback));
}
void CommandControlDBusProxy::getListSystemProperties(CommonAPI::CallStatus& callStatus, am_SystemProperty_L& listSystemProperties, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_SystemProperty_L, am_Error_e> >::callMethodWithReply(
        *this,
        "getListSystemProperties",
        "",
        callStatus
        , listSystemProperties, error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::getListSystemPropertiesAsync(GetListSystemPropertiesAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_SystemProperty_L, am_Error_e> >::callMethodAsync(
        *this,
        "getListSystemProperties",
        "",
        std::move(callback));
}
void CommandControlDBusProxy::getTimingInformation(const am_mainConnectionID_t& mainConnectionID, CommonAPI::CallStatus& callStatus, am_timeSync_t& delay, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_mainConnectionID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_timeSync_t, am_Error_e> >::callMethodWithReply(
        *this,
        "getTimingInformation",
        "q",
        mainConnectionID, 
        callStatus
        , delay, error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::getTimingInformationAsync(const am_mainConnectionID_t& mainConnectionID, GetTimingInformationAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_mainConnectionID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_timeSync_t, am_Error_e> >::callMethodAsync(
        *this,
        "getTimingInformation",
        "q",
        mainConnectionID, 
        std::move(callback));
}
void CommandControlDBusProxy::getListMainSinkNotificationConfigurations(const am_sinkID_t& sinkID, CommonAPI::CallStatus& callStatus, am_NotificationConfiguration_L& listMainNotificationConfigurations, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sinkID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_NotificationConfiguration_L, am_Error_e> >::callMethodWithReply(
        *this,
        "getListMainSinkNotificationConfigurations",
        "q",
        sinkID, 
        callStatus
        , listMainNotificationConfigurations, error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::getListMainSinkNotificationConfigurationsAsync(const am_sinkID_t& sinkID, GetListMainSinkNotificationConfigurationsAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sinkID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_NotificationConfiguration_L, am_Error_e> >::callMethodAsync(
        *this,
        "getListMainSinkNotificationConfigurations",
        "q",
        sinkID, 
        std::move(callback));
}
void CommandControlDBusProxy::getListMainSourceNotificationConfigurations(const am_sourceID_t& sourceID, CommonAPI::CallStatus& callStatus, am_NotificationConfiguration_L& listMainNotificationConfigurations, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sourceID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_NotificationConfiguration_L, am_Error_e> >::callMethodWithReply(
        *this,
        "getListMainSourceNotificationConfigurations",
        "q",
        sourceID, 
        callStatus
        , listMainNotificationConfigurations, error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::getListMainSourceNotificationConfigurationsAsync(const am_sourceID_t& sourceID, GetListMainSourceNotificationConfigurationsAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sourceID_t>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_NotificationConfiguration_L, am_Error_e> >::callMethodAsync(
        *this,
        "getListMainSourceNotificationConfigurations",
        "q",
        sourceID, 
        std::move(callback));
}
void CommandControlDBusProxy::setMainSinkNotificationConfiguration(const am_sinkID_t& sinkID, const am_NotificationConfiguration_s& mainNotificationConfiguration, CommonAPI::CallStatus& callStatus, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sinkID_t, am_NotificationConfiguration_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodWithReply(
        *this,
        "setMainSinkNotificationConfiguration",
        "q(qin)",
        sinkID, mainNotificationConfiguration, 
        callStatus
        , error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::setMainSinkNotificationConfigurationAsync(const am_sinkID_t& sinkID, const am_NotificationConfiguration_s& mainNotificationConfiguration, SetMainSinkNotificationConfigurationAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sinkID_t, am_NotificationConfiguration_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodAsync(
        *this,
        "setMainSinkNotificationConfiguration",
        "q(qin)",
        sinkID, mainNotificationConfiguration, 
        std::move(callback));
}
void CommandControlDBusProxy::setMainSourceNotificationConfiguration(const am_sourceID_t& sourceID, const am_NotificationConfiguration_s& mainNotificationConfiguration, CommonAPI::CallStatus& callStatus, am_Error_e& error) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sourceID_t, am_NotificationConfiguration_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodWithReply(
        *this,
        "setMainSourceNotificationConfiguration",
        "q(qin)",
        sourceID, mainNotificationConfiguration, 
        callStatus
        , error);
}
std::future<CommonAPI::CallStatus> CommandControlDBusProxy::setMainSourceNotificationConfigurationAsync(const am_sourceID_t& sourceID, const am_NotificationConfiguration_s& mainNotificationConfiguration, SetMainSourceNotificationConfigurationAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<am_sourceID_t, am_NotificationConfiguration_s>,
                                     CommonAPI::DBus::DBusSerializableArguments<am_Error_e> >::callMethodAsync(
        *this,
        "setMainSourceNotificationConfiguration",
        "q(qin)",
        sourceID, mainNotificationConfiguration, 
        std::move(callback));
}

void CommandControlDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 1;
    ownVersionMinor = 0;
}

} // namespace am
} // namespace genivi
} // namespace org