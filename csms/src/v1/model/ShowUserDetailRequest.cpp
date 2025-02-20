

#include "huaweicloud/csms/v1/model/ShowUserDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowUserDetailRequest::ShowUserDetailRequest()
{
    userId_ = "";
    userIdIsSet_ = false;
}

ShowUserDetailRequest::~ShowUserDetailRequest() = default;

void ShowUserDetailRequest::validate()
{
}

web::json::value ShowUserDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }

    return val;
}
bool ShowUserDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowUserDetailRequest::getUserId() const
{
    return userId_;
}

void ShowUserDetailRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool ShowUserDetailRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void ShowUserDetailRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

}
}
}
}
}


