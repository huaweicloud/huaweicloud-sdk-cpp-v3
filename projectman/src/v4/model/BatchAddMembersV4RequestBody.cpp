

#include "huaweicloud/projectman/v4/model/BatchAddMembersV4RequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchAddMembersV4RequestBody::BatchAddMembersV4RequestBody()
{
    usersIsSet_ = false;
}

BatchAddMembersV4RequestBody::~BatchAddMembersV4RequestBody() = default;

void BatchAddMembersV4RequestBody::validate()
{
}

web::json::value BatchAddMembersV4RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool BatchAddMembersV4RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchAddMemberRequestV4> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::vector<BatchAddMemberRequestV4>& BatchAddMembersV4RequestBody::getUsers()
{
    return users_;
}

void BatchAddMembersV4RequestBody::setUsers(const std::vector<BatchAddMemberRequestV4>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool BatchAddMembersV4RequestBody::usersIsSet() const
{
    return usersIsSet_;
}

void BatchAddMembersV4RequestBody::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


