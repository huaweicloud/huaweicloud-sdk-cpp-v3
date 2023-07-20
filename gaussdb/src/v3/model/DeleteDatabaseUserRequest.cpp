

#include "huaweicloud/gaussdb/v3/model/DeleteDatabaseUserRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteDatabaseUserRequest::DeleteDatabaseUserRequest()
{
    usersIsSet_ = false;
}

DeleteDatabaseUserRequest::~DeleteDatabaseUserRequest() = default;

void DeleteDatabaseUserRequest::validate()
{
}

web::json::value DeleteDatabaseUserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}

bool DeleteDatabaseUserRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<ListDeleteDatabaseUserRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}

std::vector<ListDeleteDatabaseUserRequest>& DeleteDatabaseUserRequest::getUsers()
{
    return users_;
}

void DeleteDatabaseUserRequest::setUsers(const std::vector<ListDeleteDatabaseUserRequest>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool DeleteDatabaseUserRequest::usersIsSet() const
{
    return usersIsSet_;
}

void DeleteDatabaseUserRequest::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


