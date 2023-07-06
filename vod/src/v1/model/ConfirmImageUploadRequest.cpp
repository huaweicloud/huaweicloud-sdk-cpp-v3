

#include "huaweicloud/vod/v1/model/ConfirmImageUploadRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ConfirmImageUploadRequest::ConfirmImageUploadRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    bodyIsSet_ = false;
}

ConfirmImageUploadRequest::~ConfirmImageUploadRequest() = default;

void ConfirmImageUploadRequest::validate()
{
}

web::json::value ConfirmImageUploadRequest::toJson() const
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

bool ConfirmImageUploadRequest::fromJson(const web::json::value& val)
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
            ConfirmImageUploadReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ConfirmImageUploadRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ConfirmImageUploadRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ConfirmImageUploadRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ConfirmImageUploadRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

ConfirmImageUploadReq ConfirmImageUploadRequest::getBody() const
{
    return body_;
}

void ConfirmImageUploadRequest::setBody(const ConfirmImageUploadReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ConfirmImageUploadRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ConfirmImageUploadRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


