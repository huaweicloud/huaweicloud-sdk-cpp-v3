

#include "huaweicloud/identitycenterstore/v1/model/DeleteGroupMembershipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DeleteGroupMembershipRequest::DeleteGroupMembershipRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    membershipId_ = "";
    membershipIdIsSet_ = false;
}

DeleteGroupMembershipRequest::~DeleteGroupMembershipRequest() = default;

void DeleteGroupMembershipRequest::validate()
{
}

web::json::value DeleteGroupMembershipRequest::toJson() const
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
bool DeleteGroupMembershipRequest::fromJson(const web::json::value& val)
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


std::string DeleteGroupMembershipRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteGroupMembershipRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteGroupMembershipRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteGroupMembershipRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DeleteGroupMembershipRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DeleteGroupMembershipRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DeleteGroupMembershipRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DeleteGroupMembershipRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string DeleteGroupMembershipRequest::getMembershipId() const
{
    return membershipId_;
}

void DeleteGroupMembershipRequest::setMembershipId(const std::string& value)
{
    membershipId_ = value;
    membershipIdIsSet_ = true;
}

bool DeleteGroupMembershipRequest::membershipIdIsSet() const
{
    return membershipIdIsSet_;
}

void DeleteGroupMembershipRequest::unsetmembershipId()
{
    membershipIdIsSet_ = false;
}

}
}
}
}
}


