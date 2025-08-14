

#include "huaweicloud/identitycenterstore/v1/model/DeleteBearerTokenRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DeleteBearerTokenRequest::DeleteBearerTokenRequest()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    tokenId_ = "";
    tokenIdIsSet_ = false;
}

DeleteBearerTokenRequest::~DeleteBearerTokenRequest() = default;

void DeleteBearerTokenRequest::validate()
{
}

web::json::value DeleteBearerTokenRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(tokenIdIsSet_) {
        val[utility::conversions::to_string_t("token_id")] = ModelBase::toJson(tokenId_);
    }

    return val;
}
bool DeleteBearerTokenRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("token_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTokenId(refVal);
        }
    }
    return ok;
}


std::string DeleteBearerTokenRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DeleteBearerTokenRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DeleteBearerTokenRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DeleteBearerTokenRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string DeleteBearerTokenRequest::getTenantId() const
{
    return tenantId_;
}

void DeleteBearerTokenRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool DeleteBearerTokenRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void DeleteBearerTokenRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string DeleteBearerTokenRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteBearerTokenRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteBearerTokenRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteBearerTokenRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DeleteBearerTokenRequest::getTokenId() const
{
    return tokenId_;
}

void DeleteBearerTokenRequest::setTokenId(const std::string& value)
{
    tokenId_ = value;
    tokenIdIsSet_ = true;
}

bool DeleteBearerTokenRequest::tokenIdIsSet() const
{
    return tokenIdIsSet_;
}

void DeleteBearerTokenRequest::unsettokenId()
{
    tokenIdIsSet_ = false;
}

}
}
}
}
}


