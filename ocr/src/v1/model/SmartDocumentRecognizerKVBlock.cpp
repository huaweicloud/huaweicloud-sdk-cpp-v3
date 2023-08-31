

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerKVBlock.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerKVBlock::SmartDocumentRecognizerKVBlock()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    wordsBlockCount_ = 0;
    wordsBlockCountIsSet_ = false;
    wordsBlockListIsSet_ = false;
}

SmartDocumentRecognizerKVBlock::~SmartDocumentRecognizerKVBlock() = default;

void SmartDocumentRecognizerKVBlock::validate()
{
}

web::json::value SmartDocumentRecognizerKVBlock::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(wordsBlockCountIsSet_) {
        val[utility::conversions::to_string_t("words_block_count")] = ModelBase::toJson(wordsBlockCount_);
    }
    if(wordsBlockListIsSet_) {
        val[utility::conversions::to_string_t("words_block_list")] = ModelBase::toJson(wordsBlockList_);
    }

    return val;
}

bool SmartDocumentRecognizerKVBlock::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
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
            std::vector<SmartDocumentRecognizerKVWordsBlock> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockList(refVal);
        }
    }
    return ok;
}

std::string SmartDocumentRecognizerKVBlock::getKey() const
{
    return key_;
}

void SmartDocumentRecognizerKVBlock::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool SmartDocumentRecognizerKVBlock::keyIsSet() const
{
    return keyIsSet_;
}

void SmartDocumentRecognizerKVBlock::unsetkey()
{
    keyIsSet_ = false;
}

std::string SmartDocumentRecognizerKVBlock::getValue() const
{
    return value_;
}

void SmartDocumentRecognizerKVBlock::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool SmartDocumentRecognizerKVBlock::valueIsSet() const
{
    return valueIsSet_;
}

void SmartDocumentRecognizerKVBlock::unsetvalue()
{
    valueIsSet_ = false;
}

int32_t SmartDocumentRecognizerKVBlock::getWordsBlockCount() const
{
    return wordsBlockCount_;
}

void SmartDocumentRecognizerKVBlock::setWordsBlockCount(int32_t value)
{
    wordsBlockCount_ = value;
    wordsBlockCountIsSet_ = true;
}

bool SmartDocumentRecognizerKVBlock::wordsBlockCountIsSet() const
{
    return wordsBlockCountIsSet_;
}

void SmartDocumentRecognizerKVBlock::unsetwordsBlockCount()
{
    wordsBlockCountIsSet_ = false;
}

std::vector<SmartDocumentRecognizerKVWordsBlock>& SmartDocumentRecognizerKVBlock::getWordsBlockList()
{
    return wordsBlockList_;
}

void SmartDocumentRecognizerKVBlock::setWordsBlockList(const std::vector<SmartDocumentRecognizerKVWordsBlock>& value)
{
    wordsBlockList_ = value;
    wordsBlockListIsSet_ = true;
}

bool SmartDocumentRecognizerKVBlock::wordsBlockListIsSet() const
{
    return wordsBlockListIsSet_;
}

void SmartDocumentRecognizerKVBlock::unsetwordsBlockList()
{
    wordsBlockListIsSet_ = false;
}

}
}
}
}
}


