

#include "huaweicloud/sis/v1/model/AnalysisInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




AnalysisInfo::AnalysisInfo()
{
    diarization_ = false;
    diarizationIsSet_ = false;
    channel_ = "";
    channelIsSet_ = false;
    emotion_ = false;
    emotionIsSet_ = false;
    speed_ = false;
    speedIsSet_ = false;
}

AnalysisInfo::~AnalysisInfo() = default;

void AnalysisInfo::validate()
{
}

web::json::value AnalysisInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(diarizationIsSet_) {
        val[utility::conversions::to_string_t("diarization")] = ModelBase::toJson(diarization_);
    }
    if(channelIsSet_) {
        val[utility::conversions::to_string_t("channel")] = ModelBase::toJson(channel_);
    }
    if(emotionIsSet_) {
        val[utility::conversions::to_string_t("emotion")] = ModelBase::toJson(emotion_);
    }
    if(speedIsSet_) {
        val[utility::conversions::to_string_t("speed")] = ModelBase::toJson(speed_);
    }

    return val;
}

bool AnalysisInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("diarization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diarization"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiarization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("channel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("channel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChannel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("emotion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emotion"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmotion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("speed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpeed(refVal);
        }
    }
    return ok;
}


bool AnalysisInfo::isDiarization() const
{
    return diarization_;
}

void AnalysisInfo::setDiarization(bool value)
{
    diarization_ = value;
    diarizationIsSet_ = true;
}

bool AnalysisInfo::diarizationIsSet() const
{
    return diarizationIsSet_;
}

void AnalysisInfo::unsetdiarization()
{
    diarizationIsSet_ = false;
}

std::string AnalysisInfo::getChannel() const
{
    return channel_;
}

void AnalysisInfo::setChannel(const std::string& value)
{
    channel_ = value;
    channelIsSet_ = true;
}

bool AnalysisInfo::channelIsSet() const
{
    return channelIsSet_;
}

void AnalysisInfo::unsetchannel()
{
    channelIsSet_ = false;
}

bool AnalysisInfo::isEmotion() const
{
    return emotion_;
}

void AnalysisInfo::setEmotion(bool value)
{
    emotion_ = value;
    emotionIsSet_ = true;
}

bool AnalysisInfo::emotionIsSet() const
{
    return emotionIsSet_;
}

void AnalysisInfo::unsetemotion()
{
    emotionIsSet_ = false;
}

bool AnalysisInfo::isSpeed() const
{
    return speed_;
}

void AnalysisInfo::setSpeed(bool value)
{
    speed_ = value;
    speedIsSet_ = true;
}

bool AnalysisInfo::speedIsSet() const
{
    return speedIsSet_;
}

void AnalysisInfo::unsetspeed()
{
    speedIsSet_ = false;
}

}
}
}
}
}


