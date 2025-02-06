

#include "huaweicloud/identitycenterstore/v1/model/DescribeGroupMembershipResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DescribeGroupMembershipResponse::DescribeGroupMembershipResponse()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    memberIdIsSet_ = false;
    membershipId_ = "";
    membershipIdIsSet_ = false;
}

DescribeGroupMembershipResponse::~DescribeGroupMembershipResponse() = default;

void DescribeGroupMembershipResponse::validate()
{
}

web::json::value DescribeGroupMembershipResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(memberIdIsSet_) {
        val[utility::conversions::to_string_t("member_id")] = ModelBase::toJson(memberId_);
    }
    if(membershipIdIsSet_) {
        val[utility::conversions::to_string_t("membership_id")] = ModelBase::toJson(membershipId_);
    }

    return val;
}
bool DescribeGroupMembershipResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("member_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_id"));
        if(!fieldValue.is_null())
        {
            MemberIdDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberId(refVal);
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


std::string DescribeGroupMembershipResponse::getGroupId() const
{
    return groupId_;
}

void DescribeGroupMembershipResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DescribeGroupMembershipResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DescribeGroupMembershipResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string DescribeGroupMembershipResponse::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DescribeGroupMembershipResponse::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DescribeGroupMembershipResponse::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DescribeGroupMembershipResponse::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

MemberIdDto DescribeGroupMembershipResponse::getMemberId() const
{
    return memberId_;
}

void DescribeGroupMembershipResponse::setMemberId(const MemberIdDto& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool DescribeGroupMembershipResponse::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void DescribeGroupMembershipResponse::unsetmemberId()
{
    memberIdIsSet_ = false;
}

std::string DescribeGroupMembershipResponse::getMembershipId() const
{
    return membershipId_;
}

void DescribeGroupMembershipResponse::setMembershipId(const std::string& value)
{
    membershipId_ = value;
    membershipIdIsSet_ = true;
}

bool DescribeGroupMembershipResponse::membershipIdIsSet() const
{
    return membershipIdIsSet_;
}

void DescribeGroupMembershipResponse::unsetmembershipId()
{
    membershipIdIsSet_ = false;
}

}
}
}
}
}


