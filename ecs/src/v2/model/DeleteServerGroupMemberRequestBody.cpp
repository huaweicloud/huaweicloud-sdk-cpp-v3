

#include "huaweicloud/ecs/v2/model/DeleteServerGroupMemberRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DeleteServerGroupMemberRequestBody::DeleteServerGroupMemberRequestBody()
{
    removeMemberIsSet_ = false;
}

DeleteServerGroupMemberRequestBody::~DeleteServerGroupMemberRequestBody() = default;

void DeleteServerGroupMemberRequestBody::validate()
{
}

web::json::value DeleteServerGroupMemberRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(removeMemberIsSet_) {
        val[utility::conversions::to_string_t("remove_member")] = ModelBase::toJson(removeMember_);
    }

    return val;
}

bool DeleteServerGroupMemberRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("remove_member"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remove_member"));
        if(!fieldValue.is_null())
        {
            ServerGroupMember refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoveMember(refVal);
        }
    }
    return ok;
}

ServerGroupMember DeleteServerGroupMemberRequestBody::getRemoveMember() const
{
    return removeMember_;
}

void DeleteServerGroupMemberRequestBody::setRemoveMember(const ServerGroupMember& value)
{
    removeMember_ = value;
    removeMemberIsSet_ = true;
}

bool DeleteServerGroupMemberRequestBody::removeMemberIsSet() const
{
    return removeMemberIsSet_;
}

void DeleteServerGroupMemberRequestBody::unsetremoveMember()
{
    removeMemberIsSet_ = false;
}

}
}
}
}
}


