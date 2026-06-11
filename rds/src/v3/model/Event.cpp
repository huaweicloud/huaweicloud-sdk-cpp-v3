

#include "huaweicloud/rds/v3/model/Event.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Event::Event()
{
    sampleTime_ = "";
    sampleTimeIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    sessionStatus_ = "";
    sessionStatusIsSet_ = false;
    waitEventType_ = "";
    waitEventTypeIsSet_ = false;
    waitEventName_ = "";
    waitEventNameIsSet_ = false;
}

Event::~Event() = default;

void Event::validate()
{
}

web::json::value Event::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sampleTimeIsSet_) {
        val[utility::conversions::to_string_t("sample_time")] = ModelBase::toJson(sampleTime_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(sessionStatusIsSet_) {
        val[utility::conversions::to_string_t("session_status")] = ModelBase::toJson(sessionStatus_);
    }
    if(waitEventTypeIsSet_) {
        val[utility::conversions::to_string_t("wait_event_type")] = ModelBase::toJson(waitEventType_);
    }
    if(waitEventNameIsSet_) {
        val[utility::conversions::to_string_t("wait_event_name")] = ModelBase::toJson(waitEventName_);
    }

    return val;
}
bool Event::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sample_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sample_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSampleTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wait_event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_event_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wait_event_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_event_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitEventName(refVal);
        }
    }
    return ok;
}


std::string Event::getSampleTime() const
{
    return sampleTime_;
}

void Event::setSampleTime(const std::string& value)
{
    sampleTime_ = value;
    sampleTimeIsSet_ = true;
}

bool Event::sampleTimeIsSet() const
{
    return sampleTimeIsSet_;
}

void Event::unsetsampleTime()
{
    sampleTimeIsSet_ = false;
}

int32_t Event::getCount() const
{
    return count_;
}

void Event::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool Event::countIsSet() const
{
    return countIsSet_;
}

void Event::unsetcount()
{
    countIsSet_ = false;
}

std::string Event::getSessionStatus() const
{
    return sessionStatus_;
}

void Event::setSessionStatus(const std::string& value)
{
    sessionStatus_ = value;
    sessionStatusIsSet_ = true;
}

bool Event::sessionStatusIsSet() const
{
    return sessionStatusIsSet_;
}

void Event::unsetsessionStatus()
{
    sessionStatusIsSet_ = false;
}

std::string Event::getWaitEventType() const
{
    return waitEventType_;
}

void Event::setWaitEventType(const std::string& value)
{
    waitEventType_ = value;
    waitEventTypeIsSet_ = true;
}

bool Event::waitEventTypeIsSet() const
{
    return waitEventTypeIsSet_;
}

void Event::unsetwaitEventType()
{
    waitEventTypeIsSet_ = false;
}

std::string Event::getWaitEventName() const
{
    return waitEventName_;
}

void Event::setWaitEventName(const std::string& value)
{
    waitEventName_ = value;
    waitEventNameIsSet_ = true;
}

bool Event::waitEventNameIsSet() const
{
    return waitEventNameIsSet_;
}

void Event::unsetwaitEventName()
{
    waitEventNameIsSet_ = false;
}

}
}
}
}
}


