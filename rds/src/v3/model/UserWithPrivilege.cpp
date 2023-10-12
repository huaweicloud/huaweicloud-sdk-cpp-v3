

#include "huaweicloud/rds/v3/model/UserWithPrivilege.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UserWithPrivilege::UserWithPrivilege()
{
    name_ = "";
    nameIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
}

UserWithPrivilege::~UserWithPrivilege() = default;

void UserWithPrivilege::validate()
{
}

web::json::value UserWithPrivilege::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(readonlyIsSet_) {
        val[utility::conversions::to_string_t("readonly")] = ModelBase::toJson(readonly_);
    }

    return val;
}
bool UserWithPrivilege::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("readonly"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("readonly"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReadonly(refVal);
        }
    }
    return ok;
}


std::string UserWithPrivilege::getName() const
{
    return name_;
}

void UserWithPrivilege::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserWithPrivilege::nameIsSet() const
{
    return nameIsSet_;
}

void UserWithPrivilege::unsetname()
{
    nameIsSet_ = false;
}

bool UserWithPrivilege::isReadonly() const
{
    return readonly_;
}

void UserWithPrivilege::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool UserWithPrivilege::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void UserWithPrivilege::unsetreadonly()
{
    readonlyIsSet_ = false;
}

}
}
}
}
}


