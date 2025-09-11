

#include "huaweicloud/functiongraph/v2/model/ShowWorkFlowMetricResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowWorkFlowMetricResponse::ShowWorkFlowMetricResponse()
{
    countIsSet_ = false;
    durationIsSet_ = false;
    failCountIsSet_ = false;
    runningCountIsSet_ = false;
}

ShowWorkFlowMetricResponse::~ShowWorkFlowMetricResponse() = default;

void ShowWorkFlowMetricResponse::validate()
{
}

web::json::value ShowWorkFlowMetricResponse::toJson() const
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
bool ShowWorkFlowMetricResponse::fromJson(const web::json::value& val)
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


std::vector<SlaReportsValue>& ShowWorkFlowMetricResponse::getCount()
{
    return count_;
}

void ShowWorkFlowMetricResponse::setCount(const std::vector<SlaReportsValue>& value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowWorkFlowMetricResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowWorkFlowMetricResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowWorkFlowMetricResponse::getDuration()
{
    return duration_;
}

void ShowWorkFlowMetricResponse::setDuration(const std::vector<SlaReportsValue>& value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ShowWorkFlowMetricResponse::durationIsSet() const
{
    return durationIsSet_;
}

void ShowWorkFlowMetricResponse::unsetduration()
{
    durationIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowWorkFlowMetricResponse::getFailCount()
{
    return failCount_;
}

void ShowWorkFlowMetricResponse::setFailCount(const std::vector<SlaReportsValue>& value)
{
    failCount_ = value;
    failCountIsSet_ = true;
}

bool ShowWorkFlowMetricResponse::failCountIsSet() const
{
    return failCountIsSet_;
}

void ShowWorkFlowMetricResponse::unsetfailCount()
{
    failCountIsSet_ = false;
}

std::vector<SlaReportsValue>& ShowWorkFlowMetricResponse::getRunningCount()
{
    return runningCount_;
}

void ShowWorkFlowMetricResponse::setRunningCount(const std::vector<SlaReportsValue>& value)
{
    runningCount_ = value;
    runningCountIsSet_ = true;
}

bool ShowWorkFlowMetricResponse::runningCountIsSet() const
{
    return runningCountIsSet_;
}

void ShowWorkFlowMetricResponse::unsetrunningCount()
{
    runningCountIsSet_ = false;
}

}
}
}
}
}


