

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerFormulaBlock.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerFormulaBlock::SmartDocumentRecognizerFormulaBlock()
{
    formula_ = "";
    formulaIsSet_ = false;
    locationIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

SmartDocumentRecognizerFormulaBlock::~SmartDocumentRecognizerFormulaBlock() = default;

void SmartDocumentRecognizerFormulaBlock::validate()
{
}

web::json::value SmartDocumentRecognizerFormulaBlock::toJson() const
{
    web::json::value val = web::json::value::object();

    if(formulaIsSet_) {
        val[utility::conversions::to_string_t("formula")] = ModelBase::toJson(formula_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool SmartDocumentRecognizerFormulaBlock::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("formula"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("formula"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormula(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string SmartDocumentRecognizerFormulaBlock::getFormula() const
{
    return formula_;
}

void SmartDocumentRecognizerFormulaBlock::setFormula(const std::string& value)
{
    formula_ = value;
    formulaIsSet_ = true;
}

bool SmartDocumentRecognizerFormulaBlock::formulaIsSet() const
{
    return formulaIsSet_;
}

void SmartDocumentRecognizerFormulaBlock::unsetformula()
{
    formulaIsSet_ = false;
}

std::vector<std::vector<int32_t>>& SmartDocumentRecognizerFormulaBlock::getLocation()
{
    return location_;
}

void SmartDocumentRecognizerFormulaBlock::setLocation(const std::vector<std::vector<int32_t>>& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool SmartDocumentRecognizerFormulaBlock::locationIsSet() const
{
    return locationIsSet_;
}

void SmartDocumentRecognizerFormulaBlock::unsetlocation()
{
    locationIsSet_ = false;
}

std::string SmartDocumentRecognizerFormulaBlock::getType() const
{
    return type_;
}

void SmartDocumentRecognizerFormulaBlock::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SmartDocumentRecognizerFormulaBlock::typeIsSet() const
{
    return typeIsSet_;
}

void SmartDocumentRecognizerFormulaBlock::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


