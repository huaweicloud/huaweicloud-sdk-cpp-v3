

#include "huaweicloud/drs/v5/model/ProductInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ProductInfo::ProductInfo()
{
    id_ = "";
    idIsSet_ = false;
    cloudServiceType_ = "";
    cloudServiceTypeIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    resourceSize_ = 0;
    resourceSizeIsSet_ = false;
    usageFactor_ = "";
    usageFactorIsSet_ = false;
    usageValue_ = 0.0;
    usageValueIsSet_ = false;
    usageMeasureId_ = 0;
    usageMeasureIdIsSet_ = false;
    resourceSizeMeasureId_ = 0;
    resourceSizeMeasureIdIsSet_ = false;
}

ProductInfo::~ProductInfo() = default;

void ProductInfo::validate()
{
}

web::json::value ProductInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
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
    if(usageFactorIsSet_) {
        val[utility::conversions::to_string_t("usage_factor")] = ModelBase::toJson(usageFactor_);
    }
    if(usageValueIsSet_) {
        val[utility::conversions::to_string_t("usage_value")] = ModelBase::toJson(usageValue_);
    }
    if(usageMeasureIdIsSet_) {
        val[utility::conversions::to_string_t("usage_measure_id")] = ModelBase::toJson(usageMeasureId_);
    }
    if(resourceSizeMeasureIdIsSet_) {
        val[utility::conversions::to_string_t("resource_size_measure_id")] = ModelBase::toJson(resourceSizeMeasureId_);
    }

    return val;
}

bool ProductInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("usage_factor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usage_factor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsageFactor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usage_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usage_value"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsageValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usage_measure_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usage_measure_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsageMeasureId(refVal);
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

std::string ProductInfo::getId() const
{
    return id_;
}

void ProductInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProductInfo::idIsSet() const
{
    return idIsSet_;
}

void ProductInfo::unsetid()
{
    idIsSet_ = false;
}

std::string ProductInfo::getCloudServiceType() const
{
    return cloudServiceType_;
}

void ProductInfo::setCloudServiceType(const std::string& value)
{
    cloudServiceType_ = value;
    cloudServiceTypeIsSet_ = true;
}

bool ProductInfo::cloudServiceTypeIsSet() const
{
    return cloudServiceTypeIsSet_;
}

void ProductInfo::unsetcloudServiceType()
{
    cloudServiceTypeIsSet_ = false;
}

std::string ProductInfo::getResourceType() const
{
    return resourceType_;
}

void ProductInfo::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ProductInfo::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ProductInfo::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ProductInfo::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void ProductInfo::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool ProductInfo::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void ProductInfo::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

int32_t ProductInfo::getResourceSize() const
{
    return resourceSize_;
}

void ProductInfo::setResourceSize(int32_t value)
{
    resourceSize_ = value;
    resourceSizeIsSet_ = true;
}

bool ProductInfo::resourceSizeIsSet() const
{
    return resourceSizeIsSet_;
}

void ProductInfo::unsetresourceSize()
{
    resourceSizeIsSet_ = false;
}

std::string ProductInfo::getUsageFactor() const
{
    return usageFactor_;
}

void ProductInfo::setUsageFactor(const std::string& value)
{
    usageFactor_ = value;
    usageFactorIsSet_ = true;
}

bool ProductInfo::usageFactorIsSet() const
{
    return usageFactorIsSet_;
}

void ProductInfo::unsetusageFactor()
{
    usageFactorIsSet_ = false;
}

double ProductInfo::getUsageValue() const
{
    return usageValue_;
}

void ProductInfo::setUsageValue(double value)
{
    usageValue_ = value;
    usageValueIsSet_ = true;
}

bool ProductInfo::usageValueIsSet() const
{
    return usageValueIsSet_;
}

void ProductInfo::unsetusageValue()
{
    usageValueIsSet_ = false;
}

int32_t ProductInfo::getUsageMeasureId() const
{
    return usageMeasureId_;
}

void ProductInfo::setUsageMeasureId(int32_t value)
{
    usageMeasureId_ = value;
    usageMeasureIdIsSet_ = true;
}

bool ProductInfo::usageMeasureIdIsSet() const
{
    return usageMeasureIdIsSet_;
}

void ProductInfo::unsetusageMeasureId()
{
    usageMeasureIdIsSet_ = false;
}

int32_t ProductInfo::getResourceSizeMeasureId() const
{
    return resourceSizeMeasureId_;
}

void ProductInfo::setResourceSizeMeasureId(int32_t value)
{
    resourceSizeMeasureId_ = value;
    resourceSizeMeasureIdIsSet_ = true;
}

bool ProductInfo::resourceSizeMeasureIdIsSet() const
{
    return resourceSizeMeasureIdIsSet_;
}

void ProductInfo::unsetresourceSizeMeasureId()
{
    resourceSizeMeasureIdIsSet_ = false;
}

}
}
}
}
}


