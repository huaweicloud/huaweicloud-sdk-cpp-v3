

#include "huaweicloud/codehub/v4/model/BatchCreateRepositoryMemberBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchCreateRepositoryMemberBodyDto::BatchCreateRepositoryMemberBodyDto()
{
    usersIsSet_ = false;
}

BatchCreateRepositoryMemberBodyDto::~BatchCreateRepositoryMemberBodyDto() = default;

void BatchCreateRepositoryMemberBodyDto::validate()
{
}

web::json::value BatchCreateRepositoryMemberBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool BatchCreateRepositoryMemberBodyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateRepositoryMemberDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::vector<CreateRepositoryMemberDto>& BatchCreateRepositoryMemberBodyDto::getUsers()
{
    return users_;
}

void BatchCreateRepositoryMemberBodyDto::setUsers(const std::vector<CreateRepositoryMemberDto>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool BatchCreateRepositoryMemberBodyDto::usersIsSet() const
{
    return usersIsSet_;
}

void BatchCreateRepositoryMemberBodyDto::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


