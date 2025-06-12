

#include "huaweicloud/ecs/v2/model/ShowServerMetadataOptionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerMetadataOptionsRequest::ShowServerMetadataOptionsRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
}

ShowServerMetadataOptionsRequest::~ShowServerMetadataOptionsRequest() = default;

void ShowServerMetadataOptionsRequest::validate()
{
}

web::json::value ShowServerMetadataOptionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool ShowServerMetadataOptionsRequest::fromJson(const web::json::value& val)
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


std::string ShowServerMetadataOptionsRequest::getServerId() const
{
    return serverId_;
}

void ShowServerMetadataOptionsRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ShowServerMetadataOptionsRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ShowServerMetadataOptionsRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


