

#include "huaweicloud/identitycenterstore/v1/model/IsMemberInGroupsReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




IsMemberInGroupsReqBody::IsMemberInGroupsReqBody()
{
    groupIdsIsSet_ = false;
    memberIdIsSet_ = false;
}

IsMemberInGroupsReqBody::~IsMemberInGroupsReqBody() = default;

void IsMemberInGroupsReqBody::validate()
{
}

web::json::value IsMemberInGroupsReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdsIsSet_) {
        val[utility::conversions::to_string_t("group_ids")] = ModelBase::toJson(groupIds_);
    }
    if(memberIdIsSet_) {
        val[utility::conversions::to_string_t("member_id")] = ModelBase::toJson(memberId_);
    }

    return val;
}
bool IsMemberInGroupsReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupIds(refVal);
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


std::vector<std::string>& IsMemberInGroupsReqBody::getGroupIds()
{
    return groupIds_;
}

void IsMemberInGroupsReqBody::setGroupIds(const std::vector<std::string>& value)
{
    groupIds_ = value;
    groupIdsIsSet_ = true;
}

bool IsMemberInGroupsReqBody::groupIdsIsSet() const
{
    return groupIdsIsSet_;
}

void IsMemberInGroupsReqBody::unsetgroupIds()
{
    groupIdsIsSet_ = false;
}

MemberIdDto IsMemberInGroupsReqBody::getMemberId() const
{
    return memberId_;
}

void IsMemberInGroupsReqBody::setMemberId(const MemberIdDto& value)
{
    memberId_ = value;
    memberIdIsSet_ = true;
}

bool IsMemberInGroupsReqBody::memberIdIsSet() const
{
    return memberIdIsSet_;
}

void IsMemberInGroupsReqBody::unsetmemberId()
{
    memberIdIsSet_ = false;
}

}
}
}
}
}


