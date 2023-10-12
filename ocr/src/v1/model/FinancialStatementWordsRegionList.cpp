

#include "huaweicloud/ocr/v1/model/FinancialStatementWordsRegionList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




FinancialStatementWordsRegionList::FinancialStatementWordsRegionList()
{
    type_ = "";
    typeIsSet_ = false;
    wordsBlockCount_ = 0.0f;
    wordsBlockCountIsSet_ = false;
    tableLocationIsSet_ = false;
    wordsBlockListIsSet_ = false;
}

FinancialStatementWordsRegionList::~FinancialStatementWordsRegionList() = default;

void FinancialStatementWordsRegionList::validate()
{
}

web::json::value FinancialStatementWordsRegionList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(wordsBlockCountIsSet_) {
        val[utility::conversions::to_string_t("words_block_count")] = ModelBase::toJson(wordsBlockCount_);
    }
    if(tableLocationIsSet_) {
        val[utility::conversions::to_string_t("table_location")] = ModelBase::toJson(tableLocation_);
    }
    if(wordsBlockListIsSet_) {
        val[utility::conversions::to_string_t("words_block_list")] = ModelBase::toJson(wordsBlockList_);
    }

    return val;
}
bool FinancialStatementWordsRegionList::fromJson(const web::json::value& val)
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
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("words_block_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_block_list"));
        if(!fieldValue.is_null())
        {
            std::vector<FinancialStatementWordsBlockList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsBlockList(refVal);
        }
    }
    return ok;
}


std::string FinancialStatementWordsRegionList::getType() const
{
    return type_;
}

void FinancialStatementWordsRegionList::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool FinancialStatementWordsRegionList::typeIsSet() const
{
    return typeIsSet_;
}

void FinancialStatementWordsRegionList::unsettype()
{
    typeIsSet_ = false;
}

float FinancialStatementWordsRegionList::getWordsBlockCount() const
{
    return wordsBlockCount_;
}

void FinancialStatementWordsRegionList::setWordsBlockCount(float value)
{
    wordsBlockCount_ = value;
    wordsBlockCountIsSet_ = true;
}

bool FinancialStatementWordsRegionList::wordsBlockCountIsSet() const
{
    return wordsBlockCountIsSet_;
}

void FinancialStatementWordsRegionList::unsetwordsBlockCount()
{
    wordsBlockCountIsSet_ = false;
}

std::vector<std::vector<int32_t>>& FinancialStatementWordsRegionList::getTableLocation()
{
    return tableLocation_;
}

void FinancialStatementWordsRegionList::setTableLocation(const std::vector<std::vector<int32_t>>& value)
{
    tableLocation_ = value;
    tableLocationIsSet_ = true;
}

bool FinancialStatementWordsRegionList::tableLocationIsSet() const
{
    return tableLocationIsSet_;
}

void FinancialStatementWordsRegionList::unsettableLocation()
{
    tableLocationIsSet_ = false;
}

std::vector<FinancialStatementWordsBlockList>& FinancialStatementWordsRegionList::getWordsBlockList()
{
    return wordsBlockList_;
}

void FinancialStatementWordsRegionList::setWordsBlockList(const std::vector<FinancialStatementWordsBlockList>& value)
{
    wordsBlockList_ = value;
    wordsBlockListIsSet_ = true;
}

bool FinancialStatementWordsRegionList::wordsBlockListIsSet() const
{
    return wordsBlockListIsSet_;
}

void FinancialStatementWordsRegionList::unsetwordsBlockList()
{
    wordsBlockListIsSet_ = false;
}

}
}
}
}
}


