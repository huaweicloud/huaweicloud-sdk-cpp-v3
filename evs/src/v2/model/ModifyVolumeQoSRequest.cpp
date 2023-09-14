

#include "huaweicloud/evs/v2/model/ModifyVolumeQoSRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ModifyVolumeQoSRequest::ModifyVolumeQoSRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyVolumeQoSRequest::~ModifyVolumeQoSRequest() = default;

void ModifyVolumeQoSRequest::validate()
{
}

web::json::value ModifyVolumeQoSRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(volumeIdIsSet_) {
        val[utility::conversions::to_string_t("volume_id")] = ModelBase::toJson(volumeId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ModifyVolumeQoSRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("volume_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyVolumeQoSRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ModifyVolumeQoSRequest::getVolumeId() const
{
    return volumeId_;
}

void ModifyVolumeQoSRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool ModifyVolumeQoSRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void ModifyVolumeQoSRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

ModifyVolumeQoSRequestBody ModifyVolumeQoSRequest::getBody() const
{
    return body_;
}

void ModifyVolumeQoSRequest::setBody(const ModifyVolumeQoSRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyVolumeQoSRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyVolumeQoSRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


