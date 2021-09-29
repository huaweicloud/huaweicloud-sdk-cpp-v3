

#include "huaweicloud/ecs/v2/model/ShowServerPasswordRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerPasswordRequest::ShowServerPasswordRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ShowServerPasswordRequest::~ShowServerPasswordRequest() = default;

void ShowServerPasswordRequest::validate()
{
}

web::json::value ShowServerPasswordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}

bool ShowServerPasswordRequest::fromJson(const web::json::value& val)
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


std::string ShowServerPasswordRequest::getServerId() const
{
    return serverId_;
}

void ShowServerPasswordRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ShowServerPasswordRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ShowServerPasswordRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


