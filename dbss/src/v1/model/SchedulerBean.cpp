

#include "huaweicloud/dbss/v1/model/SchedulerBean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SchedulerBean::SchedulerBean()
{
    dbIds_ = "";
    dbIdsIsSet_ = false;
    format_ = "";
    formatIsSet_ = false;
    frequency_ = "";
    frequencyIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    notice_ = "";
    noticeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
}

SchedulerBean::~SchedulerBean() = default;

void SchedulerBean::validate()
{
}

web::json::value SchedulerBean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbIdsIsSet_) {
        val[utility::conversions::to_string_t("db_ids")] = ModelBase::toJson(dbIds_);
    }
    if(formatIsSet_) {
        val[utility::conversions::to_string_t("format")] = ModelBase::toJson(format_);
    }
    if(frequencyIsSet_) {
        val[utility::conversions::to_string_t("frequency")] = ModelBase::toJson(frequency_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(noticeIsSet_) {
        val[utility::conversions::to_string_t("notice")] = ModelBase::toJson(notice_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }

    return val;
}
bool SchedulerBean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("format"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("format"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frequency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frequency"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrequency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notice"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notice"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotice(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    return ok;
}


std::string SchedulerBean::getDbIds() const
{
    return dbIds_;
}

void SchedulerBean::setDbIds(const std::string& value)
{
    dbIds_ = value;
    dbIdsIsSet_ = true;
}

bool SchedulerBean::dbIdsIsSet() const
{
    return dbIdsIsSet_;
}

void SchedulerBean::unsetdbIds()
{
    dbIdsIsSet_ = false;
}

std::string SchedulerBean::getFormat() const
{
    return format_;
}

void SchedulerBean::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool SchedulerBean::formatIsSet() const
{
    return formatIsSet_;
}

void SchedulerBean::unsetformat()
{
    formatIsSet_ = false;
}

std::string SchedulerBean::getFrequency() const
{
    return frequency_;
}

void SchedulerBean::setFrequency(const std::string& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool SchedulerBean::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void SchedulerBean::unsetfrequency()
{
    frequencyIsSet_ = false;
}

std::string SchedulerBean::getId() const
{
    return id_;
}

void SchedulerBean::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SchedulerBean::idIsSet() const
{
    return idIsSet_;
}

void SchedulerBean::unsetid()
{
    idIsSet_ = false;
}

std::string SchedulerBean::getMode() const
{
    return mode_;
}

void SchedulerBean::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool SchedulerBean::modeIsSet() const
{
    return modeIsSet_;
}

void SchedulerBean::unsetmode()
{
    modeIsSet_ = false;
}

std::string SchedulerBean::getNotice() const
{
    return notice_;
}

void SchedulerBean::setNotice(const std::string& value)
{
    notice_ = value;
    noticeIsSet_ = true;
}

bool SchedulerBean::noticeIsSet() const
{
    return noticeIsSet_;
}

void SchedulerBean::unsetnotice()
{
    noticeIsSet_ = false;
}

std::string SchedulerBean::getStartTime() const
{
    return startTime_;
}

void SchedulerBean::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SchedulerBean::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SchedulerBean::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string SchedulerBean::getStatus() const
{
    return status_;
}

void SchedulerBean::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SchedulerBean::statusIsSet() const
{
    return statusIsSet_;
}

void SchedulerBean::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SchedulerBean::getTopicUrn() const
{
    return topicUrn_;
}

void SchedulerBean::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool SchedulerBean::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void SchedulerBean::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

}
}
}
}
}


