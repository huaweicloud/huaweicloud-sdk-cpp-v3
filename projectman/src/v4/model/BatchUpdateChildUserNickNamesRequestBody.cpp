

#include "huaweicloud/projectman/v4/model/BatchUpdateChildUserNickNamesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




BatchUpdateChildUserNickNamesRequestBody::BatchUpdateChildUserNickNamesRequestBody()
{
    usersIsSet_ = false;
}

BatchUpdateChildUserNickNamesRequestBody::~BatchUpdateChildUserNickNamesRequestBody() = default;

void BatchUpdateChildUserNickNamesRequestBody::validate()
{
}

web::json::value BatchUpdateChildUserNickNamesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool BatchUpdateChildUserNickNamesRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateChildUserNickNameRequestBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::vector<UpdateChildUserNickNameRequestBody>& BatchUpdateChildUserNickNamesRequestBody::getUsers()
{
    return users_;
}

void BatchUpdateChildUserNickNamesRequestBody::setUsers(const std::vector<UpdateChildUserNickNameRequestBody>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool BatchUpdateChildUserNickNamesRequestBody::usersIsSet() const
{
    return usersIsSet_;
}

void BatchUpdateChildUserNickNamesRequestBody::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


