

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerKvResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerKvResult::SmartDocumentRecognizerKvResult()
{
    kvBlockCount_ = 0;
    kvBlockCountIsSet_ = false;
    kvBlockListIsSet_ = false;
}

SmartDocumentRecognizerKvResult::~SmartDocumentRecognizerKvResult() = default;

void SmartDocumentRecognizerKvResult::validate()
{
}

web::json::value SmartDocumentRecognizerKvResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kvBlockCountIsSet_) {
        val[utility::conversions::to_string_t("kv_block_count")] = ModelBase::toJson(kvBlockCount_);
    }
    if(kvBlockListIsSet_) {
        val[utility::conversions::to_string_t("kv_block_list")] = ModelBase::toJson(kvBlockList_);
    }

    return val;
}

bool SmartDocumentRecognizerKvResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kv_block_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kv_block_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKvBlockCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kv_block_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kv_block_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SmartDocumentRecognizerKVBlock> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKvBlockList(refVal);
        }
    }
    return ok;
}

int32_t SmartDocumentRecognizerKvResult::getKvBlockCount() const
{
    return kvBlockCount_;
}

void SmartDocumentRecognizerKvResult::setKvBlockCount(int32_t value)
{
    kvBlockCount_ = value;
    kvBlockCountIsSet_ = true;
}

bool SmartDocumentRecognizerKvResult::kvBlockCountIsSet() const
{
    return kvBlockCountIsSet_;
}

void SmartDocumentRecognizerKvResult::unsetkvBlockCount()
{
    kvBlockCountIsSet_ = false;
}

std::vector<SmartDocumentRecognizerKVBlock>& SmartDocumentRecognizerKvResult::getKvBlockList()
{
    return kvBlockList_;
}

void SmartDocumentRecognizerKvResult::setKvBlockList(const std::vector<SmartDocumentRecognizerKVBlock>& value)
{
    kvBlockList_ = value;
    kvBlockListIsSet_ = true;
}

bool SmartDocumentRecognizerKvResult::kvBlockListIsSet() const
{
    return kvBlockListIsSet_;
}

void SmartDocumentRecognizerKvResult::unsetkvBlockList()
{
    kvBlockListIsSet_ = false;
}

}
}
}
}
}


