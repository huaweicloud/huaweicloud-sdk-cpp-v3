

#include "huaweicloud/codeartspipeline/v2/model/EndpointCreatorInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




EndpointCreatorInfo::EndpointCreatorInfo()
{
    userId_ = "";
    userIdIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
}

EndpointCreatorInfo::~EndpointCreatorInfo() = default;

void EndpointCreatorInfo::validate()
{
}

web::json::value EndpointCreatorInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }

    return val;
}
bool EndpointCreatorInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    return ok;
}


std::string EndpointCreatorInfo::getUserId() const
{
    return userId_;
}

void EndpointCreatorInfo::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool EndpointCreatorInfo::userIdIsSet() const
{
    return userIdIsSet_;
}

void EndpointCreatorInfo::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string EndpointCreatorInfo::getUsername() const
{
    return username_;
}

void EndpointCreatorInfo::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool EndpointCreatorInfo::usernameIsSet() const
{
    return usernameIsSet_;
}

void EndpointCreatorInfo::unsetusername()
{
    usernameIsSet_ = false;
}

}
}
}
}
}


