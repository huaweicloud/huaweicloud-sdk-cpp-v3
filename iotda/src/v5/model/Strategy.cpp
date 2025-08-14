

#include "huaweicloud/iotda/v5/model/Strategy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




Strategy::Strategy()
{
    trigger_ = "";
    triggerIsSet_ = false;
    eventValidTime_ = 0;
    eventValidTimeIsSet_ = false;
}

Strategy::~Strategy() = default;

void Strategy::validate()
{
}

web::json::value Strategy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(triggerIsSet_) {
        val[utility::conversions::to_string_t("trigger")] = ModelBase::toJson(trigger_);
    }
    if(eventValidTimeIsSet_) {
        val[utility::conversions::to_string_t("event_valid_time")] = ModelBase::toJson(eventValidTime_);
    }

    return val;
}
bool Strategy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trigger"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrigger(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_valid_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_valid_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventValidTime(refVal);
        }
    }
    return ok;
}


std::string Strategy::getTrigger() const
{
    return trigger_;
}

void Strategy::setTrigger(const std::string& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool Strategy::triggerIsSet() const
{
    return triggerIsSet_;
}

void Strategy::unsettrigger()
{
    triggerIsSet_ = false;
}

int32_t Strategy::getEventValidTime() const
{
    return eventValidTime_;
}

void Strategy::setEventValidTime(int32_t value)
{
    eventValidTime_ = value;
    eventValidTimeIsSet_ = true;
}

bool Strategy::eventValidTimeIsSet() const
{
    return eventValidTimeIsSet_;
}

void Strategy::unseteventValidTime()
{
    eventValidTimeIsSet_ = false;
}

}
}
}
}
}


