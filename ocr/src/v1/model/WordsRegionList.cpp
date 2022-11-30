

#include "huaweicloud/ocr/v1/model/WordsRegionList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




WordsRegionList::WordsRegionList()
{
    type_ = "";
    typeIsSet_ = false;
    wordsBlockCount_ = 0;
    wordsBlockCountIsSet_ = false;
    wordsBlockListIsSet_ = false;
}

WordsRegionList::~WordsRegionList() = default;

void WordsRegionList::validate()
{
}

web::json::value WordsRegionList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(wordsBlockCountIsSet_) {
        val[utility::conversions::to_string_t("words_block_count")] = ModelBase::toJson(wordsBlockCount_);
    }
    if(wordsBlockListIsSet_) {
        val[utility::conversions::to_string_t("words_block_list")] = ModelBase::toJson(wordsBlockList_);
    }

    return val;
}

bool WordsRegionList::fromJson(const web::json::value& val)
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
            std::vector<GeneralTableWordsBlockList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockList(refVal);
        }
    }
    return ok;
}


std::string WordsRegionList::getType() const
{
    return type_;
}

void WordsRegionList::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool WordsRegionList::typeIsSet() const
{
    return typeIsSet_;
}

void WordsRegionList::unsettype()
{
    typeIsSet_ = false;
}

int32_t WordsRegionList::getWordsBlockCount() const
{
    return wordsBlockCount_;
}

void WordsRegionList::setWordsBlockCount(int32_t value)
{
    wordsBlockCount_ = value;
    wordsBlockCountIsSet_ = true;
}

bool WordsRegionList::wordsBlockCountIsSet() const
{
    return wordsBlockCountIsSet_;
}

void WordsRegionList::unsetwordsBlockCount()
{
    wordsBlockCountIsSet_ = false;
}

std::vector<GeneralTableWordsBlockList>& WordsRegionList::getWordsBlockList()
{
    return wordsBlockList_;
}

void WordsRegionList::setWordsBlockList(const std::vector<GeneralTableWordsBlockList>& value)
{
    wordsBlockList_ = value;
    wordsBlockListIsSet_ = true;
}

bool WordsRegionList::wordsBlockListIsSet() const
{
    return wordsBlockListIsSet_;
}

void WordsRegionList::unsetwordsBlockList()
{
    wordsBlockListIsSet_ = false;
}

}
}
}
}
}


