

#include "huaweicloud/ecs/v2/model/ShowMetadataOptionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowMetadataOptionsRequest::ShowMetadataOptionsRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ShowMetadataOptionsRequest::~ShowMetadataOptionsRequest() = default;

void ShowMetadataOptionsRequest::validate()
{
}

web::json::value ShowMetadataOptionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool ShowMetadataOptionsRequest::fromJson(const web::json::value& val)
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


std::string ShowMetadataOptionsRequest::getServerId() const
{
    return serverId_;
}

void ShowMetadataOptionsRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ShowMetadataOptionsRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ShowMetadataOptionsRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


