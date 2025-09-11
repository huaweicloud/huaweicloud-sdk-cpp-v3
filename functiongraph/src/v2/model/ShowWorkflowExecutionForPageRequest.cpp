

#include "huaweicloud/functiongraph/v2/model/ShowWorkflowExecutionForPageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowWorkflowExecutionForPageRequest::ShowWorkflowExecutionForPageRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ShowWorkflowExecutionForPageRequest::~ShowWorkflowExecutionForPageRequest() = default;

void ShowWorkflowExecutionForPageRequest::validate()
{
}

web::json::value ShowWorkflowExecutionForPageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ShowWorkflowExecutionForPageRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("workflow_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workflow_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkflowId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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


std::string ShowWorkflowExecutionForPageRequest::getWorkflowId() const
{
    return workflowId_;
}

void ShowWorkflowExecutionForPageRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ShowWorkflowExecutionForPageRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ShowWorkflowExecutionForPageRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

int32_t ShowWorkflowExecutionForPageRequest::getOffset() const
{
    return offset_;
}

void ShowWorkflowExecutionForPageRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowWorkflowExecutionForPageRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowWorkflowExecutionForPageRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowWorkflowExecutionForPageRequest::getLimit() const
{
    return limit_;
}

void ShowWorkflowExecutionForPageRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowWorkflowExecutionForPageRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowWorkflowExecutionForPageRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowWorkflowExecutionForPageRequest::getStartTime() const
{
    return startTime_;
}

void ShowWorkflowExecutionForPageRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowWorkflowExecutionForPageRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowWorkflowExecutionForPageRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowWorkflowExecutionForPageRequest::getEndTime() const
{
    return endTime_;
}

void ShowWorkflowExecutionForPageRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowWorkflowExecutionForPageRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowWorkflowExecutionForPageRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


