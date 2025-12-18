

#include "huaweicloud/meeting/v1/model/SetProfileImageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetProfileImageRequest::SetProfileImageRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetProfileImageRequest::~SetProfileImageRequest() = default;

void SetProfileImageRequest::validate()
{
}

web::json::value SetProfileImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetProfileImageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetProfileImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetProfileImageRequest::getXRequestId() const
{
    return xRequestId_;
}

void SetProfileImageRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SetProfileImageRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SetProfileImageRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

SetProfileImageRequestBody SetProfileImageRequest::getBody() const
{
    return body_;
}

void SetProfileImageRequest::setBody(const SetProfileImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetProfileImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetProfileImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


