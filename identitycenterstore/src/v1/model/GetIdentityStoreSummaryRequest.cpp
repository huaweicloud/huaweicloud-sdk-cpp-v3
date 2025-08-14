

#include "huaweicloud/identitycenterstore/v1/model/GetIdentityStoreSummaryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GetIdentityStoreSummaryRequest::GetIdentityStoreSummaryRequest()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

GetIdentityStoreSummaryRequest::~GetIdentityStoreSummaryRequest() = default;

void GetIdentityStoreSummaryRequest::validate()
{
}

web::json::value GetIdentityStoreSummaryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool GetIdentityStoreSummaryRequest::fromJson(const web::json::value& val)
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


std::string GetIdentityStoreSummaryRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void GetIdentityStoreSummaryRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool GetIdentityStoreSummaryRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void GetIdentityStoreSummaryRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string GetIdentityStoreSummaryRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void GetIdentityStoreSummaryRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool GetIdentityStoreSummaryRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void GetIdentityStoreSummaryRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


