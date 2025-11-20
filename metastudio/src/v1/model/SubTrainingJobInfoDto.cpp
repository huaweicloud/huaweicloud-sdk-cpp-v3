

#include "huaweicloud/metastudio/v1/model/SubTrainingJobInfoDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SubTrainingJobInfoDto::SubTrainingJobInfoDto()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    subJobType_ = "";
    subJobTypeIsSet_ = false;
    heartBeatId_ = "";
    heartBeatIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    lastUpdateTime_ = 0L;
    lastUpdateTimeIsSet_ = false;
}

SubTrainingJobInfoDto::~SubTrainingJobInfoDto() = default;

void SubTrainingJobInfoDto::validate()
{
}

web::json::value SubTrainingJobInfoDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(subJobTypeIsSet_) {
        val[utility::conversions::to_string_t("sub_job_type")] = ModelBase::toJson(subJobType_);
    }
    if(heartBeatIdIsSet_) {
        val[utility::conversions::to_string_t("heart_beat_id")] = ModelBase::toJson(heartBeatId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lastUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("last_update_time")] = ModelBase::toJson(lastUpdateTime_);
    }

    return val;
}
bool SubTrainingJobInfoDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sub_job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubJobType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("heart_beat_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("heart_beat_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeartBeatId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateTime(refVal);
        }
    }
    return ok;
}


std::string SubTrainingJobInfoDto::getJobId() const
{
    return jobId_;
}

void SubTrainingJobInfoDto::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SubTrainingJobInfoDto::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SubTrainingJobInfoDto::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SubTrainingJobInfoDto::getSubJobType() const
{
    return subJobType_;
}

void SubTrainingJobInfoDto::setSubJobType(const std::string& value)
{
    subJobType_ = value;
    subJobTypeIsSet_ = true;
}

bool SubTrainingJobInfoDto::subJobTypeIsSet() const
{
    return subJobTypeIsSet_;
}

void SubTrainingJobInfoDto::unsetsubJobType()
{
    subJobTypeIsSet_ = false;
}

std::string SubTrainingJobInfoDto::getHeartBeatId() const
{
    return heartBeatId_;
}

void SubTrainingJobInfoDto::setHeartBeatId(const std::string& value)
{
    heartBeatId_ = value;
    heartBeatIdIsSet_ = true;
}

bool SubTrainingJobInfoDto::heartBeatIdIsSet() const
{
    return heartBeatIdIsSet_;
}

void SubTrainingJobInfoDto::unsetheartBeatId()
{
    heartBeatIdIsSet_ = false;
}

std::string SubTrainingJobInfoDto::getState() const
{
    return state_;
}

void SubTrainingJobInfoDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool SubTrainingJobInfoDto::stateIsSet() const
{
    return stateIsSet_;
}

void SubTrainingJobInfoDto::unsetstate()
{
    stateIsSet_ = false;
}

int64_t SubTrainingJobInfoDto::getCreateTime() const
{
    return createTime_;
}

void SubTrainingJobInfoDto::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool SubTrainingJobInfoDto::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void SubTrainingJobInfoDto::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t SubTrainingJobInfoDto::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void SubTrainingJobInfoDto::setLastUpdateTime(int64_t value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool SubTrainingJobInfoDto::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void SubTrainingJobInfoDto::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

}
}
}
}
}


