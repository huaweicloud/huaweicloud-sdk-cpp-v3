

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerTableBlock.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerTableBlock::SmartDocumentRecognizerTableBlock()
{
    locationIsSet_ = false;
    wordsBlockCount_ = 0;
    wordsBlockCountIsSet_ = false;
    wordsBlockListIsSet_ = false;
    excel_ = "";
    excelIsSet_ = false;
}

SmartDocumentRecognizerTableBlock::~SmartDocumentRecognizerTableBlock() = default;

void SmartDocumentRecognizerTableBlock::validate()
{
}

web::json::value SmartDocumentRecognizerTableBlock::toJson() const
{
    web::json::value val = web::json::value::object();

    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(wordsBlockCountIsSet_) {
        val[utility::conversions::to_string_t("words_block_count")] = ModelBase::toJson(wordsBlockCount_);
    }
    if(wordsBlockListIsSet_) {
        val[utility::conversions::to_string_t("words_block_list")] = ModelBase::toJson(wordsBlockList_);
    }
    if(excelIsSet_) {
        val[utility::conversions::to_string_t("excel")] = ModelBase::toJson(excel_);
    }

    return val;
}

bool SmartDocumentRecognizerTableBlock::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
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
            std::vector<SmartDocumentRecognizerTableWordsBlock> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("excel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("excel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExcel(refVal);
        }
    }
    return ok;
}

std::vector<std::vector<int32_t>>& SmartDocumentRecognizerTableBlock::getLocation()
{
    return location_;
}

void SmartDocumentRecognizerTableBlock::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool SmartDocumentRecognizerTableBlock::locationIsSet() const
{
    return locationIsSet_;
}

void SmartDocumentRecognizerTableBlock::unsetlocation()
{
    locationIsSet_ = false;
}

int32_t SmartDocumentRecognizerTableBlock::getWordsBlockCount() const
{
    return wordsBlockCount_;
}

void SmartDocumentRecognizerTableBlock::setWordsBlockCount(int32_t value)
{
    wordsBlockCount_ = value;
    wordsBlockCountIsSet_ = true;
}

bool SmartDocumentRecognizerTableBlock::wordsBlockCountIsSet() const
{
    return wordsBlockCountIsSet_;
}

void SmartDocumentRecognizerTableBlock::unsetwordsBlockCount()
{
    wordsBlockCountIsSet_ = false;
}

std::vector<SmartDocumentRecognizerTableWordsBlock>& SmartDocumentRecognizerTableBlock::getWordsBlockList()
{
    return wordsBlockList_;
}

void SmartDocumentRecognizerTableBlock::setWordsBlockList(const std::vector<SmartDocumentRecognizerTableWordsBlock>& value)
{
    wordsBlockList_ = value;
    wordsBlockListIsSet_ = true;
}

bool SmartDocumentRecognizerTableBlock::wordsBlockListIsSet() const
{
    return wordsBlockListIsSet_;
}

void SmartDocumentRecognizerTableBlock::unsetwordsBlockList()
{
    wordsBlockListIsSet_ = false;
}

std::string SmartDocumentRecognizerTableBlock::getExcel() const
{
    return excel_;
}

void SmartDocumentRecognizerTableBlock::setExcel(const std::string& value)
{
    excel_ = value;
    excelIsSet_ = true;
}

bool SmartDocumentRecognizerTableBlock::excelIsSet() const
{
    return excelIsSet_;
}

void SmartDocumentRecognizerTableBlock::unsetexcel()
{
    excelIsSet_ = false;
}

}
}
}
}
}


