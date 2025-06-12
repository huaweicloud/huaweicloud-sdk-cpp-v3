

#include "huaweicloud/ecs/v2/model/UpdateServerMetadataOptionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerMetadataOptionsRequest::UpdateServerMetadataOptionsRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateServerMetadataOptionsRequest::~UpdateServerMetadataOptionsRequest() = default;

void UpdateServerMetadataOptionsRequest::validate()
{
}

web::json::value UpdateServerMetadataOptionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateServerMetadataOptionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateServerMetadataOptionsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateServerMetadataOptionsRequest::getServerId() const
{
    return serverId_;
}

void UpdateServerMetadataOptionsRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool UpdateServerMetadataOptionsRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void UpdateServerMetadataOptionsRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

UpdateServerMetadataOptionsRequestBody UpdateServerMetadataOptionsRequest::getBody() const
{
    return body_;
}

void UpdateServerMetadataOptionsRequest::setBody(const UpdateServerMetadataOptionsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateServerMetadataOptionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateServerMetadataOptionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


