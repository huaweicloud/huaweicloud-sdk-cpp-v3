

#include "huaweicloud/ocr/v1/model/LicensePlateResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




LicensePlateResult::LicensePlateResult()
{
    plateNumber_ = "";
    plateNumberIsSet_ = false;
    plateColor_ = "";
    plateColorIsSet_ = false;
    plateLocationIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
}

LicensePlateResult::~LicensePlateResult() = default;

void LicensePlateResult::validate()
{
}

web::json::value LicensePlateResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(plateNumberIsSet_) {
        val[utility::conversions::to_string_t("plate_number")] = ModelBase::toJson(plateNumber_);
    }
    if(plateColorIsSet_) {
        val[utility::conversions::to_string_t("plate_color")] = ModelBase::toJson(plateColor_);
    }
    if(plateLocationIsSet_) {
        val[utility::conversions::to_string_t("plate_location")] = ModelBase::toJson(plateLocation_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}

bool LicensePlateResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("plate_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plate_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlateNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plate_color"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plate_color"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlateColor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plate_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plate_location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlateLocation(refVal);
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
    return ok;
}


std::string LicensePlateResult::getPlateNumber() const
{
    return plateNumber_;
}

void LicensePlateResult::setPlateNumber(const std::string& value)
{
    plateNumber_ = value;
    plateNumberIsSet_ = true;
}

bool LicensePlateResult::plateNumberIsSet() const
{
    return plateNumberIsSet_;
}

void LicensePlateResult::unsetplateNumber()
{
    plateNumberIsSet_ = false;
}

std::string LicensePlateResult::getPlateColor() const
{
    return plateColor_;
}

void LicensePlateResult::setPlateColor(const std::string& value)
{
    plateColor_ = value;
    plateColorIsSet_ = true;
}

bool LicensePlateResult::plateColorIsSet() const
{
    return plateColorIsSet_;
}

void LicensePlateResult::unsetplateColor()
{
    plateColorIsSet_ = false;
}

std::vector<std::vector<int32_t>>& LicensePlateResult::getPlateLocation()
{
    return plateLocation_;
}

void LicensePlateResult::setPlateLocation(const std::vector<std::vector<int32_t>>& value)
{
    plateLocation_ = value;
    plateLocationIsSet_ = true;
}

bool LicensePlateResult::plateLocationIsSet() const
{
    return plateLocationIsSet_;
}

void LicensePlateResult::unsetplateLocation()
{
    plateLocationIsSet_ = false;
}

float LicensePlateResult::getConfidence() const
{
    return confidence_;
}

void LicensePlateResult::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool LicensePlateResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void LicensePlateResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


