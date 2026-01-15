

#include "huaweicloud/drs/v5/model/ShowReplayProgressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowReplayProgressResponse::ShowReplayProgressResponse()
{
    progress_ = 0L;
    progressIsSet_ = false;
    parseCount_ = 0L;
    parseCountIsSet_ = false;
    replayCount_ = 0L;
    replayCountIsSet_ = false;
    taskMode_ = "";
    taskModeIsSet_ = false;
    processTime_ = 0L;
    processTimeIsSet_ = false;
    transferStatus_ = "";
    transferStatusIsSet_ = false;
    maxTime_ = 0L;
    maxTimeIsSet_ = false;
    minTime_ = 0L;
    minTimeIsSet_ = false;
    nowTime_ = 0L;
    nowTimeIsSet_ = false;
    minExportTime_ = 0L;
    minExportTimeIsSet_ = false;
    maxExportTime_ = 0L;
    maxExportTimeIsSet_ = false;
    replaySqlNowListIsSet_ = false;
}

ShowReplayProgressResponse::~ShowReplayProgressResponse() = default;

void ShowReplayProgressResponse::validate()
{
}

web::json::value ShowReplayProgressResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(parseCountIsSet_) {
        val[utility::conversions::to_string_t("parse_count")] = ModelBase::toJson(parseCount_);
    }
    if(replayCountIsSet_) {
        val[utility::conversions::to_string_t("replay_count")] = ModelBase::toJson(replayCount_);
    }
    if(taskModeIsSet_) {
        val[utility::conversions::to_string_t("task_mode")] = ModelBase::toJson(taskMode_);
    }
    if(processTimeIsSet_) {
        val[utility::conversions::to_string_t("process_time")] = ModelBase::toJson(processTime_);
    }
    if(transferStatusIsSet_) {
        val[utility::conversions::to_string_t("transfer_status")] = ModelBase::toJson(transferStatus_);
    }
    if(maxTimeIsSet_) {
        val[utility::conversions::to_string_t("max_time")] = ModelBase::toJson(maxTime_);
    }
    if(minTimeIsSet_) {
        val[utility::conversions::to_string_t("min_time")] = ModelBase::toJson(minTime_);
    }
    if(nowTimeIsSet_) {
        val[utility::conversions::to_string_t("now_time")] = ModelBase::toJson(nowTime_);
    }
    if(minExportTimeIsSet_) {
        val[utility::conversions::to_string_t("min_export_time")] = ModelBase::toJson(minExportTime_);
    }
    if(maxExportTimeIsSet_) {
        val[utility::conversions::to_string_t("max_export_time")] = ModelBase::toJson(maxExportTime_);
    }
    if(replaySqlNowListIsSet_) {
        val[utility::conversions::to_string_t("replay_sql_now_list")] = ModelBase::toJson(replaySqlNowList_);
    }

    return val;
}
bool ShowReplayProgressResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parse_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parse_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParseCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replay_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replay_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplayCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transfer_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transfer_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransferStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("now_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("now_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNowTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("min_export_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("min_export_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMinExportTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_export_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_export_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxExportTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replay_sql_now_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replay_sql_now_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ReplaySqlNowInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplaySqlNowList(refVal);
        }
    }
    return ok;
}


int64_t ShowReplayProgressResponse::getProgress() const
{
    return progress_;
}

void ShowReplayProgressResponse::setProgress(int64_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool ShowReplayProgressResponse::progressIsSet() const
{
    return progressIsSet_;
}

void ShowReplayProgressResponse::unsetprogress()
{
    progressIsSet_ = false;
}

int64_t ShowReplayProgressResponse::getParseCount() const
{
    return parseCount_;
}

void ShowReplayProgressResponse::setParseCount(int64_t value)
{
    parseCount_ = value;
    parseCountIsSet_ = true;
}

bool ShowReplayProgressResponse::parseCountIsSet() const
{
    return parseCountIsSet_;
}

void ShowReplayProgressResponse::unsetparseCount()
{
    parseCountIsSet_ = false;
}

int64_t ShowReplayProgressResponse::getReplayCount() const
{
    return replayCount_;
}

void ShowReplayProgressResponse::setReplayCount(int64_t value)
{
    replayCount_ = value;
    replayCountIsSet_ = true;
}

bool ShowReplayProgressResponse::replayCountIsSet() const
{
    return replayCountIsSet_;
}

void ShowReplayProgressResponse::unsetreplayCount()
{
    replayCountIsSet_ = false;
}

std::string ShowReplayProgressResponse::getTaskMode() const
{
    return taskMode_;
}

void ShowReplayProgressResponse::setTaskMode(const std::string& value)
{
    taskMode_ = value;
    taskModeIsSet_ = true;
}

bool ShowReplayProgressResponse::taskModeIsSet() const
{
    return taskModeIsSet_;
}

void ShowReplayProgressResponse::unsettaskMode()
{
    taskModeIsSet_ = false;
}

int64_t ShowReplayProgressResponse::getProcessTime() const
{
    return processTime_;
}

void ShowReplayProgressResponse::setProcessTime(int64_t value)
{
    processTime_ = value;
    processTimeIsSet_ = true;
}

bool ShowReplayProgressResponse::processTimeIsSet() const
{
    return processTimeIsSet_;
}

void ShowReplayProgressResponse::unsetprocessTime()
{
    processTimeIsSet_ = false;
}

std::string ShowReplayProgressResponse::getTransferStatus() const
{
    return transferStatus_;
}

void ShowReplayProgressResponse::setTransferStatus(const std::string& value)
{
    transferStatus_ = value;
    transferStatusIsSet_ = true;
}

bool ShowReplayProgressResponse::transferStatusIsSet() const
{
    return transferStatusIsSet_;
}

void ShowReplayProgressResponse::unsettransferStatus()
{
    transferStatusIsSet_ = false;
}

int64_t ShowReplayProgressResponse::getMaxTime() const
{
    return maxTime_;
}

void ShowReplayProgressResponse::setMaxTime(int64_t value)
{
    maxTime_ = value;
    maxTimeIsSet_ = true;
}

bool ShowReplayProgressResponse::maxTimeIsSet() const
{
    return maxTimeIsSet_;
}

void ShowReplayProgressResponse::unsetmaxTime()
{
    maxTimeIsSet_ = false;
}

int64_t ShowReplayProgressResponse::getMinTime() const
{
    return minTime_;
}

void ShowReplayProgressResponse::setMinTime(int64_t value)
{
    minTime_ = value;
    minTimeIsSet_ = true;
}

bool ShowReplayProgressResponse::minTimeIsSet() const
{
    return minTimeIsSet_;
}

void ShowReplayProgressResponse::unsetminTime()
{
    minTimeIsSet_ = false;
}

int64_t ShowReplayProgressResponse::getNowTime() const
{
    return nowTime_;
}

void ShowReplayProgressResponse::setNowTime(int64_t value)
{
    nowTime_ = value;
    nowTimeIsSet_ = true;
}

bool ShowReplayProgressResponse::nowTimeIsSet() const
{
    return nowTimeIsSet_;
}

void ShowReplayProgressResponse::unsetnowTime()
{
    nowTimeIsSet_ = false;
}

int64_t ShowReplayProgressResponse::getMinExportTime() const
{
    return minExportTime_;
}

void ShowReplayProgressResponse::setMinExportTime(int64_t value)
{
    minExportTime_ = value;
    minExportTimeIsSet_ = true;
}

bool ShowReplayProgressResponse::minExportTimeIsSet() const
{
    return minExportTimeIsSet_;
}

void ShowReplayProgressResponse::unsetminExportTime()
{
    minExportTimeIsSet_ = false;
}

int64_t ShowReplayProgressResponse::getMaxExportTime() const
{
    return maxExportTime_;
}

void ShowReplayProgressResponse::setMaxExportTime(int64_t value)
{
    maxExportTime_ = value;
    maxExportTimeIsSet_ = true;
}

bool ShowReplayProgressResponse::maxExportTimeIsSet() const
{
    return maxExportTimeIsSet_;
}

void ShowReplayProgressResponse::unsetmaxExportTime()
{
    maxExportTimeIsSet_ = false;
}

std::vector<ReplaySqlNowInfo>& ShowReplayProgressResponse::getReplaySqlNowList()
{
    return replaySqlNowList_;
}

void ShowReplayProgressResponse::setReplaySqlNowList(const std::vector<ReplaySqlNowInfo>& value)
{
    replaySqlNowList_ = value;
    replaySqlNowListIsSet_ = true;
}

bool ShowReplayProgressResponse::replaySqlNowListIsSet() const
{
    return replaySqlNowListIsSet_;
}

void ShowReplayProgressResponse::unsetreplaySqlNowList()
{
    replaySqlNowListIsSet_ = false;
}

}
}
}
}
}


