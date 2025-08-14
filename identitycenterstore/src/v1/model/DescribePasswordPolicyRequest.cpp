

#include "huaweicloud/identitycenterstore/v1/model/DescribePasswordPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DescribePasswordPolicyRequest::DescribePasswordPolicyRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
}

DescribePasswordPolicyRequest::~DescribePasswordPolicyRequest() = default;

void DescribePasswordPolicyRequest::validate()
{
}

web::json::value DescribePasswordPolicyRequest::toJson() const
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
bool DescribePasswordPolicyRequest::fromJson(const web::json::value& val)
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


std::string DescribePasswordPolicyRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DescribePasswordPolicyRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DescribePasswordPolicyRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DescribePasswordPolicyRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DescribePasswordPolicyRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DescribePasswordPolicyRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DescribePasswordPolicyRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DescribePasswordPolicyRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

}
}
}
}
}


