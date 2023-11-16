

#include "huaweicloud/codeartsbuild/v3/model/CreateBuildJobParameterParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateBuildJobParameterParam::CreateBuildJobParameterParam()
{
    name_ = "";
    nameIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    limitsIsSet_ = false;
}

CreateBuildJobParameterParam::~CreateBuildJobParameterParam() = default;

void CreateBuildJobParameterParam::validate()
{
}

web::json::value CreateBuildJobParameterParam::toJson() const
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
bool CreateBuildJobParameterParam::fromJson(const web::json::value& val)
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


std::string CreateBuildJobParameterParam::getName() const
{
    return name_;
}

void CreateBuildJobParameterParam::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateBuildJobParameterParam::nameIsSet() const
{
    return nameIsSet_;
}

void CreateBuildJobParameterParam::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateBuildJobParameterParam::getValue() const
{
    return value_;
}

void CreateBuildJobParameterParam::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CreateBuildJobParameterParam::valueIsSet() const
{
    return valueIsSet_;
}

void CreateBuildJobParameterParam::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<LimitsParam>& CreateBuildJobParameterParam::getLimits()
{
    return limits_;
}

void CreateBuildJobParameterParam::setLimits(const std::vector<LimitsParam>& value)
{
    limits_ = value;
    limitsIsSet_ = true;
}

bool CreateBuildJobParameterParam::limitsIsSet() const
{
    return limitsIsSet_;
}

void CreateBuildJobParameterParam::unsetlimits()
{
    limitsIsSet_ = false;
}

}
}
}
}
}


