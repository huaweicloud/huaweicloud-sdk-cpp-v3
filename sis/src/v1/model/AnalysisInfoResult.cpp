

#include "huaweicloud/sis/v1/model/AnalysisInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




AnalysisInfoResult::AnalysisInfoResult()
{
    role_ = "";
    roleIsSet_ = false;
    emotion_ = "";
    emotionIsSet_ = false;
    speed_ = 0.0f;
    speedIsSet_ = false;
}

AnalysisInfoResult::~AnalysisInfoResult() = default;

void AnalysisInfoResult::validate()
{
}

web::json::value AnalysisInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIsSet_) {
        val[utility::conversions::to_string_t("role")] = ModelBase::toJson(role_);
    }
    if(emotionIsSet_) {
        val[utility::conversions::to_string_t("emotion")] = ModelBase::toJson(emotion_);
    }
    if(speedIsSet_) {
        val[utility::conversions::to_string_t("speed")] = ModelBase::toJson(speed_);
    }

    return val;
}
bool AnalysisInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("emotion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("emotion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmotion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("speed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speed"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpeed(refVal);
        }
    }
    return ok;
}


std::string AnalysisInfoResult::getRole() const
{
    return role_;
}

void AnalysisInfoResult::setRole(const std::string& value)
{
    role_ = value;
    roleIsSet_ = true;
}

bool AnalysisInfoResult::roleIsSet() const
{
    return roleIsSet_;
}

void AnalysisInfoResult::unsetrole()
{
    roleIsSet_ = false;
}

std::string AnalysisInfoResult::getEmotion() const
{
    return emotion_;
}

void AnalysisInfoResult::setEmotion(const std::string& value)
{
    emotion_ = value;
    emotionIsSet_ = true;
}

bool AnalysisInfoResult::emotionIsSet() const
{
    return emotionIsSet_;
}

void AnalysisInfoResult::unsetemotion()
{
    emotionIsSet_ = false;
}

float AnalysisInfoResult::getSpeed() const
{
    return speed_;
}

void AnalysisInfoResult::setSpeed(float value)
{
    speed_ = value;
    speedIsSet_ = true;
}

bool AnalysisInfoResult::speedIsSet() const
{
    return speedIsSet_;
}

void AnalysisInfoResult::unsetspeed()
{
    speedIsSet_ = false;
}

}
}
}
}
}


