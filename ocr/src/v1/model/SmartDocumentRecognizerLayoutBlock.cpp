

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerLayoutBlock.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerLayoutBlock::SmartDocumentRecognizerLayoutBlock()
{
    locationIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    text_ = "";
    textIsSet_ = false;
    wordsIdsIsSet_ = false;
    tableId_ = 0;
    tableIdIsSet_ = false;
    formId_ = 0;
    formIdIsSet_ = false;
    formulaId_ = 0;
    formulaIdIsSet_ = false;
}

SmartDocumentRecognizerLayoutBlock::~SmartDocumentRecognizerLayoutBlock() = default;

void SmartDocumentRecognizerLayoutBlock::validate()
{
}

web::json::value SmartDocumentRecognizerLayoutBlock::toJson() const
{
    web::json::value val = web::json::value::object();

    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }
    if(wordsIdsIsSet_) {
        val[utility::conversions::to_string_t("words_ids")] = ModelBase::toJson(wordsIds_);
    }
    if(tableIdIsSet_) {
        val[utility::conversions::to_string_t("table_id")] = ModelBase::toJson(tableId_);
    }
    if(formIdIsSet_) {
        val[utility::conversions::to_string_t("form_id")] = ModelBase::toJson(formId_);
    }
    if(formulaIdIsSet_) {
        val[utility::conversions::to_string_t("formula_id")] = ModelBase::toJson(formulaId_);
    }

    return val;
}
bool SmartDocumentRecognizerLayoutBlock::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("words_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("words_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWordsIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("form_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("form_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("formula_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("formula_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormulaId(refVal);
        }
    }
    return ok;
}


std::vector<std::vector<int32_t>>& SmartDocumentRecognizerLayoutBlock::getLocation()
{
    return location_;
}

void SmartDocumentRecognizerLayoutBlock::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool SmartDocumentRecognizerLayoutBlock::locationIsSet() const
{
    return locationIsSet_;
}

void SmartDocumentRecognizerLayoutBlock::unsetlocation()
{
    locationIsSet_ = false;
}

std::string SmartDocumentRecognizerLayoutBlock::getType() const
{
    return type_;
}

void SmartDocumentRecognizerLayoutBlock::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SmartDocumentRecognizerLayoutBlock::typeIsSet() const
{
    return typeIsSet_;
}

void SmartDocumentRecognizerLayoutBlock::unsettype()
{
    typeIsSet_ = false;
}

std::string SmartDocumentRecognizerLayoutBlock::getText() const
{
    return text_;
}

void SmartDocumentRecognizerLayoutBlock::setText(const std::string& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool SmartDocumentRecognizerLayoutBlock::textIsSet() const
{
    return textIsSet_;
}

void SmartDocumentRecognizerLayoutBlock::unsettext()
{
    textIsSet_ = false;
}

std::vector<int32_t>& SmartDocumentRecognizerLayoutBlock::getWordsIds()
{
    return wordsIds_;
}

void SmartDocumentRecognizerLayoutBlock::setWordsIds(std::vector<int32_t> value)
{
    wordsIds_ = value;
    wordsIdsIsSet_ = true;
}

bool SmartDocumentRecognizerLayoutBlock::wordsIdsIsSet() const
{
    return wordsIdsIsSet_;
}

void SmartDocumentRecognizerLayoutBlock::unsetwordsIds()
{
    wordsIdsIsSet_ = false;
}

int32_t SmartDocumentRecognizerLayoutBlock::getTableId() const
{
    return tableId_;
}

void SmartDocumentRecognizerLayoutBlock::setTableId(int32_t value)
{
    tableId_ = value;
    tableIdIsSet_ = true;
}

bool SmartDocumentRecognizerLayoutBlock::tableIdIsSet() const
{
    return tableIdIsSet_;
}

void SmartDocumentRecognizerLayoutBlock::unsettableId()
{
    tableIdIsSet_ = false;
}

int32_t SmartDocumentRecognizerLayoutBlock::getFormId() const
{
    return formId_;
}

void SmartDocumentRecognizerLayoutBlock::setFormId(int32_t value)
{
    formId_ = value;
    formIdIsSet_ = true;
}

bool SmartDocumentRecognizerLayoutBlock::formIdIsSet() const
{
    return formIdIsSet_;
}

void SmartDocumentRecognizerLayoutBlock::unsetformId()
{
    formIdIsSet_ = false;
}

int32_t SmartDocumentRecognizerLayoutBlock::getFormulaId() const
{
    return formulaId_;
}

void SmartDocumentRecognizerLayoutBlock::setFormulaId(int32_t value)
{
    formulaId_ = value;
    formulaIdIsSet_ = true;
}

bool SmartDocumentRecognizerLayoutBlock::formulaIdIsSet() const
{
    return formulaIdIsSet_;
}

void SmartDocumentRecognizerLayoutBlock::unsetformulaId()
{
    formulaIdIsSet_ = false;
}

}
}
}
}
}


