

#include "huaweicloud/drs/v5/model/DataFilterObjectResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DataFilterObjectResp::DataFilterObjectResp()
{
    batchId_ = 0L;
    batchIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    objectName_ = "";
    objectNameIsSet_ = false;
    objectAliasName_ = "";
    objectAliasNameIsSet_ = false;
    objectType_ = "";
    objectTypeIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    isDataFilter_ = "";
    isDataFilterIsSet_ = false;
    dataFilterType_ = "";
    dataFilterTypeIsSet_ = false;
    filterCondition_ = "";
    filterConditionIsSet_ = false;
    isSynchronized_ = false;
    isSynchronizedIsSet_ = false;
}

DataFilterObjectResp::~DataFilterObjectResp() = default;

void DataFilterObjectResp::validate()
{
}

web::json::value DataFilterObjectResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(batchIdIsSet_) {
        val[utility::conversions::to_string_t("batch_id")] = ModelBase::toJson(batchId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(objectNameIsSet_) {
        val[utility::conversions::to_string_t("object_name")] = ModelBase::toJson(objectName_);
    }
    if(objectAliasNameIsSet_) {
        val[utility::conversions::to_string_t("object_alias_name")] = ModelBase::toJson(objectAliasName_);
    }
    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(isDataFilterIsSet_) {
        val[utility::conversions::to_string_t("is_data_filter")] = ModelBase::toJson(isDataFilter_);
    }
    if(dataFilterTypeIsSet_) {
        val[utility::conversions::to_string_t("data_filter_type")] = ModelBase::toJson(dataFilterType_);
    }
    if(filterConditionIsSet_) {
        val[utility::conversions::to_string_t("filter_condition")] = ModelBase::toJson(filterCondition_);
    }
    if(isSynchronizedIsSet_) {
        val[utility::conversions::to_string_t("is_synchronized")] = ModelBase::toJson(isSynchronized_);
    }

    return val;
}
bool DataFilterObjectResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("batch_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batch_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_alias_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_alias_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectAliasName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_data_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_data_filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDataFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_filter_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_filter_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataFilterType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter_condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilterCondition(refVal);
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


int64_t DataFilterObjectResp::getBatchId() const
{
    return batchId_;
}

void DataFilterObjectResp::setBatchId(int64_t value)
{
    batchId_ = value;
    batchIdIsSet_ = true;
}

bool DataFilterObjectResp::batchIdIsSet() const
{
    return batchIdIsSet_;
}

void DataFilterObjectResp::unsetbatchId()
{
    batchIdIsSet_ = false;
}

std::string DataFilterObjectResp::getId() const
{
    return id_;
}

void DataFilterObjectResp::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DataFilterObjectResp::idIsSet() const
{
    return idIsSet_;
}

void DataFilterObjectResp::unsetid()
{
    idIsSet_ = false;
}

std::string DataFilterObjectResp::getParentId() const
{
    return parentId_;
}

void DataFilterObjectResp::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool DataFilterObjectResp::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void DataFilterObjectResp::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string DataFilterObjectResp::getObjectName() const
{
    return objectName_;
}

void DataFilterObjectResp::setObjectName(const std::string& value)
{
    objectName_ = value;
    objectNameIsSet_ = true;
}

bool DataFilterObjectResp::objectNameIsSet() const
{
    return objectNameIsSet_;
}

void DataFilterObjectResp::unsetobjectName()
{
    objectNameIsSet_ = false;
}

std::string DataFilterObjectResp::getObjectAliasName() const
{
    return objectAliasName_;
}

void DataFilterObjectResp::setObjectAliasName(const std::string& value)
{
    objectAliasName_ = value;
    objectAliasNameIsSet_ = true;
}

bool DataFilterObjectResp::objectAliasNameIsSet() const
{
    return objectAliasNameIsSet_;
}

void DataFilterObjectResp::unsetobjectAliasName()
{
    objectAliasNameIsSet_ = false;
}

std::string DataFilterObjectResp::getObjectType() const
{
    return objectType_;
}

void DataFilterObjectResp::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool DataFilterObjectResp::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void DataFilterObjectResp::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string DataFilterObjectResp::getDbName() const
{
    return dbName_;
}

void DataFilterObjectResp::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DataFilterObjectResp::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DataFilterObjectResp::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string DataFilterObjectResp::getSchemaName() const
{
    return schemaName_;
}

void DataFilterObjectResp::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool DataFilterObjectResp::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void DataFilterObjectResp::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string DataFilterObjectResp::getTableName() const
{
    return tableName_;
}

void DataFilterObjectResp::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool DataFilterObjectResp::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void DataFilterObjectResp::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string DataFilterObjectResp::getIsDataFilter() const
{
    return isDataFilter_;
}

void DataFilterObjectResp::setIsDataFilter(const std::string& value)
{
    isDataFilter_ = value;
    isDataFilterIsSet_ = true;
}

bool DataFilterObjectResp::isDataFilterIsSet() const
{
    return isDataFilterIsSet_;
}

void DataFilterObjectResp::unsetisDataFilter()
{
    isDataFilterIsSet_ = false;
}

std::string DataFilterObjectResp::getDataFilterType() const
{
    return dataFilterType_;
}

void DataFilterObjectResp::setDataFilterType(const std::string& value)
{
    dataFilterType_ = value;
    dataFilterTypeIsSet_ = true;
}

bool DataFilterObjectResp::dataFilterTypeIsSet() const
{
    return dataFilterTypeIsSet_;
}

void DataFilterObjectResp::unsetdataFilterType()
{
    dataFilterTypeIsSet_ = false;
}

std::string DataFilterObjectResp::getFilterCondition() const
{
    return filterCondition_;
}

void DataFilterObjectResp::setFilterCondition(const std::string& value)
{
    filterCondition_ = value;
    filterConditionIsSet_ = true;
}

bool DataFilterObjectResp::filterConditionIsSet() const
{
    return filterConditionIsSet_;
}

void DataFilterObjectResp::unsetfilterCondition()
{
    filterConditionIsSet_ = false;
}

bool DataFilterObjectResp::isIsSynchronized() const
{
    return isSynchronized_;
}

void DataFilterObjectResp::setIsSynchronized(bool value)
{
    isSynchronized_ = value;
    isSynchronizedIsSet_ = true;
}

bool DataFilterObjectResp::isSynchronizedIsSet() const
{
    return isSynchronizedIsSet_;
}

void DataFilterObjectResp::unsetisSynchronized()
{
    isSynchronizedIsSet_ = false;
}

}
}
}
}
}


