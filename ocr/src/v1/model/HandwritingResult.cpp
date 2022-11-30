

#include "huaweicloud/ocr/v1/model/HandwritingResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




HandwritingResult::HandwritingResult()
{
    wordsBlockCount_ = 0;
    wordsBlockCountIsSet_ = false;
    wordsBlockListIsSet_ = false;
}

HandwritingResult::~HandwritingResult() = default;

void HandwritingResult::validate()
{
}

web::json::value HandwritingResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wordsBlockCountIsSet_) {
        val[utility::conversions::to_string_t("words_block_count")] = ModelBase::toJson(wordsBlockCount_);
    }
    if(wordsBlockListIsSet_) {
        val[utility::conversions::to_string_t("words_block_list")] = ModelBase::toJson(wordsBlockList_);
    }

    return val;
}

bool HandwritingResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<HandwritingWordsBlockList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockList(refVal);
        }
    }
    return ok;
}


int32_t HandwritingResult::getWordsBlockCount() const
{
    return wordsBlockCount_;
}

void HandwritingResult::setWordsBlockCount(int32_t value)
{
    wordsBlockCount_ = value;
    wordsBlockCountIsSet_ = true;
}

bool HandwritingResult::wordsBlockCountIsSet() const
{
    return wordsBlockCountIsSet_;
}

void HandwritingResult::unsetwordsBlockCount()
{
    wordsBlockCountIsSet_ = false;
}

std::vector<HandwritingWordsBlockList>& HandwritingResult::getWordsBlockList()
{
    return wordsBlockList_;
}

void HandwritingResult::setWordsBlockList(const std::vector<HandwritingWordsBlockList>& value)
{
    wordsBlockList_ = value;
    wordsBlockListIsSet_ = true;
}

bool HandwritingResult::wordsBlockListIsSet() const
{
    return wordsBlockListIsSet_;
}

void HandwritingResult::unsetwordsBlockList()
{
    wordsBlockListIsSet_ = false;
}

}
}
}
}
}


