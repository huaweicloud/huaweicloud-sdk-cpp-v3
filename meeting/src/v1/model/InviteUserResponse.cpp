

#include "huaweicloud/meeting/v1/model/InviteUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




InviteUserResponse::InviteUserResponse()
{
    userExist_ = false;
    userExistIsSet_ = false;
}

InviteUserResponse::~InviteUserResponse() = default;

void InviteUserResponse::validate()
{
}

web::json::value InviteUserResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userExistIsSet_) {
        val[utility::conversions::to_string_t("userExist")] = ModelBase::toJson(userExist_);
    }

    return val;
}
bool InviteUserResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("userExist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userExist"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserExist(refVal);
        }
    }
    return ok;
}


bool InviteUserResponse::isUserExist() const
{
    return userExist_;
}

void InviteUserResponse::setUserExist(bool value)
{
    userExist_ = value;
    userExistIsSet_ = true;
}

bool InviteUserResponse::userExistIsSet() const
{
    return userExistIsSet_;
}

void InviteUserResponse::unsetuserExist()
{
    userExistIsSet_ = false;
}

}
}
}
}
}


