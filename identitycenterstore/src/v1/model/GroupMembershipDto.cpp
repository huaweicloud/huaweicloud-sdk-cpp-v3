

#include "huaweicloud/identitycenterstore/v1/model/GroupMembershipDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GroupMembershipDto::GroupMembershipDto()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    memberIdIsSet_ = false;
    membershipId_ = "";
    membershipIdIsSet_ = false;
}

GroupMembershipDto::~GroupMembershipDto() = default;

void GroupMembershipDto::validate()
{
}

web::json::value GroupMembershipDto::toJson() const
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
bool GroupMembershipDto::fromJson(const web::json::value& val)
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


std::string GroupMembershipDto::getGroupId() const
{
    return groupId_;
}

void GroupMembershipDto::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool GroupMembershipDto::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void GroupMembershipDto::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string GroupMembershipDto::getIdentityStoreId() const
{
    return identityStoreId_;
}

void GroupMembershipDto::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool GroupMembershipDto::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void GroupMembershipDto::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

MemberIdDto GroupMembershipDto::getMemberId() const
{
    return memberId_;
}

void GroupMembershipDto::setMemberId(const MemberIdDto& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool GroupMembershipDto::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void GroupMembershipDto::unsetmemberId()
{
    memberIdIsSet_ = false;
}

std::string GroupMembershipDto::getMembershipId() const
{
    return membershipId_;
}

void GroupMembershipDto::setMembershipId(const std::string& value)
{
    membershipId_ = value;
    membershipIdIsSet_ = true;
}

bool GroupMembershipDto::membershipIdIsSet() const
{
    return membershipIdIsSet_;
}

void GroupMembershipDto::unsetmembershipId()
{
    membershipIdIsSet_ = false;
}

}
}
}
}
}


