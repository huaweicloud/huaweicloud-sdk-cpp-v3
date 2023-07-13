

#include "huaweicloud/ecs/v2/model/DeleteServerPasswordRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DeleteServerPasswordRequest::DeleteServerPasswordRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

DeleteServerPasswordRequest::~DeleteServerPasswordRequest() = default;

void DeleteServerPasswordRequest::validate()
{
}

web::json::value DeleteServerPasswordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}

bool DeleteServerPasswordRequest::fromJson(const web::json::value& val)
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

std::string DeleteServerPasswordRequest::getServerId() const
{
    return serverId_;
}

void DeleteServerPasswordRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool DeleteServerPasswordRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void DeleteServerPasswordRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


