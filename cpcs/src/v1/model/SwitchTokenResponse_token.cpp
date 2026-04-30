

#include "huaweicloud/cpcs/v1/model/SwitchTokenResponse_token.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




SwitchTokenResponse_token::SwitchTokenResponse_token()
{
    appIsSet_ = false;
    expiresAt_ = "";
    expiresAtIsSet_ = false;
    rolesIsSet_ = false;
    issuedAt_ = "";
    issuedAtIsSet_ = false;
    userIsSet_ = false;
}

SwitchTokenResponse_token::~SwitchTokenResponse_token() = default;

void SwitchTokenResponse_token::validate()
{
}

web::json::value SwitchTokenResponse_token::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(expiresAtIsSet_) {
        val[utility::conversions::to_string_t("expires_at")] = ModelBase::toJson(expiresAt_);
    }
    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }
    if(issuedAtIsSet_) {
        val[utility::conversions::to_string_t("issued_at")] = ModelBase::toJson(issuedAt_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }

    return val;
}
bool SwitchTokenResponse_token::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            SwitchTokenResponse_token_app refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expires_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expires_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiresAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roles"));
        if(!fieldValue.is_null())
        {
            std::vector<SwitchTokenResponse_token_roles> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoles(refVal);
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
            SwitchTokenResponse_token_user refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    return ok;
}


SwitchTokenResponse_token_app SwitchTokenResponse_token::getApp() const
{
    return app_;
}

void SwitchTokenResponse_token::setApp(const SwitchTokenResponse_token_app& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool SwitchTokenResponse_token::appIsSet() const
{
    return appIsSet_;
}

void SwitchTokenResponse_token::unsetapp()
{
    appIsSet_ = false;
}

std::string SwitchTokenResponse_token::getExpiresAt() const
{
    return expiresAt_;
}

void SwitchTokenResponse_token::setExpiresAt(const std::string& value)
{
    expiresAt_ = value;
    expiresAtIsSet_ = true;
}

bool SwitchTokenResponse_token::expiresAtIsSet() const
{
    return expiresAtIsSet_;
}

void SwitchTokenResponse_token::unsetexpiresAt()
{
    expiresAtIsSet_ = false;
}

std::vector<SwitchTokenResponse_token_roles>& SwitchTokenResponse_token::getRoles()
{
    return roles_;
}

void SwitchTokenResponse_token::setRoles(const std::vector<SwitchTokenResponse_token_roles>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool SwitchTokenResponse_token::rolesIsSet() const
{
    return rolesIsSet_;
}

void SwitchTokenResponse_token::unsetroles()
{
    rolesIsSet_ = false;
}

std::string SwitchTokenResponse_token::getIssuedAt() const
{
    return issuedAt_;
}

void SwitchTokenResponse_token::setIssuedAt(const std::string& value)
{
    issuedAt_ = value;
    issuedAtIsSet_ = true;
}

bool SwitchTokenResponse_token::issuedAtIsSet() const
{
    return issuedAtIsSet_;
}

void SwitchTokenResponse_token::unsetissuedAt()
{
    issuedAtIsSet_ = false;
}

SwitchTokenResponse_token_user SwitchTokenResponse_token::getUser() const
{
    return user_;
}

void SwitchTokenResponse_token::setUser(const SwitchTokenResponse_token_user& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool SwitchTokenResponse_token::userIsSet() const
{
    return userIsSet_;
}

void SwitchTokenResponse_token::unsetuser()
{
    userIsSet_ = false;
}

}
}
}
}
}


