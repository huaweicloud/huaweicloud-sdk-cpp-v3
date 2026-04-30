

#include "huaweicloud/cpcs/v1/model/SwitchCpcsTokenResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




SwitchCpcsTokenResponse::SwitchCpcsTokenResponse()
{
    tokenIsSet_ = false;
    xCPCSToken_ = "";
    xCPCSTokenIsSet_ = false;
}

SwitchCpcsTokenResponse::~SwitchCpcsTokenResponse() = default;

void SwitchCpcsTokenResponse::validate()
{
}

web::json::value SwitchCpcsTokenResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }
    if(xCPCSTokenIsSet_) {
        val[utility::conversions::to_string_t("X-CPCS-Token")] = ModelBase::toJson(xCPCSToken_);
    }

    return val;
}
bool SwitchCpcsTokenResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            SwitchTokenResponse_token refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-CPCS-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-CPCS-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXCPCSToken(refVal);
        }
    }
    return ok;
}


SwitchTokenResponse_token SwitchCpcsTokenResponse::getToken() const
{
    return token_;
}

void SwitchCpcsTokenResponse::setToken(const SwitchTokenResponse_token& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool SwitchCpcsTokenResponse::tokenIsSet() const
{
    return tokenIsSet_;
}

void SwitchCpcsTokenResponse::unsettoken()
{
    tokenIsSet_ = false;
}

std::string SwitchCpcsTokenResponse::getXCPCSToken() const
{
    return xCPCSToken_;
}

void SwitchCpcsTokenResponse::setXCPCSToken(const std::string& value)
{
    xCPCSToken_ = value;
    xCPCSTokenIsSet_ = true;
}

bool SwitchCpcsTokenResponse::xCPCSTokenIsSet() const
{
    return xCPCSTokenIsSet_;
}

void SwitchCpcsTokenResponse::unsetxCPCSToken()
{
    xCPCSTokenIsSet_ = false;
}

}
}
}
}
}


