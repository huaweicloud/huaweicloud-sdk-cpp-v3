

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
    wordsBlockCount_ = 0;
    wordsBlockCountIsSet_ = false;
    wordsBlockListIsSet_ = false;
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
    if(wordsBlockCountIsSet_) {
        val[utility::conversions::to_string_t("words_block_count")] = ModelBase::toJson(wordsBlockCount_);
    }
    if(wordsBlockListIsSet_) {
        val[utility::conversions::to_string_t("words_block_list")] = ModelBase::toJson(wordsBlockList_);
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
    if(val.has_field(utility::conversions::to_string_t("words_block_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_block_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("words_block_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_block_list"));
        if(!fieldValue.is_null())
        {
            std::vector<HealthCodeWordsBlockList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockList(refVal);
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

int32_t HealthCodeResult::getWordsBlockCount() const
{
    return wordsBlockCount_;
}

void HealthCodeResult::setWordsBlockCount(int32_t value)
{
    wordsBlockCount_ = value;
    wordsBlockCountIsSet_ = true;
}

bool HealthCodeResult::wordsBlockCountIsSet() const
{
    return wordsBlockCountIsSet_;
}

void HealthCodeResult::unsetwordsBlockCount()
{
    wordsBlockCountIsSet_ = false;
}

std::vector<HealthCodeWordsBlockList>& HealthCodeResult::getWordsBlockList()
{
    return wordsBlockList_;
}

void HealthCodeResult::setWordsBlockList(const std::vector<HealthCodeWordsBlockList>& value)
{
    wordsBlockList_ = value;
    wordsBlockListIsSet_ = true;
}

bool HealthCodeResult::wordsBlockListIsSet() const
{
    return wordsBlockListIsSet_;
}

void HealthCodeResult::unsetwordsBlockList()
{
    wordsBlockListIsSet_ = false;
}

}
}
}
}
}


