

#include "huaweicloud/codeartsbuild/v3/model/EndPointResponse_created_by.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




EndPointResponse_created_by::EndPointResponse_created_by()
{
    username_ = "";
    usernameIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
}

EndPointResponse_created_by::~EndPointResponse_created_by() = default;

void EndPointResponse_created_by::validate()
{
}

web::json::value EndPointResponse_created_by::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool EndPointResponse_created_by::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
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


std::string EndPointResponse_created_by::getUsername() const
{
    return username_;
}

void EndPointResponse_created_by::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool EndPointResponse_created_by::usernameIsSet() const
{
    return usernameIsSet_;
}

void EndPointResponse_created_by::unsetusername()
{
    usernameIsSet_ = false;
}

std::string EndPointResponse_created_by::getUserId() const
{
    return userId_;
}

void EndPointResponse_created_by::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool EndPointResponse_created_by::userIdIsSet() const
{
    return userIdIsSet_;
}

void EndPointResponse_created_by::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


