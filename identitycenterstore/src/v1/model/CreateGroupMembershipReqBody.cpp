

#include "huaweicloud/identitycenterstore/v1/model/CreateGroupMembershipReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateGroupMembershipReqBody::CreateGroupMembershipReqBody()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    memberIdIsSet_ = false;
}

CreateGroupMembershipReqBody::~CreateGroupMembershipReqBody() = default;

void CreateGroupMembershipReqBody::validate()
{
}

web::json::value CreateGroupMembershipReqBody::toJson() const
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
bool CreateGroupMembershipReqBody::fromJson(const web::json::value& val)
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


std::string CreateGroupMembershipReqBody::getGroupId() const
{
    return groupId_;
}

void CreateGroupMembershipReqBody::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateGroupMembershipReqBody::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateGroupMembershipReqBody::unsetgroupId()
{
    groupIdIsSet_ = false;
}

MemberIdDto CreateGroupMembershipReqBody::getMemberId() const
{
    return memberId_;
}

void CreateGroupMembershipReqBody::setMemberId(const MemberIdDto& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool CreateGroupMembershipReqBody::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void CreateGroupMembershipReqBody::unsetmemberId()
{
    memberIdIsSet_ = false;
}

}
}
}
}
}


