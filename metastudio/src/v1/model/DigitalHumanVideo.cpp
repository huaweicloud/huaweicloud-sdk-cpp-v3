

#include "huaweicloud/metastudio/v1/model/DigitalHumanVideo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DigitalHumanVideo::DigitalHumanVideo()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    jobType_ = "";
    jobTypeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    duration_ = 0.0f;
    durationIsSet_ = false;
    outputAssetConfigIsSet_ = false;
    errorInfoIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lastupdateTime_ = "";
    lastupdateTimeIsSet_ = false;
}

DigitalHumanVideo::~DigitalHumanVideo() = default;

void DigitalHumanVideo::validate()
{
}

web::json::value DigitalHumanVideo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(jobTypeIsSet_) {
        val[utility::conversions::to_string_t("job_type")] = ModelBase::toJson(jobType_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(outputAssetConfigIsSet_) {
        val[utility::conversions::to_string_t("output_asset_config")] = ModelBase::toJson(outputAssetConfig_);
    }
    if(errorInfoIsSet_) {
        val[utility::conversions::to_string_t("error_info")] = ModelBase::toJson(errorInfo_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(lastupdateTimeIsSet_) {
        val[utility::conversions::to_string_t("lastupdate_time")] = ModelBase::toJson(lastupdateTime_);
    }

    return val;
}
bool DigitalHumanVideo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_asset_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_asset_config"));
        if(!fieldValue.is_null())
        {
            OutputAssetInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputAssetConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_info"));
        if(!fieldValue.is_null())
        {
            ErrorResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("lastupdate_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastupdate_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastupdateTime(refVal);
        }
    }
    return ok;
}


std::string DigitalHumanVideo::getJobId() const
{
    return jobId_;
}

void DigitalHumanVideo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DigitalHumanVideo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DigitalHumanVideo::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string DigitalHumanVideo::getState() const
{
    return state_;
}

void DigitalHumanVideo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool DigitalHumanVideo::stateIsSet() const
{
    return stateIsSet_;
}

void DigitalHumanVideo::unsetstate()
{
    stateIsSet_ = false;
}

std::string DigitalHumanVideo::getJobType() const
{
    return jobType_;
}

void DigitalHumanVideo::setJobType(const std::string& value)
{
    jobType_ = value;
    jobTypeIsSet_ = true;
}

bool DigitalHumanVideo::jobTypeIsSet() const
{
    return jobTypeIsSet_;
}

void DigitalHumanVideo::unsetjobType()
{
    jobTypeIsSet_ = false;
}

std::string DigitalHumanVideo::getStartTime() const
{
    return startTime_;
}

void DigitalHumanVideo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool DigitalHumanVideo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void DigitalHumanVideo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string DigitalHumanVideo::getEndTime() const
{
    return endTime_;
}

void DigitalHumanVideo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool DigitalHumanVideo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void DigitalHumanVideo::unsetendTime()
{
    endTimeIsSet_ = false;
}

float DigitalHumanVideo::getDuration() const
{
    return duration_;
}

void DigitalHumanVideo::setDuration(float value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool DigitalHumanVideo::durationIsSet() const
{
    return durationIsSet_;
}

void DigitalHumanVideo::unsetduration()
{
    durationIsSet_ = false;
}

OutputAssetInfo DigitalHumanVideo::getOutputAssetConfig() const
{
    return outputAssetConfig_;
}

void DigitalHumanVideo::setOutputAssetConfig(const OutputAssetInfo& value)
{
    outputAssetConfig_ = value;
    outputAssetConfigIsSet_ = true;
}

bool DigitalHumanVideo::outputAssetConfigIsSet() const
{
    return outputAssetConfigIsSet_;
}

void DigitalHumanVideo::unsetoutputAssetConfig()
{
    outputAssetConfigIsSet_ = false;
}

ErrorResponse DigitalHumanVideo::getErrorInfo() const
{
    return errorInfo_;
}

void DigitalHumanVideo::setErrorInfo(const ErrorResponse& value)
{
    errorInfo_ = value;
    errorInfoIsSet_ = true;
}

bool DigitalHumanVideo::errorInfoIsSet() const
{
    return errorInfoIsSet_;
}

void DigitalHumanVideo::unseterrorInfo()
{
    errorInfoIsSet_ = false;
}

std::string DigitalHumanVideo::getCreateTime() const
{
    return createTime_;
}

void DigitalHumanVideo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DigitalHumanVideo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DigitalHumanVideo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string DigitalHumanVideo::getLastupdateTime() const
{
    return lastupdateTime_;
}

void DigitalHumanVideo::setLastupdateTime(const std::string& value)
{
    lastupdateTime_ = value;
    lastupdateTimeIsSet_ = true;
}

bool DigitalHumanVideo::lastupdateTimeIsSet() const
{
    return lastupdateTimeIsSet_;
}

void DigitalHumanVideo::unsetlastupdateTime()
{
    lastupdateTimeIsSet_ = false;
}

}
}
}
}
}


