

#include "huaweicloud/ocr/v1/model/AutoIdDocClassificationResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




AutoIdDocClassificationResult::AutoIdDocClassificationResult()
{
    type_ = "";
    typeIsSet_ = false;
    locationIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
    alarmResultIsSet_ = false;
    alarmConfidenceIsSet_ = false;
}

AutoIdDocClassificationResult::~AutoIdDocClassificationResult() = default;

void AutoIdDocClassificationResult::validate()
{
}

web::json::value AutoIdDocClassificationResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(alarmResultIsSet_) {
        val[utility::conversions::to_string_t("alarm_result")] = ModelBase::toJson(alarmResult_);
    }
    if(alarmConfidenceIsSet_) {
        val[utility::conversions::to_string_t("alarm_confidence")] = ModelBase::toJson(alarmConfidence_);
    }

    return val;
}
bool AutoIdDocClassificationResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_result"));
        if(!fieldValue.is_null())
        {
            AutoIdDocClassificationAlarmResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_confidence"));
        if(!fieldValue.is_null())
        {
            AutoIdDocClassificationAlarmConfidence refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmConfidence(refVal);
        }
    }
    return ok;
}


std::string AutoIdDocClassificationResult::getType() const
{
    return type_;
}

void AutoIdDocClassificationResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AutoIdDocClassificationResult::typeIsSet() const
{
    return typeIsSet_;
}

void AutoIdDocClassificationResult::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::vector<int32_t>>& AutoIdDocClassificationResult::getLocation()
{
    return location_;
}

void AutoIdDocClassificationResult::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool AutoIdDocClassificationResult::locationIsSet() const
{
    return locationIsSet_;
}

void AutoIdDocClassificationResult::unsetlocation()
{
    locationIsSet_ = false;
}

float AutoIdDocClassificationResult::getConfidence() const
{
    return confidence_;
}

void AutoIdDocClassificationResult::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool AutoIdDocClassificationResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void AutoIdDocClassificationResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

AutoIdDocClassificationAlarmResult AutoIdDocClassificationResult::getAlarmResult() const
{
    return alarmResult_;
}

void AutoIdDocClassificationResult::setAlarmResult(const AutoIdDocClassificationAlarmResult& value)
{
    alarmResult_ = value;
    alarmResultIsSet_ = true;
}

bool AutoIdDocClassificationResult::alarmResultIsSet() const
{
    return alarmResultIsSet_;
}

void AutoIdDocClassificationResult::unsetalarmResult()
{
    alarmResultIsSet_ = false;
}

AutoIdDocClassificationAlarmConfidence AutoIdDocClassificationResult::getAlarmConfidence() const
{
    return alarmConfidence_;
}

void AutoIdDocClassificationResult::setAlarmConfidence(const AutoIdDocClassificationAlarmConfidence& value)
{
    alarmConfidence_ = value;
    alarmConfidenceIsSet_ = true;
}

bool AutoIdDocClassificationResult::alarmConfidenceIsSet() const
{
    return alarmConfidenceIsSet_;
}

void AutoIdDocClassificationResult::unsetalarmConfidence()
{
    alarmConfidenceIsSet_ = false;
}

}
}
}
}
}


