

#include "huaweicloud/drs/v3/model/ListDataCompareDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListDataCompareDetailResponse::ListDataCompareDetailResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    tableLineCompareResultInfosIsSet_ = false;
}

ListDataCompareDetailResponse::~ListDataCompareDetailResponse() = default;

void ListDataCompareDetailResponse::validate()
{
}

web::json::value ListDataCompareDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(tableLineCompareResultInfosIsSet_) {
        val[utility::conversions::to_string_t("table_line_compare_result_infos")] = ModelBase::toJson(tableLineCompareResultInfos_);
    }

    return val;
}
bool ListDataCompareDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_line_compare_result_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_line_compare_result_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<TableLineCompareResultInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableLineCompareResultInfos(refVal);
        }
    }
    return ok;
}


int32_t ListDataCompareDetailResponse::getTotalCount() const
{
    return totalCount_;
}

void ListDataCompareDetailResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListDataCompareDetailResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListDataCompareDetailResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<TableLineCompareResultInfo>& ListDataCompareDetailResponse::getTableLineCompareResultInfos()
{
    return tableLineCompareResultInfos_;
}

void ListDataCompareDetailResponse::setTableLineCompareResultInfos(const std::vector<TableLineCompareResultInfo>& value)
{
    tableLineCompareResultInfos_ = value;
    tableLineCompareResultInfosIsSet_ = true;
}

bool ListDataCompareDetailResponse::tableLineCompareResultInfosIsSet() const
{
    return tableLineCompareResultInfosIsSet_;
}

void ListDataCompareDetailResponse::unsettableLineCompareResultInfos()
{
    tableLineCompareResultInfosIsSet_ = false;
}

}
}
}
}
}


