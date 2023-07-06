

#include "huaweicloud/cbr/v1/model/PolicyTriggerPropertiesResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyTriggerPropertiesResp::PolicyTriggerPropertiesResp()
{
    patternIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
}

PolicyTriggerPropertiesResp::~PolicyTriggerPropertiesResp() = default;

void PolicyTriggerPropertiesResp::validate()
{
}

web::json::value PolicyTriggerPropertiesResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(patternIsSet_) {
        val[utility::conversions::to_string_t("pattern")] = ModelBase::toJson(pattern_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }

    return val;
}

bool PolicyTriggerPropertiesResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pattern"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPattern(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    return ok;
}

std::vector<std::string>& PolicyTriggerPropertiesResp::getPattern()
{
    return pattern_;
}

void PolicyTriggerPropertiesResp::setPattern(const std::vector<std::string>& value)
{
    pattern_ = value;
    patternIsSet_ = true;
}

bool PolicyTriggerPropertiesResp::patternIsSet() const
{
    return patternIsSet_;
}

void PolicyTriggerPropertiesResp::unsetpattern()
{
    patternIsSet_ = false;
}

std::string PolicyTriggerPropertiesResp::getStartTime() const
{
    return startTime_;
}

void PolicyTriggerPropertiesResp::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool PolicyTriggerPropertiesResp::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void PolicyTriggerPropertiesResp::unsetstartTime()
{
    startTimeIsSet_ = false;
}

}
}
}
}
}


