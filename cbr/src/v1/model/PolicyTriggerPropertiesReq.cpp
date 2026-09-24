

#include "huaweicloud/cbr/v1/model/PolicyTriggerPropertiesReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




PolicyTriggerPropertiesReq::PolicyTriggerPropertiesReq()
{
    patternIsSet_ = false;
    startWindowMinutes_ = 0;
    startWindowMinutesIsSet_ = false;
}

PolicyTriggerPropertiesReq::~PolicyTriggerPropertiesReq() = default;

void PolicyTriggerPropertiesReq::validate()
{
}

web::json::value PolicyTriggerPropertiesReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(patternIsSet_) {
        val[utility::conversions::to_string_t("pattern")] = ModelBase::toJson(pattern_);
    }
    if(startWindowMinutesIsSet_) {
        val[utility::conversions::to_string_t("start_window_minutes")] = ModelBase::toJson(startWindowMinutes_);
    }

    return val;
}
bool PolicyTriggerPropertiesReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_window_minutes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_window_minutes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartWindowMinutes(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& PolicyTriggerPropertiesReq::getPattern()
{
    return pattern_;
}

void PolicyTriggerPropertiesReq::setPattern(const std::vector<std::string>& value)
{
    pattern_ = value;
    patternIsSet_ = true;
}

bool PolicyTriggerPropertiesReq::patternIsSet() const
{
    return patternIsSet_;
}

void PolicyTriggerPropertiesReq::unsetpattern()
{
    patternIsSet_ = false;
}

int32_t PolicyTriggerPropertiesReq::getStartWindowMinutes() const
{
    return startWindowMinutes_;
}

void PolicyTriggerPropertiesReq::setStartWindowMinutes(int32_t value)
{
    startWindowMinutes_ = value;
    startWindowMinutesIsSet_ = true;
}

bool PolicyTriggerPropertiesReq::startWindowMinutesIsSet() const
{
    return startWindowMinutesIsSet_;
}

void PolicyTriggerPropertiesReq::unsetstartWindowMinutes()
{
    startWindowMinutesIsSet_ = false;
}

}
}
}
}
}


