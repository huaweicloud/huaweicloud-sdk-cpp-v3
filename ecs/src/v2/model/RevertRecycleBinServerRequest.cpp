

#include "huaweicloud/ecs/v2/model/RevertRecycleBinServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




RevertRecycleBinServerRequest::RevertRecycleBinServerRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

RevertRecycleBinServerRequest::~RevertRecycleBinServerRequest() = default;

void RevertRecycleBinServerRequest::validate()
{
}

web::json::value RevertRecycleBinServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool RevertRecycleBinServerRequest::fromJson(const web::json::value& val)
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


std::string RevertRecycleBinServerRequest::getServerId() const
{
    return serverId_;
}

void RevertRecycleBinServerRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool RevertRecycleBinServerRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void RevertRecycleBinServerRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


