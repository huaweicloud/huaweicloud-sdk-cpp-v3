

#include "huaweicloud/ecs/v2/model/ExecuteServerRedeployRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ExecuteServerRedeployRequest::ExecuteServerRedeployRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ExecuteServerRedeployRequest::~ExecuteServerRedeployRequest() = default;

void ExecuteServerRedeployRequest::validate()
{
}

web::json::value ExecuteServerRedeployRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool ExecuteServerRedeployRequest::fromJson(const web::json::value& val)
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


std::string ExecuteServerRedeployRequest::getServerId() const
{
    return serverId_;
}

void ExecuteServerRedeployRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ExecuteServerRedeployRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ExecuteServerRedeployRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


