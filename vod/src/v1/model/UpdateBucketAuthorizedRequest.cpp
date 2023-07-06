

#include "huaweicloud/vod/v1/model/UpdateBucketAuthorizedRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateBucketAuthorizedRequest::UpdateBucketAuthorizedRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateBucketAuthorizedRequest::~UpdateBucketAuthorizedRequest() = default;

void UpdateBucketAuthorizedRequest::validate()
{
}

web::json::value UpdateBucketAuthorizedRequest::toJson() const
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

bool UpdateBucketAuthorizedRequest::fromJson(const web::json::value& val)
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
            UpdateBucketAuthorizedReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateBucketAuthorizedRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateBucketAuthorizedRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateBucketAuthorizedRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateBucketAuthorizedRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

UpdateBucketAuthorizedReq UpdateBucketAuthorizedRequest::getBody() const
{
    return body_;
}

void UpdateBucketAuthorizedRequest::setBody(const UpdateBucketAuthorizedReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBucketAuthorizedRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBucketAuthorizedRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


