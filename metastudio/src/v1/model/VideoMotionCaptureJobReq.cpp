

#include "huaweicloud/metastudio/v1/model/VideoMotionCaptureJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VideoMotionCaptureJobReq::VideoMotionCaptureJobReq()
{
    motionCaptureMode_ = "";
    motionCaptureModeIsSet_ = false;
    inputInfoIsSet_ = false;
    outputInfoIsSet_ = false;
}

VideoMotionCaptureJobReq::~VideoMotionCaptureJobReq() = default;

void VideoMotionCaptureJobReq::validate()
{
}

web::json::value VideoMotionCaptureJobReq::toJson() const
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

    return val;
}
bool VideoMotionCaptureJobReq::fromJson(const web::json::value& val)
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
    return ok;
}


std::string VideoMotionCaptureJobReq::getMotionCaptureMode() const
{
    return motionCaptureMode_;
}

void VideoMotionCaptureJobReq::setMotionCaptureMode(const std::string& value)
{
    motionCaptureMode_ = value;
    motionCaptureModeIsSet_ = true;
}

bool VideoMotionCaptureJobReq::motionCaptureModeIsSet() const
{
    return motionCaptureModeIsSet_;
}

void VideoMotionCaptureJobReq::unsetmotionCaptureMode()
{
    motionCaptureModeIsSet_ = false;
}

InputInfo VideoMotionCaptureJobReq::getInputInfo() const
{
    return inputInfo_;
}

void VideoMotionCaptureJobReq::setInputInfo(const InputInfo& value)
{
    inputInfo_ = value;
    inputInfoIsSet_ = true;
}

bool VideoMotionCaptureJobReq::inputInfoIsSet() const
{
    return inputInfoIsSet_;
}

void VideoMotionCaptureJobReq::unsetinputInfo()
{
    inputInfoIsSet_ = false;
}

OutputInfo VideoMotionCaptureJobReq::getOutputInfo() const
{
    return outputInfo_;
}

void VideoMotionCaptureJobReq::setOutputInfo(const OutputInfo& value)
{
    outputInfo_ = value;
    outputInfoIsSet_ = true;
}

bool VideoMotionCaptureJobReq::outputInfoIsSet() const
{
    return outputInfoIsSet_;
}

void VideoMotionCaptureJobReq::unsetoutputInfo()
{
    outputInfoIsSet_ = false;
}

}
}
}
}
}


