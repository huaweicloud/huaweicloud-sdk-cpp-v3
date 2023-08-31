

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerResult::SmartDocumentRecognizerResult()
{
    ocrResultIsSet_ = false;
    kvResultIsSet_ = false;
    tableResultIsSet_ = false;
    layoutResultIsSet_ = false;
}

SmartDocumentRecognizerResult::~SmartDocumentRecognizerResult() = default;

void SmartDocumentRecognizerResult::validate()
{
}

web::json::value SmartDocumentRecognizerResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ocrResultIsSet_) {
        val[utility::conversions::to_string_t("ocr_result")] = ModelBase::toJson(ocrResult_);
    }
    if(kvResultIsSet_) {
        val[utility::conversions::to_string_t("kv_result")] = ModelBase::toJson(kvResult_);
    }
    if(tableResultIsSet_) {
        val[utility::conversions::to_string_t("table_result")] = ModelBase::toJson(tableResult_);
    }
    if(layoutResultIsSet_) {
        val[utility::conversions::to_string_t("layout_result")] = ModelBase::toJson(layoutResult_);
    }

    return val;
}

bool SmartDocumentRecognizerResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ocr_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ocr_result"));
        if(!fieldValue.is_null())
        {
            SmartDocumentRecognizerOcrResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOcrResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kv_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kv_result"));
        if(!fieldValue.is_null())
        {
            SmartDocumentRecognizerKvResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKvResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_result"));
        if(!fieldValue.is_null())
        {
            SmartDocumentRecognizerTableResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("layout_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layout_result"));
        if(!fieldValue.is_null())
        {
            SmartDocumentRecognizerLayoutResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayoutResult(refVal);
        }
    }
    return ok;
}

SmartDocumentRecognizerOcrResult SmartDocumentRecognizerResult::getOcrResult() const
{
    return ocrResult_;
}

void SmartDocumentRecognizerResult::setOcrResult(const SmartDocumentRecognizerOcrResult& value)
{
    ocrResult_ = value;
    ocrResultIsSet_ = true;
}

bool SmartDocumentRecognizerResult::ocrResultIsSet() const
{
    return ocrResultIsSet_;
}

void SmartDocumentRecognizerResult::unsetocrResult()
{
    ocrResultIsSet_ = false;
}

SmartDocumentRecognizerKvResult SmartDocumentRecognizerResult::getKvResult() const
{
    return kvResult_;
}

void SmartDocumentRecognizerResult::setKvResult(const SmartDocumentRecognizerKvResult& value)
{
    kvResult_ = value;
    kvResultIsSet_ = true;
}

bool SmartDocumentRecognizerResult::kvResultIsSet() const
{
    return kvResultIsSet_;
}

void SmartDocumentRecognizerResult::unsetkvResult()
{
    kvResultIsSet_ = false;
}

SmartDocumentRecognizerTableResult SmartDocumentRecognizerResult::getTableResult() const
{
    return tableResult_;
}

void SmartDocumentRecognizerResult::setTableResult(const SmartDocumentRecognizerTableResult& value)
{
    tableResult_ = value;
    tableResultIsSet_ = true;
}

bool SmartDocumentRecognizerResult::tableResultIsSet() const
{
    return tableResultIsSet_;
}

void SmartDocumentRecognizerResult::unsettableResult()
{
    tableResultIsSet_ = false;
}

SmartDocumentRecognizerLayoutResult SmartDocumentRecognizerResult::getLayoutResult() const
{
    return layoutResult_;
}

void SmartDocumentRecognizerResult::setLayoutResult(const SmartDocumentRecognizerLayoutResult& value)
{
    layoutResult_ = value;
    layoutResultIsSet_ = true;
}

bool SmartDocumentRecognizerResult::layoutResultIsSet() const
{
    return layoutResultIsSet_;
}

void SmartDocumentRecognizerResult::unsetlayoutResult()
{
    layoutResultIsSet_ = false;
}

}
}
}
}
}


