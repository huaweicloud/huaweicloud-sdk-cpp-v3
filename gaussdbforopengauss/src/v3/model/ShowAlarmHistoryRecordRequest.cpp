

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowAlarmHistoryRecordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowAlarmHistoryRecordRequest::ShowAlarmHistoryRecordRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    level_ = 0;
    levelIsSet_ = false;
}

ShowAlarmHistoryRecordRequest::~ShowAlarmHistoryRecordRequest() = default;

void ShowAlarmHistoryRecordRequest::validate()
{
}

web::json::value ShowAlarmHistoryRecordRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }

    return val;
}
bool ShowAlarmHistoryRecordRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    return ok;
}


std::string ShowAlarmHistoryRecordRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAlarmHistoryRecordRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAlarmHistoryRecordRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAlarmHistoryRecordRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowAlarmHistoryRecordRequest::getStartTime() const
{
    return startTime_;
}

void ShowAlarmHistoryRecordRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowAlarmHistoryRecordRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowAlarmHistoryRecordRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t ShowAlarmHistoryRecordRequest::getOffset() const
{
    return offset_;
}

void ShowAlarmHistoryRecordRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowAlarmHistoryRecordRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowAlarmHistoryRecordRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowAlarmHistoryRecordRequest::getLimit() const
{
    return limit_;
}

void ShowAlarmHistoryRecordRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowAlarmHistoryRecordRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowAlarmHistoryRecordRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ShowAlarmHistoryRecordRequest::getLevel() const
{
    return level_;
}

void ShowAlarmHistoryRecordRequest::setLevel(int32_t value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ShowAlarmHistoryRecordRequest::levelIsSet() const
{
    return levelIsSet_;
}

void ShowAlarmHistoryRecordRequest::unsetlevel()
{
    levelIsSet_ = false;
}

}
}
}
}
}


