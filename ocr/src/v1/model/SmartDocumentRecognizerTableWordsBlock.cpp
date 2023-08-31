

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerTableWordsBlock.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerTableWordsBlock::SmartDocumentRecognizerTableWordsBlock()
{
    words_ = "";
    wordsIsSet_ = false;
    rowsIsSet_ = false;
    columnsIsSet_ = false;
}

SmartDocumentRecognizerTableWordsBlock::~SmartDocumentRecognizerTableWordsBlock() = default;

void SmartDocumentRecognizerTableWordsBlock::validate()
{
}

web::json::value SmartDocumentRecognizerTableWordsBlock::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wordsIsSet_) {
        val[utility::conversions::to_string_t("words")] = ModelBase::toJson(words_);
    }
    if(rowsIsSet_) {
        val[utility::conversions::to_string_t("rows")] = ModelBase::toJson(rows_);
    }
    if(columnsIsSet_) {
        val[utility::conversions::to_string_t("columns")] = ModelBase::toJson(columns_);
    }

    return val;
}

bool SmartDocumentRecognizerTableWordsBlock::fromJson(const web::json::value& val)
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
    return ok;
}

std::string SmartDocumentRecognizerTableWordsBlock::getWords() const
{
    return words_;
}

void SmartDocumentRecognizerTableWordsBlock::setWords(const std::string& value)
{
    words_ = value;
    wordsIsSet_ = true;
}

bool SmartDocumentRecognizerTableWordsBlock::wordsIsSet() const
{
    return wordsIsSet_;
}

void SmartDocumentRecognizerTableWordsBlock::unsetwords()
{
    wordsIsSet_ = false;
}

std::vector<int32_t>& SmartDocumentRecognizerTableWordsBlock::getRows()
{
    return rows_;
}

void SmartDocumentRecognizerTableWordsBlock::setRows(std::vector<int32_t> value)
{
    rows_ = value;
    rowsIsSet_ = true;
}

bool SmartDocumentRecognizerTableWordsBlock::rowsIsSet() const
{
    return rowsIsSet_;
}

void SmartDocumentRecognizerTableWordsBlock::unsetrows()
{
    rowsIsSet_ = false;
}

std::vector<int32_t>& SmartDocumentRecognizerTableWordsBlock::getColumns()
{
    return columns_;
}

void SmartDocumentRecognizerTableWordsBlock::setColumns(std::vector<int32_t> value)
{
    columns_ = value;
    columnsIsSet_ = true;
}

bool SmartDocumentRecognizerTableWordsBlock::columnsIsSet() const
{
    return columnsIsSet_;
}

void SmartDocumentRecognizerTableWordsBlock::unsetcolumns()
{
    columnsIsSet_ = false;
}

}
}
}
}
}


