

#include "huaweicloud/ocr/v1/model/HealthCodeResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




HealthCodeResult::HealthCodeResult()
{
    name_ = "";
    nameIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    color_ = "";
    colorIsSet_ = false;
    confidenceIsSet_ = false;
}

HealthCodeResult::~HealthCodeResult() = default;

void HealthCodeResult::validate()
{
}

web::json::value HealthCodeResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(colorIsSet_) {
        val[utility::conversions::to_string_t("color")] = ModelBase::toJson(color_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}

bool HealthCodeResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


std::string HealthCodeResult::getName() const
{
    return name_;
}

void HealthCodeResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HealthCodeResult::nameIsSet() const
{
    return nameIsSet_;
}

void HealthCodeResult::unsetname()
{
    nameIsSet_ = false;
}

std::string HealthCodeResult::getTime() const
{
    return time_;
}

void HealthCodeResult::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool HealthCodeResult::timeIsSet() const
{
    return timeIsSet_;
}

void HealthCodeResult::unsettime()
{
    timeIsSet_ = false;
}

std::string HealthCodeResult::getColor() const
{
    return color_;
}

void HealthCodeResult::setColor(const std::string& value)
{
    color_ = value;
    colorIsSet_ = true;
}

bool HealthCodeResult::colorIsSet() const
{
    return colorIsSet_;
}

void HealthCodeResult::unsetcolor()
{
    colorIsSet_ = false;
}

Object HealthCodeResult::getConfidence() const
{
    return confidence_;
}

void HealthCodeResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool HealthCodeResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void HealthCodeResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


