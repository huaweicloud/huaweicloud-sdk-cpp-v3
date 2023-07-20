

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyVolumeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyVolumeRequest::ModifyVolumeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyVolumeRequest::~ModifyVolumeRequest() = default;

void ModifyVolumeRequest::validate()
{
}

web::json::value ModifyVolumeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ModifyVolumeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ModifyVolumeRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyVolumeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyVolumeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyVolumeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ModifyVolumeRequestBody ModifyVolumeRequest::getBody() const
{
    return body_;
}

void ModifyVolumeRequest::setBody(const ModifyVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyVolumeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyVolumeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


