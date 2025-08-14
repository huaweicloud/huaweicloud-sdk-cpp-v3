

#include "huaweicloud/identitycenterstore/v1/model/CreateBearerTokenRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateBearerTokenRequest::CreateBearerTokenRequest()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

CreateBearerTokenRequest::~CreateBearerTokenRequest() = default;

void CreateBearerTokenRequest::validate()
{
}

web::json::value CreateBearerTokenRequest::toJson() const
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

    return val;
}
bool CreateBearerTokenRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateBearerTokenRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void CreateBearerTokenRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool CreateBearerTokenRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void CreateBearerTokenRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string CreateBearerTokenRequest::getTenantId() const
{
    return tenantId_;
}

void CreateBearerTokenRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool CreateBearerTokenRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void CreateBearerTokenRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string CreateBearerTokenRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateBearerTokenRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateBearerTokenRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateBearerTokenRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


