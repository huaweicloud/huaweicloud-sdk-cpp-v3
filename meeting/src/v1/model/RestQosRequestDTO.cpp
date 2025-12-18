

#include "huaweicloud/meeting/v1/model/RestQosRequestDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestQosRequestDTO::RestQosRequestDTO()
{
    usersIsSet_ = false;
}

RestQosRequestDTO::~RestQosRequestDTO() = default;

void RestQosRequestDTO::validate()
{
}

web::json::value RestQosRequestDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool RestQosRequestDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<UserQosReqInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::vector<UserQosReqInfo>& RestQosRequestDTO::getUsers()
{
    return users_;
}

void RestQosRequestDTO::setUsers(const std::vector<UserQosReqInfo>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool RestQosRequestDTO::usersIsSet() const
{
    return usersIsSet_;
}

void RestQosRequestDTO::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


