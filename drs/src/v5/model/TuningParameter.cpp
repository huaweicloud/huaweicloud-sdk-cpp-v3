

#include "huaweicloud/drs/v5/model/TuningParameter.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




TuningParameter::TuningParameter()
{
    paramName_ = "";
    paramNameIsSet_ = false;
    paramValue_ = "";
    paramValueIsSet_ = false;
    availability_ = false;
    availabilityIsSet_ = false;
}

TuningParameter::~TuningParameter() = default;

void TuningParameter::validate()
{
}

web::json::value TuningParameter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramNameIsSet_) {
        val[utility::conversions::to_string_t("param_name")] = ModelBase::toJson(paramName_);
    }
    if(paramValueIsSet_) {
        val[utility::conversions::to_string_t("param_value")] = ModelBase::toJson(paramValue_);
    }
    if(availabilityIsSet_) {
        val[utility::conversions::to_string_t("availability")] = ModelBase::toJson(availability_);
    }

    return val;
}

bool TuningParameter::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("param_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParamValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailability(refVal);
        }
    }
    return ok;
}

std::string TuningParameter::getParamName() const
{
    return paramName_;
}

void TuningParameter::setParamName(const std::string& value)
{
    paramName_ = value;
    paramNameIsSet_ = true;
}

bool TuningParameter::paramNameIsSet() const
{
    return paramNameIsSet_;
}

void TuningParameter::unsetparamName()
{
    paramNameIsSet_ = false;
}

std::string TuningParameter::getParamValue() const
{
    return paramValue_;
}

void TuningParameter::setParamValue(const std::string& value)
{
    paramValue_ = value;
    paramValueIsSet_ = true;
}

bool TuningParameter::paramValueIsSet() const
{
    return paramValueIsSet_;
}

void TuningParameter::unsetparamValue()
{
    paramValueIsSet_ = false;
}

bool TuningParameter::isAvailability() const
{
    return availability_;
}

void TuningParameter::setAvailability(bool value)
{
    availability_ = value;
    availabilityIsSet_ = true;
}

bool TuningParameter::availabilityIsSet() const
{
    return availabilityIsSet_;
}

void TuningParameter::unsetavailability()
{
    availabilityIsSet_ = false;
}

}
}
}
}
}


