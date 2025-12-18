

#include "huaweicloud/meeting/v1/model/SetUserProfileImageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetUserProfileImageRequest::SetUserProfileImageRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetUserProfileImageRequest::~SetUserProfileImageRequest() = default;

void SetUserProfileImageRequest::validate()
{
}

web::json::value SetUserProfileImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetUserProfileImageRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SetUserProfileImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetUserProfileImageRequest::getXRequestId() const
{
    return xRequestId_;
}

void SetUserProfileImageRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SetUserProfileImageRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SetUserProfileImageRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SetUserProfileImageRequest::getUserId() const
{
    return userId_;
}

void SetUserProfileImageRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool SetUserProfileImageRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void SetUserProfileImageRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

SetUserProfileImageRequestBody SetUserProfileImageRequest::getBody() const
{
    return body_;
}

void SetUserProfileImageRequest::setBody(const SetUserProfileImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetUserProfileImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetUserProfileImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


