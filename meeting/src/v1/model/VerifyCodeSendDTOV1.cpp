

#include "huaweicloud/meeting/v1/model/VerifyCodeSendDTOV1.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




VerifyCodeSendDTOV1::VerifyCodeSendDTOV1()
{
    user_ = "";
    userIsSet_ = false;
    sendMethod_ = "";
    sendMethodIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
}

VerifyCodeSendDTOV1::~VerifyCodeSendDTOV1() = default;

void VerifyCodeSendDTOV1::validate()
{
}

web::json::value VerifyCodeSendDTOV1::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(sendMethodIsSet_) {
        val[utility::conversions::to_string_t("sendMethod")] = ModelBase::toJson(sendMethod_);
    }
    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }

    return val;
}
bool VerifyCodeSendDTOV1::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sendMethod"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sendMethod"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendMethod(refVal);
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
    return ok;
}


std::string VerifyCodeSendDTOV1::getUser() const
{
    return user_;
}

void VerifyCodeSendDTOV1::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool VerifyCodeSendDTOV1::userIsSet() const
{
    return userIsSet_;
}

void VerifyCodeSendDTOV1::unsetuser()
{
    userIsSet_ = false;
}

std::string VerifyCodeSendDTOV1::getSendMethod() const
{
    return sendMethod_;
}

void VerifyCodeSendDTOV1::setSendMethod(const std::string& value)
{
    sendMethod_ = value;
    sendMethodIsSet_ = true;
}

bool VerifyCodeSendDTOV1::sendMethodIsSet() const
{
    return sendMethodIsSet_;
}

void VerifyCodeSendDTOV1::unsetsendMethod()
{
    sendMethodIsSet_ = false;
}

std::string VerifyCodeSendDTOV1::getToken() const
{
    return token_;
}

void VerifyCodeSendDTOV1::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool VerifyCodeSendDTOV1::tokenIsSet() const
{
    return tokenIsSet_;
}

void VerifyCodeSendDTOV1::unsettoken()
{
    tokenIsSet_ = false;
}

}
}
}
}
}


