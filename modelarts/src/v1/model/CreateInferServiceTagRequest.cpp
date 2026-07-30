

#include "huaweicloud/modelarts/v1/model/CreateInferServiceTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateInferServiceTagRequest::CreateInferServiceTagRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
}

CreateInferServiceTagRequest::~CreateInferServiceTagRequest() = default;

void CreateInferServiceTagRequest::validate()
{
}

web::json::value CreateInferServiceTagRequest::toJson() const
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

    return val;
}
bool CreateInferServiceTagRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateInferServiceTagRequest::getResourceId() const
{
    return resourceId_;
}

void CreateInferServiceTagRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool CreateInferServiceTagRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void CreateInferServiceTagRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string CreateInferServiceTagRequest::getContentType() const
{
    return contentType_;
}

void CreateInferServiceTagRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool CreateInferServiceTagRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void CreateInferServiceTagRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string CreateInferServiceTagRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void CreateInferServiceTagRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool CreateInferServiceTagRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void CreateInferServiceTagRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

}
}
}
}
}


