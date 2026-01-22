

#include "huaweicloud/live/v1/model/LivePullTaskInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




LivePullTaskInfo::LivePullTaskInfo()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    sourceType_ = "";
    sourceTypeIsSet_ = false;
    sourceUrlsIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    streamName_ = "";
    streamNameIsSet_ = false;
    pushArgs_ = "";
    pushArgsIsSet_ = false;
    destinationUrl_ = "";
    destinationUrlIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    callbackEventsIsSet_ = false;
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
    backupSourceType_ = "";
    backupSourceTypeIsSet_ = false;
    backupSourceUrlsIsSet_ = false;
    vodLoopTime_ = "";
    vodLoopTimeIsSet_ = false;
    vodStartVideoIndex_ = 0;
    vodStartVideoIndexIsSet_ = false;
    vodStartVideoTime_ = 0;
    vodStartVideoTimeIsSet_ = false;
    vodRefreshType_ = "";
    vodRefreshTypeIsSet_ = false;
}

LivePullTaskInfo::~LivePullTaskInfo() = default;

void LivePullTaskInfo::validate()
{
}

web::json::value LivePullTaskInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(sourceTypeIsSet_) {
        val[utility::conversions::to_string_t("source_type")] = ModelBase::toJson(sourceType_);
    }
    if(sourceUrlsIsSet_) {
        val[utility::conversions::to_string_t("source_urls")] = ModelBase::toJson(sourceUrls_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(streamNameIsSet_) {
        val[utility::conversions::to_string_t("stream_name")] = ModelBase::toJson(streamName_);
    }
    if(pushArgsIsSet_) {
        val[utility::conversions::to_string_t("push_args")] = ModelBase::toJson(pushArgs_);
    }
    if(destinationUrlIsSet_) {
        val[utility::conversions::to_string_t("destination_url")] = ModelBase::toJson(destinationUrl_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(callbackEventsIsSet_) {
        val[utility::conversions::to_string_t("callback_events")] = ModelBase::toJson(callbackEvents_);
    }
    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }
    if(backupSourceTypeIsSet_) {
        val[utility::conversions::to_string_t("backup_source_type")] = ModelBase::toJson(backupSourceType_);
    }
    if(backupSourceUrlsIsSet_) {
        val[utility::conversions::to_string_t("backup_source_urls")] = ModelBase::toJson(backupSourceUrls_);
    }
    if(vodLoopTimeIsSet_) {
        val[utility::conversions::to_string_t("vod_loop_time")] = ModelBase::toJson(vodLoopTime_);
    }
    if(vodStartVideoIndexIsSet_) {
        val[utility::conversions::to_string_t("vod_start_video_index")] = ModelBase::toJson(vodStartVideoIndex_);
    }
    if(vodStartVideoTimeIsSet_) {
        val[utility::conversions::to_string_t("vod_start_video_time")] = ModelBase::toJson(vodStartVideoTime_);
    }
    if(vodRefreshTypeIsSet_) {
        val[utility::conversions::to_string_t("vod_refresh_type")] = ModelBase::toJson(vodRefreshType_);
    }

    return val;
}
bool LivePullTaskInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceUrls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("push_args"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push_args"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPushArgs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_events"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backup_source_urls"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backup_source_urls"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackupSourceUrls(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vod_loop_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vod_loop_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVodLoopTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vod_start_video_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vod_start_video_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVodStartVideoIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vod_start_video_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vod_start_video_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVodStartVideoTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vod_refresh_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vod_refresh_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVodRefreshType(refVal);
        }
    }
    return ok;
}


std::string LivePullTaskInfo::getTaskId() const
{
    return taskId_;
}

void LivePullTaskInfo::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool LivePullTaskInfo::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void LivePullTaskInfo::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string LivePullTaskInfo::getStatus() const
{
    return status_;
}

void LivePullTaskInfo::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool LivePullTaskInfo::statusIsSet() const
{
    return statusIsSet_;
}

void LivePullTaskInfo::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime LivePullTaskInfo::getCreateTime() const
{
    return createTime_;
}

void LivePullTaskInfo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool LivePullTaskInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void LivePullTaskInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string LivePullTaskInfo::getRegion() const
{
    return region_;
}

void LivePullTaskInfo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool LivePullTaskInfo::regionIsSet() const
{
    return regionIsSet_;
}

void LivePullTaskInfo::unsetregion()
{
    regionIsSet_ = false;
}

std::string LivePullTaskInfo::getSourceType() const
{
    return sourceType_;
}

void LivePullTaskInfo::setSourceType(const std::string& value)
{
    sourceType_ = value;
    sourceTypeIsSet_ = true;
}

bool LivePullTaskInfo::sourceTypeIsSet() const
{
    return sourceTypeIsSet_;
}

void LivePullTaskInfo::unsetsourceType()
{
    sourceTypeIsSet_ = false;
}

std::vector<std::string>& LivePullTaskInfo::getSourceUrls()
{
    return sourceUrls_;
}

void LivePullTaskInfo::setSourceUrls(const std::vector<std::string>& value)
{
    sourceUrls_ = value;
    sourceUrlsIsSet_ = true;
}

bool LivePullTaskInfo::sourceUrlsIsSet() const
{
    return sourceUrlsIsSet_;
}

void LivePullTaskInfo::unsetsourceUrls()
{
    sourceUrlsIsSet_ = false;
}

std::string LivePullTaskInfo::getDomain() const
{
    return domain_;
}

void LivePullTaskInfo::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool LivePullTaskInfo::domainIsSet() const
{
    return domainIsSet_;
}

void LivePullTaskInfo::unsetdomain()
{
    domainIsSet_ = false;
}

std::string LivePullTaskInfo::getAppName() const
{
    return appName_;
}

void LivePullTaskInfo::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool LivePullTaskInfo::appNameIsSet() const
{
    return appNameIsSet_;
}

void LivePullTaskInfo::unsetappName()
{
    appNameIsSet_ = false;
}

std::string LivePullTaskInfo::getStreamName() const
{
    return streamName_;
}

void LivePullTaskInfo::setStreamName(const std::string& value)
{
    streamName_ = value;
    streamNameIsSet_ = true;
}

bool LivePullTaskInfo::streamNameIsSet() const
{
    return streamNameIsSet_;
}

void LivePullTaskInfo::unsetstreamName()
{
    streamNameIsSet_ = false;
}

std::string LivePullTaskInfo::getPushArgs() const
{
    return pushArgs_;
}

void LivePullTaskInfo::setPushArgs(const std::string& value)
{
    pushArgs_ = value;
    pushArgsIsSet_ = true;
}

bool LivePullTaskInfo::pushArgsIsSet() const
{
    return pushArgsIsSet_;
}

void LivePullTaskInfo::unsetpushArgs()
{
    pushArgsIsSet_ = false;
}

std::string LivePullTaskInfo::getDestinationUrl() const
{
    return destinationUrl_;
}

void LivePullTaskInfo::setDestinationUrl(const std::string& value)
{
    destinationUrl_ = value;
    destinationUrlIsSet_ = true;
}

bool LivePullTaskInfo::destinationUrlIsSet() const
{
    return destinationUrlIsSet_;
}

void LivePullTaskInfo::unsetdestinationUrl()
{
    destinationUrlIsSet_ = false;
}

std::string LivePullTaskInfo::getStartTime() const
{
    return startTime_;
}

void LivePullTaskInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool LivePullTaskInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void LivePullTaskInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string LivePullTaskInfo::getEndTime() const
{
    return endTime_;
}

void LivePullTaskInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool LivePullTaskInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void LivePullTaskInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<std::string>& LivePullTaskInfo::getCallbackEvents()
{
    return callbackEvents_;
}

void LivePullTaskInfo::setCallbackEvents(const std::vector<std::string>& value)
{
    callbackEvents_ = value;
    callbackEventsIsSet_ = true;
}

bool LivePullTaskInfo::callbackEventsIsSet() const
{
    return callbackEventsIsSet_;
}

void LivePullTaskInfo::unsetcallbackEvents()
{
    callbackEventsIsSet_ = false;
}

std::string LivePullTaskInfo::getCallbackUrl() const
{
    return callbackUrl_;
}

void LivePullTaskInfo::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool LivePullTaskInfo::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void LivePullTaskInfo::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

std::string LivePullTaskInfo::getBackupSourceType() const
{
    return backupSourceType_;
}

void LivePullTaskInfo::setBackupSourceType(const std::string& value)
{
    backupSourceType_ = value;
    backupSourceTypeIsSet_ = true;
}

bool LivePullTaskInfo::backupSourceTypeIsSet() const
{
    return backupSourceTypeIsSet_;
}

void LivePullTaskInfo::unsetbackupSourceType()
{
    backupSourceTypeIsSet_ = false;
}

std::vector<std::string>& LivePullTaskInfo::getBackupSourceUrls()
{
    return backupSourceUrls_;
}

void LivePullTaskInfo::setBackupSourceUrls(const std::vector<std::string>& value)
{
    backupSourceUrls_ = value;
    backupSourceUrlsIsSet_ = true;
}

bool LivePullTaskInfo::backupSourceUrlsIsSet() const
{
    return backupSourceUrlsIsSet_;
}

void LivePullTaskInfo::unsetbackupSourceUrls()
{
    backupSourceUrlsIsSet_ = false;
}

std::string LivePullTaskInfo::getVodLoopTime() const
{
    return vodLoopTime_;
}

void LivePullTaskInfo::setVodLoopTime(const std::string& value)
{
    vodLoopTime_ = value;
    vodLoopTimeIsSet_ = true;
}

bool LivePullTaskInfo::vodLoopTimeIsSet() const
{
    return vodLoopTimeIsSet_;
}

void LivePullTaskInfo::unsetvodLoopTime()
{
    vodLoopTimeIsSet_ = false;
}

int32_t LivePullTaskInfo::getVodStartVideoIndex() const
{
    return vodStartVideoIndex_;
}

void LivePullTaskInfo::setVodStartVideoIndex(int32_t value)
{
    vodStartVideoIndex_ = value;
    vodStartVideoIndexIsSet_ = true;
}

bool LivePullTaskInfo::vodStartVideoIndexIsSet() const
{
    return vodStartVideoIndexIsSet_;
}

void LivePullTaskInfo::unsetvodStartVideoIndex()
{
    vodStartVideoIndexIsSet_ = false;
}

int32_t LivePullTaskInfo::getVodStartVideoTime() const
{
    return vodStartVideoTime_;
}

void LivePullTaskInfo::setVodStartVideoTime(int32_t value)
{
    vodStartVideoTime_ = value;
    vodStartVideoTimeIsSet_ = true;
}

bool LivePullTaskInfo::vodStartVideoTimeIsSet() const
{
    return vodStartVideoTimeIsSet_;
}

void LivePullTaskInfo::unsetvodStartVideoTime()
{
    vodStartVideoTimeIsSet_ = false;
}

std::string LivePullTaskInfo::getVodRefreshType() const
{
    return vodRefreshType_;
}

void LivePullTaskInfo::setVodRefreshType(const std::string& value)
{
    vodRefreshType_ = value;
    vodRefreshTypeIsSet_ = true;
}

bool LivePullTaskInfo::vodRefreshTypeIsSet() const
{
    return vodRefreshTypeIsSet_;
}

void LivePullTaskInfo::unsetvodRefreshType()
{
    vodRefreshTypeIsSet_ = false;
}

}
}
}
}
}


