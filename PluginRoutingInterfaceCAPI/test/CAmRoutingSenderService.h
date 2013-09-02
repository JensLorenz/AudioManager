/**
 *  Copyright (c) 2012 BMW
 *
 *  \author Aleksandar Donchev, aleksander.donchev@partner.bmw.de BMW 2013
 *
 *  \copyright
 *  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction,
 *  including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so,
 *  subject to the following conditions:
 *  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *  IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR
 *  THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 *  For further information see http://www.genivi.org/.
 */

#ifndef CAMROUTINGSENDERSERVICE_H_
#define CAMROUTINGSENDERSERVICE_H_

#include "audiomanagertypes.h"
#include <org/genivi/audiomanager/RoutingSenderStubDefault.h>
#include <org/genivi/audiomanager/RoutingInterfaceProxy.h>

/** 
 * GENERATED FROM CMAKE. PLEASE USE cmake/CAmRoutingSenderService.h.in IF YOU WANT TO MAKE CHANGES.
 */

namespace am {

using namespace CommonAPI;
using namespace org::genivi::audiomanager;

class CAmCommonAPIWrapper;

/** 
 * THE FOLLOWING DEFINES ARE POPULATED FROM THE CMAKELISTS.TXT .
 */
#define CAPI_SENDER_INTERFACE  "org.genivi.audiomanger.routingsender" 
#define CAPI_SENDER_INSTANCE  	"org.genivi.routingsender"  
#define CAPI_SENDER_PATH 		"/org/genivi/audiomanger/routingsender"  

#define CAPI_ROUTING_INTERFACE  "org.genivi.audiomanger.routinginterface"
#define CAPI_ROUTING_INSTANCE   "org.genivi.audiomanger"
#define CAPI_ROUTING_PATH 		 "/org/genivi/audiomanger/routinginterface"


/** Test class implementing the routing sender service.
*
*	Please see cmake/CAmRoutingSenderService.h.in	
*/
class CAmRoutingSenderService : public RoutingSenderStubDefault {

	am_gen::am_Domain_s mDomainData;
	uint16_t mAbortedHandle;
	bool mIsServiceAvailable;
	bool mIsDomainRegistred;
	bool mIsReady;
	CAmCommonAPIWrapper *mpWrapper;
	std::shared_ptr<RoutingInterfaceProxy<> > mRoutingInterfaceProxy;

public:

	CAmRoutingSenderService();
	CAmRoutingSenderService(CAmCommonAPIWrapper * aWrapper);
	CAmRoutingSenderService(CAmCommonAPIWrapper * aWrapper, std::shared_ptr<RoutingInterfaceProxy<> > aProxy);
	virtual ~CAmRoutingSenderService();

	void onServiceStatusEvent(const CommonAPI::AvailabilityStatus& serviceStatus);
	void onRoutingReadyRundown();
	void onRoutingReadyEvent();
	void registerDomain();
	void setAbortHandle(uint16_t handle);
	uint16_t errorForHandle(const uint16_t & handle);

	virtual void asyncSetSourceState(uint16_t handle, am_gen::am_sourceID_t sourceID, am_gen::am_SourceState_e sourceState);

	virtual void setDomainState(am_gen::am_domainID_t domainID, am_gen::am_DomainState_e domainState, am_gen::am_Error_e& error);

	virtual void asyncSetSourceVolume(am_gen::am_handle_t handle, am_gen::am_sourceID_t sourceID, am_gen::am_volume_t volume, am_gen::am_RampType_e ramp, am_gen::am_time_t time);

	virtual void asyncSetSinkVolume(am_gen::am_handle_t handle, am_gen::am_sinkID_t sinkID, am_gen::am_volume_t volume, am_gen::am_RampType_e ramp, am_gen::am_time_t time);

	virtual void asyncConnect(am_gen::am_handle_t handle, am_gen::am_connectionID_t connectionID, am_gen::am_sourceID_t sourceID, am_gen::am_sinkID_t sinkID, am_gen::am_ConnectionFormat_e connectionFormat);

	virtual void asyncDisconnect(am_gen::am_handle_t handle, am_gen::am_connectionID_t connectionID);

	virtual void asyncAbort(am_gen::am_handle_t handle, am_gen::am_Error_e& error);

	virtual void asyncSetSinkSoundProperties(am_gen::am_handle_t handle, am_gen::am_sinkID_t sinkID, am_gen::am_SoundProperty_L listSoundProperties);

	virtual void asyncSetSinkSoundProperty(am_gen::am_handle_t handle, am_gen::am_sinkID_t sinkID, am_gen::am_SoundProperty_s soundProperty);

	virtual void asyncSetSourceSoundProperties(am_gen::am_handle_t handle, am_gen::am_sourceID_t sourceID, am_gen::am_SoundProperty_L listSoundProperties);

	virtual void asyncSetSourceSoundProperty(am_gen::am_handle_t handle, am_gen::am_sourceID_t sourceID, am_gen::am_SoundProperty_s soundProperty);

	virtual void asyncCrossFade(am_gen::am_handle_t handle, am_gen::am_crossfaderID_t crossfaderID, am_gen::am_HotSink_e hotSink, am_gen::am_RampType_e rampType, am_gen::am_time_t time);

	virtual void asyncSetVolumes(am_gen::am_handle_t handle, am_gen::am_Volumes_l volumes);

	virtual void asyncSetSinkNotificationConfiguration(am_gen::am_handle_t handle, am_gen::am_sinkID_t sinkID, am_gen::am_NotificationConfiguration_s notificationConfiguration);

	virtual void asyncSetSourceNotificationConfiguration(am_gen::am_handle_t handle, am_gen::am_sourceID_t sourceID, am_gen::am_NotificationConfiguration_s notificationConfiguration);

	static const char * ROUTING_SENDER_SERVICE;
	static const char * ROUTING_INTERFACE_SERVICE;
};


} /* namespace am */
#endif /* CAMROUTINGSENDERSERVICE_H_ */
