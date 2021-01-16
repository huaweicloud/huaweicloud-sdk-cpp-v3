

#include "huaweicloud/evs/v2/model/CinderExportToImageRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderExportToImageRequest::CinderExportToImageRequest()
{
    volumeId_ = "";
    volumeIdIsSet_ = false;
    bodyIsSet_ = false;
}

CinderExportToImageRequest::~CinderExportToImageRequest() = default;

void CinderExportToImageRequest::validate()
{
}

web::json::value CinderExportToImageRequest::toJson() const
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

bool CinderExportToImageRequest::fromJson(const web::json::value& val)
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
            CinderExportToImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CinderExportToImageRequest::getVolumeId() const
{
    return volumeId_;
}

void CinderExportToImageRequest::setVolumeId(const std::string& value)
{
    volumeId_ = value;
    volumeIdIsSet_ = true;
}

bool CinderExportToImageRequest::volumeIdIsSet() const
{
    return volumeIdIsSet_;
}

void CinderExportToImageRequest::unsetvolumeId()
{
    volumeIdIsSet_ = false;
}

CinderExportToImageRequestBody CinderExportToImageRequest::getBody() const
{
    return body_;
}

void CinderExportToImageRequest::setBody(const CinderExportToImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CinderExportToImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CinderExportToImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


