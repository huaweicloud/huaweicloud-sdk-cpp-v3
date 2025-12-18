

#include "huaweicloud/meeting/v1/model/SendSlideVerifyCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SendSlideVerifyCodeResponse::SendSlideVerifyCodeResponse()
{
    shadowImage_ = "";
    shadowImageIsSet_ = false;
    cutImage_ = "";
    cutImageIsSet_ = false;
    pointY_ = 0;
    pointYIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
    expire_ = 0;
    expireIsSet_ = false;
}

SendSlideVerifyCodeResponse::~SendSlideVerifyCodeResponse() = default;

void SendSlideVerifyCodeResponse::validate()
{
}

web::json::value SendSlideVerifyCodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(shadowImageIsSet_) {
        val[utility::conversions::to_string_t("shadowImage")] = ModelBase::toJson(shadowImage_);
    }
    if(cutImageIsSet_) {
        val[utility::conversions::to_string_t("cutImage")] = ModelBase::toJson(cutImage_);
    }
    if(pointYIsSet_) {
        val[utility::conversions::to_string_t("pointY")] = ModelBase::toJson(pointY_);
    }
    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }
    if(expireIsSet_) {
        val[utility::conversions::to_string_t("expire")] = ModelBase::toJson(expire_);
    }

    return val;
}
bool SendSlideVerifyCodeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("shadowImage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shadowImage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShadowImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cutImage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cutImage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCutImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pointY"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pointY"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPointY(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpire(refVal);
        }
    }
    return ok;
}


std::string SendSlideVerifyCodeResponse::getShadowImage() const
{
    return shadowImage_;
}

void SendSlideVerifyCodeResponse::setShadowImage(const std::string& value)
{
    shadowImage_ = value;
    shadowImageIsSet_ = true;
}

bool SendSlideVerifyCodeResponse::shadowImageIsSet() const
{
    return shadowImageIsSet_;
}

void SendSlideVerifyCodeResponse::unsetshadowImage()
{
    shadowImageIsSet_ = false;
}

std::string SendSlideVerifyCodeResponse::getCutImage() const
{
    return cutImage_;
}

void SendSlideVerifyCodeResponse::setCutImage(const std::string& value)
{
    cutImage_ = value;
    cutImageIsSet_ = true;
}

bool SendSlideVerifyCodeResponse::cutImageIsSet() const
{
    return cutImageIsSet_;
}

void SendSlideVerifyCodeResponse::unsetcutImage()
{
    cutImageIsSet_ = false;
}

int32_t SendSlideVerifyCodeResponse::getPointY() const
{
    return pointY_;
}

void SendSlideVerifyCodeResponse::setPointY(int32_t value)
{
    pointY_ = value;
    pointYIsSet_ = true;
}

bool SendSlideVerifyCodeResponse::pointYIsSet() const
{
    return pointYIsSet_;
}

void SendSlideVerifyCodeResponse::unsetpointY()
{
    pointYIsSet_ = false;
}

std::string SendSlideVerifyCodeResponse::getToken() const
{
    return token_;
}

void SendSlideVerifyCodeResponse::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool SendSlideVerifyCodeResponse::tokenIsSet() const
{
    return tokenIsSet_;
}

void SendSlideVerifyCodeResponse::unsettoken()
{
    tokenIsSet_ = false;
}

int32_t SendSlideVerifyCodeResponse::getExpire() const
{
    return expire_;
}

void SendSlideVerifyCodeResponse::setExpire(int32_t value)
{
    expire_ = value;
    expireIsSet_ = true;
}

bool SendSlideVerifyCodeResponse::expireIsSet() const
{
    return expireIsSet_;
}

void SendSlideVerifyCodeResponse::unsetexpire()
{
    expireIsSet_ = false;
}

}
}
}
}
}


