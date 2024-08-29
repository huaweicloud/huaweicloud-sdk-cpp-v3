

#include "huaweicloud/evs/v2/model/RetypeVolumeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RetypeVolumeRequest::RetypeVolumeRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
    bodyIsSet_ = false;
}

RetypeVolumeRequest::~RetypeVolumeRequest() = default;

void RetypeVolumeRequest::validate()
{
}

web::json::value RetypeVolumeRequest::toJson() const
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
bool RetypeVolumeRequest::fromJson(const web::json::value& val)
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
            RetypeVolumeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RetypeVolumeRequest::getVolumeId() const
{
    return volumeId_;
}

void RetypeVolumeRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool RetypeVolumeRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void RetypeVolumeRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

RetypeVolumeRequestBody RetypeVolumeRequest::getBody() const
{
    return body_;
}

void RetypeVolumeRequest::setBody(const RetypeVolumeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RetypeVolumeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RetypeVolumeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


