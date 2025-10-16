

#include "huaweicloud/cpcs/v1/model/SwitchCpcsTokenResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




SwitchCpcsTokenResponse::SwitchCpcsTokenResponse()
{
    rolesIsSet_ = false;
    akIsSet_ = false;
    expiredAt_ = "";
    expiredAtIsSet_ = false;
    issuedAt_ = "";
    issuedAtIsSet_ = false;
    userIsSet_ = false;
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

    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }
    if(akIsSet_) {
        val[utility::conversions::to_string_t("ak")] = ModelBase::toJson(ak_);
    }
    if(expiredAtIsSet_) {
        val[utility::conversions::to_string_t("expired_at")] = ModelBase::toJson(expiredAt_);
    }
    if(issuedAtIsSet_) {
        val[utility::conversions::to_string_t("issued_at")] = ModelBase::toJson(issuedAt_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(xCPCSTokenIsSet_) {
        val[utility::conversions::to_string_t("X-CPCS-Token")] = ModelBase::toJson(xCPCSToken_);
    }

    return val;
}
bool SwitchCpcsTokenResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roles"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoles(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ak"));
        if(!fieldValue.is_null())
        {
            SwitchTokenResponse_ak refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expired_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issued_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issued_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            SwitchTokenResponse_user refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
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


std::vector<std::string>& SwitchCpcsTokenResponse::getRoles()
{
    return roles_;
}

void SwitchCpcsTokenResponse::setRoles(const std::vector<std::string>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool SwitchCpcsTokenResponse::rolesIsSet() const
{
    return rolesIsSet_;
}

void SwitchCpcsTokenResponse::unsetroles()
{
    rolesIsSet_ = false;
}

SwitchTokenResponse_ak SwitchCpcsTokenResponse::getAk() const
{
    return ak_;
}

void SwitchCpcsTokenResponse::setAk(const SwitchTokenResponse_ak& value)
{
    ak_ = value;
    akIsSet_ = true;
}

bool SwitchCpcsTokenResponse::akIsSet() const
{
    return akIsSet_;
}

void SwitchCpcsTokenResponse::unsetak()
{
    akIsSet_ = false;
}

std::string SwitchCpcsTokenResponse::getExpiredAt() const
{
    return expiredAt_;
}

void SwitchCpcsTokenResponse::setExpiredAt(const std::string& value)
{
    expiredAt_ = value;
    expiredAtIsSet_ = true;
}

bool SwitchCpcsTokenResponse::expiredAtIsSet() const
{
    return expiredAtIsSet_;
}

void SwitchCpcsTokenResponse::unsetexpiredAt()
{
    expiredAtIsSet_ = false;
}

std::string SwitchCpcsTokenResponse::getIssuedAt() const
{
    return issuedAt_;
}

void SwitchCpcsTokenResponse::setIssuedAt(const std::string& value)
{
    issuedAt_ = value;
    issuedAtIsSet_ = true;
}

bool SwitchCpcsTokenResponse::issuedAtIsSet() const
{
    return issuedAtIsSet_;
}

void SwitchCpcsTokenResponse::unsetissuedAt()
{
    issuedAtIsSet_ = false;
}

SwitchTokenResponse_user SwitchCpcsTokenResponse::getUser() const
{
    return user_;
}

void SwitchCpcsTokenResponse::setUser(const SwitchTokenResponse_user& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool SwitchCpcsTokenResponse::userIsSet() const
{
    return userIsSet_;
}

void SwitchCpcsTokenResponse::unsetuser()
{
    userIsSet_ = false;
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


