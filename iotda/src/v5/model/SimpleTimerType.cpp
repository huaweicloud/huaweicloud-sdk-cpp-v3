

#include "huaweicloud/iotda/v5/model/SimpleTimerType.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




SimpleTimerType::SimpleTimerType()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    repeatInterval_ = 0;
    repeatIntervalIsSet_ = false;
    repeatCount_ = 0;
    repeatCountIsSet_ = false;
}

SimpleTimerType::~SimpleTimerType() = default;

void SimpleTimerType::validate()
{
}

web::json::value SimpleTimerType::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(repeatIntervalIsSet_) {
        val[utility::conversions::to_string_t("repeat_interval")] = ModelBase::toJson(repeatInterval_);
    }
    if(repeatCountIsSet_) {
        val[utility::conversions::to_string_t("repeat_count")] = ModelBase::toJson(repeatCount_);
    }

    return val;
}
bool SimpleTimerType::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repeat_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repeat_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepeatInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repeat_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repeat_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepeatCount(refVal);
        }
    }
    return ok;
}


std::string SimpleTimerType::getStartTime() const
{
    return startTime_;
}

void SimpleTimerType::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SimpleTimerType::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SimpleTimerType::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t SimpleTimerType::getRepeatInterval() const
{
    return repeatInterval_;
}

void SimpleTimerType::setRepeatInterval(int32_t value)
{
    repeatInterval_ = value;
    repeatIntervalIsSet_ = true;
}

bool SimpleTimerType::repeatIntervalIsSet() const
{
    return repeatIntervalIsSet_;
}

void SimpleTimerType::unsetrepeatInterval()
{
    repeatIntervalIsSet_ = false;
}

int32_t SimpleTimerType::getRepeatCount() const
{
    return repeatCount_;
}

void SimpleTimerType::setRepeatCount(int32_t value)
{
    repeatCount_ = value;
    repeatCountIsSet_ = true;
}

bool SimpleTimerType::repeatCountIsSet() const
{
    return repeatCountIsSet_;
}

void SimpleTimerType::unsetrepeatCount()
{
    repeatCountIsSet_ = false;
}

}
}
}
}
}


