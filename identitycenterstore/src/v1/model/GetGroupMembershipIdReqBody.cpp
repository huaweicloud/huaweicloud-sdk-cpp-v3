

#include "huaweicloud/identitycenterstore/v1/model/GetGroupMembershipIdReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




GetGroupMembershipIdReqBody::GetGroupMembershipIdReqBody()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    memberIdIsSet_ = false;
}

GetGroupMembershipIdReqBody::~GetGroupMembershipIdReqBody() = default;

void GetGroupMembershipIdReqBody::validate()
{
}

web::json::value GetGroupMembershipIdReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(memberIdIsSet_) {
        val[utility::conversions::to_string_t("member_id")] = ModelBase::toJson(memberId_);
    }

    return val;
}
bool GetGroupMembershipIdReqBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string GetGroupMembershipIdReqBody::getGroupId() const
{
    return groupId_;
}

void GetGroupMembershipIdReqBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool GetGroupMembershipIdReqBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void GetGroupMembershipIdReqBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

MemberIdDto GetGroupMembershipIdReqBody::getMemberId() const
{
    return memberId_;
}

void GetGroupMembershipIdReqBody::setMemberId(const MemberIdDto& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool GetGroupMembershipIdReqBody::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void GetGroupMembershipIdReqBody::unsetmemberId()
{
    memberIdIsSet_ = false;
}

}
}
}
}
}


