

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSessionSummaryUseOpsTunnelResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSessionSummaryUseOpsTunnelResponse::ShowSessionSummaryUseOpsTunnelResponse()
{
    activeCount_ = 0;
    activeCountIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    maxQueryTimeCost_ = 0;
    maxQueryTimeCostIsSet_ = false;
    maxTransactionTimeCost_ = 0;
    maxTransactionTimeCostIsSet_ = false;
}

ShowSessionSummaryUseOpsTunnelResponse::~ShowSessionSummaryUseOpsTunnelResponse() = default;

void ShowSessionSummaryUseOpsTunnelResponse::validate()
{
}

web::json::value ShowSessionSummaryUseOpsTunnelResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(activeCountIsSet_) {
        val[utility::conversions::to_string_t("active_count")] = ModelBase::toJson(activeCount_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(maxQueryTimeCostIsSet_) {
        val[utility::conversions::to_string_t("max_query_time_cost")] = ModelBase::toJson(maxQueryTimeCost_);
    }
    if(maxTransactionTimeCostIsSet_) {
        val[utility::conversions::to_string_t("max_transaction_time_cost")] = ModelBase::toJson(maxTransactionTimeCost_);
    }

    return val;
}
bool ShowSessionSummaryUseOpsTunnelResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("active_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_query_time_cost"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_query_time_cost"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxQueryTimeCost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_transaction_time_cost"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_transaction_time_cost"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxTransactionTimeCost(refVal);
        }
    }
    return ok;
}


int32_t ShowSessionSummaryUseOpsTunnelResponse::getActiveCount() const
{
    return activeCount_;
}

void ShowSessionSummaryUseOpsTunnelResponse::setActiveCount(int32_t value)
{
    activeCount_ = value;
    activeCountIsSet_ = true;
}

bool ShowSessionSummaryUseOpsTunnelResponse::activeCountIsSet() const
{
    return activeCountIsSet_;
}

void ShowSessionSummaryUseOpsTunnelResponse::unsetactiveCount()
{
    activeCountIsSet_ = false;
}

int32_t ShowSessionSummaryUseOpsTunnelResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowSessionSummaryUseOpsTunnelResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowSessionSummaryUseOpsTunnelResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowSessionSummaryUseOpsTunnelResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t ShowSessionSummaryUseOpsTunnelResponse::getMaxQueryTimeCost() const
{
    return maxQueryTimeCost_;
}

void ShowSessionSummaryUseOpsTunnelResponse::setMaxQueryTimeCost(int32_t value)
{
    maxQueryTimeCost_ = value;
    maxQueryTimeCostIsSet_ = true;
}

bool ShowSessionSummaryUseOpsTunnelResponse::maxQueryTimeCostIsSet() const
{
    return maxQueryTimeCostIsSet_;
}

void ShowSessionSummaryUseOpsTunnelResponse::unsetmaxQueryTimeCost()
{
    maxQueryTimeCostIsSet_ = false;
}

int32_t ShowSessionSummaryUseOpsTunnelResponse::getMaxTransactionTimeCost() const
{
    return maxTransactionTimeCost_;
}

void ShowSessionSummaryUseOpsTunnelResponse::setMaxTransactionTimeCost(int32_t value)
{
    maxTransactionTimeCost_ = value;
    maxTransactionTimeCostIsSet_ = true;
}

bool ShowSessionSummaryUseOpsTunnelResponse::maxTransactionTimeCostIsSet() const
{
    return maxTransactionTimeCostIsSet_;
}

void ShowSessionSummaryUseOpsTunnelResponse::unsetmaxTransactionTimeCost()
{
    maxTransactionTimeCostIsSet_ = false;
}

}
}
}
}
}


