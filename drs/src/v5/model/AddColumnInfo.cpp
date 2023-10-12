

#include "huaweicloud/drs/v5/model/AddColumnInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




AddColumnInfo::AddColumnInfo()
{
    columnType_ = "";
    columnTypeIsSet_ = false;
    columnName_ = "";
    columnNameIsSet_ = false;
    columnValue_ = "";
    columnValueIsSet_ = false;
    dataType_ = "";
    dataTypeIsSet_ = false;
}

AddColumnInfo::~AddColumnInfo() = default;

void AddColumnInfo::validate()
{
}

web::json::value AddColumnInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(columnTypeIsSet_) {
        val[utility::conversions::to_string_t("column_type")] = ModelBase::toJson(columnType_);
    }
    if(columnNameIsSet_) {
        val[utility::conversions::to_string_t("column_name")] = ModelBase::toJson(columnName_);
    }
    if(columnValueIsSet_) {
        val[utility::conversions::to_string_t("column_value")] = ModelBase::toJson(columnValue_);
    }
    if(dataTypeIsSet_) {
        val[utility::conversions::to_string_t("data_type")] = ModelBase::toJson(dataType_);
    }

    return val;
}
bool AddColumnInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("column_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("column_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("column_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataType(refVal);
        }
    }
    return ok;
}


std::string AddColumnInfo::getColumnType() const
{
    return columnType_;
}

void AddColumnInfo::setColumnType(const std::string& value)
{
    columnType_ = value;
    columnTypeIsSet_ = true;
}

bool AddColumnInfo::columnTypeIsSet() const
{
    return columnTypeIsSet_;
}

void AddColumnInfo::unsetcolumnType()
{
    columnTypeIsSet_ = false;
}

std::string AddColumnInfo::getColumnName() const
{
    return columnName_;
}

void AddColumnInfo::setColumnName(const std::string& value)
{
    columnName_ = value;
    columnNameIsSet_ = true;
}

bool AddColumnInfo::columnNameIsSet() const
{
    return columnNameIsSet_;
}

void AddColumnInfo::unsetcolumnName()
{
    columnNameIsSet_ = false;
}

std::string AddColumnInfo::getColumnValue() const
{
    return columnValue_;
}

void AddColumnInfo::setColumnValue(const std::string& value)
{
    columnValue_ = value;
    columnValueIsSet_ = true;
}

bool AddColumnInfo::columnValueIsSet() const
{
    return columnValueIsSet_;
}

void AddColumnInfo::unsetcolumnValue()
{
    columnValueIsSet_ = false;
}

std::string AddColumnInfo::getDataType() const
{
    return dataType_;
}

void AddColumnInfo::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool AddColumnInfo::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void AddColumnInfo::unsetdataType()
{
    dataTypeIsSet_ = false;
}

}
}
}
}
}


