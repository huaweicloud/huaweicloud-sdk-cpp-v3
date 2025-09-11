

#include "huaweicloud/functiongraph/v2/model/ShowWorkFlowMetricRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowWorkFlowMetricRequest::ShowWorkFlowMetricRequest()
{
    workflowUrn_ = "";
    workflowUrnIsSet_ = false;
    period_ = "";
    periodIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ShowWorkFlowMetricRequest::~ShowWorkFlowMetricRequest() = default;

void ShowWorkFlowMetricRequest::validate()
{
}

web::json::value ShowWorkFlowMetricRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowUrnIsSet_) {
        val[utility::conversions::to_string_t("workflow_urn")] = ModelBase::toJson(workflowUrn_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ShowWorkFlowMetricRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflow_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ShowWorkFlowMetricRequest::getWorkflowUrn() const
{
    return workflowUrn_;
}

void ShowWorkFlowMetricRequest::setWorkflowUrn(const std::string& value)
{
    workflowUrn_ = value;
    workflowUrnIsSet_ = true;
}

bool ShowWorkFlowMetricRequest::workflowUrnIsSet() const
{
    return workflowUrnIsSet_;
}

void ShowWorkFlowMetricRequest::unsetworkflowUrn()
{
    workflowUrnIsSet_ = false;
}

std::string ShowWorkFlowMetricRequest::getPeriod() const
{
    return period_;
}

void ShowWorkFlowMetricRequest::setPeriod(const std::string& value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool ShowWorkFlowMetricRequest::periodIsSet() const
{
    return periodIsSet_;
}

void ShowWorkFlowMetricRequest::unsetperiod()
{
    periodIsSet_ = false;
}

std::string ShowWorkFlowMetricRequest::getStartTime() const
{
    return startTime_;
}

void ShowWorkFlowMetricRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowWorkFlowMetricRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowWorkFlowMetricRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowWorkFlowMetricRequest::getEndTime() const
{
    return endTime_;
}

void ShowWorkFlowMetricRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowWorkFlowMetricRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowWorkFlowMetricRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


