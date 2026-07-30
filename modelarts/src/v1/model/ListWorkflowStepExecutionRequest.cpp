

#include "huaweicloud/modelarts/v1/model/ListWorkflowStepExecutionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListWorkflowStepExecutionRequest::ListWorkflowStepExecutionRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    sortBy_ = "";
    sortByIsSet_ = false;
}

ListWorkflowStepExecutionRequest::~ListWorkflowStepExecutionRequest() = default;

void ListWorkflowStepExecutionRequest::validate()
{
}

web::json::value ListWorkflowStepExecutionRequest::toJson() const
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
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(sortByIsSet_) {
        val[utility::conversions::to_string_t("sort_by")] = ModelBase::toJson(sortBy_);
    }

    return val;
}
bool ListWorkflowStepExecutionRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortBy(refVal);
        }
    }
    return ok;
}


std::string ListWorkflowStepExecutionRequest::getWorkflowId() const
{
    return workflowId_;
}

void ListWorkflowStepExecutionRequest::setWorkflowId(const std::string& value)
{
    workflowId_ = value;
    workflowIdIsSet_ = true;
}

bool ListWorkflowStepExecutionRequest::workflowIdIsSet() const
{
    return workflowIdIsSet_;
}

void ListWorkflowStepExecutionRequest::unsetworkflowId()
{
    workflowIdIsSet_ = false;
}

int32_t ListWorkflowStepExecutionRequest::getLimit() const
{
    return limit_;
}

void ListWorkflowStepExecutionRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWorkflowStepExecutionRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListWorkflowStepExecutionRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListWorkflowStepExecutionRequest::getOffset() const
{
    return offset_;
}

void ListWorkflowStepExecutionRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWorkflowStepExecutionRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWorkflowStepExecutionRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListWorkflowStepExecutionRequest::getOrder() const
{
    return order_;
}

void ListWorkflowStepExecutionRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListWorkflowStepExecutionRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ListWorkflowStepExecutionRequest::unsetorder()
{
    orderIsSet_ = false;
}

std::string ListWorkflowStepExecutionRequest::getSortBy() const
{
    return sortBy_;
}

void ListWorkflowStepExecutionRequest::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool ListWorkflowStepExecutionRequest::sortByIsSet() const
{
    return sortByIsSet_;
}

void ListWorkflowStepExecutionRequest::unsetsortBy()
{
    sortByIsSet_ = false;
}

}
}
}
}
}


