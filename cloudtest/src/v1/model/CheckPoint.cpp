

#include "huaweicloud/cloudtest/v1/model/CheckPoint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CheckPoint::CheckPoint()
{
    comparison_ = "";
    comparisonIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    functionArg_ = "";
    functionArgIsSet_ = false;
    functionType_ = "";
    functionTypeIsSet_ = false;
    property_ = "";
    propertyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

CheckPoint::~CheckPoint() = default;

void CheckPoint::validate()
{
}

web::json::value CheckPoint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(comparisonIsSet_) {
        val[utility::conversions::to_string_t("comparison")] = ModelBase::toJson(comparison_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(functionArgIsSet_) {
        val[utility::conversions::to_string_t("function_arg")] = ModelBase::toJson(functionArg_);
    }
    if(functionTypeIsSet_) {
        val[utility::conversions::to_string_t("function_type")] = ModelBase::toJson(functionType_);
    }
    if(propertyIsSet_) {
        val[utility::conversions::to_string_t("property")] = ModelBase::toJson(property_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool CheckPoint::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("comparison"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comparison"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComparison(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("function_arg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_arg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionArg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("function_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunctionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("property"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("property"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProperty(refVal);
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


std::string CheckPoint::getComparison() const
{
    return comparison_;
}

void CheckPoint::setComparison(const std::string& value)
{
    comparison_ = value;
    comparisonIsSet_ = true;
}

bool CheckPoint::comparisonIsSet() const
{
    return comparisonIsSet_;
}

void CheckPoint::unsetcomparison()
{
    comparisonIsSet_ = false;
}

std::string CheckPoint::getDescription() const
{
    return description_;
}

void CheckPoint::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CheckPoint::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CheckPoint::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CheckPoint::getFunctionArg() const
{
    return functionArg_;
}

void CheckPoint::setFunctionArg(const std::string& value)
{
    functionArg_ = value;
    functionArgIsSet_ = true;
}

bool CheckPoint::functionArgIsSet() const
{
    return functionArgIsSet_;
}

void CheckPoint::unsetfunctionArg()
{
    functionArgIsSet_ = false;
}

std::string CheckPoint::getFunctionType() const
{
    return functionType_;
}

void CheckPoint::setFunctionType(const std::string& value)
{
    functionType_ = value;
    functionTypeIsSet_ = true;
}

bool CheckPoint::functionTypeIsSet() const
{
    return functionTypeIsSet_;
}

void CheckPoint::unsetfunctionType()
{
    functionTypeIsSet_ = false;
}

std::string CheckPoint::getProperty() const
{
    return property_;
}

void CheckPoint::setProperty(const std::string& value)
{
    property_ = value;
    propertyIsSet_ = true;
}

bool CheckPoint::propertyIsSet() const
{
    return propertyIsSet_;
}

void CheckPoint::unsetproperty()
{
    propertyIsSet_ = false;
}

std::string CheckPoint::getValue() const
{
    return value_;
}

void CheckPoint::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CheckPoint::valueIsSet() const
{
    return valueIsSet_;
}

void CheckPoint::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


