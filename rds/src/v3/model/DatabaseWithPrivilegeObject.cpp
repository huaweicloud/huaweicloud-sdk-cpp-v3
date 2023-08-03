

#include "huaweicloud/rds/v3/model/DatabaseWithPrivilegeObject.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DatabaseWithPrivilegeObject::DatabaseWithPrivilegeObject()
{
    name_ = "";
    nameIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
}

DatabaseWithPrivilegeObject::~DatabaseWithPrivilegeObject() = default;

void DatabaseWithPrivilegeObject::validate()
{
}

web::json::value DatabaseWithPrivilegeObject::toJson() const
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

bool DatabaseWithPrivilegeObject::fromJson(const web::json::value& val)
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

std::string DatabaseWithPrivilegeObject::getName() const
{
    return name_;
}

void DatabaseWithPrivilegeObject::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DatabaseWithPrivilegeObject::nameIsSet() const
{
    return nameIsSet_;
}

void DatabaseWithPrivilegeObject::unsetname()
{
    nameIsSet_ = false;
}

bool DatabaseWithPrivilegeObject::isReadonly() const
{
    return readonly_;
}

void DatabaseWithPrivilegeObject::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool DatabaseWithPrivilegeObject::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void DatabaseWithPrivilegeObject::unsetreadonly()
{
    readonlyIsSet_ = false;
}

}
}
}
}
}


