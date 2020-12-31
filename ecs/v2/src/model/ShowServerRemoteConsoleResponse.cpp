

#include "huaweicloud/ecs/model/ShowServerRemoteConsoleResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerRemoteConsoleResponse::ShowServerRemoteConsoleResponse()
{
    remoteConsoleIsSet_ = false;
}

ShowServerRemoteConsoleResponse::~ShowServerRemoteConsoleResponse() = default;

void ShowServerRemoteConsoleResponse::validate()
{
}

web::json::value ShowServerRemoteConsoleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(remoteConsoleIsSet_) {
        val[utility::conversions::to_string_t("remote_console")] = ModelBase::toJson(remoteConsole_);
    }

    return val;
}

bool ShowServerRemoteConsoleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("remote_console"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_console"));
        if(!fieldValue.is_null())
        {
            ServerRemoteConsole refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteConsole(refVal);
        }
    }
    return ok;
}


ServerRemoteConsole ShowServerRemoteConsoleResponse::getRemoteConsole() const
{
    return remoteConsole_;
}

void ShowServerRemoteConsoleResponse::setRemoteConsole(const ServerRemoteConsole& value)
{
    remoteConsole_ = value;
    remoteConsoleIsSet_ = true;
}

bool ShowServerRemoteConsoleResponse::remoteConsoleIsSet() const
{
    return remoteConsoleIsSet_;
}

void ShowServerRemoteConsoleResponse::unsetremoteConsole()
{
    remoteConsoleIsSet_ = false;
}

}
}
}
}
}


