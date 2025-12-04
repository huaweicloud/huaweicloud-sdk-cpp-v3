

#include "huaweicloud/rds/v3/model/ParamGroupParameterDiff.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ParamGroupParameterDiff::ParamGroupParameterDiff()
{
    name_ = "";
    nameIsSet_ = false;
    sourceValue_ = "";
    sourceValueIsSet_ = false;
    targetValue_ = "";
    targetValueIsSet_ = false;
}

ParamGroupParameterDiff::~ParamGroupParameterDiff() = default;

void ParamGroupParameterDiff::validate()
{
}

web::json::value ParamGroupParameterDiff::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sourceValueIsSet_) {
        val[utility::conversions::to_string_t("source_value")] = ModelBase::toJson(sourceValue_);
    }
    if(targetValueIsSet_) {
        val[utility::conversions::to_string_t("target_value")] = ModelBase::toJson(targetValue_);
    }

    return val;
}
bool ParamGroupParameterDiff::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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


std::string ParamGroupParameterDiff::getName() const
{
    return name_;
}

void ParamGroupParameterDiff::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ParamGroupParameterDiff::nameIsSet() const
{
    return nameIsSet_;
}

void ParamGroupParameterDiff::unsetname()
{
    nameIsSet_ = false;
}

std::string ParamGroupParameterDiff::getSourceValue() const
{
    return sourceValue_;
}

void ParamGroupParameterDiff::setSourceValue(const std::string& value)
{
    sourceValue_ = value;
    sourceValueIsSet_ = true;
}

bool ParamGroupParameterDiff::sourceValueIsSet() const
{
    return sourceValueIsSet_;
}

void ParamGroupParameterDiff::unsetsourceValue()
{
    sourceValueIsSet_ = false;
}

std::string ParamGroupParameterDiff::getTargetValue() const
{
    return targetValue_;
}

void ParamGroupParameterDiff::setTargetValue(const std::string& value)
{
    targetValue_ = value;
    targetValueIsSet_ = true;
}

bool ParamGroupParameterDiff::targetValueIsSet() const
{
    return targetValueIsSet_;
}

void ParamGroupParameterDiff::unsettargetValue()
{
    targetValueIsSet_ = false;
}

}
}
}
}
}


