

#include "huaweicloud/ecs/v2/model/NovaDeleteServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaDeleteServerRequest::NovaDeleteServerRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

NovaDeleteServerRequest::~NovaDeleteServerRequest() = default;

void NovaDeleteServerRequest::validate()
{
}

web::json::value NovaDeleteServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool NovaDeleteServerRequest::fromJson(const web::json::value& val)
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


std::string NovaDeleteServerRequest::getServerId() const
{
    return serverId_;
}

void NovaDeleteServerRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool NovaDeleteServerRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void NovaDeleteServerRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


