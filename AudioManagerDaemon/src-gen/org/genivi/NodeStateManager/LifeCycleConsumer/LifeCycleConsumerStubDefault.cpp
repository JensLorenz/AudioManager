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
#include <org/genivi/NodeStateManager/LifeCycleConsumer/LifeCycleConsumerStubDefault.h>

namespace org {
namespace genivi {
namespace NodeStateManager {
namespace LifeCycleConsumer {

LifeCycleConsumerStubDefault::LifeCycleConsumerStubDefault():
        remoteEventHandler_(this) {
}

LifeCycleConsumerStubRemoteEvent* LifeCycleConsumerStubDefault::initStubAdapter(const std::shared_ptr<LifeCycleConsumerStubAdapter>& stubAdapter) {
    stubAdapter_ = stubAdapter;
    return &remoteEventHandler_;
}


void LifeCycleConsumerStubDefault::LifecycleRequest(uint32_t Request, uint32_t RequestId, int32_t& ErrorCode) {
    // No operation in default
}



LifeCycleConsumerStubDefault::RemoteEventHandler::RemoteEventHandler(LifeCycleConsumerStubDefault* defaultStub):
        defaultStub_(defaultStub) {
}

} // namespace LifeCycleConsumer
} // namespace NodeStateManager
} // namespace genivi
} // namespace org
