

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerFormulaResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerFormulaResult::SmartDocumentRecognizerFormulaResult()
{
    formulaCount_ = 0;
    formulaCountIsSet_ = false;
    formulaListIsSet_ = false;
}

SmartDocumentRecognizerFormulaResult::~SmartDocumentRecognizerFormulaResult() = default;

void SmartDocumentRecognizerFormulaResult::validate()
{
}

web::json::value SmartDocumentRecognizerFormulaResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(formulaCountIsSet_) {
        val[utility::conversions::to_string_t("formula_count")] = ModelBase::toJson(formulaCount_);
    }
    if(formulaListIsSet_) {
        val[utility::conversions::to_string_t("formula_list")] = ModelBase::toJson(formulaList_);
    }

    return val;
}
bool SmartDocumentRecognizerFormulaResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("formula_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("formula_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormulaCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("formula_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("formula_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SmartDocumentRecognizerFormulaBlock> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormulaList(refVal);
        }
    }
    return ok;
}


int32_t SmartDocumentRecognizerFormulaResult::getFormulaCount() const
{
    return formulaCount_;
}

void SmartDocumentRecognizerFormulaResult::setFormulaCount(int32_t value)
{
    formulaCount_ = value;
    formulaCountIsSet_ = true;
}

bool SmartDocumentRecognizerFormulaResult::formulaCountIsSet() const
{
    return formulaCountIsSet_;
}

void SmartDocumentRecognizerFormulaResult::unsetformulaCount()
{
    formulaCountIsSet_ = false;
}

std::vector<SmartDocumentRecognizerFormulaBlock>& SmartDocumentRecognizerFormulaResult::getFormulaList()
{
    return formulaList_;
}

void SmartDocumentRecognizerFormulaResult::setFormulaList(const std::vector<SmartDocumentRecognizerFormulaBlock>& value)
{
    formulaList_ = value;
    formulaListIsSet_ = true;
}

bool SmartDocumentRecognizerFormulaResult::formulaListIsSet() const
{
    return formulaListIsSet_;
}

void SmartDocumentRecognizerFormulaResult::unsetformulaList()
{
    formulaListIsSet_ = false;
}

}
}
}
}
}


