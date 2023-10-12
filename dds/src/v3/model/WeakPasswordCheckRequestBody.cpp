

#include "huaweicloud/dds/v3/model/WeakPasswordCheckRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




WeakPasswordCheckRequestBody::WeakPasswordCheckRequestBody()
{
    password_ = "";
    passwordIsSet_ = false;
}

WeakPasswordCheckRequestBody::~WeakPasswordCheckRequestBody() = default;

void WeakPasswordCheckRequestBody::validate()
{
}

web::json::value WeakPasswordCheckRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool WeakPasswordCheckRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    return ok;
}


std::string WeakPasswordCheckRequestBody::getPassword() const
{
    return password_;
}

void WeakPasswordCheckRequestBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool WeakPasswordCheckRequestBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void WeakPasswordCheckRequestBody::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


