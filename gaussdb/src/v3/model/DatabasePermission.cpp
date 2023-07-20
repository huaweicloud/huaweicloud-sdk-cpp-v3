

#include "huaweicloud/gaussdb/v3/model/DatabasePermission.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DatabasePermission::DatabasePermission()
{
    name_ = "";
    nameIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
}

DatabasePermission::~DatabasePermission() = default;

void DatabasePermission::validate()
{
}

web::json::value DatabasePermission::toJson() const
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

bool DatabasePermission::fromJson(const web::json::value& val)
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

std::string DatabasePermission::getName() const
{
    return name_;
}

void DatabasePermission::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DatabasePermission::nameIsSet() const
{
    return nameIsSet_;
}

void DatabasePermission::unsetname()
{
    nameIsSet_ = false;
}

bool DatabasePermission::isReadonly() const
{
    return readonly_;
}

void DatabasePermission::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool DatabasePermission::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void DatabasePermission::unsetreadonly()
{
    readonlyIsSet_ = false;
}

}
}
}
}
}


