

#include "huaweicloud/ecs/v2/model/ShowServerRemoteConsoleRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerRemoteConsoleRequestBody::ShowServerRemoteConsoleRequestBody()
{
    remoteConsoleIsSet_ = false;
}

ShowServerRemoteConsoleRequestBody::~ShowServerRemoteConsoleRequestBody() = default;

void ShowServerRemoteConsoleRequestBody::validate()
{
}

web::json::value ShowServerRemoteConsoleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(remoteConsoleIsSet_) {
        val[utility::conversions::to_string_t("remote_console")] = ModelBase::toJson(remoteConsole_);
    }

    return val;
}

bool ShowServerRemoteConsoleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("remote_console"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_console"));
        if(!fieldValue.is_null())
        {
            GetServerRemoteConsoleOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteConsole(refVal);
        }
    }
    return ok;
}

GetServerRemoteConsoleOption ShowServerRemoteConsoleRequestBody::getRemoteConsole() const
{
    return remoteConsole_;
}

void ShowServerRemoteConsoleRequestBody::setRemoteConsole(const GetServerRemoteConsoleOption& value)
{
    remoteConsole_ = value;
    remoteConsoleIsSet_ = true;
}

bool ShowServerRemoteConsoleRequestBody::remoteConsoleIsSet() const
{
    return remoteConsoleIsSet_;
}

void ShowServerRemoteConsoleRequestBody::unsetremoteConsole()
{
    remoteConsoleIsSet_ = false;
}

}
}
}
}
}


