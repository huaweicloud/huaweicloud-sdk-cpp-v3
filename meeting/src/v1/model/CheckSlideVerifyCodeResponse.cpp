

#include "huaweicloud/meeting/v1/model/CheckSlideVerifyCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CheckSlideVerifyCodeResponse::CheckSlideVerifyCodeResponse()
{
    token_ = "";
    tokenIsSet_ = false;
    expire_ = 0;
    expireIsSet_ = false;
}

CheckSlideVerifyCodeResponse::~CheckSlideVerifyCodeResponse() = default;

void CheckSlideVerifyCodeResponse::validate()
{
}

web::json::value CheckSlideVerifyCodeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }
    if(expireIsSet_) {
        val[utility::conversions::to_string_t("expire")] = ModelBase::toJson(expire_);
    }

    return val;
}
bool CheckSlideVerifyCodeResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string CheckSlideVerifyCodeResponse::getToken() const
{
    return token_;
}

void CheckSlideVerifyCodeResponse::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool CheckSlideVerifyCodeResponse::tokenIsSet() const
{
    return tokenIsSet_;
}

void CheckSlideVerifyCodeResponse::unsettoken()
{
    tokenIsSet_ = false;
}

int32_t CheckSlideVerifyCodeResponse::getExpire() const
{
    return expire_;
}

void CheckSlideVerifyCodeResponse::setExpire(int32_t value)
{
    expire_ = value;
    expireIsSet_ = true;
}

bool CheckSlideVerifyCodeResponse::expireIsSet() const
{
    return expireIsSet_;
}

void CheckSlideVerifyCodeResponse::unsetexpire()
{
    expireIsSet_ = false;
}

}
}
}
}
}


