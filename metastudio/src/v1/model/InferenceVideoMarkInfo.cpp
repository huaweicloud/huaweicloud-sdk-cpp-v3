

#include "huaweicloud/metastudio/v1/model/InferenceVideoMarkInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




InferenceVideoMarkInfo::InferenceVideoMarkInfo()
{
    videoStartTime_ = "";
    videoStartTimeIsSet_ = false;
    videoEndTime_ = "";
    videoEndTimeIsSet_ = false;
    chatVideoStartTime_ = "";
    chatVideoStartTimeIsSet_ = false;
    chatVideoEndTime_ = "";
    chatVideoEndTimeIsSet_ = false;
}

InferenceVideoMarkInfo::~InferenceVideoMarkInfo() = default;

void InferenceVideoMarkInfo::validate()
{
}

web::json::value InferenceVideoMarkInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(videoStartTimeIsSet_) {
        val[utility::conversions::to_string_t("video_start_time")] = ModelBase::toJson(videoStartTime_);
    }
    if(videoEndTimeIsSet_) {
        val[utility::conversions::to_string_t("video_end_time")] = ModelBase::toJson(videoEndTime_);
    }
    if(chatVideoStartTimeIsSet_) {
        val[utility::conversions::to_string_t("chat_video_start_time")] = ModelBase::toJson(chatVideoStartTime_);
    }
    if(chatVideoEndTimeIsSet_) {
        val[utility::conversions::to_string_t("chat_video_end_time")] = ModelBase::toJson(chatVideoEndTime_);
    }

    return val;
}
bool InferenceVideoMarkInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("chat_video_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_video_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatVideoStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chat_video_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chat_video_end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChatVideoEndTime(refVal);
        }
    }
    return ok;
}


std::string InferenceVideoMarkInfo::getVideoStartTime() const
{
    return videoStartTime_;
}

void InferenceVideoMarkInfo::setVideoStartTime(const std::string& value)
{
    videoStartTime_ = value;
    videoStartTimeIsSet_ = true;
}

bool InferenceVideoMarkInfo::videoStartTimeIsSet() const
{
    return videoStartTimeIsSet_;
}

void InferenceVideoMarkInfo::unsetvideoStartTime()
{
    videoStartTimeIsSet_ = false;
}

std::string InferenceVideoMarkInfo::getVideoEndTime() const
{
    return videoEndTime_;
}

void InferenceVideoMarkInfo::setVideoEndTime(const std::string& value)
{
    videoEndTime_ = value;
    videoEndTimeIsSet_ = true;
}

bool InferenceVideoMarkInfo::videoEndTimeIsSet() const
{
    return videoEndTimeIsSet_;
}

void InferenceVideoMarkInfo::unsetvideoEndTime()
{
    videoEndTimeIsSet_ = false;
}

std::string InferenceVideoMarkInfo::getChatVideoStartTime() const
{
    return chatVideoStartTime_;
}

void InferenceVideoMarkInfo::setChatVideoStartTime(const std::string& value)
{
    chatVideoStartTime_ = value;
    chatVideoStartTimeIsSet_ = true;
}

bool InferenceVideoMarkInfo::chatVideoStartTimeIsSet() const
{
    return chatVideoStartTimeIsSet_;
}

void InferenceVideoMarkInfo::unsetchatVideoStartTime()
{
    chatVideoStartTimeIsSet_ = false;
}

std::string InferenceVideoMarkInfo::getChatVideoEndTime() const
{
    return chatVideoEndTime_;
}

void InferenceVideoMarkInfo::setChatVideoEndTime(const std::string& value)
{
    chatVideoEndTime_ = value;
    chatVideoEndTimeIsSet_ = true;
}

bool InferenceVideoMarkInfo::chatVideoEndTimeIsSet() const
{
    return chatVideoEndTimeIsSet_;
}

void InferenceVideoMarkInfo::unsetchatVideoEndTime()
{
    chatVideoEndTimeIsSet_ = false;
}

}
}
}
}
}


