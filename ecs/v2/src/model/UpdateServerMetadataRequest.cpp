

#include "huaweicloud/ecs/model/UpdateServerMetadataRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerMetadataRequest::UpdateServerMetadataRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateServerMetadataRequest::~UpdateServerMetadataRequest() = default;

void UpdateServerMetadataRequest::validate()
{
}

web::json::value UpdateServerMetadataRequest::toJson() const
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

bool UpdateServerMetadataRequest::fromJson(const web::json::value& val)
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
            UpdateServerMetadataRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateServerMetadataRequest::getServerId() const
{
    return serverId_;
}

void UpdateServerMetadataRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool UpdateServerMetadataRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void UpdateServerMetadataRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

UpdateServerMetadataRequestBody UpdateServerMetadataRequest::getBody() const
{
    return body_;
}

void UpdateServerMetadataRequest::setBody(const UpdateServerMetadataRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateServerMetadataRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateServerMetadataRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


