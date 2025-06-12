

#include "huaweicloud/metastudio/v1/model/ResourceUsageInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ResourceUsageInfo::ResourceUsageInfo()
{
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    subResourceType_ = "";
    subResourceTypeIsSet_ = false;
    isSubResource_ = false;
    isSubResourceIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    resourceSource_ = "";
    resourceSourceIsSet_ = false;
    amount_ = 0.0f;
    amountIsSet_ = false;
    usage_ = 0.0f;
    usageIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

ResourceUsageInfo::~ResourceUsageInfo() = default;

void ResourceUsageInfo::validate()
{
}

web::json::value ResourceUsageInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(subResourceTypeIsSet_) {
        val[utility::conversions::to_string_t("sub_resource_type")] = ModelBase::toJson(subResourceType_);
    }
    if(isSubResourceIsSet_) {
        val[utility::conversions::to_string_t("is_sub_resource")] = ModelBase::toJson(isSubResource_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(resourceSourceIsSet_) {
        val[utility::conversions::to_string_t("resource_source")] = ModelBase::toJson(resourceSource_);
    }
    if(amountIsSet_) {
        val[utility::conversions::to_string_t("amount")] = ModelBase::toJson(amount_);
    }
    if(usageIsSet_) {
        val[utility::conversions::to_string_t("usage")] = ModelBase::toJson(usage_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }

    return val;
}
bool ResourceUsageInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_sub_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_sub_resource"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSubResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAmount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usage"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    return ok;
}


std::string ResourceUsageInfo::getResourceType() const
{
    return resourceType_;
}

void ResourceUsageInfo::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ResourceUsageInfo::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ResourceUsageInfo::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ResourceUsageInfo::getBusinessType() const
{
    return businessType_;
}

void ResourceUsageInfo::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool ResourceUsageInfo::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void ResourceUsageInfo::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string ResourceUsageInfo::getSubResourceType() const
{
    return subResourceType_;
}

void ResourceUsageInfo::setSubResourceType(const std::string& value)
{
    subResourceType_ = value;
    subResourceTypeIsSet_ = true;
}

bool ResourceUsageInfo::subResourceTypeIsSet() const
{
    return subResourceTypeIsSet_;
}

void ResourceUsageInfo::unsetsubResourceType()
{
    subResourceTypeIsSet_ = false;
}

bool ResourceUsageInfo::isIsSubResource() const
{
    return isSubResource_;
}

void ResourceUsageInfo::setIsSubResource(bool value)
{
    isSubResource_ = value;
    isSubResourceIsSet_ = true;
}

bool ResourceUsageInfo::isSubResourceIsSet() const
{
    return isSubResourceIsSet_;
}

void ResourceUsageInfo::unsetisSubResource()
{
    isSubResourceIsSet_ = false;
}

std::string ResourceUsageInfo::getChargingMode() const
{
    return chargingMode_;
}

void ResourceUsageInfo::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool ResourceUsageInfo::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void ResourceUsageInfo::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string ResourceUsageInfo::getResourceSource() const
{
    return resourceSource_;
}

void ResourceUsageInfo::setResourceSource(const std::string& value)
{
    resourceSource_ = value;
    resourceSourceIsSet_ = true;
}

bool ResourceUsageInfo::resourceSourceIsSet() const
{
    return resourceSourceIsSet_;
}

void ResourceUsageInfo::unsetresourceSource()
{
    resourceSourceIsSet_ = false;
}

float ResourceUsageInfo::getAmount() const
{
    return amount_;
}

void ResourceUsageInfo::setAmount(float value)
{
    amount_ = value;
    amountIsSet_ = true;
}

bool ResourceUsageInfo::amountIsSet() const
{
    return amountIsSet_;
}

void ResourceUsageInfo::unsetamount()
{
    amountIsSet_ = false;
}

float ResourceUsageInfo::getUsage() const
{
    return usage_;
}

void ResourceUsageInfo::setUsage(float value)
{
    usage_ = value;
    usageIsSet_ = true;
}

bool ResourceUsageInfo::usageIsSet() const
{
    return usageIsSet_;
}

void ResourceUsageInfo::unsetusage()
{
    usageIsSet_ = false;
}

std::string ResourceUsageInfo::getUnit() const
{
    return unit_;
}

void ResourceUsageInfo::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool ResourceUsageInfo::unitIsSet() const
{
    return unitIsSet_;
}

void ResourceUsageInfo::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


