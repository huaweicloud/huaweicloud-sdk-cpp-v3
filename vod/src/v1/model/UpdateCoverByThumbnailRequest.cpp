

#include "huaweicloud/vod/v1/model/UpdateCoverByThumbnailRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateCoverByThumbnailRequest::UpdateCoverByThumbnailRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateCoverByThumbnailRequest::~UpdateCoverByThumbnailRequest() = default;

void UpdateCoverByThumbnailRequest::validate()
{
}

web::json::value UpdateCoverByThumbnailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateCoverByThumbnailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateCoverByThumbnailReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateCoverByThumbnailRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateCoverByThumbnailRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateCoverByThumbnailRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateCoverByThumbnailRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

UpdateCoverByThumbnailReq UpdateCoverByThumbnailRequest::getBody() const
{
    return body_;
}

void UpdateCoverByThumbnailRequest::setBody(const UpdateCoverByThumbnailReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateCoverByThumbnailRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateCoverByThumbnailRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


