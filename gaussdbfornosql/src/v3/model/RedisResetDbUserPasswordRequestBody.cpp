

#include "huaweicloud/gaussdbfornosql/v3/model/RedisResetDbUserPasswordRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RedisResetDbUserPasswordRequestBody::RedisResetDbUserPasswordRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

RedisResetDbUserPasswordRequestBody::~RedisResetDbUserPasswordRequestBody() = default;

void RedisResetDbUserPasswordRequestBody::validate()
{
}

web::json::value RedisResetDbUserPasswordRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool RedisResetDbUserPasswordRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
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


std::string RedisResetDbUserPasswordRequestBody::getName() const
{
    return name_;
}

void RedisResetDbUserPasswordRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RedisResetDbUserPasswordRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void RedisResetDbUserPasswordRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string RedisResetDbUserPasswordRequestBody::getPassword() const
{
    return password_;
}

void RedisResetDbUserPasswordRequestBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool RedisResetDbUserPasswordRequestBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void RedisResetDbUserPasswordRequestBody::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


