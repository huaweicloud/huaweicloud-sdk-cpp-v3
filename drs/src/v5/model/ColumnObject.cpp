

#include "huaweicloud/drs/v5/model/ColumnObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ColumnObject::ColumnObject()
{
    syncType_ = "";
    syncTypeIsSet_ = false;
    primaryKeyForDataFiltering_ = "";
    primaryKeyForDataFilteringIsSet_ = false;
    indexForDataFiltering_ = "";
    indexForDataFilteringIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    primaryKeyForColumnFiltering_ = "";
    primaryKeyForColumnFilteringIsSet_ = false;
    filtered_ = false;
    filteredIsSet_ = false;
    additional_ = false;
    additionalIsSet_ = false;
    operationType_ = "";
    operationTypeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

ColumnObject::~ColumnObject() = default;

void ColumnObject::validate()
{
}

web::json::value ColumnObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(syncTypeIsSet_) {
        val[utility::conversions::to_string_t("sync_type")] = ModelBase::toJson(syncType_);
    }
    if(primaryKeyForDataFilteringIsSet_) {
        val[utility::conversions::to_string_t("primary_key_for_data_filtering")] = ModelBase::toJson(primaryKeyForDataFiltering_);
    }
    if(indexForDataFilteringIsSet_) {
        val[utility::conversions::to_string_t("index_for_data_filtering")] = ModelBase::toJson(indexForDataFiltering_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(primaryKeyForColumnFilteringIsSet_) {
        val[utility::conversions::to_string_t("primary_key_for_column_filtering")] = ModelBase::toJson(primaryKeyForColumnFiltering_);
    }
    if(filteredIsSet_) {
        val[utility::conversions::to_string_t("filtered")] = ModelBase::toJson(filtered_);
    }
    if(additionalIsSet_) {
        val[utility::conversions::to_string_t("additional")] = ModelBase::toJson(additional_);
    }
    if(operationTypeIsSet_) {
        val[utility::conversions::to_string_t("operation_type")] = ModelBase::toJson(operationType_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ColumnObject::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("primary_key_for_data_filtering"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary_key_for_data_filtering"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryKeyForDataFiltering(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("index_for_data_filtering"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("index_for_data_filtering"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndexForDataFiltering(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("primary_key_for_column_filtering"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary_key_for_column_filtering"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryKeyForColumnFiltering(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("additional"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additional"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditional(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string ColumnObject::getSyncType() const
{
    return syncType_;
}

void ColumnObject::setSyncType(const std::string& value)
{
    syncType_ = value;
    syncTypeIsSet_ = true;
}

bool ColumnObject::syncTypeIsSet() const
{
    return syncTypeIsSet_;
}

void ColumnObject::unsetsyncType()
{
    syncTypeIsSet_ = false;
}

std::string ColumnObject::getPrimaryKeyForDataFiltering() const
{
    return primaryKeyForDataFiltering_;
}

void ColumnObject::setPrimaryKeyForDataFiltering(const std::string& value)
{
    primaryKeyForDataFiltering_ = value;
    primaryKeyForDataFilteringIsSet_ = true;
}

bool ColumnObject::primaryKeyForDataFilteringIsSet() const
{
    return primaryKeyForDataFilteringIsSet_;
}

void ColumnObject::unsetprimaryKeyForDataFiltering()
{
    primaryKeyForDataFilteringIsSet_ = false;
}

std::string ColumnObject::getIndexForDataFiltering() const
{
    return indexForDataFiltering_;
}

void ColumnObject::setIndexForDataFiltering(const std::string& value)
{
    indexForDataFiltering_ = value;
    indexForDataFilteringIsSet_ = true;
}

bool ColumnObject::indexForDataFilteringIsSet() const
{
    return indexForDataFilteringIsSet_;
}

void ColumnObject::unsetindexForDataFiltering()
{
    indexForDataFilteringIsSet_ = false;
}

std::string ColumnObject::getName() const
{
    return name_;
}

void ColumnObject::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ColumnObject::nameIsSet() const
{
    return nameIsSet_;
}

void ColumnObject::unsetname()
{
    nameIsSet_ = false;
}

std::string ColumnObject::getType() const
{
    return type_;
}

void ColumnObject::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ColumnObject::typeIsSet() const
{
    return typeIsSet_;
}

void ColumnObject::unsettype()
{
    typeIsSet_ = false;
}

std::string ColumnObject::getPrimaryKeyForColumnFiltering() const
{
    return primaryKeyForColumnFiltering_;
}

void ColumnObject::setPrimaryKeyForColumnFiltering(const std::string& value)
{
    primaryKeyForColumnFiltering_ = value;
    primaryKeyForColumnFilteringIsSet_ = true;
}

bool ColumnObject::primaryKeyForColumnFilteringIsSet() const
{
    return primaryKeyForColumnFilteringIsSet_;
}

void ColumnObject::unsetprimaryKeyForColumnFiltering()
{
    primaryKeyForColumnFilteringIsSet_ = false;
}

bool ColumnObject::isFiltered() const
{
    return filtered_;
}

void ColumnObject::setFiltered(bool value)
{
    filtered_ = value;
    filteredIsSet_ = true;
}

bool ColumnObject::filteredIsSet() const
{
    return filteredIsSet_;
}

void ColumnObject::unsetfiltered()
{
    filteredIsSet_ = false;
}

bool ColumnObject::isAdditional() const
{
    return additional_;
}

void ColumnObject::setAdditional(bool value)
{
    additional_ = value;
    additionalIsSet_ = true;
}

bool ColumnObject::additionalIsSet() const
{
    return additionalIsSet_;
}

void ColumnObject::unsetadditional()
{
    additionalIsSet_ = false;
}

std::string ColumnObject::getOperationType() const
{
    return operationType_;
}

void ColumnObject::setOperationType(const std::string& value)
{
    operationType_ = value;
    operationTypeIsSet_ = true;
}

bool ColumnObject::operationTypeIsSet() const
{
    return operationTypeIsSet_;
}

void ColumnObject::unsetoperationType()
{
    operationTypeIsSet_ = false;
}

std::string ColumnObject::getValue() const
{
    return value_;
}

void ColumnObject::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ColumnObject::valueIsSet() const
{
    return valueIsSet_;
}

void ColumnObject::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


