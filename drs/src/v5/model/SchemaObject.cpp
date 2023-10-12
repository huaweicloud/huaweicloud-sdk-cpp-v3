

#include "huaweicloud/drs/v5/model/SchemaObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SchemaObject::SchemaObject()
{
    syncType_ = "";
    syncTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    all_ = false;
    allIsSet_ = false;
    tablesIsSet_ = false;
}

SchemaObject::~SchemaObject() = default;

void SchemaObject::validate()
{
}

web::json::value SchemaObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(syncTypeIsSet_) {
        val[utility::conversions::to_string_t("sync_type")] = ModelBase::toJson(syncType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(allIsSet_) {
        val[utility::conversions::to_string_t("all")] = ModelBase::toJson(all_);
    }
    if(tablesIsSet_) {
        val[utility::conversions::to_string_t("tables")] = ModelBase::toJson(tables_);
    }

    return val;
}
bool SchemaObject::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sync_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSyncType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAll(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tables"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, TableObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTables(refVal);
        }
    }
    return ok;
}


std::string SchemaObject::getSyncType() const
{
    return syncType_;
}

void SchemaObject::setSyncType(const std::string& value)
{
    syncType_ = value;
    syncTypeIsSet_ = true;
}

bool SchemaObject::syncTypeIsSet() const
{
    return syncTypeIsSet_;
}

void SchemaObject::unsetsyncType()
{
    syncTypeIsSet_ = false;
}

std::string SchemaObject::getName() const
{
    return name_;
}

void SchemaObject::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SchemaObject::nameIsSet() const
{
    return nameIsSet_;
}

void SchemaObject::unsetname()
{
    nameIsSet_ = false;
}

bool SchemaObject::isAll() const
{
    return all_;
}

void SchemaObject::setAll(bool value)
{
    all_ = value;
    allIsSet_ = true;
}

bool SchemaObject::allIsSet() const
{
    return allIsSet_;
}

void SchemaObject::unsetall()
{
    allIsSet_ = false;
}

std::map<std::string, TableObject>& SchemaObject::getTables()
{
    return tables_;
}

void SchemaObject::setTables(const std::map<std::string, TableObject>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool SchemaObject::tablesIsSet() const
{
    return tablesIsSet_;
}

void SchemaObject::unsettables()
{
    tablesIsSet_ = false;
}

}
}
}
}
}


