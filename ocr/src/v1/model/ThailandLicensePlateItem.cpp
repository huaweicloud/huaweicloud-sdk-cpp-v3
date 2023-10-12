

#include "huaweicloud/ocr/v1/model/ThailandLicensePlateItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ThailandLicensePlateItem::ThailandLicensePlateItem()
{
    plateNumber_ = "";
    plateNumberIsSet_ = false;
    plateLocationIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
}

ThailandLicensePlateItem::~ThailandLicensePlateItem() = default;

void ThailandLicensePlateItem::validate()
{
}

web::json::value ThailandLicensePlateItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(plateNumberIsSet_) {
        val[utility::conversions::to_string_t("plate_number")] = ModelBase::toJson(plateNumber_);
    }
    if(plateLocationIsSet_) {
        val[utility::conversions::to_string_t("plate_location")] = ModelBase::toJson(plateLocation_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool ThailandLicensePlateItem::fromJson(const web::json::value& val)
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


std::string ThailandLicensePlateItem::getPlateNumber() const
{
    return plateNumber_;
}

void ThailandLicensePlateItem::setPlateNumber(const std::string& value)
{
    plateNumber_ = value;
    plateNumberIsSet_ = true;
}

bool ThailandLicensePlateItem::plateNumberIsSet() const
{
    return plateNumberIsSet_;
}

void ThailandLicensePlateItem::unsetplateNumber()
{
    plateNumberIsSet_ = false;
}

std::vector<std::vector<int32_t>>& ThailandLicensePlateItem::getPlateLocation()
{
    return plateLocation_;
}

void ThailandLicensePlateItem::setPlateLocation(const std::vector<std::vector<int32_t>>& value)
{
    plateLocation_ = value;
    plateLocationIsSet_ = true;
}

bool ThailandLicensePlateItem::plateLocationIsSet() const
{
    return plateLocationIsSet_;
}

void ThailandLicensePlateItem::unsetplateLocation()
{
    plateLocationIsSet_ = false;
}

float ThailandLicensePlateItem::getConfidence() const
{
    return confidence_;
}

void ThailandLicensePlateItem::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool ThailandLicensePlateItem::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void ThailandLicensePlateItem::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


