

#include "huaweicloud/sis/v1/model/CollectTranscriberJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




CollectTranscriberJobResponse::CollectTranscriberJobResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    segmentsIsSet_ = false;
    audioDuration_ = 0;
    audioDurationIsSet_ = false;
}

CollectTranscriberJobResponse::~CollectTranscriberJobResponse() = default;

void CollectTranscriberJobResponse::validate()
{
}

web::json::value CollectTranscriberJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finish_time")] = ModelBase::toJson(finishTime_);
    }
    if(segmentsIsSet_) {
        val[utility::conversions::to_string_t("segments")] = ModelBase::toJson(segments_);
    }
    if(audioDurationIsSet_) {
        val[utility::conversions::to_string_t("audio_duration")] = ModelBase::toJson(audioDuration_);
    }

    return val;
}
bool CollectTranscriberJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("finish_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("segments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("segments"));
        if(!fieldValue.is_null())
        {
            std::vector<Segment> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSegments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioDuration(refVal);
        }
    }
    return ok;
}


std::string CollectTranscriberJobResponse::getJobId() const
{
    return jobId_;
}

void CollectTranscriberJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CollectTranscriberJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CollectTranscriberJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string CollectTranscriberJobResponse::getStatus() const
{
    return status_;
}

void CollectTranscriberJobResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CollectTranscriberJobResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CollectTranscriberJobResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CollectTranscriberJobResponse::getCreateTime() const
{
    return createTime_;
}

void CollectTranscriberJobResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CollectTranscriberJobResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CollectTranscriberJobResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CollectTranscriberJobResponse::getStartTime() const
{
    return startTime_;
}

void CollectTranscriberJobResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CollectTranscriberJobResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CollectTranscriberJobResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string CollectTranscriberJobResponse::getFinishTime() const
{
    return finishTime_;
}

void CollectTranscriberJobResponse::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool CollectTranscriberJobResponse::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void CollectTranscriberJobResponse::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

std::vector<Segment>& CollectTranscriberJobResponse::getSegments()
{
    return segments_;
}

void CollectTranscriberJobResponse::setSegments(const std::vector<Segment>& value)
{
    segments_ = value;
    segmentsIsSet_ = true;
}

bool CollectTranscriberJobResponse::segmentsIsSet() const
{
    return segmentsIsSet_;
}

void CollectTranscriberJobResponse::unsetsegments()
{
    segmentsIsSet_ = false;
}

int32_t CollectTranscriberJobResponse::getAudioDuration() const
{
    return audioDuration_;
}

void CollectTranscriberJobResponse::setAudioDuration(int32_t value)
{
    audioDuration_ = value;
    audioDurationIsSet_ = true;
}

bool CollectTranscriberJobResponse::audioDurationIsSet() const
{
    return audioDurationIsSet_;
}

void CollectTranscriberJobResponse::unsetaudioDuration()
{
    audioDurationIsSet_ = false;
}

}
}
}
}
}


