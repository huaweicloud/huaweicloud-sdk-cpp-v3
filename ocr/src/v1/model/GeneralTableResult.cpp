

#include "huaweicloud/ocr/v1/model/GeneralTableResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




GeneralTableResult::GeneralTableResult()
{
    wordsRegionCount_ = 0;
    wordsRegionCountIsSet_ = false;
    wordsRegionListIsSet_ = false;
    excel_ = "";
    excelIsSet_ = false;
}

GeneralTableResult::~GeneralTableResult() = default;

void GeneralTableResult::validate()
{
}

web::json::value GeneralTableResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wordsRegionCountIsSet_) {
        val[utility::conversions::to_string_t("words_region_count")] = ModelBase::toJson(wordsRegionCount_);
    }
    if(wordsRegionListIsSet_) {
        val[utility::conversions::to_string_t("words_region_list")] = ModelBase::toJson(wordsRegionList_);
    }
    if(excelIsSet_) {
        val[utility::conversions::to_string_t("excel")] = ModelBase::toJson(excel_);
    }

    return val;
}
bool GeneralTableResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("words_region_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_region_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsRegionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("words_region_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_region_list"));
        if(!fieldValue.is_null())
        {
            std::vector<WordsRegionList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsRegionList(refVal);
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


int32_t GeneralTableResult::getWordsRegionCount() const
{
    return wordsRegionCount_;
}

void GeneralTableResult::setWordsRegionCount(int32_t value)
{
    wordsRegionCount_ = value;
    wordsRegionCountIsSet_ = true;
}

bool GeneralTableResult::wordsRegionCountIsSet() const
{
    return wordsRegionCountIsSet_;
}

void GeneralTableResult::unsetwordsRegionCount()
{
    wordsRegionCountIsSet_ = false;
}

std::vector<WordsRegionList>& GeneralTableResult::getWordsRegionList()
{
    return wordsRegionList_;
}

void GeneralTableResult::setWordsRegionList(const std::vector<WordsRegionList>& value)
{
    wordsRegionList_ = value;
    wordsRegionListIsSet_ = true;
}

bool GeneralTableResult::wordsRegionListIsSet() const
{
    return wordsRegionListIsSet_;
}

void GeneralTableResult::unsetwordsRegionList()
{
    wordsRegionListIsSet_ = false;
}

std::string GeneralTableResult::getExcel() const
{
    return excel_;
}

void GeneralTableResult::setExcel(const std::string& value)
{
    excel_ = value;
    excelIsSet_ = true;
}

bool GeneralTableResult::excelIsSet() const
{
    return excelIsSet_;
}

void GeneralTableResult::unsetexcel()
{
    excelIsSet_ = false;
}

}
}
}
}
}


