

#include "huaweicloud/meeting/v1/model/StatisticConferenceDataItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




StatisticConferenceDataItem::StatisticConferenceDataItem()
{
    time_ = "";
    timeIsSet_ = false;
    confCount_ = "";
    confCountIsSet_ = false;
    confDuration_ = "";
    confDurationIsSet_ = false;
    attendeeCount_ = "";
    attendeeCountIsSet_ = false;
    confConcurrentUsedCount_ = "";
    confConcurrentUsedCountIsSet_ = false;
    conf24hCount_ = "";
    conf24hCountIsSet_ = false;
    conf24hAttendeeCount_ = "";
    conf24hAttendeeCountIsSet_ = false;
}

StatisticConferenceDataItem::~StatisticConferenceDataItem() = default;

void StatisticConferenceDataItem::validate()
{
}

web::json::value StatisticConferenceDataItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(confCountIsSet_) {
        val[utility::conversions::to_string_t("confCount")] = ModelBase::toJson(confCount_);
    }
    if(confDurationIsSet_) {
        val[utility::conversions::to_string_t("confDuration")] = ModelBase::toJson(confDuration_);
    }
    if(attendeeCountIsSet_) {
        val[utility::conversions::to_string_t("attendeeCount")] = ModelBase::toJson(attendeeCount_);
    }
    if(confConcurrentUsedCountIsSet_) {
        val[utility::conversions::to_string_t("confConcurrentUsedCount")] = ModelBase::toJson(confConcurrentUsedCount_);
    }
    if(conf24hCountIsSet_) {
        val[utility::conversions::to_string_t("conf24hCount")] = ModelBase::toJson(conf24hCount_);
    }
    if(conf24hAttendeeCountIsSet_) {
        val[utility::conversions::to_string_t("conf24hAttendeeCount")] = ModelBase::toJson(conf24hAttendeeCount_);
    }

    return val;
}
bool StatisticConferenceDataItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confDuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confDuration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attendeeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attendeeCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttendeeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confConcurrentUsedCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confConcurrentUsedCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfConcurrentUsedCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conf24hCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conf24hCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConf24hCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conf24hAttendeeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conf24hAttendeeCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConf24hAttendeeCount(refVal);
        }
    }
    return ok;
}


std::string StatisticConferenceDataItem::getTime() const
{
    return time_;
}

void StatisticConferenceDataItem::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool StatisticConferenceDataItem::timeIsSet() const
{
    return timeIsSet_;
}

void StatisticConferenceDataItem::unsettime()
{
    timeIsSet_ = false;
}

std::string StatisticConferenceDataItem::getConfCount() const
{
    return confCount_;
}

void StatisticConferenceDataItem::setConfCount(const std::string& value)
{
    confCount_ = value;
    confCountIsSet_ = true;
}

bool StatisticConferenceDataItem::confCountIsSet() const
{
    return confCountIsSet_;
}

void StatisticConferenceDataItem::unsetconfCount()
{
    confCountIsSet_ = false;
}

std::string StatisticConferenceDataItem::getConfDuration() const
{
    return confDuration_;
}

void StatisticConferenceDataItem::setConfDuration(const std::string& value)
{
    confDuration_ = value;
    confDurationIsSet_ = true;
}

bool StatisticConferenceDataItem::confDurationIsSet() const
{
    return confDurationIsSet_;
}

void StatisticConferenceDataItem::unsetconfDuration()
{
    confDurationIsSet_ = false;
}

std::string StatisticConferenceDataItem::getAttendeeCount() const
{
    return attendeeCount_;
}

void StatisticConferenceDataItem::setAttendeeCount(const std::string& value)
{
    attendeeCount_ = value;
    attendeeCountIsSet_ = true;
}

bool StatisticConferenceDataItem::attendeeCountIsSet() const
{
    return attendeeCountIsSet_;
}

void StatisticConferenceDataItem::unsetattendeeCount()
{
    attendeeCountIsSet_ = false;
}

std::string StatisticConferenceDataItem::getConfConcurrentUsedCount() const
{
    return confConcurrentUsedCount_;
}

void StatisticConferenceDataItem::setConfConcurrentUsedCount(const std::string& value)
{
    confConcurrentUsedCount_ = value;
    confConcurrentUsedCountIsSet_ = true;
}

bool StatisticConferenceDataItem::confConcurrentUsedCountIsSet() const
{
    return confConcurrentUsedCountIsSet_;
}

void StatisticConferenceDataItem::unsetconfConcurrentUsedCount()
{
    confConcurrentUsedCountIsSet_ = false;
}

std::string StatisticConferenceDataItem::getConf24hCount() const
{
    return conf24hCount_;
}

void StatisticConferenceDataItem::setConf24hCount(const std::string& value)
{
    conf24hCount_ = value;
    conf24hCountIsSet_ = true;
}

bool StatisticConferenceDataItem::conf24hCountIsSet() const
{
    return conf24hCountIsSet_;
}

void StatisticConferenceDataItem::unsetconf24hCount()
{
    conf24hCountIsSet_ = false;
}

std::string StatisticConferenceDataItem::getConf24hAttendeeCount() const
{
    return conf24hAttendeeCount_;
}

void StatisticConferenceDataItem::setConf24hAttendeeCount(const std::string& value)
{
    conf24hAttendeeCount_ = value;
    conf24hAttendeeCountIsSet_ = true;
}

bool StatisticConferenceDataItem::conf24hAttendeeCountIsSet() const
{
    return conf24hAttendeeCountIsSet_;
}

void StatisticConferenceDataItem::unsetconf24hAttendeeCount()
{
    conf24hAttendeeCountIsSet_ = false;
}

}
}
}
}
}


