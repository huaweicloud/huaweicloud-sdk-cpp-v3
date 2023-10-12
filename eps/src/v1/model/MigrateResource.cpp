

#include "huaweicloud/eps/v1/model/MigrateResource.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




MigrateResource::MigrateResource()
{
    regionId_ = "";
    regionIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    associated_ = false;
    associatedIsSet_ = false;
}

MigrateResource::~MigrateResource() = default;

void MigrateResource::validate()
{
}

web::json::value MigrateResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(associatedIsSet_) {
        val[utility::conversions::to_string_t("associated")] = ModelBase::toJson(associated_);
    }

    return val;
}
bool MigrateResource::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("associated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociated(refVal);
        }
    }
    return ok;
}


std::string MigrateResource::getRegionId() const
{
    return regionId_;
}

void MigrateResource::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool MigrateResource::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void MigrateResource::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string MigrateResource::getProjectId() const
{
    return projectId_;
}

void MigrateResource::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool MigrateResource::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void MigrateResource::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string MigrateResource::getResourceId() const
{
    return resourceId_;
}

void MigrateResource::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool MigrateResource::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void MigrateResource::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string MigrateResource::getResourceType() const
{
    return resourceType_;
}

void MigrateResource::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool MigrateResource::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void MigrateResource::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

bool MigrateResource::isAssociated() const
{
    return associated_;
}

void MigrateResource::setAssociated(bool value)
{
    associated_ = value;
    associatedIsSet_ = true;
}

bool MigrateResource::associatedIsSet() const
{
    return associatedIsSet_;
}

void MigrateResource::unsetassociated()
{
    associatedIsSet_ = false;
}

}
}
}
}
}


