

#include "huaweicloud/gaussdb/v3/model/ResetDatabasePasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResetDatabasePasswordRequest::ResetDatabasePasswordRequest()
{
    usersIsSet_ = false;
}

ResetDatabasePasswordRequest::~ResetDatabasePasswordRequest() = default;

void ResetDatabasePasswordRequest::validate()
{
}

web::json::value ResetDatabasePasswordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool ResetDatabasePasswordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<ResetDatabasePassword> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::vector<ResetDatabasePassword>& ResetDatabasePasswordRequest::getUsers()
{
    return users_;
}

void ResetDatabasePasswordRequest::setUsers(const std::vector<ResetDatabasePassword>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ResetDatabasePasswordRequest::usersIsSet() const
{
    return usersIsSet_;
}

void ResetDatabasePasswordRequest::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


