

#include "huaweicloud/functiongraph/v2/model/ListWorkflowExecutionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListWorkflowExecutionsRequest::ListWorkflowExecutionsRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListWorkflowExecutionsRequest::~ListWorkflowExecutionsRequest() = default;

void ListWorkflowExecutionsRequest::validate()
{
}

web::json::value ListWorkflowExecutionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(workflowIdIsSet_) {
        val[utility::conversions::to_string_t("workflow_id")] = ModelBase::toJson(workflowId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListWorkflowExecutionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


std::string ListWorkflowExecutionsRequest::getWorkflowId() const
{
    return workflowId_;
}

void ListWorkflowExecutionsRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ListWorkflowExecutionsRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ListWorkflowExecutionsRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

int32_t ListWorkflowExecutionsRequest::getLimit() const
{
    return limit_;
}

void ListWorkflowExecutionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWorkflowExecutionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListWorkflowExecutionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListWorkflowExecutionsRequest::getOffset() const
{
    return offset_;
}

void ListWorkflowExecutionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWorkflowExecutionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWorkflowExecutionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListWorkflowExecutionsRequest::getStatus() const
{
    return status_;
}

void ListWorkflowExecutionsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListWorkflowExecutionsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListWorkflowExecutionsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListWorkflowExecutionsRequest::getStartTime() const
{
    return startTime_;
}

void ListWorkflowExecutionsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListWorkflowExecutionsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListWorkflowExecutionsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListWorkflowExecutionsRequest::getEndTime() const
{
    return endTime_;
}

void ListWorkflowExecutionsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListWorkflowExecutionsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListWorkflowExecutionsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


