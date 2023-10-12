

#include "huaweicloud/dds/v3/model/DiffDetails.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DiffDetails::DiffDetails()
{
    parameterName_ = "";
    parameterNameIsSet_ = false;
    sourceValue_ = "";
    sourceValueIsSet_ = false;
    targetValue_ = "";
    targetValueIsSet_ = false;
}

DiffDetails::~DiffDetails() = default;

void DiffDetails::validate()
{
}

web::json::value DiffDetails::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parameterNameIsSet_) {
        val[utility::conversions::to_string_t("parameter_name")] = ModelBase::toJson(parameterName_);
    }
    if(sourceValueIsSet_) {
        val[utility::conversions::to_string_t("source_value")] = ModelBase::toJson(sourceValue_);
    }
    if(targetValueIsSet_) {
        val[utility::conversions::to_string_t("target_value")] = ModelBase::toJson(targetValue_);
    }

    return val;
}
bool DiffDetails::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parameter_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetValue(refVal);
        }
    }
    return ok;
}


std::string DiffDetails::getParameterName() const
{
    return parameterName_;
}

void DiffDetails::setParameterName(const std::string& value)
{
    parameterName_ = value;
    parameterNameIsSet_ = true;
}

bool DiffDetails::parameterNameIsSet() const
{
    return parameterNameIsSet_;
}

void DiffDetails::unsetparameterName()
{
    parameterNameIsSet_ = false;
}

std::string DiffDetails::getSourceValue() const
{
    return sourceValue_;
}

void DiffDetails::setSourceValue(const std::string& value)
{
    sourceValue_ = value;
    sourceValueIsSet_ = true;
}

bool DiffDetails::sourceValueIsSet() const
{
    return sourceValueIsSet_;
}

void DiffDetails::unsetsourceValue()
{
    sourceValueIsSet_ = false;
}

std::string DiffDetails::getTargetValue() const
{
    return targetValue_;
}

void DiffDetails::setTargetValue(const std::string& value)
{
    targetValue_ = value;
    targetValueIsSet_ = true;
}

bool DiffDetails::targetValueIsSet() const
{
    return targetValueIsSet_;
}

void DiffDetails::unsettargetValue()
{
    targetValueIsSet_ = false;
}

}
}
}
}
}


