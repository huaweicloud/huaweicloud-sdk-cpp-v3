

#include "huaweicloud/csms/v1/model/UpdateUserPasswordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




UpdateUserPasswordResponse::UpdateUserPasswordResponse()
{
    userId_ = "";
    userIdIsSet_ = false;
}

UpdateUserPasswordResponse::~UpdateUserPasswordResponse() = default;

void UpdateUserPasswordResponse::validate()
{
}

web::json::value UpdateUserPasswordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool UpdateUserPasswordResponse::fromJson(const web::json::value& val)
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


std::string UpdateUserPasswordResponse::getUserId() const
{
    return userId_;
}

void UpdateUserPasswordResponse::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UpdateUserPasswordResponse::userIdIsSet() const
{
    return userIdIsSet_;
}

void UpdateUserPasswordResponse::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


