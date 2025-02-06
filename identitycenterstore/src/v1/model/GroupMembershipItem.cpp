

#include "huaweicloud/identitycenterstore/v1/model/GroupMembershipItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GroupMembershipItem::GroupMembershipItem()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    memberIdIsSet_ = false;
    membershipId_ = "";
    membershipIdIsSet_ = false;
}

GroupMembershipItem::~GroupMembershipItem() = default;

void GroupMembershipItem::validate()
{
}

web::json::value GroupMembershipItem::toJson() const
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
bool GroupMembershipItem::fromJson(const web::json::value& val)
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


std::string GroupMembershipItem::getGroupId() const
{
    return groupId_;
}

void GroupMembershipItem::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool GroupMembershipItem::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void GroupMembershipItem::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string GroupMembershipItem::getIdentityStoreId() const
{
    return identityStoreId_;
}

void GroupMembershipItem::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool GroupMembershipItem::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void GroupMembershipItem::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

MemberIdDto GroupMembershipItem::getMemberId() const
{
    return memberId_;
}

void GroupMembershipItem::setMemberId(const MemberIdDto& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool GroupMembershipItem::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void GroupMembershipItem::unsetmemberId()
{
    memberIdIsSet_ = false;
}

std::string GroupMembershipItem::getMembershipId() const
{
    return membershipId_;
}

void GroupMembershipItem::setMembershipId(const std::string& value)
{
    membershipId_ = value;
    membershipIdIsSet_ = true;
}

bool GroupMembershipItem::membershipIdIsSet() const
{
    return membershipIdIsSet_;
}

void GroupMembershipItem::unsetmembershipId()
{
    membershipIdIsSet_ = false;
}

}
}
}
}
}


