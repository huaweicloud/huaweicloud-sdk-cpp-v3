

#include "huaweicloud/ecs/v2/model/AddServerGroupMemberRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




AddServerGroupMemberRequestBody::AddServerGroupMemberRequestBody()
{
    addMemberIsSet_ = false;
}

AddServerGroupMemberRequestBody::~AddServerGroupMemberRequestBody() = default;

void AddServerGroupMemberRequestBody::validate()
{
}

web::json::value AddServerGroupMemberRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addMemberIsSet_) {
        val[utility::conversions::to_string_t("add_member")] = ModelBase::toJson(addMember_);
    }

    return val;
}

bool AddServerGroupMemberRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("add_member"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_member"));
        if(!fieldValue.is_null())
        {
            ServerGroupMember refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddMember(refVal);
        }
    }
    return ok;
}

ServerGroupMember AddServerGroupMemberRequestBody::getAddMember() const
{
    return addMember_;
}

void AddServerGroupMemberRequestBody::setAddMember(const ServerGroupMember& value)
{
    addMember_ = value;
    addMemberIsSet_ = true;
}

bool AddServerGroupMemberRequestBody::addMemberIsSet() const
{
    return addMemberIsSet_;
}

void AddServerGroupMemberRequestBody::unsetaddMember()
{
    addMemberIsSet_ = false;
}

}
}
}
}
}


