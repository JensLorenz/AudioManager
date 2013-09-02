/*
* This file was generated by the CommonAPI Generators.
*
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
#ifndef ORG_GENIVI_AUDIOMANAGER_Routing_Sender_DBUS_STUB_ADAPTER_H_
#define ORG_GENIVI_AUDIOMANAGER_Routing_Sender_DBUS_STUB_ADAPTER_H_

#include <org/genivi/audiomanager/RoutingSenderStub.h>

#define COMMONAPI_INTERNAL_COMPILATION

#include <CommonAPI/DBus/DBusStubAdapterHelper.h>
#include <CommonAPI/DBus/DBusFactory.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace org {
namespace genivi {
namespace audiomanager {

typedef CommonAPI::DBus::DBusStubAdapterHelper<RoutingSenderStub> RoutingSenderDBusStubAdapterHelper;

class RoutingSenderDBusStubAdapter: public RoutingSenderStubAdapter, public RoutingSenderDBusStubAdapterHelper {
 public:
    RoutingSenderDBusStubAdapter(
            const std::string& commonApiAddress,
            const std::string& dbusInterfaceName,
            const std::string& dbusBusName,
            const std::string& dbusObjectPath,
            const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusConnection,
            const std::shared_ptr<CommonAPI::StubBase>& stub);
    


 protected:
    virtual const char* getMethodsDBusIntrospectionXmlData() const;
};

} // namespace audiomanager
} // namespace genivi
} // namespace org

#endif // ORG_GENIVI_AUDIOMANAGER_Routing_Sender_DBUS_STUB_ADAPTER_H_
