

#include "huaweicloud/gaussdb/v3/model/CreateDatabaseList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateDatabaseList::CreateDatabaseList()
{
    name_ = "";
    nameIsSet_ = false;
    readonly_ = false;
    readonlyIsSet_ = false;
}

CreateDatabaseList::~CreateDatabaseList() = default;

void CreateDatabaseList::validate()
{
}

web::json::value CreateDatabaseList::toJson() const
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
bool CreateDatabaseList::fromJson(const web::json::value& val)
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


std::string CreateDatabaseList::getName() const
{
    return name_;
}

void CreateDatabaseList::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateDatabaseList::nameIsSet() const
{
    return nameIsSet_;
}

void CreateDatabaseList::unsetname()
{
    nameIsSet_ = false;
}

bool CreateDatabaseList::isReadonly() const
{
    return readonly_;
}

void CreateDatabaseList::setReadonly(bool value)
{
    readonly_ = value;
    readonlyIsSet_ = true;
}

bool CreateDatabaseList::readonlyIsSet() const
{
    return readonlyIsSet_;
}

void CreateDatabaseList::unsetreadonly()
{
    readonlyIsSet_ = false;
}

}
}
}
}
}


