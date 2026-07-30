

#include "huaweicloud/modelarts/v1/model/ListWorkflowExecutionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListWorkflowExecutionsRequest::ListWorkflowExecutionsRequest()
{
    workflowId_ = "";
    workflowIdIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    sortBy_ = "";
    sortByIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    labels_ = "";
    labelsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    sceneId_ = "";
    sceneIdIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
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
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(sortByIsSet_) {
        val[utility::conversions::to_string_t("sort_by")] = ModelBase::toJson(sortBy_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(sceneIdIsSet_) {
        val[utility::conversions::to_string_t("scene_id")] = ModelBase::toJson(sceneId_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
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
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("scene_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSceneId(refVal);
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

std::string ListWorkflowExecutionsRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListWorkflowExecutionsRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListWorkflowExecutionsRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListWorkflowExecutionsRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::string ListWorkflowExecutionsRequest::getLimit() const
{
    return limit_;
}

void ListWorkflowExecutionsRequest::setLimit(const std::string& value)
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

std::string ListWorkflowExecutionsRequest::getSortBy() const
{
    return sortBy_;
}

void ListWorkflowExecutionsRequest::setSortBy(const std::string& value)
{
    sortBy_ = value;
    sortByIsSet_ = true;
}

bool ListWorkflowExecutionsRequest::sortByIsSet() const
{
    return sortByIsSet_;
}

void ListWorkflowExecutionsRequest::unsetsortBy()
{
    sortByIsSet_ = false;
}

std::string ListWorkflowExecutionsRequest::getOffset() const
{
    return offset_;
}

void ListWorkflowExecutionsRequest::setOffset(const std::string& value)
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

std::string ListWorkflowExecutionsRequest::getLabels() const
{
    return labels_;
}

void ListWorkflowExecutionsRequest::setLabels(const std::string& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool ListWorkflowExecutionsRequest::labelsIsSet() const
{
    return labelsIsSet_;
}

void ListWorkflowExecutionsRequest::unsetlabels()
{
    labelsIsSet_ = false;
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

std::string ListWorkflowExecutionsRequest::getSceneId() const
{
    return sceneId_;
}

void ListWorkflowExecutionsRequest::setSceneId(const std::string& value)
{
    sceneId_ = value;
    sceneIdIsSet_ = true;
}

bool ListWorkflowExecutionsRequest::sceneIdIsSet() const
{
    return sceneIdIsSet_;
}

void ListWorkflowExecutionsRequest::unsetsceneId()
{
    sceneIdIsSet_ = false;
}

std::string ListWorkflowExecutionsRequest::getOrder() const
{
    return order_;
}

void ListWorkflowExecutionsRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListWorkflowExecutionsRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ListWorkflowExecutionsRequest::unsetorder()
{
    orderIsSet_ = false;
}

}
}
}
}
}


