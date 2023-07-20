

#include "huaweicloud/gaussdb/v3/model/CreateDatabaseUserRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateDatabaseUserRequest::CreateDatabaseUserRequest()
{
    usersIsSet_ = false;
}

CreateDatabaseUserRequest::~CreateDatabaseUserRequest() = default;

void CreateDatabaseUserRequest::validate()
{
}

web::json::value CreateDatabaseUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}

bool CreateDatabaseUserRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateDatabaseUserList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}

std::vector<CreateDatabaseUserList>& CreateDatabaseUserRequest::getUsers()
{
    return users_;
}

void CreateDatabaseUserRequest::setUsers(const std::vector<CreateDatabaseUserList>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool CreateDatabaseUserRequest::usersIsSet() const
{
    return usersIsSet_;
}

void CreateDatabaseUserRequest::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


