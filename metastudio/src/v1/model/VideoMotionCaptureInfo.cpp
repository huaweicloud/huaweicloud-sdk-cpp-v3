

#include "huaweicloud/metastudio/v1/model/VideoMotionCaptureInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VideoMotionCaptureInfo::VideoMotionCaptureInfo()
{
    motionCaptureMode_ = "";
    motionCaptureModeIsSet_ = false;
    inputInfoIsSet_ = false;
    outputInfoIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

VideoMotionCaptureInfo::~VideoMotionCaptureInfo() = default;

void VideoMotionCaptureInfo::validate()
{
}

web::json::value VideoMotionCaptureInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(motionCaptureModeIsSet_) {
        val[utility::conversions::to_string_t("motion_capture_mode")] = ModelBase::toJson(motionCaptureMode_);
    }
    if(inputInfoIsSet_) {
        val[utility::conversions::to_string_t("input_info")] = ModelBase::toJson(inputInfo_);
    }
    if(outputInfoIsSet_) {
        val[utility::conversions::to_string_t("output_info")] = ModelBase::toJson(outputInfo_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool VideoMotionCaptureInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("motion_capture_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("motion_capture_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMotionCaptureMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input_info"));
        if(!fieldValue.is_null())
        {
            InputInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_info"));
        if(!fieldValue.is_null())
        {
            OutputInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputInfo(refVal);
        }
    }
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
    return ok;
}


std::string VideoMotionCaptureInfo::getMotionCaptureMode() const
{
    return motionCaptureMode_;
}

void VideoMotionCaptureInfo::setMotionCaptureMode(const std::string& value)
{
    motionCaptureMode_ = value;
    motionCaptureModeIsSet_ = true;
}

bool VideoMotionCaptureInfo::motionCaptureModeIsSet() const
{
    return motionCaptureModeIsSet_;
}

void VideoMotionCaptureInfo::unsetmotionCaptureMode()
{
    motionCaptureModeIsSet_ = false;
}

InputInfo VideoMotionCaptureInfo::getInputInfo() const
{
    return inputInfo_;
}

void VideoMotionCaptureInfo::setInputInfo(const InputInfo& value)
{
    inputInfo_ = value;
    inputInfoIsSet_ = true;
}

bool VideoMotionCaptureInfo::inputInfoIsSet() const
{
    return inputInfoIsSet_;
}

void VideoMotionCaptureInfo::unsetinputInfo()
{
    inputInfoIsSet_ = false;
}

OutputInfo VideoMotionCaptureInfo::getOutputInfo() const
{
    return outputInfo_;
}

void VideoMotionCaptureInfo::setOutputInfo(const OutputInfo& value)
{
    outputInfo_ = value;
    outputInfoIsSet_ = true;
}

bool VideoMotionCaptureInfo::outputInfoIsSet() const
{
    return outputInfoIsSet_;
}

void VideoMotionCaptureInfo::unsetoutputInfo()
{
    outputInfoIsSet_ = false;
}

std::string VideoMotionCaptureInfo::getJobId() const
{
    return jobId_;
}

void VideoMotionCaptureInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool VideoMotionCaptureInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void VideoMotionCaptureInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string VideoMotionCaptureInfo::getState() const
{
    return state_;
}

void VideoMotionCaptureInfo::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool VideoMotionCaptureInfo::stateIsSet() const
{
    return stateIsSet_;
}

void VideoMotionCaptureInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string VideoMotionCaptureInfo::getStartTime() const
{
    return startTime_;
}

void VideoMotionCaptureInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool VideoMotionCaptureInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void VideoMotionCaptureInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string VideoMotionCaptureInfo::getEndTime() const
{
    return endTime_;
}

void VideoMotionCaptureInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool VideoMotionCaptureInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void VideoMotionCaptureInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


