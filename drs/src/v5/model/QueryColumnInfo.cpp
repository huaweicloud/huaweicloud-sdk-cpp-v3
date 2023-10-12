

#include "huaweicloud/drs/v5/model/QueryColumnInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryColumnInfo::QueryColumnInfo()
{
    columnName_ = "";
    columnNameIsSet_ = false;
    columnType_ = "";
    columnTypeIsSet_ = false;
    primaryKeyOrUniqueIndex_ = "";
    primaryKeyOrUniqueIndexIsSet_ = false;
    columnMappedName_ = "";
    columnMappedNameIsSet_ = false;
    isFiltered_ = false;
    isFilteredIsSet_ = false;
    isPartitionKey_ = false;
    isPartitionKeyIsSet_ = false;
}

QueryColumnInfo::~QueryColumnInfo() = default;

void QueryColumnInfo::validate()
{
}

web::json::value QueryColumnInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(columnNameIsSet_) {
        val[utility::conversions::to_string_t("column_name")] = ModelBase::toJson(columnName_);
    }
    if(columnTypeIsSet_) {
        val[utility::conversions::to_string_t("column_type")] = ModelBase::toJson(columnType_);
    }
    if(primaryKeyOrUniqueIndexIsSet_) {
        val[utility::conversions::to_string_t("primary_key_or_unique_index")] = ModelBase::toJson(primaryKeyOrUniqueIndex_);
    }
    if(columnMappedNameIsSet_) {
        val[utility::conversions::to_string_t("column_mapped_name")] = ModelBase::toJson(columnMappedName_);
    }
    if(isFilteredIsSet_) {
        val[utility::conversions::to_string_t("is_filtered")] = ModelBase::toJson(isFiltered_);
    }
    if(isPartitionKeyIsSet_) {
        val[utility::conversions::to_string_t("is_partition_key")] = ModelBase::toJson(isPartitionKey_);
    }

    return val;
}
bool QueryColumnInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("column_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("column_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primary_key_or_unique_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary_key_or_unique_index"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryKeyOrUniqueIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("column_mapped_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_mapped_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnMappedName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_filtered"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_filtered"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFiltered(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_partition_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_partition_key"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPartitionKey(refVal);
        }
    }
    return ok;
}


std::string QueryColumnInfo::getColumnName() const
{
    return columnName_;
}

void QueryColumnInfo::setColumnName(const std::string& value)
{
    columnName_ = value;
    columnNameIsSet_ = true;
}

bool QueryColumnInfo::columnNameIsSet() const
{
    return columnNameIsSet_;
}

void QueryColumnInfo::unsetcolumnName()
{
    columnNameIsSet_ = false;
}

std::string QueryColumnInfo::getColumnType() const
{
    return columnType_;
}

void QueryColumnInfo::setColumnType(const std::string& value)
{
    columnType_ = value;
    columnTypeIsSet_ = true;
}

bool QueryColumnInfo::columnTypeIsSet() const
{
    return columnTypeIsSet_;
}

void QueryColumnInfo::unsetcolumnType()
{
    columnTypeIsSet_ = false;
}

std::string QueryColumnInfo::getPrimaryKeyOrUniqueIndex() const
{
    return primaryKeyOrUniqueIndex_;
}

void QueryColumnInfo::setPrimaryKeyOrUniqueIndex(const std::string& value)
{
    primaryKeyOrUniqueIndex_ = value;
    primaryKeyOrUniqueIndexIsSet_ = true;
}

bool QueryColumnInfo::primaryKeyOrUniqueIndexIsSet() const
{
    return primaryKeyOrUniqueIndexIsSet_;
}

void QueryColumnInfo::unsetprimaryKeyOrUniqueIndex()
{
    primaryKeyOrUniqueIndexIsSet_ = false;
}

std::string QueryColumnInfo::getColumnMappedName() const
{
    return columnMappedName_;
}

void QueryColumnInfo::setColumnMappedName(const std::string& value)
{
    columnMappedName_ = value;
    columnMappedNameIsSet_ = true;
}

bool QueryColumnInfo::columnMappedNameIsSet() const
{
    return columnMappedNameIsSet_;
}

void QueryColumnInfo::unsetcolumnMappedName()
{
    columnMappedNameIsSet_ = false;
}

bool QueryColumnInfo::isIsFiltered() const
{
    return isFiltered_;
}

void QueryColumnInfo::setIsFiltered(bool value)
{
    isFiltered_ = value;
    isFilteredIsSet_ = true;
}

bool QueryColumnInfo::isFilteredIsSet() const
{
    return isFilteredIsSet_;
}

void QueryColumnInfo::unsetisFiltered()
{
    isFilteredIsSet_ = false;
}

bool QueryColumnInfo::isIsPartitionKey() const
{
    return isPartitionKey_;
}

void QueryColumnInfo::setIsPartitionKey(bool value)
{
    isPartitionKey_ = value;
    isPartitionKeyIsSet_ = true;
}

bool QueryColumnInfo::isPartitionKeyIsSet() const
{
    return isPartitionKeyIsSet_;
}

void QueryColumnInfo::unsetisPartitionKey()
{
    isPartitionKeyIsSet_ = false;
}

}
}
}
}
}


