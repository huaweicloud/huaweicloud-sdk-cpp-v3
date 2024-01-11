

#include "huaweicloud/drs/v5/model/ParameterInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ParameterInfo::ParameterInfo()
{
    parameterName_ = "";
    parameterNameIsSet_ = false;
    parameterValue_ = "";
    parameterValueIsSet_ = false;
}

ParameterInfo::~ParameterInfo() = default;

void ParameterInfo::validate()
{
}

web::json::value ParameterInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parameterNameIsSet_) {
        val[utility::conversions::to_string_t("parameter_name")] = ModelBase::toJson(parameterName_);
    }
    if(parameterValueIsSet_) {
        val[utility::conversions::to_string_t("parameter_value")] = ModelBase::toJson(parameterValue_);
    }

    return val;
}
bool ParameterInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parameter_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterValue(refVal);
        }
    }
    return ok;
}


std::string ParameterInfo::getParameterName() const
{
    return parameterName_;
}

void ParameterInfo::setParameterName(const std::string& value)
{
    parameterName_ = value;
    parameterNameIsSet_ = true;
}

bool ParameterInfo::parameterNameIsSet() const
{
    return parameterNameIsSet_;
}

void ParameterInfo::unsetparameterName()
{
    parameterNameIsSet_ = false;
}

std::string ParameterInfo::getParameterValue() const
{
    return parameterValue_;
}

void ParameterInfo::setParameterValue(const std::string& value)
{
    parameterValue_ = value;
    parameterValueIsSet_ = true;
}

bool ParameterInfo::parameterValueIsSet() const
{
    return parameterValueIsSet_;
}

void ParameterInfo::unsetparameterValue()
{
    parameterValueIsSet_ = false;
}

}
}
}
}
}


