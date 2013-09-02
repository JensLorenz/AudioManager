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
#ifndef ORG_GENIVI_NODESTATEMANAGER_LIFECYCLECONSUMER_Life_Cycle_Consumer_H_
#define ORG_GENIVI_NODESTATEMANAGER_LIFECYCLECONSUMER_Life_Cycle_Consumer_H_



#define COMMONAPI_INTERNAL_COMPILATION

#include <CommonAPI/types.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace NodeStateManager {
namespace LifeCycleConsumer {

class LifeCycleConsumer {
 public:
    virtual ~LifeCycleConsumer() { }

    static inline const char* getInterfaceId();
    static inline CommonAPI::Version getInterfaceVersion();
};

const char* LifeCycleConsumer::getInterfaceId() {
    return "org.genivi.NodeStateManager.LifeCycleConsumer.LifeCycleConsumer";
}

CommonAPI::Version LifeCycleConsumer::getInterfaceVersion() {
    return CommonAPI::Version(0, 1);
}


} // namespace LifeCycleConsumer
} // namespace NodeStateManager
} // namespace genivi
} // namespace org

namespace CommonAPI {

}


namespace std {
    //hashes for types
    
    //hashes for error types
}

#endif // ORG_GENIVI_NODESTATEMANAGER_LIFECYCLECONSUMER_Life_Cycle_Consumer_H_
