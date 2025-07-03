

#include "huaweicloud/ecs/v2/model/UpdateMetadataOptionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateMetadataOptionsRequest::UpdateMetadataOptionsRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateMetadataOptionsRequest::~UpdateMetadataOptionsRequest() = default;

void UpdateMetadataOptionsRequest::validate()
{
}

web::json::value UpdateMetadataOptionsRequest::toJson() const
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
bool UpdateMetadataOptionsRequest::fromJson(const web::json::value& val)
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


std::string UpdateMetadataOptionsRequest::getServerId() const
{
    return serverId_;
}

void UpdateMetadataOptionsRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool UpdateMetadataOptionsRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void UpdateMetadataOptionsRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

UpdateServerMetadataOptionsRequestBody UpdateMetadataOptionsRequest::getBody() const
{
    return body_;
}

void UpdateMetadataOptionsRequest::setBody(const UpdateServerMetadataOptionsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMetadataOptionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMetadataOptionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


