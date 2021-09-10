

#include "huaweicloud/ocr/v1/model/GeneralTableWordsBlockList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




GeneralTableWordsBlockList::GeneralTableWordsBlockList()
{
    words_ = "";
    wordsIsSet_ = false;
    wordsListIsSet_ = false;
    rowsIsSet_ = false;
    columnsIsSet_ = false;
    locationIsSet_ = false;
    cellLocationIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
    excel_ = "";
    excelIsSet_ = false;
}

GeneralTableWordsBlockList::~GeneralTableWordsBlockList() = default;

void GeneralTableWordsBlockList::validate()
{
}

web::json::value GeneralTableWordsBlockList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wordsIsSet_) {
        val[utility::conversions::to_string_t("words")] = ModelBase::toJson(words_);
    }
    if(wordsListIsSet_) {
        val[utility::conversions::to_string_t("words_list")] = ModelBase::toJson(wordsList_);
    }
    if(rowsIsSet_) {
        val[utility::conversions::to_string_t("rows")] = ModelBase::toJson(rows_);
    }
    if(columnsIsSet_) {
        val[utility::conversions::to_string_t("columns")] = ModelBase::toJson(columns_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(cellLocationIsSet_) {
        val[utility::conversions::to_string_t("cell_location")] = ModelBase::toJson(cellLocation_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(excelIsSet_) {
        val[utility::conversions::to_string_t("excel")] = ModelBase::toJson(excel_);
    }

    return val;
}

bool GeneralTableWordsBlockList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("words_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_list"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rows"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("columns"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("columns"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumns(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cell_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cell_location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCellLocation(refVal);
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


std::string GeneralTableWordsBlockList::getWords() const
{
    return words_;
}

void GeneralTableWordsBlockList::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool GeneralTableWordsBlockList::wordsIsSet() const
{
    return wordsIsSet_;
}

void GeneralTableWordsBlockList::unsetwords()
{
    wordsIsSet_ = false;
}

std::vector<Object>& GeneralTableWordsBlockList::getWordsList()
{
    return wordsList_;
}

void GeneralTableWordsBlockList::setWordsList(const std::vector<Object>& value)
{
    wordsList_ = value;
    wordsListIsSet_ = true;
}

bool GeneralTableWordsBlockList::wordsListIsSet() const
{
    return wordsListIsSet_;
}

void GeneralTableWordsBlockList::unsetwordsList()
{
    wordsListIsSet_ = false;
}

std::vector<int32_t>& GeneralTableWordsBlockList::getRows()
{
    return rows_;
}

void GeneralTableWordsBlockList::setRows(std::vector<int32_t> value)
{
    rows_ = value;
    rowsIsSet_ = true;
}

bool GeneralTableWordsBlockList::rowsIsSet() const
{
    return rowsIsSet_;
}

void GeneralTableWordsBlockList::unsetrows()
{
    rowsIsSet_ = false;
}

std::vector<int32_t>& GeneralTableWordsBlockList::getColumns()
{
    return columns_;
}

void GeneralTableWordsBlockList::setColumns(std::vector<int32_t> value)
{
    columns_ = value;
    columnsIsSet_ = true;
}

bool GeneralTableWordsBlockList::columnsIsSet() const
{
    return columnsIsSet_;
}

void GeneralTableWordsBlockList::unsetcolumns()
{
    columnsIsSet_ = false;
}

std::vector<std::vector<int32_t>>& GeneralTableWordsBlockList::getLocation()
{
    return location_;
}

void GeneralTableWordsBlockList::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool GeneralTableWordsBlockList::locationIsSet() const
{
    return locationIsSet_;
}

void GeneralTableWordsBlockList::unsetlocation()
{
    locationIsSet_ = false;
}

std::vector<std::vector<int32_t>>& GeneralTableWordsBlockList::getCellLocation()
{
    return cellLocation_;
}

void GeneralTableWordsBlockList::setCellLocation(const std::vector<std::vector<int32_t>>& value)
{
    cellLocation_ = value;
    cellLocationIsSet_ = true;
}

bool GeneralTableWordsBlockList::cellLocationIsSet() const
{
    return cellLocationIsSet_;
}

void GeneralTableWordsBlockList::unsetcellLocation()
{
    cellLocationIsSet_ = false;
}

float GeneralTableWordsBlockList::getConfidence() const
{
    return confidence_;
}

void GeneralTableWordsBlockList::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool GeneralTableWordsBlockList::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void GeneralTableWordsBlockList::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::string GeneralTableWordsBlockList::getExcel() const
{
    return excel_;
}

void GeneralTableWordsBlockList::setExcel(const std::string& value)
{
    excel_ = value;
    excelIsSet_ = true;
}

bool GeneralTableWordsBlockList::excelIsSet() const
{
    return excelIsSet_;
}

void GeneralTableWordsBlockList::unsetexcel()
{
    excelIsSet_ = false;
}

}
}
}
}
}


