

#include "huaweicloud/rds/v3/model/SqlserverUserForCreation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SqlserverUserForCreation::SqlserverUserForCreation()
{
    name_ = "";
    nameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    instanceReadonly_ = false;
    instanceReadonlyIsSet_ = false;
}

SqlserverUserForCreation::~SqlserverUserForCreation() = default;

void SqlserverUserForCreation::validate()
{
}

web::json::value SqlserverUserForCreation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(instanceReadonlyIsSet_) {
        val[utility::conversions::to_string_t("instance_readonly")] = ModelBase::toJson(instanceReadonly_);
    }

    return val;
}
bool SqlserverUserForCreation::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceReadonly(refVal);
        }
    }
    return ok;
}


std::string SqlserverUserForCreation::getName() const
{
    return name_;
}

void SqlserverUserForCreation::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SqlserverUserForCreation::nameIsSet() const
{
    return nameIsSet_;
}

void SqlserverUserForCreation::unsetname()
{
    nameIsSet_ = false;
}

std::string SqlserverUserForCreation::getPassword() const
{
    return password_;
}

void SqlserverUserForCreation::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool SqlserverUserForCreation::passwordIsSet() const
{
    return passwordIsSet_;
}

void SqlserverUserForCreation::unsetpassword()
{
    passwordIsSet_ = false;
}

bool SqlserverUserForCreation::isInstanceReadonly() const
{
    return instanceReadonly_;
}

void SqlserverUserForCreation::setInstanceReadonly(bool value)
{
    instanceReadonly_ = value;
    instanceReadonlyIsSet_ = true;
}

bool SqlserverUserForCreation::instanceReadonlyIsSet() const
{
    return instanceReadonlyIsSet_;
}

void SqlserverUserForCreation::unsetinstanceReadonly()
{
    instanceReadonlyIsSet_ = false;
}

}
}
}
}
}


