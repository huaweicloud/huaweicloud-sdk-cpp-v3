

#include "huaweicloud/ocr/v1/model/SealList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SealList::SealList()
{
    type_ = "";
    typeIsSet_ = false;
    sealImage_ = "";
    sealImageIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
    locationIsSet_ = false;
    wordsBlockListIsSet_ = false;
}

SealList::~SealList() = default;

void SealList::validate()
{
}

web::json::value SealList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sealImageIsSet_) {
        val[utility::conversions::to_string_t("seal_image")] = ModelBase::toJson(sealImage_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(wordsBlockListIsSet_) {
        val[utility::conversions::to_string_t("words_block_list")] = ModelBase::toJson(wordsBlockList_);
    }

    return val;
}
bool SealList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("seal_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seal_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSealImage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("words_block_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_block_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SealWordsBlockList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockList(refVal);
        }
    }
    return ok;
}


std::string SealList::getType() const
{
    return type_;
}

void SealList::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SealList::typeIsSet() const
{
    return typeIsSet_;
}

void SealList::unsettype()
{
    typeIsSet_ = false;
}

std::string SealList::getSealImage() const
{
    return sealImage_;
}

void SealList::setSealImage(const std::string& value)
{
    sealImage_ = value;
    sealImageIsSet_ = true;
}

bool SealList::sealImageIsSet() const
{
    return sealImageIsSet_;
}

void SealList::unsetsealImage()
{
    sealImageIsSet_ = false;
}

float SealList::getConfidence() const
{
    return confidence_;
}

void SealList::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool SealList::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void SealList::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::vector<std::vector<int32_t>>& SealList::getLocation()
{
    return location_;
}

void SealList::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool SealList::locationIsSet() const
{
    return locationIsSet_;
}

void SealList::unsetlocation()
{
    locationIsSet_ = false;
}

std::vector<SealWordsBlockList>& SealList::getWordsBlockList()
{
    return wordsBlockList_;
}

void SealList::setWordsBlockList(const std::vector<SealWordsBlockList>& value)
{
    wordsBlockList_ = value;
    wordsBlockListIsSet_ = true;
}

bool SealList::wordsBlockListIsSet() const
{
    return wordsBlockListIsSet_;
}

void SealList::unsetwordsBlockList()
{
    wordsBlockListIsSet_ = false;
}

}
}
}
}
}


