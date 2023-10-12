

#include "huaweicloud/gaussdb/v3/model/UpdateDatabaseUserCommentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateDatabaseUserCommentRequest::UpdateDatabaseUserCommentRequest()
{
    usersIsSet_ = false;
}

UpdateDatabaseUserCommentRequest::~UpdateDatabaseUserCommentRequest() = default;

void UpdateDatabaseUserCommentRequest::validate()
{
}

web::json::value UpdateDatabaseUserCommentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool UpdateDatabaseUserCommentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateDatabaseUserComment> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::vector<UpdateDatabaseUserComment>& UpdateDatabaseUserCommentRequest::getUsers()
{
    return users_;
}

void UpdateDatabaseUserCommentRequest::setUsers(const std::vector<UpdateDatabaseUserComment>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool UpdateDatabaseUserCommentRequest::usersIsSet() const
{
    return usersIsSet_;
}

void UpdateDatabaseUserCommentRequest::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


