

#include "huaweicloud/metastudio/v1/model/ResourceItemInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ResourceItemInfo::ResourceItemInfo()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    boundAssetIsSet_ = false;
    resourceExpireTime_ = "";
    resourceExpireTimeIsSet_ = false;
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
    status_ = 0;
    statusIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

ResourceItemInfo::~ResourceItemInfo() = default;

void ResourceItemInfo::validate()
{
}

web::json::value ResourceItemInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(boundAssetIsSet_) {
        val[utility::conversions::to_string_t("bound_asset")] = ModelBase::toJson(boundAsset_);
    }
    if(resourceExpireTimeIsSet_) {
        val[utility::conversions::to_string_t("resource_expire_time")] = ModelBase::toJson(resourceExpireTime_);
    }
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
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }

    return val;
}
bool ResourceItemInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bound_asset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bound_asset"));
        if(!fieldValue.is_null())
        {
            BoundAssetInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBoundAsset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_expire_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceExpireTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


std::string ResourceItemInfo::getResourceId() const
{
    return resourceId_;
}

void ResourceItemInfo::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ResourceItemInfo::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ResourceItemInfo::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ResourceItemInfo::getOrderId() const
{
    return orderId_;
}

void ResourceItemInfo::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ResourceItemInfo::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ResourceItemInfo::unsetorderId()
{
    orderIdIsSet_ = false;
}

BoundAssetInfo ResourceItemInfo::getBoundAsset() const
{
    return boundAsset_;
}

void ResourceItemInfo::setBoundAsset(const BoundAssetInfo& value)
{
    boundAsset_ = value;
    boundAssetIsSet_ = true;
}

bool ResourceItemInfo::boundAssetIsSet() const
{
    return boundAssetIsSet_;
}

void ResourceItemInfo::unsetboundAsset()
{
    boundAssetIsSet_ = false;
}

std::string ResourceItemInfo::getResourceExpireTime() const
{
    return resourceExpireTime_;
}

void ResourceItemInfo::setResourceExpireTime(const std::string& value)
{
    resourceExpireTime_ = value;
    resourceExpireTimeIsSet_ = true;
}

bool ResourceItemInfo::resourceExpireTimeIsSet() const
{
    return resourceExpireTimeIsSet_;
}

void ResourceItemInfo::unsetresourceExpireTime()
{
    resourceExpireTimeIsSet_ = false;
}

std::string ResourceItemInfo::getResourceType() const
{
    return resourceType_;
}

void ResourceItemInfo::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool ResourceItemInfo::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void ResourceItemInfo::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string ResourceItemInfo::getBusinessType() const
{
    return businessType_;
}

void ResourceItemInfo::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool ResourceItemInfo::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void ResourceItemInfo::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string ResourceItemInfo::getSubResourceType() const
{
    return subResourceType_;
}

void ResourceItemInfo::setSubResourceType(const std::string& value)
{
    subResourceType_ = value;
    subResourceTypeIsSet_ = true;
}

bool ResourceItemInfo::subResourceTypeIsSet() const
{
    return subResourceTypeIsSet_;
}

void ResourceItemInfo::unsetsubResourceType()
{
    subResourceTypeIsSet_ = false;
}

bool ResourceItemInfo::isIsSubResource() const
{
    return isSubResource_;
}

void ResourceItemInfo::setIsSubResource(bool value)
{
    isSubResource_ = value;
    isSubResourceIsSet_ = true;
}

bool ResourceItemInfo::isSubResourceIsSet() const
{
    return isSubResourceIsSet_;
}

void ResourceItemInfo::unsetisSubResource()
{
    isSubResourceIsSet_ = false;
}

std::string ResourceItemInfo::getChargingMode() const
{
    return chargingMode_;
}

void ResourceItemInfo::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool ResourceItemInfo::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void ResourceItemInfo::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string ResourceItemInfo::getResourceSource() const
{
    return resourceSource_;
}

void ResourceItemInfo::setResourceSource(const std::string& value)
{
    resourceSource_ = value;
    resourceSourceIsSet_ = true;
}

bool ResourceItemInfo::resourceSourceIsSet() const
{
    return resourceSourceIsSet_;
}

void ResourceItemInfo::unsetresourceSource()
{
    resourceSourceIsSet_ = false;
}

float ResourceItemInfo::getAmount() const
{
    return amount_;
}

void ResourceItemInfo::setAmount(float value)
{
    amount_ = value;
    amountIsSet_ = true;
}

bool ResourceItemInfo::amountIsSet() const
{
    return amountIsSet_;
}

void ResourceItemInfo::unsetamount()
{
    amountIsSet_ = false;
}

float ResourceItemInfo::getUsage() const
{
    return usage_;
}

void ResourceItemInfo::setUsage(float value)
{
    usage_ = value;
    usageIsSet_ = true;
}

bool ResourceItemInfo::usageIsSet() const
{
    return usageIsSet_;
}

void ResourceItemInfo::unsetusage()
{
    usageIsSet_ = false;
}

int32_t ResourceItemInfo::getStatus() const
{
    return status_;
}

void ResourceItemInfo::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ResourceItemInfo::statusIsSet() const
{
    return statusIsSet_;
}

void ResourceItemInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ResourceItemInfo::getUnit() const
{
    return unit_;
}

void ResourceItemInfo::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool ResourceItemInfo::unitIsSet() const
{
    return unitIsSet_;
}

void ResourceItemInfo::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


