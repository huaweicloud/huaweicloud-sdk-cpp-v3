

#include "huaweicloud/metastudio/v1/model/TrainingVideoMarkInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TrainingVideoMarkInfo::TrainingVideoMarkInfo()
{
    videoStartTime_ = "";
    videoStartTimeIsSet_ = false;
    videoEndTime_ = "";
    videoEndTimeIsSet_ = false;
}

TrainingVideoMarkInfo::~TrainingVideoMarkInfo() = default;

void TrainingVideoMarkInfo::validate()
{
}

web::json::value TrainingVideoMarkInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoStartTimeIsSet_) {
        val[utility::conversions::to_string_t("video_start_time")] = ModelBase::toJson(videoStartTime_);
    }
    if(videoEndTimeIsSet_) {
        val[utility::conversions::to_string_t("video_end_time")] = ModelBase::toJson(videoEndTime_);
    }

    return val;
}
bool TrainingVideoMarkInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("video_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoEndTime(refVal);
        }
    }
    return ok;
}


std::string TrainingVideoMarkInfo::getVideoStartTime() const
{
    return videoStartTime_;
}

void TrainingVideoMarkInfo::setVideoStartTime(const std::string& value)
{
    videoStartTime_ = value;
    videoStartTimeIsSet_ = true;
}

bool TrainingVideoMarkInfo::videoStartTimeIsSet() const
{
    return videoStartTimeIsSet_;
}

void TrainingVideoMarkInfo::unsetvideoStartTime()
{
    videoStartTimeIsSet_ = false;
}

std::string TrainingVideoMarkInfo::getVideoEndTime() const
{
    return videoEndTime_;
}

void TrainingVideoMarkInfo::setVideoEndTime(const std::string& value)
{
    videoEndTime_ = value;
    videoEndTimeIsSet_ = true;
}

bool TrainingVideoMarkInfo::videoEndTimeIsSet() const
{
    return videoEndTimeIsSet_;
}

void TrainingVideoMarkInfo::unsetvideoEndTime()
{
    videoEndTimeIsSet_ = false;
}

}
}
}
}
}


