

#include "huaweicloud/modelarts/v1/model/DeleteInferServiceTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteInferServiceTagRequest::DeleteInferServiceTagRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteInferServiceTagRequest::~DeleteInferServiceTagRequest() = default;

void DeleteInferServiceTagRequest::validate()
{
}

web::json::value DeleteInferServiceTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteInferServiceTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
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
            DeleteInferTmsTagsRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteInferServiceTagRequest::getResourceId() const
{
    return resourceId_;
}

void DeleteInferServiceTagRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool DeleteInferServiceTagRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void DeleteInferServiceTagRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string DeleteInferServiceTagRequest::getContentType() const
{
    return contentType_;
}

void DeleteInferServiceTagRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteInferServiceTagRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteInferServiceTagRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string DeleteInferServiceTagRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void DeleteInferServiceTagRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool DeleteInferServiceTagRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void DeleteInferServiceTagRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

DeleteInferTmsTagsRequest DeleteInferServiceTagRequest::getBody() const
{
    return body_;
}

void DeleteInferServiceTagRequest::setBody(const DeleteInferTmsTagsRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteInferServiceTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteInferServiceTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


