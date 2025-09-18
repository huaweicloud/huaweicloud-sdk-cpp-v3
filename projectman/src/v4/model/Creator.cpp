

#include "huaweicloud/projectman/v4/model/Creator.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




Creator::Creator()
{
    userId_ = "";
    userIdIsSet_ = false;
}

Creator::~Creator() = default;

void Creator::validate()
{
}

web::json::value Creator::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool Creator::fromJson(const web::json::value& val)
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


std::string Creator::getUserId() const
{
    return userId_;
}

void Creator::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool Creator::userIdIsSet() const
{
    return userIdIsSet_;
}

void Creator::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


