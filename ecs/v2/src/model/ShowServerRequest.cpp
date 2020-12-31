

#include "huaweicloud/ecs/model/ShowServerRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerRequest::ShowServerRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ShowServerRequest::~ShowServerRequest() = default;

void ShowServerRequest::validate()
{
}

web::json::value ShowServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}

bool ShowServerRequest::fromJson(const web::json::value& val)
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


std::string ShowServerRequest::getServerId() const
{
    return serverId_;
}

void ShowServerRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ShowServerRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ShowServerRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


