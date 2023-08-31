

#include "huaweicloud/ocr/v1/model/SmartDocumentRecognizerTableResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




SmartDocumentRecognizerTableResult::SmartDocumentRecognizerTableResult()
{
    tableCount_ = 0;
    tableCountIsSet_ = false;
    tableListIsSet_ = false;
}

SmartDocumentRecognizerTableResult::~SmartDocumentRecognizerTableResult() = default;

void SmartDocumentRecognizerTableResult::validate()
{
}

web::json::value SmartDocumentRecognizerTableResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tableCountIsSet_) {
        val[utility::conversions::to_string_t("table_count")] = ModelBase::toJson(tableCount_);
    }
    if(tableListIsSet_) {
        val[utility::conversions::to_string_t("table_list")] = ModelBase::toJson(tableList_);
    }

    return val;
}

bool SmartDocumentRecognizerTableResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("table_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SmartDocumentRecognizerTableBlock> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableList(refVal);
        }
    }
    return ok;
}

int32_t SmartDocumentRecognizerTableResult::getTableCount() const
{
    return tableCount_;
}

void SmartDocumentRecognizerTableResult::setTableCount(int32_t value)
{
    tableCount_ = value;
    tableCountIsSet_ = true;
}

bool SmartDocumentRecognizerTableResult::tableCountIsSet() const
{
    return tableCountIsSet_;
}

void SmartDocumentRecognizerTableResult::unsettableCount()
{
    tableCountIsSet_ = false;
}

std::vector<SmartDocumentRecognizerTableBlock>& SmartDocumentRecognizerTableResult::getTableList()
{
    return tableList_;
}

void SmartDocumentRecognizerTableResult::setTableList(const std::vector<SmartDocumentRecognizerTableBlock>& value)
{
    tableList_ = value;
    tableListIsSet_ = true;
}

bool SmartDocumentRecognizerTableResult::tableListIsSet() const
{
    return tableListIsSet_;
}

void SmartDocumentRecognizerTableResult::unsettableList()
{
    tableListIsSet_ = false;
}

}
}
}
}
}


