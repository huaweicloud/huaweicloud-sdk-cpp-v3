

#include "huaweicloud/gaussdbforopengauss/v3/model/CreateDbRoleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




CreateDbRoleRequestBody::CreateDbRoleRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

CreateDbRoleRequestBody::~CreateDbRoleRequestBody() = default;

void CreateDbRoleRequestBody::validate()
{
}

web::json::value CreateDbRoleRequestBody::toJson() const
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
bool CreateDbRoleRequestBody::fromJson(const web::json::value& val)
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


std::string CreateDbRoleRequestBody::getName() const
{
    return name_;
}

void CreateDbRoleRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateDbRoleRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateDbRoleRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateDbRoleRequestBody::getPassword() const
{
    return password_;
}

void CreateDbRoleRequestBody::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool CreateDbRoleRequestBody::passwordIsSet() const
{
    return passwordIsSet_;
}

void CreateDbRoleRequestBody::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


