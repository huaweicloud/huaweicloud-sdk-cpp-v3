

#include "huaweicloud/ecs/v2/model/ShowRecycleBinServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowRecycleBinServerRequest::ShowRecycleBinServerRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ShowRecycleBinServerRequest::~ShowRecycleBinServerRequest() = default;

void ShowRecycleBinServerRequest::validate()
{
}

web::json::value ShowRecycleBinServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool ShowRecycleBinServerRequest::fromJson(const web::json::value& val)
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


std::string ShowRecycleBinServerRequest::getServerId() const
{
    return serverId_;
}

void ShowRecycleBinServerRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ShowRecycleBinServerRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ShowRecycleBinServerRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


