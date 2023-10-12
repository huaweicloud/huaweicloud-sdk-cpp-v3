

#include "huaweicloud/drs/v5/model/DatabaseObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DatabaseObject::DatabaseObject()
{
    syncType_ = "";
    syncTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    all_ = false;
    allIsSet_ = false;
    schemasIsSet_ = false;
    tablesIsSet_ = false;
    totalTableNum_ = 0;
    totalTableNumIsSet_ = false;
    isSynchronized_ = false;
    isSynchronizedIsSet_ = false;
}

DatabaseObject::~DatabaseObject() = default;

void DatabaseObject::validate()
{
}

web::json::value DatabaseObject::toJson() const
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
    if(schemasIsSet_) {
        val[utility::conversions::to_string_t("schemas")] = ModelBase::toJson(schemas_);
    }
    if(tablesIsSet_) {
        val[utility::conversions::to_string_t("tables")] = ModelBase::toJson(tables_);
    }
    if(totalTableNumIsSet_) {
        val[utility::conversions::to_string_t("total_table_num")] = ModelBase::toJson(totalTableNum_);
    }
    if(isSynchronizedIsSet_) {
        val[utility::conversions::to_string_t("is_synchronized")] = ModelBase::toJson(isSynchronized_);
    }

    return val;
}
bool DatabaseObject::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("schemas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schemas"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, SchemaObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemas(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total_table_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_table_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalTableNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_synchronized"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_synchronized"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSynchronized(refVal);
        }
    }
    return ok;
}


std::string DatabaseObject::getSyncType() const
{
    return syncType_;
}

void DatabaseObject::setSyncType(const std::string& value)
{
    syncType_ = value;
    syncTypeIsSet_ = true;
}

bool DatabaseObject::syncTypeIsSet() const
{
    return syncTypeIsSet_;
}

void DatabaseObject::unsetsyncType()
{
    syncTypeIsSet_ = false;
}

std::string DatabaseObject::getName() const
{
    return name_;
}

void DatabaseObject::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DatabaseObject::nameIsSet() const
{
    return nameIsSet_;
}

void DatabaseObject::unsetname()
{
    nameIsSet_ = false;
}

bool DatabaseObject::isAll() const
{
    return all_;
}

void DatabaseObject::setAll(bool value)
{
    all_ = value;
    allIsSet_ = true;
}

bool DatabaseObject::allIsSet() const
{
    return allIsSet_;
}

void DatabaseObject::unsetall()
{
    allIsSet_ = false;
}

std::map<std::string, SchemaObject>& DatabaseObject::getSchemas()
{
    return schemas_;
}

void DatabaseObject::setSchemas(const std::map<std::string, SchemaObject>& value)
{
    schemas_ = value;
    schemasIsSet_ = true;
}

bool DatabaseObject::schemasIsSet() const
{
    return schemasIsSet_;
}

void DatabaseObject::unsetschemas()
{
    schemasIsSet_ = false;
}

std::map<std::string, TableObject>& DatabaseObject::getTables()
{
    return tables_;
}

void DatabaseObject::setTables(const std::map<std::string, TableObject>& value)
{
    tables_ = value;
    tablesIsSet_ = true;
}

bool DatabaseObject::tablesIsSet() const
{
    return tablesIsSet_;
}

void DatabaseObject::unsettables()
{
    tablesIsSet_ = false;
}

int32_t DatabaseObject::getTotalTableNum() const
{
    return totalTableNum_;
}

void DatabaseObject::setTotalTableNum(int32_t value)
{
    totalTableNum_ = value;
    totalTableNumIsSet_ = true;
}

bool DatabaseObject::totalTableNumIsSet() const
{
    return totalTableNumIsSet_;
}

void DatabaseObject::unsettotalTableNum()
{
    totalTableNumIsSet_ = false;
}

bool DatabaseObject::isIsSynchronized() const
{
    return isSynchronized_;
}

void DatabaseObject::setIsSynchronized(bool value)
{
    isSynchronized_ = value;
    isSynchronizedIsSet_ = true;
}

bool DatabaseObject::isSynchronizedIsSet() const
{
    return isSynchronizedIsSet_;
}

void DatabaseObject::unsetisSynchronized()
{
    isSynchronizedIsSet_ = false;
}

}
}
}
}
}


