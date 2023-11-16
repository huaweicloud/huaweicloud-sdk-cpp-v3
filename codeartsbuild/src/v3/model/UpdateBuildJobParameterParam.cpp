

#include "huaweicloud/codeartsbuild/v3/model/UpdateBuildJobParameterParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




UpdateBuildJobParameterParam::UpdateBuildJobParameterParam()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    limitsIsSet_ = false;
}

UpdateBuildJobParameterParam::~UpdateBuildJobParameterParam() = default;

void UpdateBuildJobParameterParam::validate()
{
}

web::json::value UpdateBuildJobParameterParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(limitsIsSet_) {
        val[utility::conversions::to_string_t("limits")] = ModelBase::toJson(limits_);
    }

    return val;
}
bool UpdateBuildJobParameterParam::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limits"));
        if(!fieldValue.is_null())
        {
            std::vector<LimitsParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimits(refVal);
        }
    }
    return ok;
}


std::string UpdateBuildJobParameterParam::getName() const
{
    return name_;
}

void UpdateBuildJobParameterParam::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateBuildJobParameterParam::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateBuildJobParameterParam::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateBuildJobParameterParam::getValue() const
{
    return value_;
}

void UpdateBuildJobParameterParam::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool UpdateBuildJobParameterParam::valueIsSet() const
{
    return valueIsSet_;
}

void UpdateBuildJobParameterParam::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<LimitsParam>& UpdateBuildJobParameterParam::getLimits()
{
    return limits_;
}

void UpdateBuildJobParameterParam::setLimits(const std::vector<LimitsParam>& value)
{
    limits_ = value;
    limitsIsSet_ = true;
}

bool UpdateBuildJobParameterParam::limitsIsSet() const
{
    return limitsIsSet_;
}

void UpdateBuildJobParameterParam::unsetlimits()
{
    limitsIsSet_ = false;
}

}
}
}
}
}


