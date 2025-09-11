

#include "huaweicloud/dbss/v1/model/SchedulerConfigBase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SchedulerConfigBase::SchedulerConfigBase()
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

SchedulerConfigBase::~SchedulerConfigBase() = default;

void SchedulerConfigBase::validate()
{
}

web::json::value SchedulerConfigBase::toJson() const
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
bool SchedulerConfigBase::fromJson(const web::json::value& val)
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


std::string SchedulerConfigBase::getDbIds() const
{
    return dbIds_;
}

void SchedulerConfigBase::setDbIds(const std::string& value)
{
    dbIds_ = value;
    dbIdsIsSet_ = true;
}

bool SchedulerConfigBase::dbIdsIsSet() const
{
    return dbIdsIsSet_;
}

void SchedulerConfigBase::unsetdbIds()
{
    dbIdsIsSet_ = false;
}

std::string SchedulerConfigBase::getFormat() const
{
    return format_;
}

void SchedulerConfigBase::setFormat(const std::string& value)
{
    format_ = value;
    formatIsSet_ = true;
}

bool SchedulerConfigBase::formatIsSet() const
{
    return formatIsSet_;
}

void SchedulerConfigBase::unsetformat()
{
    formatIsSet_ = false;
}

std::string SchedulerConfigBase::getFrequency() const
{
    return frequency_;
}

void SchedulerConfigBase::setFrequency(const std::string& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool SchedulerConfigBase::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void SchedulerConfigBase::unsetfrequency()
{
    frequencyIsSet_ = false;
}

std::string SchedulerConfigBase::getId() const
{
    return id_;
}

void SchedulerConfigBase::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SchedulerConfigBase::idIsSet() const
{
    return idIsSet_;
}

void SchedulerConfigBase::unsetid()
{
    idIsSet_ = false;
}

std::string SchedulerConfigBase::getMode() const
{
    return mode_;
}

void SchedulerConfigBase::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool SchedulerConfigBase::modeIsSet() const
{
    return modeIsSet_;
}

void SchedulerConfigBase::unsetmode()
{
    modeIsSet_ = false;
}

std::string SchedulerConfigBase::getNotice() const
{
    return notice_;
}

void SchedulerConfigBase::setNotice(const std::string& value)
{
    notice_ = value;
    noticeIsSet_ = true;
}

bool SchedulerConfigBase::noticeIsSet() const
{
    return noticeIsSet_;
}

void SchedulerConfigBase::unsetnotice()
{
    noticeIsSet_ = false;
}

std::string SchedulerConfigBase::getStartTime() const
{
    return startTime_;
}

void SchedulerConfigBase::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SchedulerConfigBase::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SchedulerConfigBase::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string SchedulerConfigBase::getStatus() const
{
    return status_;
}

void SchedulerConfigBase::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SchedulerConfigBase::statusIsSet() const
{
    return statusIsSet_;
}

void SchedulerConfigBase::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SchedulerConfigBase::getTopicUrn() const
{
    return topicUrn_;
}

void SchedulerConfigBase::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool SchedulerConfigBase::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void SchedulerConfigBase::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

}
}
}
}
}


