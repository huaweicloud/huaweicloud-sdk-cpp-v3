

#include "huaweicloud/metastudio/v1/model/ShowVideoMotionCaptureJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowVideoMotionCaptureJobResponse::ShowVideoMotionCaptureJobResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowVideoMotionCaptureJobResponse::~ShowVideoMotionCaptureJobResponse() = default;

void ShowVideoMotionCaptureJobResponse::validate()
{
}

web::json::value ShowVideoMotionCaptureJobResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowVideoMotionCaptureJobResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowVideoMotionCaptureJobResponse::getMotionCaptureMode() const
{
    return motionCaptureMode_;
}

void ShowVideoMotionCaptureJobResponse::setMotionCaptureMode(const std::string& value)
{
    motionCaptureMode_ = value;
    motionCaptureModeIsSet_ = true;
}

bool ShowVideoMotionCaptureJobResponse::motionCaptureModeIsSet() const
{
    return motionCaptureModeIsSet_;
}

void ShowVideoMotionCaptureJobResponse::unsetmotionCaptureMode()
{
    motionCaptureModeIsSet_ = false;
}

InputInfo ShowVideoMotionCaptureJobResponse::getInputInfo() const
{
    return inputInfo_;
}

void ShowVideoMotionCaptureJobResponse::setInputInfo(const InputInfo& value)
{
    inputInfo_ = value;
    inputInfoIsSet_ = true;
}

bool ShowVideoMotionCaptureJobResponse::inputInfoIsSet() const
{
    return inputInfoIsSet_;
}

void ShowVideoMotionCaptureJobResponse::unsetinputInfo()
{
    inputInfoIsSet_ = false;
}

OutputInfo ShowVideoMotionCaptureJobResponse::getOutputInfo() const
{
    return outputInfo_;
}

void ShowVideoMotionCaptureJobResponse::setOutputInfo(const OutputInfo& value)
{
    outputInfo_ = value;
    outputInfoIsSet_ = true;
}

bool ShowVideoMotionCaptureJobResponse::outputInfoIsSet() const
{
    return outputInfoIsSet_;
}

void ShowVideoMotionCaptureJobResponse::unsetoutputInfo()
{
    outputInfoIsSet_ = false;
}

std::string ShowVideoMotionCaptureJobResponse::getJobId() const
{
    return jobId_;
}

void ShowVideoMotionCaptureJobResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowVideoMotionCaptureJobResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowVideoMotionCaptureJobResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowVideoMotionCaptureJobResponse::getState() const
{
    return state_;
}

void ShowVideoMotionCaptureJobResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowVideoMotionCaptureJobResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowVideoMotionCaptureJobResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ShowVideoMotionCaptureJobResponse::getStartTime() const
{
    return startTime_;
}

void ShowVideoMotionCaptureJobResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowVideoMotionCaptureJobResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowVideoMotionCaptureJobResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowVideoMotionCaptureJobResponse::getEndTime() const
{
    return endTime_;
}

void ShowVideoMotionCaptureJobResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowVideoMotionCaptureJobResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowVideoMotionCaptureJobResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ShowVideoMotionCaptureJobResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowVideoMotionCaptureJobResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowVideoMotionCaptureJobResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowVideoMotionCaptureJobResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


