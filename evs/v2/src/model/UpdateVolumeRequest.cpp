

#include "huaweicloud/evs/model/UpdateVolumeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateVolumeRequest::UpdateVolumeRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateVolumeRequest::~UpdateVolumeRequest() = default;

void UpdateVolumeRequest::validate()
{
}

web::json::value UpdateVolumeRequest::toJson() const
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

bool UpdateVolumeRequest::fromJson(const web::json::value& val)
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
            UpdateVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateVolumeRequest::getVolumeId() const
{
    return volumeId_;
}

void UpdateVolumeRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool UpdateVolumeRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void UpdateVolumeRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

UpdateVolumeRequestBody UpdateVolumeRequest::getBody() const
{
    return body_;
}

void UpdateVolumeRequest::setBody(const UpdateVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateVolumeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateVolumeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


