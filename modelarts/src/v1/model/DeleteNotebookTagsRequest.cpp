

#include "huaweicloud/modelarts/v1/model/DeleteNotebookTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteNotebookTagsRequest::DeleteNotebookTagsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteNotebookTagsRequest::~DeleteNotebookTagsRequest() = default;

void DeleteNotebookTagsRequest::validate()
{
}

web::json::value DeleteNotebookTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteNotebookTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteTmsTagsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteNotebookTagsRequest::getResourceId() const
{
    return resourceId_;
}

void DeleteNotebookTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool DeleteNotebookTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void DeleteNotebookTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string DeleteNotebookTagsRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void DeleteNotebookTagsRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool DeleteNotebookTagsRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void DeleteNotebookTagsRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

DeleteTmsTagsRequest DeleteNotebookTagsRequest::getBody() const
{
    return body_;
}

void DeleteNotebookTagsRequest::setBody(const DeleteTmsTagsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteNotebookTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteNotebookTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


