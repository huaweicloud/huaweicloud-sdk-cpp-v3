

#include "huaweicloud/meeting/v1/model/CheckVerifyCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CheckVerifyCodeResponse::CheckVerifyCodeResponse()
{
    token_ = "";
    tokenIsSet_ = false;
    expire_ = 0;
    expireIsSet_ = false;
}

CheckVerifyCodeResponse::~CheckVerifyCodeResponse() = default;

void CheckVerifyCodeResponse::validate()
{
}

web::json::value CheckVerifyCodeResponse::toJson() const
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
bool CheckVerifyCodeResponse::fromJson(const web::json::value& val)
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


std::string CheckVerifyCodeResponse::getToken() const
{
    return token_;
}

void CheckVerifyCodeResponse::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool CheckVerifyCodeResponse::tokenIsSet() const
{
    return tokenIsSet_;
}

void CheckVerifyCodeResponse::unsettoken()
{
    tokenIsSet_ = false;
}

int32_t CheckVerifyCodeResponse::getExpire() const
{
    return expire_;
}

void CheckVerifyCodeResponse::setExpire(int32_t value)
{
    expire_ = value;
    expireIsSet_ = true;
}

bool CheckVerifyCodeResponse::expireIsSet() const
{
    return expireIsSet_;
}

void CheckVerifyCodeResponse::unsetexpire()
{
    expireIsSet_ = false;
}

}
}
}
}
}


