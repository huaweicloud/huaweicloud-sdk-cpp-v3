

#include "huaweicloud/ocr/v1/model/GeneralTextResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




GeneralTextResult::GeneralTextResult()
{
    direction_ = 0.0f;
    directionIsSet_ = false;
    wordsBlockCount_ = 0;
    wordsBlockCountIsSet_ = false;
    wordsBlockListIsSet_ = false;
}

GeneralTextResult::~GeneralTextResult() = default;

void GeneralTextResult::validate()
{
}

web::json::value GeneralTextResult::toJson() const
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
bool GeneralTextResult::fromJson(const web::json::value& val)
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
            std::vector<GeneralTextWordsBlockList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockList(refVal);
        }
    }
    return ok;
}


float GeneralTextResult::getDirection() const
{
    return direction_;
}

void GeneralTextResult::setDirection(float value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool GeneralTextResult::directionIsSet() const
{
    return directionIsSet_;
}

void GeneralTextResult::unsetdirection()
{
    directionIsSet_ = false;
}

int32_t GeneralTextResult::getWordsBlockCount() const
{
    return wordsBlockCount_;
}

void GeneralTextResult::setWordsBlockCount(int32_t value)
{
    wordsBlockCount_ = value;
    wordsBlockCountIsSet_ = true;
}

bool GeneralTextResult::wordsBlockCountIsSet() const
{
    return wordsBlockCountIsSet_;
}

void GeneralTextResult::unsetwordsBlockCount()
{
    wordsBlockCountIsSet_ = false;
}

std::vector<GeneralTextWordsBlockList>& GeneralTextResult::getWordsBlockList()
{
    return wordsBlockList_;
}

void GeneralTextResult::setWordsBlockList(const std::vector<GeneralTextWordsBlockList>& value)
{
    wordsBlockList_ = value;
    wordsBlockListIsSet_ = true;
}

bool GeneralTextResult::wordsBlockListIsSet() const
{
    return wordsBlockListIsSet_;
}

void GeneralTextResult::unsetwordsBlockList()
{
    wordsBlockListIsSet_ = false;
}

}
}
}
}
}


