

#include "huaweicloud/gaussdb/v3/model/HtapQueryQueueRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapQueryQueueRule::HtapQueryQueueRule()
{
    queryQueueMaxQueuedQueries_ = 0;
    queryQueueMaxQueuedQueriesIsSet_ = false;
    queryQueuePendingTimeoutSecond_ = 0;
    queryQueuePendingTimeoutSecondIsSet_ = false;
    queryQueueConcurrencyLimit_ = 0;
    queryQueueConcurrencyLimitIsSet_ = false;
    queryQueueMemUsedPctLimit_ = 0;
    queryQueueMemUsedPctLimitIsSet_ = false;
    queryQueueCpuUsedPctLimit_ = 0;
    queryQueueCpuUsedPctLimitIsSet_ = false;
    enableQueryQueueSelect_ = "";
    enableQueryQueueSelectIsSet_ = false;
}

HtapQueryQueueRule::~HtapQueryQueueRule() = default;

void HtapQueryQueueRule::validate()
{
}

web::json::value HtapQueryQueueRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(queryQueueMaxQueuedQueriesIsSet_) {
        val[utility::conversions::to_string_t("query_queue_max_queued_queries")] = ModelBase::toJson(queryQueueMaxQueuedQueries_);
    }
    if(queryQueuePendingTimeoutSecondIsSet_) {
        val[utility::conversions::to_string_t("query_queue_pending_timeout_second")] = ModelBase::toJson(queryQueuePendingTimeoutSecond_);
    }
    if(queryQueueConcurrencyLimitIsSet_) {
        val[utility::conversions::to_string_t("query_queue_concurrency_limit")] = ModelBase::toJson(queryQueueConcurrencyLimit_);
    }
    if(queryQueueMemUsedPctLimitIsSet_) {
        val[utility::conversions::to_string_t("query_queue_mem_used_pct_limit")] = ModelBase::toJson(queryQueueMemUsedPctLimit_);
    }
    if(queryQueueCpuUsedPctLimitIsSet_) {
        val[utility::conversions::to_string_t("query_queue_cpu_used_pct_limit")] = ModelBase::toJson(queryQueueCpuUsedPctLimit_);
    }
    if(enableQueryQueueSelectIsSet_) {
        val[utility::conversions::to_string_t("enable_query_queue_select")] = ModelBase::toJson(enableQueryQueueSelect_);
    }

    return val;
}
bool HtapQueryQueueRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("query_queue_max_queued_queries"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_queue_max_queued_queries"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryQueueMaxQueuedQueries(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_queue_pending_timeout_second"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_queue_pending_timeout_second"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryQueuePendingTimeoutSecond(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_queue_concurrency_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_queue_concurrency_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryQueueConcurrencyLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_queue_mem_used_pct_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_queue_mem_used_pct_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryQueueMemUsedPctLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_queue_cpu_used_pct_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_queue_cpu_used_pct_limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryQueueCpuUsedPctLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_query_queue_select"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_query_queue_select"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableQueryQueueSelect(refVal);
        }
    }
    return ok;
}


int32_t HtapQueryQueueRule::getQueryQueueMaxQueuedQueries() const
{
    return queryQueueMaxQueuedQueries_;
}

void HtapQueryQueueRule::setQueryQueueMaxQueuedQueries(int32_t value)
{
    queryQueueMaxQueuedQueries_ = value;
    queryQueueMaxQueuedQueriesIsSet_ = true;
}

bool HtapQueryQueueRule::queryQueueMaxQueuedQueriesIsSet() const
{
    return queryQueueMaxQueuedQueriesIsSet_;
}

void HtapQueryQueueRule::unsetqueryQueueMaxQueuedQueries()
{
    queryQueueMaxQueuedQueriesIsSet_ = false;
}

int32_t HtapQueryQueueRule::getQueryQueuePendingTimeoutSecond() const
{
    return queryQueuePendingTimeoutSecond_;
}

void HtapQueryQueueRule::setQueryQueuePendingTimeoutSecond(int32_t value)
{
    queryQueuePendingTimeoutSecond_ = value;
    queryQueuePendingTimeoutSecondIsSet_ = true;
}

bool HtapQueryQueueRule::queryQueuePendingTimeoutSecondIsSet() const
{
    return queryQueuePendingTimeoutSecondIsSet_;
}

void HtapQueryQueueRule::unsetqueryQueuePendingTimeoutSecond()
{
    queryQueuePendingTimeoutSecondIsSet_ = false;
}

int32_t HtapQueryQueueRule::getQueryQueueConcurrencyLimit() const
{
    return queryQueueConcurrencyLimit_;
}

void HtapQueryQueueRule::setQueryQueueConcurrencyLimit(int32_t value)
{
    queryQueueConcurrencyLimit_ = value;
    queryQueueConcurrencyLimitIsSet_ = true;
}

bool HtapQueryQueueRule::queryQueueConcurrencyLimitIsSet() const
{
    return queryQueueConcurrencyLimitIsSet_;
}

void HtapQueryQueueRule::unsetqueryQueueConcurrencyLimit()
{
    queryQueueConcurrencyLimitIsSet_ = false;
}

int32_t HtapQueryQueueRule::getQueryQueueMemUsedPctLimit() const
{
    return queryQueueMemUsedPctLimit_;
}

void HtapQueryQueueRule::setQueryQueueMemUsedPctLimit(int32_t value)
{
    queryQueueMemUsedPctLimit_ = value;
    queryQueueMemUsedPctLimitIsSet_ = true;
}

bool HtapQueryQueueRule::queryQueueMemUsedPctLimitIsSet() const
{
    return queryQueueMemUsedPctLimitIsSet_;
}

void HtapQueryQueueRule::unsetqueryQueueMemUsedPctLimit()
{
    queryQueueMemUsedPctLimitIsSet_ = false;
}

int32_t HtapQueryQueueRule::getQueryQueueCpuUsedPctLimit() const
{
    return queryQueueCpuUsedPctLimit_;
}

void HtapQueryQueueRule::setQueryQueueCpuUsedPctLimit(int32_t value)
{
    queryQueueCpuUsedPctLimit_ = value;
    queryQueueCpuUsedPctLimitIsSet_ = true;
}

bool HtapQueryQueueRule::queryQueueCpuUsedPctLimitIsSet() const
{
    return queryQueueCpuUsedPctLimitIsSet_;
}

void HtapQueryQueueRule::unsetqueryQueueCpuUsedPctLimit()
{
    queryQueueCpuUsedPctLimitIsSet_ = false;
}

std::string HtapQueryQueueRule::getEnableQueryQueueSelect() const
{
    return enableQueryQueueSelect_;
}

void HtapQueryQueueRule::setEnableQueryQueueSelect(const std::string& value)
{
    enableQueryQueueSelect_ = value;
    enableQueryQueueSelectIsSet_ = true;
}

bool HtapQueryQueueRule::enableQueryQueueSelectIsSet() const
{
    return enableQueryQueueSelectIsSet_;
}

void HtapQueryQueueRule::unsetenableQueryQueueSelect()
{
    enableQueryQueueSelectIsSet_ = false;
}

}
}
}
}
}


