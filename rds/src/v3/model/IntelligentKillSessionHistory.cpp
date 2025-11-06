

#include "huaweicloud/rds/v3/model/IntelligentKillSessionHistory.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




IntelligentKillSessionHistory::IntelligentKillSessionHistory()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    downloadLink_ = "";
    downloadLinkIsSet_ = false;
}

IntelligentKillSessionHistory::~IntelligentKillSessionHistory() = default;

void IntelligentKillSessionHistory::validate()
{
}

web::json::value IntelligentKillSessionHistory::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(downloadLinkIsSet_) {
        val[utility::conversions::to_string_t("download_link")] = ModelBase::toJson(downloadLink_);
    }

    return val;
}
bool IntelligentKillSessionHistory::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("download_link"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("download_link"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDownloadLink(refVal);
        }
    }
    return ok;
}


std::string IntelligentKillSessionHistory::getTaskId() const
{
    return taskId_;
}

void IntelligentKillSessionHistory::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool IntelligentKillSessionHistory::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void IntelligentKillSessionHistory::unsettaskId()
{
    taskIdIsSet_ = false;
}

int64_t IntelligentKillSessionHistory::getStartTime() const
{
    return startTime_;
}

void IntelligentKillSessionHistory::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool IntelligentKillSessionHistory::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void IntelligentKillSessionHistory::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t IntelligentKillSessionHistory::getEndTime() const
{
    return endTime_;
}

void IntelligentKillSessionHistory::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool IntelligentKillSessionHistory::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void IntelligentKillSessionHistory::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string IntelligentKillSessionHistory::getDownloadLink() const
{
    return downloadLink_;
}

void IntelligentKillSessionHistory::setDownloadLink(const std::string& value)
{
    downloadLink_ = value;
    downloadLinkIsSet_ = true;
}

bool IntelligentKillSessionHistory::downloadLinkIsSet() const
{
    return downloadLinkIsSet_;
}

void IntelligentKillSessionHistory::unsetdownloadLink()
{
    downloadLinkIsSet_ = false;
}

}
}
}
}
}


