

#include "huaweicloud/identitycenterstore/v1/model/ListBearerTokensRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListBearerTokensRequest::ListBearerTokensRequest()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

ListBearerTokensRequest::~ListBearerTokensRequest() = default;

void ListBearerTokensRequest::validate()
{
}

web::json::value ListBearerTokensRequest::toJson() const
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
bool ListBearerTokensRequest::fromJson(const web::json::value& val)
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


std::string ListBearerTokensRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void ListBearerTokensRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool ListBearerTokensRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void ListBearerTokensRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string ListBearerTokensRequest::getTenantId() const
{
    return tenantId_;
}

void ListBearerTokensRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ListBearerTokensRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ListBearerTokensRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string ListBearerTokensRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListBearerTokensRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListBearerTokensRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListBearerTokensRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


