

#include "huaweicloud/metastudio/v1/model/InferenceEyeCorrectionMarkInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




InferenceEyeCorrectionMarkInfo::InferenceEyeCorrectionMarkInfo()
{
    eyeCorrectionStartTime_ = "";
    eyeCorrectionStartTimeIsSet_ = false;
    eyeCorrectionEndTime_ = "";
    eyeCorrectionEndTimeIsSet_ = false;
}

InferenceEyeCorrectionMarkInfo::~InferenceEyeCorrectionMarkInfo() = default;

void InferenceEyeCorrectionMarkInfo::validate()
{
}

web::json::value InferenceEyeCorrectionMarkInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(eyeCorrectionStartTimeIsSet_) {
        val[utility::conversions::to_string_t("eye_correction_start_time")] = ModelBase::toJson(eyeCorrectionStartTime_);
    }
    if(eyeCorrectionEndTimeIsSet_) {
        val[utility::conversions::to_string_t("eye_correction_end_time")] = ModelBase::toJson(eyeCorrectionEndTime_);
    }

    return val;
}
bool InferenceEyeCorrectionMarkInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eye_correction_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eye_correction_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEyeCorrectionStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eye_correction_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eye_correction_end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEyeCorrectionEndTime(refVal);
        }
    }
    return ok;
}


std::string InferenceEyeCorrectionMarkInfo::getEyeCorrectionStartTime() const
{
    return eyeCorrectionStartTime_;
}

void InferenceEyeCorrectionMarkInfo::setEyeCorrectionStartTime(const std::string& value)
{
    eyeCorrectionStartTime_ = value;
    eyeCorrectionStartTimeIsSet_ = true;
}

bool InferenceEyeCorrectionMarkInfo::eyeCorrectionStartTimeIsSet() const
{
    return eyeCorrectionStartTimeIsSet_;
}

void InferenceEyeCorrectionMarkInfo::unseteyeCorrectionStartTime()
{
    eyeCorrectionStartTimeIsSet_ = false;
}

std::string InferenceEyeCorrectionMarkInfo::getEyeCorrectionEndTime() const
{
    return eyeCorrectionEndTime_;
}

void InferenceEyeCorrectionMarkInfo::setEyeCorrectionEndTime(const std::string& value)
{
    eyeCorrectionEndTime_ = value;
    eyeCorrectionEndTimeIsSet_ = true;
}

bool InferenceEyeCorrectionMarkInfo::eyeCorrectionEndTimeIsSet() const
{
    return eyeCorrectionEndTimeIsSet_;
}

void InferenceEyeCorrectionMarkInfo::unseteyeCorrectionEndTime()
{
    eyeCorrectionEndTimeIsSet_ = false;
}

}
}
}
}
}


