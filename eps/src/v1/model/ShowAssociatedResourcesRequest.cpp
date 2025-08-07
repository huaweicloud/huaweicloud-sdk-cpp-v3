

#include "huaweicloud/eps/v1/model/ShowAssociatedResourcesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ShowAssociatedResourcesRequest::ShowAssociatedResourcesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
}

ShowAssociatedResourcesRequest::~ShowAssociatedResourcesRequest() = default;

void ShowAssociatedResourcesRequest::validate()
{
}

web::json::value ShowAssociatedResourcesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }

    return val;
}
bool ShowAssociatedResourcesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
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


std::string ShowAssociatedResourcesRequest::getProjectId() const
{
    return projectId_;
}

void ShowAssociatedResourcesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowAssociatedResourcesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowAssociatedResourcesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowAssociatedResourcesRequest::getRegionId() const
{
    return regionId_;
}

void ShowAssociatedResourcesRequest::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool ShowAssociatedResourcesRequest::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void ShowAssociatedResourcesRequest::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string ShowAssociatedResourcesRequest::getResourceId() const
{
    return resourceId_;
}

void ShowAssociatedResourcesRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ShowAssociatedResourcesRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ShowAssociatedResourcesRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ShowAssociatedResourcesRequest::getResourceType() const
{
    return resourceType_;
}

void ShowAssociatedResourcesRequest::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ShowAssociatedResourcesRequest::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ShowAssociatedResourcesRequest::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

}
}
}
}
}


