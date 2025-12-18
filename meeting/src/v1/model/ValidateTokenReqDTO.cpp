

#include "huaweicloud/meeting/v1/model/ValidateTokenReqDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ValidateTokenReqDTO::ValidateTokenReqDTO()
{
    token_ = "";
    tokenIsSet_ = false;
    needGenNewToken_ = false;
    needGenNewTokenIsSet_ = false;
    needAccountInfo_ = false;
    needAccountInfoIsSet_ = false;
}

ValidateTokenReqDTO::~ValidateTokenReqDTO() = default;

void ValidateTokenReqDTO::validate()
{
}

web::json::value ValidateTokenReqDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }
    if(needGenNewTokenIsSet_) {
        val[utility::conversions::to_string_t("needGenNewToken")] = ModelBase::toJson(needGenNewToken_);
    }
    if(needAccountInfoIsSet_) {
        val[utility::conversions::to_string_t("needAccountInfo")] = ModelBase::toJson(needAccountInfo_);
    }

    return val;
}
bool ValidateTokenReqDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("needGenNewToken"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("needGenNewToken"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedGenNewToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("needAccountInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("needAccountInfo"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedAccountInfo(refVal);
        }
    }
    return ok;
}


std::string ValidateTokenReqDTO::getToken() const
{
    return token_;
}

void ValidateTokenReqDTO::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool ValidateTokenReqDTO::tokenIsSet() const
{
    return tokenIsSet_;
}

void ValidateTokenReqDTO::unsettoken()
{
    tokenIsSet_ = false;
}

bool ValidateTokenReqDTO::isNeedGenNewToken() const
{
    return needGenNewToken_;
}

void ValidateTokenReqDTO::setNeedGenNewToken(bool value)
{
    needGenNewToken_ = value;
    needGenNewTokenIsSet_ = true;
}

bool ValidateTokenReqDTO::needGenNewTokenIsSet() const
{
    return needGenNewTokenIsSet_;
}

void ValidateTokenReqDTO::unsetneedGenNewToken()
{
    needGenNewTokenIsSet_ = false;
}

bool ValidateTokenReqDTO::isNeedAccountInfo() const
{
    return needAccountInfo_;
}

void ValidateTokenReqDTO::setNeedAccountInfo(bool value)
{
    needAccountInfo_ = value;
    needAccountInfoIsSet_ = true;
}

bool ValidateTokenReqDTO::needAccountInfoIsSet() const
{
    return needAccountInfoIsSet_;
}

void ValidateTokenReqDTO::unsetneedAccountInfo()
{
    needAccountInfoIsSet_ = false;
}

}
}
}
}
}


