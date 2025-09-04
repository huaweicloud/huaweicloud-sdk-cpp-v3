

#include "huaweicloud/gaussdb/v3/model/TableMetaInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




TableMetaInfo::TableMetaInfo()
{
    columnType_ = "";
    columnTypeIsSet_ = false;
    extra_ = "";
    extraIsSet_ = false;
    isNullable_ = "";
    isNullableIsSet_ = false;
    columnDefault_ = "";
    columnDefaultIsSet_ = false;
    columnKey_ = "";
    columnKeyIsSet_ = false;
    columnName_ = "";
    columnNameIsSet_ = false;
}

TableMetaInfo::~TableMetaInfo() = default;

void TableMetaInfo::validate()
{
}

web::json::value TableMetaInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(columnTypeIsSet_) {
        val[utility::conversions::to_string_t("column_type")] = ModelBase::toJson(columnType_);
    }
    if(extraIsSet_) {
        val[utility::conversions::to_string_t("extra")] = ModelBase::toJson(extra_);
    }
    if(isNullableIsSet_) {
        val[utility::conversions::to_string_t("is_nullable")] = ModelBase::toJson(isNullable_);
    }
    if(columnDefaultIsSet_) {
        val[utility::conversions::to_string_t("column_default")] = ModelBase::toJson(columnDefault_);
    }
    if(columnKeyIsSet_) {
        val[utility::conversions::to_string_t("column_key")] = ModelBase::toJson(columnKey_);
    }
    if(columnNameIsSet_) {
        val[utility::conversions::to_string_t("column_name")] = ModelBase::toJson(columnName_);
    }

    return val;
}
bool TableMetaInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("extra"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtra(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_nullable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_nullable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsNullable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("column_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_default"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("column_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnKey(refVal);
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
    return ok;
}


std::string TableMetaInfo::getColumnType() const
{
    return columnType_;
}

void TableMetaInfo::setColumnType(const std::string& value)
{
    columnType_ = value;
    columnTypeIsSet_ = true;
}

bool TableMetaInfo::columnTypeIsSet() const
{
    return columnTypeIsSet_;
}

void TableMetaInfo::unsetcolumnType()
{
    columnTypeIsSet_ = false;
}

std::string TableMetaInfo::getExtra() const
{
    return extra_;
}

void TableMetaInfo::setExtra(const std::string& value)
{
    extra_ = value;
    extraIsSet_ = true;
}

bool TableMetaInfo::extraIsSet() const
{
    return extraIsSet_;
}

void TableMetaInfo::unsetextra()
{
    extraIsSet_ = false;
}

std::string TableMetaInfo::getIsNullable() const
{
    return isNullable_;
}

void TableMetaInfo::setIsNullable(const std::string& value)
{
    isNullable_ = value;
    isNullableIsSet_ = true;
}

bool TableMetaInfo::isNullableIsSet() const
{
    return isNullableIsSet_;
}

void TableMetaInfo::unsetisNullable()
{
    isNullableIsSet_ = false;
}

std::string TableMetaInfo::getColumnDefault() const
{
    return columnDefault_;
}

void TableMetaInfo::setColumnDefault(const std::string& value)
{
    columnDefault_ = value;
    columnDefaultIsSet_ = true;
}

bool TableMetaInfo::columnDefaultIsSet() const
{
    return columnDefaultIsSet_;
}

void TableMetaInfo::unsetcolumnDefault()
{
    columnDefaultIsSet_ = false;
}

std::string TableMetaInfo::getColumnKey() const
{
    return columnKey_;
}

void TableMetaInfo::setColumnKey(const std::string& value)
{
    columnKey_ = value;
    columnKeyIsSet_ = true;
}

bool TableMetaInfo::columnKeyIsSet() const
{
    return columnKeyIsSet_;
}

void TableMetaInfo::unsetcolumnKey()
{
    columnKeyIsSet_ = false;
}

std::string TableMetaInfo::getColumnName() const
{
    return columnName_;
}

void TableMetaInfo::setColumnName(const std::string& value)
{
    columnName_ = value;
    columnNameIsSet_ = true;
}

bool TableMetaInfo::columnNameIsSet() const
{
    return columnNameIsSet_;
}

void TableMetaInfo::unsetcolumnName()
{
    columnNameIsSet_ = false;
}

}
}
}
}
}


