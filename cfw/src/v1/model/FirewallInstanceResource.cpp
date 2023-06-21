

#include "huaweicloud/cfw/v1/model/FirewallInstanceResource.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




FirewallInstanceResource::FirewallInstanceResource()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    cloudServiceType_ = "";
    cloudServiceTypeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    resourceSize_ = 0;
    resourceSizeIsSet_ = false;
    resourceSizeMeasureId_ = 0;
    resourceSizeMeasureIdIsSet_ = false;
}

FirewallInstanceResource::~FirewallInstanceResource() = default;

void FirewallInstanceResource::validate()
{
}

web::json::value FirewallInstanceResource::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(cloudServiceTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_service_type")] = ModelBase::toJson(cloudServiceType_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }
    if(resourceSizeIsSet_) {
        val[utility::conversions::to_string_t("resource_size")] = ModelBase::toJson(resourceSize_);
    }
    if(resourceSizeMeasureIdIsSet_) {
        val[utility::conversions::to_string_t("resource_size_measure_id")] = ModelBase::toJson(resourceSizeMeasureId_);
    }

    return val;
}

bool FirewallInstanceResource::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cloud_service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudServiceType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("resource_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_size_measure_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_size_measure_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSizeMeasureId(refVal);
        }
    }
    return ok;
}


std::string FirewallInstanceResource::getResourceId() const
{
    return resourceId_;
}

void FirewallInstanceResource::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool FirewallInstanceResource::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void FirewallInstanceResource::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string FirewallInstanceResource::getCloudServiceType() const
{
    return cloudServiceType_;
}

void FirewallInstanceResource::setCloudServiceType(const std::string& value)
{
    cloudServiceType_ = value;
    cloudServiceTypeIsSet_ = true;
}

bool FirewallInstanceResource::cloudServiceTypeIsSet() const
{
    return cloudServiceTypeIsSet_;
}

void FirewallInstanceResource::unsetcloudServiceType()
{
    cloudServiceTypeIsSet_ = false;
}

std::string FirewallInstanceResource::getResourceType() const
{
    return resourceType_;
}

void FirewallInstanceResource::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool FirewallInstanceResource::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void FirewallInstanceResource::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string FirewallInstanceResource::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void FirewallInstanceResource::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool FirewallInstanceResource::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void FirewallInstanceResource::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

int32_t FirewallInstanceResource::getResourceSize() const
{
    return resourceSize_;
}

void FirewallInstanceResource::setResourceSize(int32_t value)
{
    resourceSize_ = value;
    resourceSizeIsSet_ = true;
}

bool FirewallInstanceResource::resourceSizeIsSet() const
{
    return resourceSizeIsSet_;
}

void FirewallInstanceResource::unsetresourceSize()
{
    resourceSizeIsSet_ = false;
}

int32_t FirewallInstanceResource::getResourceSizeMeasureId() const
{
    return resourceSizeMeasureId_;
}

void FirewallInstanceResource::setResourceSizeMeasureId(int32_t value)
{
    resourceSizeMeasureId_ = value;
    resourceSizeMeasureIdIsSet_ = true;
}

bool FirewallInstanceResource::resourceSizeMeasureIdIsSet() const
{
    return resourceSizeMeasureIdIsSet_;
}

void FirewallInstanceResource::unsetresourceSizeMeasureId()
{
    resourceSizeMeasureIdIsSet_ = false;
}

}
}
}
}
}


