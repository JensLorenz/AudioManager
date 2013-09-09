/*
* This file was generated by the CommonAPI Generators.
*
 * Copyright (C) 2013, BMW AG
 *
 * \author Christian Linke, christian.linke@bmw.de BMW 2012,2013
*/
#ifndef ORG_GENIVI_AM_Routing_Control_STUB_DEFAULT_H_
#define ORG_GENIVI_AM_Routing_Control_STUB_DEFAULT_H_

#include <org/genivi/am/RoutingControlStub.h>

namespace org {
namespace genivi {
namespace am {

/**
 * Provides a default implementation for RoutingControlStubRemoteEvent and
 * RoutingControlStub. Method callbacks have an empty implementation,
 * remote set calls on attributes will always change the value of the attribute
 * to the one received.
 * 
 * Override this stub if you only want to provide a subset of the functionality
 * that would be defined for this service, and/or if you do not need any non-default
 * behaviour.
 */
class RoutingControlStubDefault : public RoutingControlStub {
 public:
    RoutingControlStubDefault();

    RoutingControlStubRemoteEvent* initStubAdapter(const std::shared_ptr<RoutingControlStubAdapter>& stubAdapter);


    virtual void asyncAbort(am_Handle_s handle);

    virtual void asyncConnect(am_Handle_s handle, am_connectionID_t connectionID, am_sourceID_t sourceID, am_sinkID_t sinkID, am_ConnectionFormat_pe connectionFormat);

    virtual void asyncDisconnect(am_Handle_s handle, am_connectionID_t connectionID);

    virtual void asyncSetSinkVolume(am_Handle_s handle, am_sinkID_t sinkID, am_volume_t volume, am_RampType_pe ramp, am_time_t time);

    virtual void asyncSetSourceVolume(am_Handle_s handle, am_sourceID_t sourceID, am_volume_t volume, am_RampType_pe ramp, am_time_t time);

    virtual void asyncSetSourceState(am_Handle_s handle, am_sourceID_t sourceID, am_SourceState_e state);

    virtual void asyncSetSinkSoundProperties(am_Handle_s handle, am_sinkID_t sinkID, am_SoundProperty_L listSoundProperties);

    virtual void asyncSetSinkSoundProperty(am_Handle_s handle, am_sinkID_t sinkID, am_SoundProperty_s soundProperty);

    virtual void asyncSetSourceSoundProperties(am_Handle_s handle, am_sourceID_t sourceID, am_SoundProperty_L listSoundProperties);

    virtual void asyncSetSourceSoundProperty(am_Handle_s handle, am_sourceID_t sourceID, am_SoundProperty_s soundProperty);

    virtual void asyncCrossFade(am_Handle_s handle, am_crossfaderID_t crossfaderID, am_HotSink_e hotSink, am_RampType_pe rampType, am_time_t time);

    virtual void setDomainState(am_domainID_t domainID, am_DomainState_e domainState, am_Error_e& error);

    virtual void asyncSetVolumes(am_Handle_s handle, am_Volumes_L volumes);

    virtual void asyncSetSinkNotificationConfiguration(am_Handle_s handle, am_sinkID_t sinkID, am_NotificationConfiguration_s notificationConfiguration);

    virtual void asyncSetSourceNotificationConfiguration(am_Handle_s handle, am_sourceID_t sourceID, am_NotificationConfiguration_s notificationConfiguration);

    

 protected:
    
 private:
    class RemoteEventHandler: public RoutingControlStubRemoteEvent {
     public:
        RemoteEventHandler(RoutingControlStubDefault* defaultStub);


     private:
        RoutingControlStubDefault* defaultStub_;
    };

    RemoteEventHandler remoteEventHandler_;
    std::shared_ptr<RoutingControlStubAdapter> stubAdapter_;

};

} // namespace am
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_AM_Routing_Control_STUB_DEFAULT_H_