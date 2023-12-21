

#include "huaweicloud/vod/v1/model/ListAssetDailySummaryLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListAssetDailySummaryLogResponse::ListAssetDailySummaryLogResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    summaryResultsIsSet_ = false;
}

ListAssetDailySummaryLogResponse::~ListAssetDailySummaryLogResponse() = default;

void ListAssetDailySummaryLogResponse::validate()
{
}

web::json::value ListAssetDailySummaryLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(summaryResultsIsSet_) {
        val[utility::conversions::to_string_t("summary_results")] = ModelBase::toJson(summaryResults_);
    }

    return val;
}
bool ListAssetDailySummaryLogResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("summary_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("summary_results"));
        if(!fieldValue.is_null())
        {
            std::vector<AssetDailySummaryResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSummaryResults(refVal);
        }
    }
    return ok;
}


int32_t ListAssetDailySummaryLogResponse::getTotal() const
{
    return total_;
}

void ListAssetDailySummaryLogResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAssetDailySummaryLogResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAssetDailySummaryLogResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<AssetDailySummaryResult>& ListAssetDailySummaryLogResponse::getSummaryResults()
{
    return summaryResults_;
}

void ListAssetDailySummaryLogResponse::setSummaryResults(const std::vector<AssetDailySummaryResult>& value)
{
    summaryResults_ = value;
    summaryResultsIsSet_ = true;
}

bool ListAssetDailySummaryLogResponse::summaryResultsIsSet() const
{
    return summaryResultsIsSet_;
}

void ListAssetDailySummaryLogResponse::unsetsummaryResults()
{
    summaryResultsIsSet_ = false;
}

}
}
}
}
}


