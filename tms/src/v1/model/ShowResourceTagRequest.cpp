

#include "huaweicloud/tms/v1/model/ShowResourceTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ShowResourceTagRequest::ShowResourceTagRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

ShowResourceTagRequest::~ShowResourceTagRequest() = default;

void ShowResourceTagRequest::validate()
{
}

web::json::value ShowResourceTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}

bool ShowResourceTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    return ok;
}

std::string ShowResourceTagRequest::getResourceId() const
{
    return resourceId_;
}

void ShowResourceTagRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ShowResourceTagRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ShowResourceTagRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ShowResourceTagRequest::getProjectId() const
{
    return projectId_;
}

void ShowResourceTagRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowResourceTagRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowResourceTagRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowResourceTagRequest::getResourceType() const
{
    return resourceType_;
}

void ShowResourceTagRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ShowResourceTagRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ShowResourceTagRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


