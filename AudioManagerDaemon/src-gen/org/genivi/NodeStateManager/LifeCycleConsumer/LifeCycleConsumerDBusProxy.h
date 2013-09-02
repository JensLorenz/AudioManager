/*
* This file was generated by the CommonAPI Generators.
*
 * Copyright (C) 2012, BMW AG
 *
 * This file is part of GENIVI Project AudioManager.
 *
 * Contributions are licensed to the GENIVI Alliance under one or more
 * Contribution License Agreements.
 *
 * \copyright
 * This Source Code Form is subject to the terms of the
 * Mozilla Public License, v. 2.0. If a  copy of the MPL was not distributed with
 * this file, You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 *
 * \author Aleksandar Donchev, aleksander.donchev@partner.bmw.de BMW 2013
 *
 * For further information see http://www.genivi.org/.
*/
#ifndef ORG_GENIVI_NODESTATEMANAGER_LIFECYCLECONSUMER_Life_Cycle_Consumer_DBUS_PROXY_H_
#define ORG_GENIVI_NODESTATEMANAGER_LIFECYCLECONSUMER_Life_Cycle_Consumer_DBUS_PROXY_H_

#include <org/genivi/NodeStateManager/LifeCycleConsumer/LifeCycleConsumerProxyBase.h>

#define COMMONAPI_INTERNAL_COMPILATION

#include <CommonAPI/DBus/DBusFactory.h>
#include <CommonAPI/DBus/DBusProxy.h>

#undef COMMONAPI_INTERNAL_COMPILATION

#include <string>

namespace org {
namespace genivi {
namespace NodeStateManager {
namespace LifeCycleConsumer {

class LifeCycleConsumerDBusProxy: virtual public LifeCycleConsumerProxyBase, virtual public CommonAPI::DBus::DBusProxy {
 public:
    LifeCycleConsumerDBusProxy(
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection);

    virtual ~LifeCycleConsumerDBusProxy() { }




    virtual void LifecycleRequest(const uint32_t& Request, const uint32_t& RequestId, CommonAPI::CallStatus& callStatus, int32_t& ErrorCode);
    virtual std::future<CommonAPI::CallStatus> LifecycleRequestAsync(const uint32_t& Request, const uint32_t& RequestId, LifecycleRequestAsyncCallback callback);
    
    virtual void getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const;

 private:

};

} // namespace LifeCycleConsumer
} // namespace NodeStateManager
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_NODESTATEMANAGER_LIFECYCLECONSUMER_Life_Cycle_Consumer_DBUS_PROXY_H_
