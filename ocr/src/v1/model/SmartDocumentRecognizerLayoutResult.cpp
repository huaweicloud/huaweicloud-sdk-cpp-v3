

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerLayoutResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerLayoutResult::SmartDocumentRecognizerLayoutResult()
{
    layoutBlockCount_ = 0;
    layoutBlockCountIsSet_ = false;
    layoutBlockListIsSet_ = false;
}

SmartDocumentRecognizerLayoutResult::~SmartDocumentRecognizerLayoutResult() = default;

void SmartDocumentRecognizerLayoutResult::validate()
{
}

web::json::value SmartDocumentRecognizerLayoutResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(layoutBlockCountIsSet_) {
        val[utility::conversions::to_string_t("layout_block_count")] = ModelBase::toJson(layoutBlockCount_);
    }
    if(layoutBlockListIsSet_) {
        val[utility::conversions::to_string_t("layout_block_list")] = ModelBase::toJson(layoutBlockList_);
    }

    return val;
}

bool SmartDocumentRecognizerLayoutResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("layout_block_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layout_block_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayoutBlockCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("layout_block_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("layout_block_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SmartDocumentRecognizerLayoutBlock> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLayoutBlockList(refVal);
        }
    }
    return ok;
}

int32_t SmartDocumentRecognizerLayoutResult::getLayoutBlockCount() const
{
    return layoutBlockCount_;
}

void SmartDocumentRecognizerLayoutResult::setLayoutBlockCount(int32_t value)
{
    layoutBlockCount_ = value;
    layoutBlockCountIsSet_ = true;
}

bool SmartDocumentRecognizerLayoutResult::layoutBlockCountIsSet() const
{
    return layoutBlockCountIsSet_;
}

void SmartDocumentRecognizerLayoutResult::unsetlayoutBlockCount()
{
    layoutBlockCountIsSet_ = false;
}

std::vector<SmartDocumentRecognizerLayoutBlock>& SmartDocumentRecognizerLayoutResult::getLayoutBlockList()
{
    return layoutBlockList_;
}

void SmartDocumentRecognizerLayoutResult::setLayoutBlockList(const std::vector<SmartDocumentRecognizerLayoutBlock>& value)
{
    layoutBlockList_ = value;
    layoutBlockListIsSet_ = true;
}

bool SmartDocumentRecognizerLayoutResult::layoutBlockListIsSet() const
{
    return layoutBlockListIsSet_;
}

void SmartDocumentRecognizerLayoutResult::unsetlayoutBlockList()
{
    layoutBlockListIsSet_ = false;
}

}
}
}
}
}


