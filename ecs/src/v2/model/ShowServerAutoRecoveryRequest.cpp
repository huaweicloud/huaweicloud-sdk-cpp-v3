

#include "huaweicloud/ecs/v2/model/ShowServerAutoRecoveryRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerAutoRecoveryRequest::ShowServerAutoRecoveryRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ShowServerAutoRecoveryRequest::~ShowServerAutoRecoveryRequest() = default;

void ShowServerAutoRecoveryRequest::validate()
{
}

web::json::value ShowServerAutoRecoveryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}

bool ShowServerAutoRecoveryRequest::fromJson(const web::json::value& val)
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


std::string ShowServerAutoRecoveryRequest::getServerId() const
{
    return serverId_;
}

void ShowServerAutoRecoveryRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ShowServerAutoRecoveryRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ShowServerAutoRecoveryRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


