

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerOcrResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerOcrResult::SmartDocumentRecognizerOcrResult()
{
    direction_ = 0.0f;
    directionIsSet_ = false;
    wordsBlockCount_ = 0;
    wordsBlockCountIsSet_ = false;
    wordsBlockListIsSet_ = false;
}

SmartDocumentRecognizerOcrResult::~SmartDocumentRecognizerOcrResult() = default;

void SmartDocumentRecognizerOcrResult::validate()
{
}

web::json::value SmartDocumentRecognizerOcrResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(wordsBlockCountIsSet_) {
        val[utility::conversions::to_string_t("words_block_count")] = ModelBase::toJson(wordsBlockCount_);
    }
    if(wordsBlockListIsSet_) {
        val[utility::conversions::to_string_t("words_block_list")] = ModelBase::toJson(wordsBlockList_);
    }

    return val;
}
bool SmartDocumentRecognizerOcrResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
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
            std::vector<SmartDocumentRecognizerWordsBlockList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockList(refVal);
        }
    }
    return ok;
}


float SmartDocumentRecognizerOcrResult::getDirection() const
{
    return direction_;
}

void SmartDocumentRecognizerOcrResult::setDirection(float value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool SmartDocumentRecognizerOcrResult::directionIsSet() const
{
    return directionIsSet_;
}

void SmartDocumentRecognizerOcrResult::unsetdirection()
{
    directionIsSet_ = false;
}

int32_t SmartDocumentRecognizerOcrResult::getWordsBlockCount() const
{
    return wordsBlockCount_;
}

void SmartDocumentRecognizerOcrResult::setWordsBlockCount(int32_t value)
{
    wordsBlockCount_ = value;
    wordsBlockCountIsSet_ = true;
}

bool SmartDocumentRecognizerOcrResult::wordsBlockCountIsSet() const
{
    return wordsBlockCountIsSet_;
}

void SmartDocumentRecognizerOcrResult::unsetwordsBlockCount()
{
    wordsBlockCountIsSet_ = false;
}

std::vector<SmartDocumentRecognizerWordsBlockList>& SmartDocumentRecognizerOcrResult::getWordsBlockList()
{
    return wordsBlockList_;
}

void SmartDocumentRecognizerOcrResult::setWordsBlockList(const std::vector<SmartDocumentRecognizerWordsBlockList>& value)
{
    wordsBlockList_ = value;
    wordsBlockListIsSet_ = true;
}

bool SmartDocumentRecognizerOcrResult::wordsBlockListIsSet() const
{
    return wordsBlockListIsSet_;
}

void SmartDocumentRecognizerOcrResult::unsetwordsBlockList()
{
    wordsBlockListIsSet_ = false;
}

}
}
}
}
}


