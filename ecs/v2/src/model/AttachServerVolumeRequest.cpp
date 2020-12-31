

#include "huaweicloud/ecs/model/AttachServerVolumeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




AttachServerVolumeRequest::AttachServerVolumeRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

AttachServerVolumeRequest::~AttachServerVolumeRequest() = default;

void AttachServerVolumeRequest::validate()
{
}

web::json::value AttachServerVolumeRequest::toJson() const
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

bool AttachServerVolumeRequest::fromJson(const web::json::value& val)
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
            AttachServerVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AttachServerVolumeRequest::getServerId() const
{
    return serverId_;
}

void AttachServerVolumeRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool AttachServerVolumeRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void AttachServerVolumeRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

AttachServerVolumeRequestBody AttachServerVolumeRequest::getBody() const
{
    return body_;
}

void AttachServerVolumeRequest::setBody(const AttachServerVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachServerVolumeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachServerVolumeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


