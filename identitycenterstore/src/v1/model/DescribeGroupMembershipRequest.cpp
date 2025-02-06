

#include "huaweicloud/identitycenterstore/v1/model/DescribeGroupMembershipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DescribeGroupMembershipRequest::DescribeGroupMembershipRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    membershipId_ = "";
    membershipIdIsSet_ = false;
}

DescribeGroupMembershipRequest::~DescribeGroupMembershipRequest() = default;

void DescribeGroupMembershipRequest::validate()
{
}

web::json::value DescribeGroupMembershipRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(membershipIdIsSet_) {
        val[utility::conversions::to_string_t("membership_id")] = ModelBase::toJson(membershipId_);
    }

    return val;
}
bool DescribeGroupMembershipRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("membership_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("membership_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMembershipId(refVal);
        }
    }
    return ok;
}


std::string DescribeGroupMembershipRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DescribeGroupMembershipRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DescribeGroupMembershipRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DescribeGroupMembershipRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DescribeGroupMembershipRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DescribeGroupMembershipRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DescribeGroupMembershipRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DescribeGroupMembershipRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string DescribeGroupMembershipRequest::getMembershipId() const
{
    return membershipId_;
}

void DescribeGroupMembershipRequest::setMembershipId(const std::string& value)
{
    membershipId_ = value;
    membershipIdIsSet_ = true;
}

bool DescribeGroupMembershipRequest::membershipIdIsSet() const
{
    return membershipIdIsSet_;
}

void DescribeGroupMembershipRequest::unsetmembershipId()
{
    membershipIdIsSet_ = false;
}

}
}
}
}
}


