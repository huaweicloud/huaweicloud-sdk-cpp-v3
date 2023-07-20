

#include "huaweicloud/gaussdbfornosql/v3/model/DifferentDetails.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




DifferentDetails::DifferentDetails()
{
    parameterName_ = "";
    parameterNameIsSet_ = false;
    sourceValue_ = "";
    sourceValueIsSet_ = false;
    targetValue_ = "";
    targetValueIsSet_ = false;
}

DifferentDetails::~DifferentDetails() = default;

void DifferentDetails::validate()
{
}

web::json::value DifferentDetails::toJson() const
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

bool DifferentDetails::fromJson(const web::json::value& val)
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

std::string DifferentDetails::getParameterName() const
{
    return parameterName_;
}

void DifferentDetails::setParameterName(const std::string& value)
{
    parameterName_ = value;
    parameterNameIsSet_ = true;
}

bool DifferentDetails::parameterNameIsSet() const
{
    return parameterNameIsSet_;
}

void DifferentDetails::unsetparameterName()
{
    parameterNameIsSet_ = false;
}

std::string DifferentDetails::getSourceValue() const
{
    return sourceValue_;
}

void DifferentDetails::setSourceValue(const std::string& value)
{
    sourceValue_ = value;
    sourceValueIsSet_ = true;
}

bool DifferentDetails::sourceValueIsSet() const
{
    return sourceValueIsSet_;
}

void DifferentDetails::unsetsourceValue()
{
    sourceValueIsSet_ = false;
}

std::string DifferentDetails::getTargetValue() const
{
    return targetValue_;
}

void DifferentDetails::setTargetValue(const std::string& value)
{
    targetValue_ = value;
    targetValueIsSet_ = true;
}

bool DifferentDetails::targetValueIsSet() const
{
    return targetValueIsSet_;
}

void DifferentDetails::unsettargetValue()
{
    targetValueIsSet_ = false;
}

}
}
}
}
}


