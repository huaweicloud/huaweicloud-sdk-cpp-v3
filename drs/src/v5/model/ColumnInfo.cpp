

#include "huaweicloud/drs/v5/model/ColumnInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ColumnInfo::ColumnInfo()
{
    columnName_ = "";
    columnNameIsSet_ = false;
    columnType_ = "";
    columnTypeIsSet_ = false;
    keyType_ = "";
    keyTypeIsSet_ = false;
    columnMappedName_ = "";
    columnMappedNameIsSet_ = false;
    status_ = false;
    statusIsSet_ = false;
    partition_ = false;
    partitionIsSet_ = false;
}

ColumnInfo::~ColumnInfo() = default;

void ColumnInfo::validate()
{
}

web::json::value ColumnInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(columnNameIsSet_) {
        val[utility::conversions::to_string_t("column_name")] = ModelBase::toJson(columnName_);
    }
    if(columnTypeIsSet_) {
        val[utility::conversions::to_string_t("column_type")] = ModelBase::toJson(columnType_);
    }
    if(keyTypeIsSet_) {
        val[utility::conversions::to_string_t("key_type")] = ModelBase::toJson(keyType_);
    }
    if(columnMappedNameIsSet_) {
        val[utility::conversions::to_string_t("column_mapped_name")] = ModelBase::toJson(columnMappedName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(partitionIsSet_) {
        val[utility::conversions::to_string_t("partition")] = ModelBase::toJson(partition_);
    }

    return val;
}
bool ColumnInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partition"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartition(refVal);
        }
    }
    return ok;
}


std::string ColumnInfo::getColumnName() const
{
    return columnName_;
}

void ColumnInfo::setColumnName(const std::string& value)
{
    columnName_ = value;
    columnNameIsSet_ = true;
}

bool ColumnInfo::columnNameIsSet() const
{
    return columnNameIsSet_;
}

void ColumnInfo::unsetcolumnName()
{
    columnNameIsSet_ = false;
}

std::string ColumnInfo::getColumnType() const
{
    return columnType_;
}

void ColumnInfo::setColumnType(const std::string& value)
{
    columnType_ = value;
    columnTypeIsSet_ = true;
}

bool ColumnInfo::columnTypeIsSet() const
{
    return columnTypeIsSet_;
}

void ColumnInfo::unsetcolumnType()
{
    columnTypeIsSet_ = false;
}

std::string ColumnInfo::getKeyType() const
{
    return keyType_;
}

void ColumnInfo::setKeyType(const std::string& value)
{
    keyType_ = value;
    keyTypeIsSet_ = true;
}

bool ColumnInfo::keyTypeIsSet() const
{
    return keyTypeIsSet_;
}

void ColumnInfo::unsetkeyType()
{
    keyTypeIsSet_ = false;
}

std::string ColumnInfo::getColumnMappedName() const
{
    return columnMappedName_;
}

void ColumnInfo::setColumnMappedName(const std::string& value)
{
    columnMappedName_ = value;
    columnMappedNameIsSet_ = true;
}

bool ColumnInfo::columnMappedNameIsSet() const
{
    return columnMappedNameIsSet_;
}

void ColumnInfo::unsetcolumnMappedName()
{
    columnMappedNameIsSet_ = false;
}

bool ColumnInfo::isStatus() const
{
    return status_;
}

void ColumnInfo::setStatus(bool value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ColumnInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ColumnInfo::unsetstatus()
{
    statusIsSet_ = false;
}

bool ColumnInfo::isPartition() const
{
    return partition_;
}

void ColumnInfo::setPartition(bool value)
{
    partition_ = value;
    partitionIsSet_ = true;
}

bool ColumnInfo::partitionIsSet() const
{
    return partitionIsSet_;
}

void ColumnInfo::unsetpartition()
{
    partitionIsSet_ = false;
}

}
}
}
}
}


