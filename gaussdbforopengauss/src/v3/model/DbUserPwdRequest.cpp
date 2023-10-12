

#include "huaweicloud/gaussdbforopengauss/v3/model/DbUserPwdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DbUserPwdRequest::DbUserPwdRequest()
{
    name_ = "";
    nameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

DbUserPwdRequest::~DbUserPwdRequest() = default;

void DbUserPwdRequest::validate()
{
}

web::json::value DbUserPwdRequest::toJson() const
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
bool DbUserPwdRequest::fromJson(const web::json::value& val)
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


std::string DbUserPwdRequest::getName() const
{
    return name_;
}

void DbUserPwdRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DbUserPwdRequest::nameIsSet() const
{
    return nameIsSet_;
}

void DbUserPwdRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string DbUserPwdRequest::getPassword() const
{
    return password_;
}

void DbUserPwdRequest::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool DbUserPwdRequest::passwordIsSet() const
{
    return passwordIsSet_;
}

void DbUserPwdRequest::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


