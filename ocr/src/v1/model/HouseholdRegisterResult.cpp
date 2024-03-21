

#include "huaweicloud/ocr/v1/model/HouseholdRegisterResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




HouseholdRegisterResult::HouseholdRegisterResult()
{
    type_ = "";
    typeIsSet_ = false;
    locationIsSet_ = false;
    contentIsSet_ = false;
    confidenceIsSet_ = false;
}

HouseholdRegisterResult::~HouseholdRegisterResult() = default;

void HouseholdRegisterResult::validate()
{
}

web::json::value HouseholdRegisterResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool HouseholdRegisterResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            HouseholdRegisterContent refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, float> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


std::string HouseholdRegisterResult::getType() const
{
    return type_;
}

void HouseholdRegisterResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool HouseholdRegisterResult::typeIsSet() const
{
    return typeIsSet_;
}

void HouseholdRegisterResult::unsettype()
{
    typeIsSet_ = false;
}

std::vector<std::vector<int32_t>>& HouseholdRegisterResult::getLocation()
{
    return location_;
}

void HouseholdRegisterResult::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool HouseholdRegisterResult::locationIsSet() const
{
    return locationIsSet_;
}

void HouseholdRegisterResult::unsetlocation()
{
    locationIsSet_ = false;
}

HouseholdRegisterContent HouseholdRegisterResult::getContent() const
{
    return content_;
}

void HouseholdRegisterResult::setContent(const HouseholdRegisterContent& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool HouseholdRegisterResult::contentIsSet() const
{
    return contentIsSet_;
}

void HouseholdRegisterResult::unsetcontent()
{
    contentIsSet_ = false;
}

std::map<std::string, float>& HouseholdRegisterResult::getConfidence()
{
    return confidence_;
}

void HouseholdRegisterResult::setConfidence(std::map<std::string, float> value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool HouseholdRegisterResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void HouseholdRegisterResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


