

#include "huaweicloud/live/v1/model/LivePullStreamTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




LivePullStreamTask::LivePullStreamTask()
{
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
    startTime_ = utility::datetime();
    startTimeIsSet_ = false;
    endTime_ = utility::datetime();
    endTimeIsSet_ = false;
    vodLoopTime_ = "";
    vodLoopTimeIsSet_ = false;
    vodRefreshType_ = "";
    vodRefreshTypeIsSet_ = false;
    vodStartVideoIndex_ = 0;
    vodStartVideoIndexIsSet_ = false;
    vodStartVideoTime_ = 0;
    vodStartVideoTimeIsSet_ = false;
    backupSourceType_ = "";
    backupSourceTypeIsSet_ = false;
    backupSourceUrlsIsSet_ = false;
    callbackEventsIsSet_ = false;
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
}

LivePullStreamTask::~LivePullStreamTask() = default;

void LivePullStreamTask::validate()
{
}

web::json::value LivePullStreamTask::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(vodLoopTimeIsSet_) {
        val[utility::conversions::to_string_t("vod_loop_time")] = ModelBase::toJson(vodLoopTime_);
    }
    if(vodRefreshTypeIsSet_) {
        val[utility::conversions::to_string_t("vod_refresh_type")] = ModelBase::toJson(vodRefreshType_);
    }
    if(vodStartVideoIndexIsSet_) {
        val[utility::conversions::to_string_t("vod_start_video_index")] = ModelBase::toJson(vodStartVideoIndex_);
    }
    if(vodStartVideoTimeIsSet_) {
        val[utility::conversions::to_string_t("vod_start_video_time")] = ModelBase::toJson(vodStartVideoTime_);
    }
    if(backupSourceTypeIsSet_) {
        val[utility::conversions::to_string_t("backup_source_type")] = ModelBase::toJson(backupSourceType_);
    }
    if(backupSourceUrlsIsSet_) {
        val[utility::conversions::to_string_t("backup_source_urls")] = ModelBase::toJson(backupSourceUrls_);
    }
    if(callbackEventsIsSet_) {
        val[utility::conversions::to_string_t("callback_events")] = ModelBase::toJson(callbackEvents_);
    }
    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }

    return val;
}
bool LivePullStreamTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vod_refresh_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vod_refresh_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVodRefreshType(refVal);
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
    return ok;
}


std::string LivePullStreamTask::getRegion() const
{
    return region_;
}

void LivePullStreamTask::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool LivePullStreamTask::regionIsSet() const
{
    return regionIsSet_;
}

void LivePullStreamTask::unsetregion()
{
    regionIsSet_ = false;
}

std::string LivePullStreamTask::getSourceType() const
{
    return sourceType_;
}

void LivePullStreamTask::setSourceType(const std::string& value)
{
    sourceType_ = value;
    sourceTypeIsSet_ = true;
}

bool LivePullStreamTask::sourceTypeIsSet() const
{
    return sourceTypeIsSet_;
}

void LivePullStreamTask::unsetsourceType()
{
    sourceTypeIsSet_ = false;
}

std::vector<std::string>& LivePullStreamTask::getSourceUrls()
{
    return sourceUrls_;
}

void LivePullStreamTask::setSourceUrls(const std::vector<std::string>& value)
{
    sourceUrls_ = value;
    sourceUrlsIsSet_ = true;
}

bool LivePullStreamTask::sourceUrlsIsSet() const
{
    return sourceUrlsIsSet_;
}

void LivePullStreamTask::unsetsourceUrls()
{
    sourceUrlsIsSet_ = false;
}

std::string LivePullStreamTask::getDomain() const
{
    return domain_;
}

void LivePullStreamTask::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool LivePullStreamTask::domainIsSet() const
{
    return domainIsSet_;
}

void LivePullStreamTask::unsetdomain()
{
    domainIsSet_ = false;
}

std::string LivePullStreamTask::getAppName() const
{
    return appName_;
}

void LivePullStreamTask::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool LivePullStreamTask::appNameIsSet() const
{
    return appNameIsSet_;
}

void LivePullStreamTask::unsetappName()
{
    appNameIsSet_ = false;
}

std::string LivePullStreamTask::getStreamName() const
{
    return streamName_;
}

void LivePullStreamTask::setStreamName(const std::string& value)
{
    streamName_ = value;
    streamNameIsSet_ = true;
}

bool LivePullStreamTask::streamNameIsSet() const
{
    return streamNameIsSet_;
}

void LivePullStreamTask::unsetstreamName()
{
    streamNameIsSet_ = false;
}

std::string LivePullStreamTask::getPushArgs() const
{
    return pushArgs_;
}

void LivePullStreamTask::setPushArgs(const std::string& value)
{
    pushArgs_ = value;
    pushArgsIsSet_ = true;
}

bool LivePullStreamTask::pushArgsIsSet() const
{
    return pushArgsIsSet_;
}

void LivePullStreamTask::unsetpushArgs()
{
    pushArgsIsSet_ = false;
}

std::string LivePullStreamTask::getDestinationUrl() const
{
    return destinationUrl_;
}

void LivePullStreamTask::setDestinationUrl(const std::string& value)
{
    destinationUrl_ = value;
    destinationUrlIsSet_ = true;
}

bool LivePullStreamTask::destinationUrlIsSet() const
{
    return destinationUrlIsSet_;
}

void LivePullStreamTask::unsetdestinationUrl()
{
    destinationUrlIsSet_ = false;
}

utility::datetime LivePullStreamTask::getStartTime() const
{
    return startTime_;
}

void LivePullStreamTask::setStartTime(const utility::datetime& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool LivePullStreamTask::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void LivePullStreamTask::unsetstartTime()
{
    startTimeIsSet_ = false;
}

utility::datetime LivePullStreamTask::getEndTime() const
{
    return endTime_;
}

void LivePullStreamTask::setEndTime(const utility::datetime& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool LivePullStreamTask::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void LivePullStreamTask::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string LivePullStreamTask::getVodLoopTime() const
{
    return vodLoopTime_;
}

void LivePullStreamTask::setVodLoopTime(const std::string& value)
{
    vodLoopTime_ = value;
    vodLoopTimeIsSet_ = true;
}

bool LivePullStreamTask::vodLoopTimeIsSet() const
{
    return vodLoopTimeIsSet_;
}

void LivePullStreamTask::unsetvodLoopTime()
{
    vodLoopTimeIsSet_ = false;
}

std::string LivePullStreamTask::getVodRefreshType() const
{
    return vodRefreshType_;
}

void LivePullStreamTask::setVodRefreshType(const std::string& value)
{
    vodRefreshType_ = value;
    vodRefreshTypeIsSet_ = true;
}

bool LivePullStreamTask::vodRefreshTypeIsSet() const
{
    return vodRefreshTypeIsSet_;
}

void LivePullStreamTask::unsetvodRefreshType()
{
    vodRefreshTypeIsSet_ = false;
}

int32_t LivePullStreamTask::getVodStartVideoIndex() const
{
    return vodStartVideoIndex_;
}

void LivePullStreamTask::setVodStartVideoIndex(int32_t value)
{
    vodStartVideoIndex_ = value;
    vodStartVideoIndexIsSet_ = true;
}

bool LivePullStreamTask::vodStartVideoIndexIsSet() const
{
    return vodStartVideoIndexIsSet_;
}

void LivePullStreamTask::unsetvodStartVideoIndex()
{
    vodStartVideoIndexIsSet_ = false;
}

int32_t LivePullStreamTask::getVodStartVideoTime() const
{
    return vodStartVideoTime_;
}

void LivePullStreamTask::setVodStartVideoTime(int32_t value)
{
    vodStartVideoTime_ = value;
    vodStartVideoTimeIsSet_ = true;
}

bool LivePullStreamTask::vodStartVideoTimeIsSet() const
{
    return vodStartVideoTimeIsSet_;
}

void LivePullStreamTask::unsetvodStartVideoTime()
{
    vodStartVideoTimeIsSet_ = false;
}

std::string LivePullStreamTask::getBackupSourceType() const
{
    return backupSourceType_;
}

void LivePullStreamTask::setBackupSourceType(const std::string& value)
{
    backupSourceType_ = value;
    backupSourceTypeIsSet_ = true;
}

bool LivePullStreamTask::backupSourceTypeIsSet() const
{
    return backupSourceTypeIsSet_;
}

void LivePullStreamTask::unsetbackupSourceType()
{
    backupSourceTypeIsSet_ = false;
}

std::vector<std::string>& LivePullStreamTask::getBackupSourceUrls()
{
    return backupSourceUrls_;
}

void LivePullStreamTask::setBackupSourceUrls(const std::vector<std::string>& value)
{
    backupSourceUrls_ = value;
    backupSourceUrlsIsSet_ = true;
}

bool LivePullStreamTask::backupSourceUrlsIsSet() const
{
    return backupSourceUrlsIsSet_;
}

void LivePullStreamTask::unsetbackupSourceUrls()
{
    backupSourceUrlsIsSet_ = false;
}

std::vector<std::string>& LivePullStreamTask::getCallbackEvents()
{
    return callbackEvents_;
}

void LivePullStreamTask::setCallbackEvents(const std::vector<std::string>& value)
{
    callbackEvents_ = value;
    callbackEventsIsSet_ = true;
}

bool LivePullStreamTask::callbackEventsIsSet() const
{
    return callbackEventsIsSet_;
}

void LivePullStreamTask::unsetcallbackEvents()
{
    callbackEventsIsSet_ = false;
}

std::string LivePullStreamTask::getCallbackUrl() const
{
    return callbackUrl_;
}

void LivePullStreamTask::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool LivePullStreamTask::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void LivePullStreamTask::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

}
}
}
}
}


