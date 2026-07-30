

#include "huaweicloud/modelarts/v1/model/CreateNotebookTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateNotebookTagsRequest::CreateNotebookTagsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateNotebookTagsRequest::~CreateNotebookTagsRequest() = default;

void CreateNotebookTagsRequest::validate()
{
}

web::json::value CreateNotebookTagsRequest::toJson() const
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
bool CreateNotebookTagsRequest::fromJson(const web::json::value& val)
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
            CreateTmsTagsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateNotebookTagsRequest::getResourceId() const
{
    return resourceId_;
}

void CreateNotebookTagsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CreateNotebookTagsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CreateNotebookTagsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string CreateNotebookTagsRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void CreateNotebookTagsRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool CreateNotebookTagsRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void CreateNotebookTagsRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

CreateTmsTagsRequest CreateNotebookTagsRequest::getBody() const
{
    return body_;
}

void CreateNotebookTagsRequest::setBody(const CreateTmsTagsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateNotebookTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateNotebookTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


