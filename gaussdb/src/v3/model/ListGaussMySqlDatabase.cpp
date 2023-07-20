

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlDatabase.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlDatabase::ListGaussMySqlDatabase()
{
    name_ = "";
    nameIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
}

ListGaussMySqlDatabase::~ListGaussMySqlDatabase() = default;

void ListGaussMySqlDatabase::validate()
{
}

web::json::value ListGaussMySqlDatabase::toJson() const
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

bool ListGaussMySqlDatabase::fromJson(const web::json::value& val)
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

std::string ListGaussMySqlDatabase::getName() const
{
    return name_;
}

void ListGaussMySqlDatabase::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListGaussMySqlDatabase::nameIsSet() const
{
    return nameIsSet_;
}

void ListGaussMySqlDatabase::unsetname()
{
    nameIsSet_ = false;
}

bool ListGaussMySqlDatabase::isReadonly() const
{
    return readonly_;
}

void ListGaussMySqlDatabase::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool ListGaussMySqlDatabase::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void ListGaussMySqlDatabase::unsetreadonly()
{
    readonlyIsSet_ = false;
}

}
}
}
}
}


