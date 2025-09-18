

#include "huaweicloud/projectman/v4/model/UserRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UserRequest::UserRequest()
{
    userId_ = "";
    userIdIsSet_ = false;
}

UserRequest::~UserRequest() = default;

void UserRequest::validate()
{
}

web::json::value UserRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool UserRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    return ok;
}


std::string UserRequest::getUserId() const
{
    return userId_;
}

void UserRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UserRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void UserRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


