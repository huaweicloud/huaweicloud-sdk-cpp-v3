

#include "huaweicloud/drs/v5/model/TableObject.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




TableObject::TableObject()
{
    syncType_ = "";
    syncTypeIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    all_ = false;
    allIsSet_ = false;
    dbAliasName_ = "";
    dbAliasNameIsSet_ = false;
    schemaAliasName_ = "";
    schemaAliasNameIsSet_ = false;
    filtered_ = false;
    filteredIsSet_ = false;
    filterConditionsIsSet_ = false;
    configConditionsIsSet_ = false;
    isSynchronized_ = false;
    isSynchronizedIsSet_ = false;
    columnsIsSet_ = false;
}

TableObject::~TableObject() = default;

void TableObject::validate()
{
}

web::json::value TableObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(syncTypeIsSet_) {
        val[utility::conversions::to_string_t("sync_type")] = ModelBase::toJson(syncType_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(allIsSet_) {
        val[utility::conversions::to_string_t("all")] = ModelBase::toJson(all_);
    }
    if(dbAliasNameIsSet_) {
        val[utility::conversions::to_string_t("db_alias_name")] = ModelBase::toJson(dbAliasName_);
    }
    if(schemaAliasNameIsSet_) {
        val[utility::conversions::to_string_t("schema_alias_name")] = ModelBase::toJson(schemaAliasName_);
    }
    if(filteredIsSet_) {
        val[utility::conversions::to_string_t("filtered")] = ModelBase::toJson(filtered_);
    }
    if(filterConditionsIsSet_) {
        val[utility::conversions::to_string_t("filter_conditions")] = ModelBase::toJson(filterConditions_);
    }
    if(configConditionsIsSet_) {
        val[utility::conversions::to_string_t("config_conditions")] = ModelBase::toJson(configConditions_);
    }
    if(isSynchronizedIsSet_) {
        val[utility::conversions::to_string_t("is_synchronized")] = ModelBase::toJson(isSynchronized_);
    }
    if(columnsIsSet_) {
        val[utility::conversions::to_string_t("columns")] = ModelBase::toJson(columns_);
    }

    return val;
}

bool TableObject::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("db_alias_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_alias_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbAliasName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_alias_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_alias_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaAliasName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filtered"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filtered"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiltered(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigConditions(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("columns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("columns"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, ColumnObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumns(refVal);
        }
    }
    return ok;
}

std::string TableObject::getSyncType() const
{
    return syncType_;
}

void TableObject::setSyncType(const std::string& value)
{
    syncType_ = value;
    syncTypeIsSet_ = true;
}

bool TableObject::syncTypeIsSet() const
{
    return syncTypeIsSet_;
}

void TableObject::unsetsyncType()
{
    syncTypeIsSet_ = false;
}

std::string TableObject::getType() const
{
    return type_;
}

void TableObject::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TableObject::typeIsSet() const
{
    return typeIsSet_;
}

void TableObject::unsettype()
{
    typeIsSet_ = false;
}

std::string TableObject::getName() const
{
    return name_;
}

void TableObject::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TableObject::nameIsSet() const
{
    return nameIsSet_;
}

void TableObject::unsetname()
{
    nameIsSet_ = false;
}

bool TableObject::isAll() const
{
    return all_;
}

void TableObject::setAll(bool value)
{
    all_ = value;
    allIsSet_ = true;
}

bool TableObject::allIsSet() const
{
    return allIsSet_;
}

void TableObject::unsetall()
{
    allIsSet_ = false;
}

std::string TableObject::getDbAliasName() const
{
    return dbAliasName_;
}

void TableObject::setDbAliasName(const std::string& value)
{
    dbAliasName_ = value;
    dbAliasNameIsSet_ = true;
}

bool TableObject::dbAliasNameIsSet() const
{
    return dbAliasNameIsSet_;
}

void TableObject::unsetdbAliasName()
{
    dbAliasNameIsSet_ = false;
}

std::string TableObject::getSchemaAliasName() const
{
    return schemaAliasName_;
}

void TableObject::setSchemaAliasName(const std::string& value)
{
    schemaAliasName_ = value;
    schemaAliasNameIsSet_ = true;
}

bool TableObject::schemaAliasNameIsSet() const
{
    return schemaAliasNameIsSet_;
}

void TableObject::unsetschemaAliasName()
{
    schemaAliasNameIsSet_ = false;
}

bool TableObject::isFiltered() const
{
    return filtered_;
}

void TableObject::setFiltered(bool value)
{
    filtered_ = value;
    filteredIsSet_ = true;
}

bool TableObject::filteredIsSet() const
{
    return filteredIsSet_;
}

void TableObject::unsetfiltered()
{
    filteredIsSet_ = false;
}

std::vector<std::string>& TableObject::getFilterConditions()
{
    return filterConditions_;
}

void TableObject::setFilterConditions(const std::vector<std::string>& value)
{
    filterConditions_ = value;
    filterConditionsIsSet_ = true;
}

bool TableObject::filterConditionsIsSet() const
{
    return filterConditionsIsSet_;
}

void TableObject::unsetfilterConditions()
{
    filterConditionsIsSet_ = false;
}

std::vector<std::string>& TableObject::getConfigConditions()
{
    return configConditions_;
}

void TableObject::setConfigConditions(const std::vector<std::string>& value)
{
    configConditions_ = value;
    configConditionsIsSet_ = true;
}

bool TableObject::configConditionsIsSet() const
{
    return configConditionsIsSet_;
}

void TableObject::unsetconfigConditions()
{
    configConditionsIsSet_ = false;
}

bool TableObject::isIsSynchronized() const
{
    return isSynchronized_;
}

void TableObject::setIsSynchronized(bool value)
{
    isSynchronized_ = value;
    isSynchronizedIsSet_ = true;
}

bool TableObject::isSynchronizedIsSet() const
{
    return isSynchronizedIsSet_;
}

void TableObject::unsetisSynchronized()
{
    isSynchronizedIsSet_ = false;
}

std::map<std::string, ColumnObject>& TableObject::getColumns()
{
    return columns_;
}

void TableObject::setColumns(const std::map<std::string, ColumnObject>& value)
{
    columns_ = value;
    columnsIsSet_ = true;
}

bool TableObject::columnsIsSet() const
{
    return columnsIsSet_;
}

void TableObject::unsetcolumns()
{
    columnsIsSet_ = false;
}

}
}
}
}
}


