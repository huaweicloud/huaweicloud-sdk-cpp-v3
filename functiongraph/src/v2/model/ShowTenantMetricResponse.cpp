

#include "huaweicloud/functiongraph/v2/model/ShowTenantMetricResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowTenantMetricResponse::ShowTenantMetricResponse()
{
    countIsSet_ = false;
    durationIsSet_ = false;
    failCountIsSet_ = false;
    runningCountIsSet_ = false;
}

ShowTenantMetricResponse::~ShowTenantMetricResponse() = default;

void ShowTenantMetricResponse::validate()
{
}

web::json::value ShowTenantMetricResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(failCountIsSet_) {
        val[utility::conversions::to_string_t("fail_count")] = ModelBase::toJson(failCount_);
    }
    if(runningCountIsSet_) {
        val[utility::conversions::to_string_t("running_count")] = ModelBase::toJson(runningCount_);
    }

    return val;
}
bool ShowTenantMetricResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fail_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fail_count"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFailCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("running_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("running_count"));
        if(!fieldValue.is_null())
        {
            std::vector<SlaReportsValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunningCount(refVal);
        }
    }
    return ok;
}


std::vector<SlaReportsValue>& ShowTenantMetricResponse::getCount()
{
    return count_;
}

void ShowTenantMetricResponse::setCount(const std::vector<SlaReportsValue>& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowTenantMetricResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowTenantMetricResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowTenantMetricResponse::getDuration()
{
    return duration_;
}

void ShowTenantMetricResponse::setDuration(const std::vector<SlaReportsValue>& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ShowTenantMetricResponse::durationIsSet() const
{
    return durationIsSet_;
}

void ShowTenantMetricResponse::unsetduration()
{
    durationIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowTenantMetricResponse::getFailCount()
{
    return failCount_;
}

void ShowTenantMetricResponse::setFailCount(const std::vector<SlaReportsValue>& value)
{
    failCount_ = value;
    failCountIsSet_ = true;
}

bool ShowTenantMetricResponse::failCountIsSet() const
{
    return failCountIsSet_;
}

void ShowTenantMetricResponse::unsetfailCount()
{
    failCountIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowTenantMetricResponse::getRunningCount()
{
    return runningCount_;
}

void ShowTenantMetricResponse::setRunningCount(const std::vector<SlaReportsValue>& value)
{
    runningCount_ = value;
    runningCountIsSet_ = true;
}

bool ShowTenantMetricResponse::runningCountIsSet() const
{
    return runningCountIsSet_;
}

void ShowTenantMetricResponse::unsetrunningCount()
{
    runningCountIsSet_ = false;
}

}
}
}
}
}


