

#include "huaweicloud/identitycenterstore/v1/model/ListExternalIdPConfigurationsForDirectoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListExternalIdPConfigurationsForDirectoryRequest::ListExternalIdPConfigurationsForDirectoryRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
}

ListExternalIdPConfigurationsForDirectoryRequest::~ListExternalIdPConfigurationsForDirectoryRequest() = default;

void ListExternalIdPConfigurationsForDirectoryRequest::validate()
{
}

web::json::value ListExternalIdPConfigurationsForDirectoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }

    return val;
}
bool ListExternalIdPConfigurationsForDirectoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    return ok;
}


std::string ListExternalIdPConfigurationsForDirectoryRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListExternalIdPConfigurationsForDirectoryRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListExternalIdPConfigurationsForDirectoryRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListExternalIdPConfigurationsForDirectoryRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string ListExternalIdPConfigurationsForDirectoryRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void ListExternalIdPConfigurationsForDirectoryRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool ListExternalIdPConfigurationsForDirectoryRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void ListExternalIdPConfigurationsForDirectoryRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

}
}
}
}
}


