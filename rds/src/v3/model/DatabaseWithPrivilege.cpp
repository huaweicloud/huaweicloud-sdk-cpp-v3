

#include "huaweicloud/rds/v3/model/DatabaseWithPrivilege.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DatabaseWithPrivilege::DatabaseWithPrivilege()
{
    name_ = "";
    nameIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
}

DatabaseWithPrivilege::~DatabaseWithPrivilege() = default;

void DatabaseWithPrivilege::validate()
{
}

web::json::value DatabaseWithPrivilege::toJson() const
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
bool DatabaseWithPrivilege::fromJson(const web::json::value& val)
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


std::string DatabaseWithPrivilege::getName() const
{
    return name_;
}

void DatabaseWithPrivilege::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DatabaseWithPrivilege::nameIsSet() const
{
    return nameIsSet_;
}

void DatabaseWithPrivilege::unsetname()
{
    nameIsSet_ = false;
}

bool DatabaseWithPrivilege::isReadonly() const
{
    return readonly_;
}

void DatabaseWithPrivilege::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool DatabaseWithPrivilege::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void DatabaseWithPrivilege::unsetreadonly()
{
    readonlyIsSet_ = false;
}

}
}
}
}
}


