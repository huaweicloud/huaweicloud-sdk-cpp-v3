

#include "huaweicloud/ocr/v1/model/FinancialStatementWordsBlockList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




FinancialStatementWordsBlockList::FinancialStatementWordsBlockList()
{
    words_ = "";
    wordsIsSet_ = false;
    locationIsSet_ = false;
    confidence_ = 0.0f;
    confidenceIsSet_ = false;
    rowsIsSet_ = false;
    columnsIsSet_ = false;
    cellLocationIsSet_ = false;
}

FinancialStatementWordsBlockList::~FinancialStatementWordsBlockList() = default;

void FinancialStatementWordsBlockList::validate()
{
}

web::json::value FinancialStatementWordsBlockList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wordsIsSet_) {
        val[utility::conversions::to_string_t("words")] = ModelBase::toJson(words_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(rowsIsSet_) {
        val[utility::conversions::to_string_t("rows")] = ModelBase::toJson(rows_);
    }
    if(columnsIsSet_) {
        val[utility::conversions::to_string_t("columns")] = ModelBase::toJson(columns_);
    }
    if(cellLocationIsSet_) {
        val[utility::conversions::to_string_t("cell_location")] = ModelBase::toJson(cellLocation_);
    }

    return val;
}

bool FinancialStatementWordsBlockList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cell_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cell_location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCellLocation(refVal);
        }
    }
    return ok;
}


std::string FinancialStatementWordsBlockList::getWords() const
{
    return words_;
}

void FinancialStatementWordsBlockList::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool FinancialStatementWordsBlockList::wordsIsSet() const
{
    return wordsIsSet_;
}

void FinancialStatementWordsBlockList::unsetwords()
{
    wordsIsSet_ = false;
}

std::vector<std::vector<int32_t>>& FinancialStatementWordsBlockList::getLocation()
{
    return location_;
}

void FinancialStatementWordsBlockList::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool FinancialStatementWordsBlockList::locationIsSet() const
{
    return locationIsSet_;
}

void FinancialStatementWordsBlockList::unsetlocation()
{
    locationIsSet_ = false;
}

float FinancialStatementWordsBlockList::getConfidence() const
{
    return confidence_;
}

void FinancialStatementWordsBlockList::setConfidence(float value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool FinancialStatementWordsBlockList::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void FinancialStatementWordsBlockList::unsetconfidence()
{
    confidenceIsSet_ = false;
}

std::vector<int32_t>& FinancialStatementWordsBlockList::getRows()
{
    return rows_;
}

void FinancialStatementWordsBlockList::setRows(std::vector<int32_t> value)
{
    rows_ = value;
    rowsIsSet_ = true;
}

bool FinancialStatementWordsBlockList::rowsIsSet() const
{
    return rowsIsSet_;
}

void FinancialStatementWordsBlockList::unsetrows()
{
    rowsIsSet_ = false;
}

std::vector<int32_t>& FinancialStatementWordsBlockList::getColumns()
{
    return columns_;
}

void FinancialStatementWordsBlockList::setColumns(std::vector<int32_t> value)
{
    columns_ = value;
    columnsIsSet_ = true;
}

bool FinancialStatementWordsBlockList::columnsIsSet() const
{
    return columnsIsSet_;
}

void FinancialStatementWordsBlockList::unsetcolumns()
{
    columnsIsSet_ = false;
}

std::vector<std::vector<int32_t>>& FinancialStatementWordsBlockList::getCellLocation()
{
    return cellLocation_;
}

void FinancialStatementWordsBlockList::setCellLocation(const std::vector<std::vector<int32_t>>& value)
{
    cellLocation_ = value;
    cellLocationIsSet_ = true;
}

bool FinancialStatementWordsBlockList::cellLocationIsSet() const
{
    return cellLocationIsSet_;
}

void FinancialStatementWordsBlockList::unsetcellLocation()
{
    cellLocationIsSet_ = false;
}

}
}
}
}
}


