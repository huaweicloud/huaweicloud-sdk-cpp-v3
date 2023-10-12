

#include "huaweicloud/rds/v3/model/SqlserverUserWithPrivilege.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SqlserverUserWithPrivilege::SqlserverUserWithPrivilege()
{
    name_ = "";
    nameIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
}

SqlserverUserWithPrivilege::~SqlserverUserWithPrivilege() = default;

void SqlserverUserWithPrivilege::validate()
{
}

web::json::value SqlserverUserWithPrivilege::toJson() const
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
bool SqlserverUserWithPrivilege::fromJson(const web::json::value& val)
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


std::string SqlserverUserWithPrivilege::getName() const
{
    return name_;
}

void SqlserverUserWithPrivilege::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SqlserverUserWithPrivilege::nameIsSet() const
{
    return nameIsSet_;
}

void SqlserverUserWithPrivilege::unsetname()
{
    nameIsSet_ = false;
}

bool SqlserverUserWithPrivilege::isReadonly() const
{
    return readonly_;
}

void SqlserverUserWithPrivilege::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool SqlserverUserWithPrivilege::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void SqlserverUserWithPrivilege::unsetreadonly()
{
    readonlyIsSet_ = false;
}

}
}
}
}
}


