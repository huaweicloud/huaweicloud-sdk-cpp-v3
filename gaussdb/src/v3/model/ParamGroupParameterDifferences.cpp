

#include "huaweicloud/gaussdb/v3/model/ParamGroupParameterDifferences.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ParamGroupParameterDifferences::ParamGroupParameterDifferences()
{
    parameterName_ = "";
    parameterNameIsSet_ = false;
    sourceValue_ = "";
    sourceValueIsSet_ = false;
    targetValue_ = "";
    targetValueIsSet_ = false;
}

ParamGroupParameterDifferences::~ParamGroupParameterDifferences() = default;

void ParamGroupParameterDifferences::validate()
{
}

web::json::value ParamGroupParameterDifferences::toJson() const
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
bool ParamGroupParameterDifferences::fromJson(const web::json::value& val)
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


std::string ParamGroupParameterDifferences::getParameterName() const
{
    return parameterName_;
}

void ParamGroupParameterDifferences::setParameterName(const std::string& value)
{
    parameterName_ = value;
    parameterNameIsSet_ = true;
}

bool ParamGroupParameterDifferences::parameterNameIsSet() const
{
    return parameterNameIsSet_;
}

void ParamGroupParameterDifferences::unsetparameterName()
{
    parameterNameIsSet_ = false;
}

std::string ParamGroupParameterDifferences::getSourceValue() const
{
    return sourceValue_;
}

void ParamGroupParameterDifferences::setSourceValue(const std::string& value)
{
    sourceValue_ = value;
    sourceValueIsSet_ = true;
}

bool ParamGroupParameterDifferences::sourceValueIsSet() const
{
    return sourceValueIsSet_;
}

void ParamGroupParameterDifferences::unsetsourceValue()
{
    sourceValueIsSet_ = false;
}

std::string ParamGroupParameterDifferences::getTargetValue() const
{
    return targetValue_;
}

void ParamGroupParameterDifferences::setTargetValue(const std::string& value)
{
    targetValue_ = value;
    targetValueIsSet_ = true;
}

bool ParamGroupParameterDifferences::targetValueIsSet() const
{
    return targetValueIsSet_;
}

void ParamGroupParameterDifferences::unsettargetValue()
{
    targetValueIsSet_ = false;
}

}
}
}
}
}


