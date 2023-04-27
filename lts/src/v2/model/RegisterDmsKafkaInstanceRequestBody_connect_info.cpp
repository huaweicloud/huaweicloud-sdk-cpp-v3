

#include "huaweicloud/lts/v2/model/RegisterDmsKafkaInstanceRequestBody_connect_info.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




RegisterDmsKafkaInstanceRequestBody_connect_info::RegisterDmsKafkaInstanceRequestBody_connect_info()
{
    userName_ = "";
    userNameIsSet_ = false;
    pwd_ = "";
    pwdIsSet_ = false;
}

RegisterDmsKafkaInstanceRequestBody_connect_info::~RegisterDmsKafkaInstanceRequestBody_connect_info() = default;

void RegisterDmsKafkaInstanceRequestBody_connect_info::validate()
{
}

web::json::value RegisterDmsKafkaInstanceRequestBody_connect_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(pwdIsSet_) {
        val[utility::conversions::to_string_t("pwd")] = ModelBase::toJson(pwd_);
    }

    return val;
}

bool RegisterDmsKafkaInstanceRequestBody_connect_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPwd(refVal);
        }
    }
    return ok;
}


std::string RegisterDmsKafkaInstanceRequestBody_connect_info::getUserName() const
{
    return userName_;
}

void RegisterDmsKafkaInstanceRequestBody_connect_info::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool RegisterDmsKafkaInstanceRequestBody_connect_info::userNameIsSet() const
{
    return userNameIsSet_;
}

void RegisterDmsKafkaInstanceRequestBody_connect_info::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string RegisterDmsKafkaInstanceRequestBody_connect_info::getPwd() const
{
    return pwd_;
}

void RegisterDmsKafkaInstanceRequestBody_connect_info::setPwd(const std::string& value)
{
    pwd_ = value;
    pwdIsSet_ = true;
}

bool RegisterDmsKafkaInstanceRequestBody_connect_info::pwdIsSet() const
{
    return pwdIsSet_;
}

void RegisterDmsKafkaInstanceRequestBody_connect_info::unsetpwd()
{
    pwdIsSet_ = false;
}

}
}
}
}
}


