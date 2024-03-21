

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerFormResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerFormResult::SmartDocumentRecognizerFormResult()
{
    formCount_ = 0;
    formCountIsSet_ = false;
    formListIsSet_ = false;
}

SmartDocumentRecognizerFormResult::~SmartDocumentRecognizerFormResult() = default;

void SmartDocumentRecognizerFormResult::validate()
{
}

web::json::value SmartDocumentRecognizerFormResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(formCountIsSet_) {
        val[utility::conversions::to_string_t("form_count")] = ModelBase::toJson(formCount_);
    }
    if(formListIsSet_) {
        val[utility::conversions::to_string_t("form_list")] = ModelBase::toJson(formList_);
    }

    return val;
}
bool SmartDocumentRecognizerFormResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("form_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("form_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("form_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("form_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SmartDocumentRecognizerTableBlock> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormList(refVal);
        }
    }
    return ok;
}


int32_t SmartDocumentRecognizerFormResult::getFormCount() const
{
    return formCount_;
}

void SmartDocumentRecognizerFormResult::setFormCount(int32_t value)
{
    formCount_ = value;
    formCountIsSet_ = true;
}

bool SmartDocumentRecognizerFormResult::formCountIsSet() const
{
    return formCountIsSet_;
}

void SmartDocumentRecognizerFormResult::unsetformCount()
{
    formCountIsSet_ = false;
}

std::vector<SmartDocumentRecognizerTableBlock>& SmartDocumentRecognizerFormResult::getFormList()
{
    return formList_;
}

void SmartDocumentRecognizerFormResult::setFormList(const std::vector<SmartDocumentRecognizerTableBlock>& value)
{
    formList_ = value;
    formListIsSet_ = true;
}

bool SmartDocumentRecognizerFormResult::formListIsSet() const
{
    return formListIsSet_;
}

void SmartDocumentRecognizerFormResult::unsetformList()
{
    formListIsSet_ = false;
}

}
}
}
}
}


