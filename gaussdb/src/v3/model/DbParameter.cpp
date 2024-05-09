

#include "huaweicloud/gaussdb/v3/model/DbParameter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DbParameter::DbParameter()
{
    paramName_ = "";
    paramNameIsSet_ = false;
    dataType_ = "";
    dataTypeIsSet_ = false;
    defaultValue_ = "";
    defaultValueIsSet_ = false;
    valueRange_ = "";
    valueRangeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

DbParameter::~DbParameter() = default;

void DbParameter::validate()
{
}

web::json::value DbParameter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramNameIsSet_) {
        val[utility::conversions::to_string_t("param_name")] = ModelBase::toJson(paramName_);
    }
    if(dataTypeIsSet_) {
        val[utility::conversions::to_string_t("data_type")] = ModelBase::toJson(dataType_);
    }
    if(defaultValueIsSet_) {
        val[utility::conversions::to_string_t("default_value")] = ModelBase::toJson(defaultValue_);
    }
    if(valueRangeIsSet_) {
        val[utility::conversions::to_string_t("value_range")] = ModelBase::toJson(valueRange_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool DbParameter::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("param_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("default_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("default_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value_range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValueRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    return ok;
}


std::string DbParameter::getParamName() const
{
    return paramName_;
}

void DbParameter::setParamName(const std::string& value)
{
    paramName_ = value;
    paramNameIsSet_ = true;
}

bool DbParameter::paramNameIsSet() const
{
    return paramNameIsSet_;
}

void DbParameter::unsetparamName()
{
    paramNameIsSet_ = false;
}

std::string DbParameter::getDataType() const
{
    return dataType_;
}

void DbParameter::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool DbParameter::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void DbParameter::unsetdataType()
{
    dataTypeIsSet_ = false;
}

std::string DbParameter::getDefaultValue() const
{
    return defaultValue_;
}

void DbParameter::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool DbParameter::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void DbParameter::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::string DbParameter::getValueRange() const
{
    return valueRange_;
}

void DbParameter::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool DbParameter::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void DbParameter::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

std::string DbParameter::getDescription() const
{
    return description_;
}

void DbParameter::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DbParameter::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DbParameter::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


