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
#ifndef ORG_GENIVI_NODESTATEMANAGER_LIFECYCLECONSUMER_Life_Cycle_Consumer_PROXY_H_
#define ORG_GENIVI_NODESTATEMANAGER_LIFECYCLECONSUMER_Life_Cycle_Consumer_PROXY_H_

#include "LifeCycleConsumerProxyBase.h"

#define COMMONAPI_INTERNAL_COMPILATION


#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace NodeStateManager {
namespace LifeCycleConsumer {

template <typename ... _AttributeExtensions>
class LifeCycleConsumerProxy: virtual public LifeCycleConsumer, virtual public LifeCycleConsumerProxyBase, public _AttributeExtensions... {
 public:
    LifeCycleConsumerProxy(std::shared_ptr<CommonAPI::Proxy> delegate);
    ~LifeCycleConsumerProxy();




    /**
     * Calls LifecycleRequest with synchronous semantics.
     * 
     * All const parameters are input parameters to this method.
     * All non-const parameters will be filled with the returned values.
     * The CallStatus will be filled when the method returns and indicate either
     * "SUCCESS" or which type of error has occurred. In case of an error, ONLY the CallStatus
     * will be set.
     * Synchronous calls are not supported (will block indefinitely) when mainloop integration is used.
     */
    virtual void LifecycleRequest(const uint32_t& Request, const uint32_t& RequestId, CommonAPI::CallStatus& callStatus, int32_t& ErrorCode);
    /**
     * Calls LifecycleRequest with asynchronous semantics.
     * 
     * The provided callback will be called when the reply to this call arrives or
     * an error occurs during the call. The CallStatus will indicate either "SUCCESS"
     * or which type of error has occurred. In case of any error, ONLY the CallStatus
     * will have a defined value.
     * The std::future returned by this method will be fulfilled at arrival of the reply.
     * It will provide the same value for CallStatus as will be handed to the callback.
     */
    virtual std::future<CommonAPI::CallStatus> LifecycleRequestAsync(const uint32_t& Request, const uint32_t& RequestId, LifecycleRequestAsyncCallback callback);

    /// Returns the CommonAPI address of the remote partner this proxy communicates with.
    virtual std::string getAddress() const;

    /// Returns the domain of the remote partner this proxy communicates with.
    virtual const std::string& getDomain() const;

    /// Returns the service ID of the remote partner this proxy communicates with.
    virtual const std::string& getServiceId() const;

    /// Returns the instance ID of the remote partner this proxy communicates with.
    virtual const std::string& getInstanceId() const;

    /// Returns true if the remote partner for this proxy is available.
    virtual bool isAvailable() const;

    /**
     * Returns the wrapper class that is used to (de-)register for notifications about
     * the availability of the remote partner of this proxy.
     */
    virtual CommonAPI::ProxyStatusEvent& getProxyStatusEvent();

    /**
     * Returns the wrapper class that is used to access version information of the remote
     * partner of this proxy.
     */
    virtual CommonAPI::InterfaceVersionAttribute& getInterfaceVersionAttribute();

 private:
    std::shared_ptr<LifeCycleConsumerProxyBase> delegate_;
};


//
// LifeCycleConsumerProxy Implementation
//
template <typename ... _AttributeExtensions>
LifeCycleConsumerProxy<_AttributeExtensions...>::LifeCycleConsumerProxy(std::shared_ptr<CommonAPI::Proxy> delegate):
        delegate_(std::dynamic_pointer_cast<LifeCycleConsumerProxyBase>(delegate)),
        _AttributeExtensions(*(std::dynamic_pointer_cast<LifeCycleConsumerProxyBase>(delegate)))... {
}

template <typename ... _AttributeExtensions>
LifeCycleConsumerProxy<_AttributeExtensions...>::~LifeCycleConsumerProxy() {
}

template <typename ... _AttributeExtensions>
void LifeCycleConsumerProxy<_AttributeExtensions...>::LifecycleRequest(const uint32_t& Request, const uint32_t& RequestId, CommonAPI::CallStatus& callStatus, int32_t& ErrorCode) {
    delegate_->LifecycleRequest(Request, RequestId, callStatus, ErrorCode);
}

template <typename ... _AttributeExtensions>
std::future<CommonAPI::CallStatus> LifeCycleConsumerProxy<_AttributeExtensions...>::LifecycleRequestAsync(const uint32_t& Request, const uint32_t& RequestId, LifecycleRequestAsyncCallback callback) {
    return delegate_->LifecycleRequestAsync(Request, RequestId, callback);
}


template <typename ... _AttributeExtensions>
std::string LifeCycleConsumerProxy<_AttributeExtensions...>::getAddress() const {
    return delegate_->getAddress();
}

template <typename ... _AttributeExtensions>
const std::string& LifeCycleConsumerProxy<_AttributeExtensions...>::getDomain() const {
    return delegate_->getDomain();
}

template <typename ... _AttributeExtensions>
const std::string& LifeCycleConsumerProxy<_AttributeExtensions...>::getServiceId() const {
    return delegate_->getServiceId();
}

template <typename ... _AttributeExtensions>
const std::string& LifeCycleConsumerProxy<_AttributeExtensions...>::getInstanceId() const {
    return delegate_->getInstanceId();
}

template <typename ... _AttributeExtensions>
bool LifeCycleConsumerProxy<_AttributeExtensions...>::isAvailable() const {
    return delegate_->isAvailable();
}

template <typename ... _AttributeExtensions>
CommonAPI::ProxyStatusEvent& LifeCycleConsumerProxy<_AttributeExtensions...>::getProxyStatusEvent() {
    return delegate_->getProxyStatusEvent();
}

template <typename ... _AttributeExtensions>
CommonAPI::InterfaceVersionAttribute& LifeCycleConsumerProxy<_AttributeExtensions...>::getInterfaceVersionAttribute() {
    return delegate_->getInterfaceVersionAttribute();
}

} // namespace LifeCycleConsumer
} // namespace NodeStateManager
} // namespace genivi
} // namespace org



#endif // ORG_GENIVI_NODESTATEMANAGER_LIFECYCLECONSUMER_Life_Cycle_Consumer_PROXY_H_
