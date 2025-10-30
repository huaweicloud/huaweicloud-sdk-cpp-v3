

#include "huaweicloud/live/v1/model/ModifyWatermarkRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyWatermarkRule::ModifyWatermarkRule()
{
    ruleName_ = "";
    ruleNameIsSet_ = false;
    locationIsSet_ = false;
}

ModifyWatermarkRule::~ModifyWatermarkRule() = default;

void ModifyWatermarkRule::validate()
{
}

web::json::value ModifyWatermarkRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }

    return val;
}
bool ModifyWatermarkRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            WatermarkLocation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    return ok;
}


std::string ModifyWatermarkRule::getRuleName() const
{
    return ruleName_;
}

void ModifyWatermarkRule::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool ModifyWatermarkRule::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void ModifyWatermarkRule::unsetruleName()
{
    ruleNameIsSet_ = false;
}

WatermarkLocation ModifyWatermarkRule::getLocation() const
{
    return location_;
}

void ModifyWatermarkRule::setLocation(const WatermarkLocation& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool ModifyWatermarkRule::locationIsSet() const
{
    return locationIsSet_;
}

void ModifyWatermarkRule::unsetlocation()
{
    locationIsSet_ = false;
}

}
}
}
}
}


