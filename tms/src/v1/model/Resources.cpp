

#include "huaweicloud/tms/v1/model/Resources.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




Resources::Resources()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    resourceDetailIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    tagsIsSet_ = false;
}

Resources::~Resources() = default;

void Resources::validate()
{
}

web::json::value Resources::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(resourceDetailIsSet_) {
        val[utility::conversions::to_string_t("resource_detail")] = ModelBase::toJson(resourceDetail_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool Resources::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_detail"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceDetail(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateTagRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string Resources::getProjectId() const
{
    return projectId_;
}

void Resources::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool Resources::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void Resources::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string Resources::getProjectName() const
{
    return projectName_;
}

void Resources::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool Resources::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void Resources::unsetprojectName()
{
    projectNameIsSet_ = false;
}

Object Resources::getResourceDetail() const
{
    return resourceDetail_;
}

void Resources::setResourceDetail(const Object& value)
{
    resourceDetail_ = value;
    resourceDetailIsSet_ = true;
}

bool Resources::resourceDetailIsSet() const
{
    return resourceDetailIsSet_;
}

void Resources::unsetresourceDetail()
{
    resourceDetailIsSet_ = false;
}

std::string Resources::getResourceId() const
{
    return resourceId_;
}

void Resources::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool Resources::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void Resources::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string Resources::getResourceName() const
{
    return resourceName_;
}

void Resources::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool Resources::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void Resources::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

std::string Resources::getResourceType() const
{
    return resourceType_;
}

void Resources::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool Resources::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void Resources::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::vector<CreateTagRequest>& Resources::getTags()
{
    return tags_;
}

void Resources::setTags(const std::vector<CreateTagRequest>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool Resources::tagsIsSet() const
{
    return tagsIsSet_;
}

void Resources::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


