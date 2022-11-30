

#include "huaweicloud/evs/v2/model/ResizeVolumeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ResizeVolumeRequest::ResizeVolumeRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResizeVolumeRequest::~ResizeVolumeRequest() = default;

void ResizeVolumeRequest::validate()
{
}

web::json::value ResizeVolumeRequest::toJson() const
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

bool ResizeVolumeRequest::fromJson(const web::json::value& val)
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
            ResizeVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResizeVolumeRequest::getVolumeId() const
{
    return volumeId_;
}

void ResizeVolumeRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool ResizeVolumeRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void ResizeVolumeRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

ResizeVolumeRequestBody ResizeVolumeRequest::getBody() const
{
    return body_;
}

void ResizeVolumeRequest::setBody(const ResizeVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResizeVolumeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResizeVolumeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


