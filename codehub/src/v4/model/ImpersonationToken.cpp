

#include "huaweicloud/codehub/v4/model/ImpersonationToken.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ImpersonationToken::ImpersonationToken()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    revoked_ = false;
    revokedIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    scopesIsSet_ = false;
    active_ = false;
    activeIsSet_ = false;
    expiresAt_ = "";
    expiresAtIsSet_ = false;
    impersonation_ = false;
    impersonationIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

ImpersonationToken::~ImpersonationToken() = default;

void ImpersonationToken::validate()
{
}

web::json::value ImpersonationToken::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(revokedIsSet_) {
        val[utility::conversions::to_string_t("revoked")] = ModelBase::toJson(revoked_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(scopesIsSet_) {
        val[utility::conversions::to_string_t("scopes")] = ModelBase::toJson(scopes_);
    }
    if(activeIsSet_) {
        val[utility::conversions::to_string_t("active")] = ModelBase::toJson(active_);
    }
    if(expiresAtIsSet_) {
        val[utility::conversions::to_string_t("expires_at")] = ModelBase::toJson(expiresAt_);
    }
    if(impersonationIsSet_) {
        val[utility::conversions::to_string_t("impersonation")] = ModelBase::toJson(impersonation_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool ImpersonationToken::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("revoked"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("revoked"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRevoked(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scopes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scopes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScopes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActive(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("impersonation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("impersonation"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImpersonation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


int32_t ImpersonationToken::getId() const
{
    return id_;
}

void ImpersonationToken::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ImpersonationToken::idIsSet() const
{
    return idIsSet_;
}

void ImpersonationToken::unsetid()
{
    idIsSet_ = false;
}

std::string ImpersonationToken::getName() const
{
    return name_;
}

void ImpersonationToken::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ImpersonationToken::nameIsSet() const
{
    return nameIsSet_;
}

void ImpersonationToken::unsetname()
{
    nameIsSet_ = false;
}

bool ImpersonationToken::isRevoked() const
{
    return revoked_;
}

void ImpersonationToken::setRevoked(bool value)
{
    revoked_ = value;
    revokedIsSet_ = true;
}

bool ImpersonationToken::revokedIsSet() const
{
    return revokedIsSet_;
}

void ImpersonationToken::unsetrevoked()
{
    revokedIsSet_ = false;
}

std::string ImpersonationToken::getCreatedAt() const
{
    return createdAt_;
}

void ImpersonationToken::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ImpersonationToken::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ImpersonationToken::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::vector<std::string>& ImpersonationToken::getScopes()
{
    return scopes_;
}

void ImpersonationToken::setScopes(const std::vector<std::string>& value)
{
    scopes_ = value;
    scopesIsSet_ = true;
}

bool ImpersonationToken::scopesIsSet() const
{
    return scopesIsSet_;
}

void ImpersonationToken::unsetscopes()
{
    scopesIsSet_ = false;
}

bool ImpersonationToken::isActive() const
{
    return active_;
}

void ImpersonationToken::setActive(bool value)
{
    active_ = value;
    activeIsSet_ = true;
}

bool ImpersonationToken::activeIsSet() const
{
    return activeIsSet_;
}

void ImpersonationToken::unsetactive()
{
    activeIsSet_ = false;
}

std::string ImpersonationToken::getExpiresAt() const
{
    return expiresAt_;
}

void ImpersonationToken::setExpiresAt(const std::string& value)
{
    expiresAt_ = value;
    expiresAtIsSet_ = true;
}

bool ImpersonationToken::expiresAtIsSet() const
{
    return expiresAtIsSet_;
}

void ImpersonationToken::unsetexpiresAt()
{
    expiresAtIsSet_ = false;
}

bool ImpersonationToken::isImpersonation() const
{
    return impersonation_;
}

void ImpersonationToken::setImpersonation(bool value)
{
    impersonation_ = value;
    impersonationIsSet_ = true;
}

bool ImpersonationToken::impersonationIsSet() const
{
    return impersonationIsSet_;
}

void ImpersonationToken::unsetimpersonation()
{
    impersonationIsSet_ = false;
}

std::string ImpersonationToken::getDescription() const
{
    return description_;
}

void ImpersonationToken::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ImpersonationToken::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ImpersonationToken::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


