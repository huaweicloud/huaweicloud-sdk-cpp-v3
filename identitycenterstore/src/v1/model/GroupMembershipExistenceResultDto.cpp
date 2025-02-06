

#include "huaweicloud/identitycenterstore/v1/model/GroupMembershipExistenceResultDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GroupMembershipExistenceResultDto::GroupMembershipExistenceResultDto()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    memberIdIsSet_ = false;
    membershipExists_ = false;
    membershipExistsIsSet_ = false;
}

GroupMembershipExistenceResultDto::~GroupMembershipExistenceResultDto() = default;

void GroupMembershipExistenceResultDto::validate()
{
}

web::json::value GroupMembershipExistenceResultDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(memberIdIsSet_) {
        val[utility::conversions::to_string_t("member_id")] = ModelBase::toJson(memberId_);
    }
    if(membershipExistsIsSet_) {
        val[utility::conversions::to_string_t("membership_exists")] = ModelBase::toJson(membershipExists_);
    }

    return val;
}
bool GroupMembershipExistenceResultDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("member_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("member_id"));
        if(!fieldValue.is_null())
        {
            MemberIdDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("membership_exists"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("membership_exists"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMembershipExists(refVal);
        }
    }
    return ok;
}


std::string GroupMembershipExistenceResultDto::getGroupId() const
{
    return groupId_;
}

void GroupMembershipExistenceResultDto::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool GroupMembershipExistenceResultDto::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void GroupMembershipExistenceResultDto::unsetgroupId()
{
    groupIdIsSet_ = false;
}

MemberIdDto GroupMembershipExistenceResultDto::getMemberId() const
{
    return memberId_;
}

void GroupMembershipExistenceResultDto::setMemberId(const MemberIdDto& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool GroupMembershipExistenceResultDto::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void GroupMembershipExistenceResultDto::unsetmemberId()
{
    memberIdIsSet_ = false;
}

bool GroupMembershipExistenceResultDto::isMembershipExists() const
{
    return membershipExists_;
}

void GroupMembershipExistenceResultDto::setMembershipExists(bool value)
{
    membershipExists_ = value;
    membershipExistsIsSet_ = true;
}

bool GroupMembershipExistenceResultDto::membershipExistsIsSet() const
{
    return membershipExistsIsSet_;
}

void GroupMembershipExistenceResultDto::unsetmembershipExists()
{
    membershipExistsIsSet_ = false;
}

}
}
}
}
}


