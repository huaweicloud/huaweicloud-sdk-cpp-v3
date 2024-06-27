

#include "huaweicloud/gaussdb/v3/model/ChDatabaseParameterInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChDatabaseParameterInfo::ChDatabaseParameterInfo()
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

ChDatabaseParameterInfo::~ChDatabaseParameterInfo() = default;

void ChDatabaseParameterInfo::validate()
{
}

web::json::value ChDatabaseParameterInfo::toJson() const
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
bool ChDatabaseParameterInfo::fromJson(const web::json::value& val)
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


std::string ChDatabaseParameterInfo::getParamName() const
{
    return paramName_;
}

void ChDatabaseParameterInfo::setParamName(const std::string& value)
{
    paramName_ = value;
    paramNameIsSet_ = true;
}

bool ChDatabaseParameterInfo::paramNameIsSet() const
{
    return paramNameIsSet_;
}

void ChDatabaseParameterInfo::unsetparamName()
{
    paramNameIsSet_ = false;
}

std::string ChDatabaseParameterInfo::getDataType() const
{
    return dataType_;
}

void ChDatabaseParameterInfo::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool ChDatabaseParameterInfo::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void ChDatabaseParameterInfo::unsetdataType()
{
    dataTypeIsSet_ = false;
}

std::string ChDatabaseParameterInfo::getDefaultValue() const
{
    return defaultValue_;
}

void ChDatabaseParameterInfo::setDefaultValue(const std::string& value)
{
    defaultValue_ = value;
    defaultValueIsSet_ = true;
}

bool ChDatabaseParameterInfo::defaultValueIsSet() const
{
    return defaultValueIsSet_;
}

void ChDatabaseParameterInfo::unsetdefaultValue()
{
    defaultValueIsSet_ = false;
}

std::string ChDatabaseParameterInfo::getValueRange() const
{
    return valueRange_;
}

void ChDatabaseParameterInfo::setValueRange(const std::string& value)
{
    valueRange_ = value;
    valueRangeIsSet_ = true;
}

bool ChDatabaseParameterInfo::valueRangeIsSet() const
{
    return valueRangeIsSet_;
}

void ChDatabaseParameterInfo::unsetvalueRange()
{
    valueRangeIsSet_ = false;
}

std::string ChDatabaseParameterInfo::getDescription() const
{
    return description_;
}

void ChDatabaseParameterInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ChDatabaseParameterInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ChDatabaseParameterInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


