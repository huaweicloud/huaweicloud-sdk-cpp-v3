

#include "huaweicloud/ecs/v2/model/ShowSerialConsoleActionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowSerialConsoleActionsRequest::ShowSerialConsoleActionsRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ShowSerialConsoleActionsRequest::~ShowSerialConsoleActionsRequest() = default;

void ShowSerialConsoleActionsRequest::validate()
{
}

web::json::value ShowSerialConsoleActionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool ShowSerialConsoleActionsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    return ok;
}


std::string ShowSerialConsoleActionsRequest::getServerId() const
{
    return serverId_;
}

void ShowSerialConsoleActionsRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ShowSerialConsoleActionsRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ShowSerialConsoleActionsRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


