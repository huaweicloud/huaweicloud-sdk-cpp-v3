

#include "huaweicloud/cbr/v1/model/Billing.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




Billing::Billing()
{
    allocated_ = 0;
    allocatedIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    cloudType_ = "";
    cloudTypeIsSet_ = false;
    consistentLevel_ = "";
    consistentLevelIsSet_ = false;
    objectType_ = "";
    objectTypeIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    protectType_ = "";
    protectTypeIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    specCode_ = "";
    specCodeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    storageUnit_ = "";
    storageUnitIsSet_ = false;
    used_ = 0;
    usedIsSet_ = false;
    frozenScene_ = "";
    frozenSceneIsSet_ = false;
    isMultiAz_ = false;
    isMultiAzIsSet_ = false;
}

Billing::~Billing() = default;

void Billing::validate()
{
}

web::json::value Billing::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allocatedIsSet_) {
        val[utility::conversions::to_string_t("allocated")] = ModelBase::toJson(allocated_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(cloudTypeIsSet_) {
        val[utility::conversions::to_string_t("cloud_type")] = ModelBase::toJson(cloudType_);
    }
    if(consistentLevelIsSet_) {
        val[utility::conversions::to_string_t("consistent_level")] = ModelBase::toJson(consistentLevel_);
    }
    if(objectTypeIsSet_) {
        val[utility::conversions::to_string_t("object_type")] = ModelBase::toJson(objectType_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(protectTypeIsSet_) {
        val[utility::conversions::to_string_t("protect_type")] = ModelBase::toJson(protectType_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(specCodeIsSet_) {
        val[utility::conversions::to_string_t("spec_code")] = ModelBase::toJson(specCode_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(storageUnitIsSet_) {
        val[utility::conversions::to_string_t("storage_unit")] = ModelBase::toJson(storageUnit_);
    }
    if(usedIsSet_) {
        val[utility::conversions::to_string_t("used")] = ModelBase::toJson(used_);
    }
    if(frozenSceneIsSet_) {
        val[utility::conversions::to_string_t("frozen_scene")] = ModelBase::toJson(frozenScene_);
    }
    if(isMultiAzIsSet_) {
        val[utility::conversions::to_string_t("is_multi_az")] = ModelBase::toJson(isMultiAz_);
    }

    return val;
}
bool Billing::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("allocated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allocated"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllocated(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cloud_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("consistent_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("consistent_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsistentLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protect_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protect_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frozen_scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frozen_scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrozenScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_multi_az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_multi_az"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsMultiAz(refVal);
        }
    }
    return ok;
}


int32_t Billing::getAllocated() const
{
    return allocated_;
}

void Billing::setAllocated(int32_t value)
{
    allocated_ = value;
    allocatedIsSet_ = true;
}

bool Billing::allocatedIsSet() const
{
    return allocatedIsSet_;
}

void Billing::unsetallocated()
{
    allocatedIsSet_ = false;
}

std::string Billing::getChargingMode() const
{
    return chargingMode_;
}

void Billing::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool Billing::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void Billing::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string Billing::getCloudType() const
{
    return cloudType_;
}

void Billing::setCloudType(const std::string& value)
{
    cloudType_ = value;
    cloudTypeIsSet_ = true;
}

bool Billing::cloudTypeIsSet() const
{
    return cloudTypeIsSet_;
}

void Billing::unsetcloudType()
{
    cloudTypeIsSet_ = false;
}

std::string Billing::getConsistentLevel() const
{
    return consistentLevel_;
}

void Billing::setConsistentLevel(const std::string& value)
{
    consistentLevel_ = value;
    consistentLevelIsSet_ = true;
}

bool Billing::consistentLevelIsSet() const
{
    return consistentLevelIsSet_;
}

void Billing::unsetconsistentLevel()
{
    consistentLevelIsSet_ = false;
}

std::string Billing::getObjectType() const
{
    return objectType_;
}

void Billing::setObjectType(const std::string& value)
{
    objectType_ = value;
    objectTypeIsSet_ = true;
}

bool Billing::objectTypeIsSet() const
{
    return objectTypeIsSet_;
}

void Billing::unsetobjectType()
{
    objectTypeIsSet_ = false;
}

std::string Billing::getOrderId() const
{
    return orderId_;
}

void Billing::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool Billing::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void Billing::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string Billing::getProductId() const
{
    return productId_;
}

void Billing::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool Billing::productIdIsSet() const
{
    return productIdIsSet_;
}

void Billing::unsetproductId()
{
    productIdIsSet_ = false;
}

std::string Billing::getProtectType() const
{
    return protectType_;
}

void Billing::setProtectType(const std::string& value)
{
    protectType_ = value;
    protectTypeIsSet_ = true;
}

bool Billing::protectTypeIsSet() const
{
    return protectTypeIsSet_;
}

void Billing::unsetprotectType()
{
    protectTypeIsSet_ = false;
}

int32_t Billing::getSize() const
{
    return size_;
}

void Billing::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool Billing::sizeIsSet() const
{
    return sizeIsSet_;
}

void Billing::unsetsize()
{
    sizeIsSet_ = false;
}

std::string Billing::getSpecCode() const
{
    return specCode_;
}

void Billing::setSpecCode(const std::string& value)
{
    specCode_ = value;
    specCodeIsSet_ = true;
}

bool Billing::specCodeIsSet() const
{
    return specCodeIsSet_;
}

void Billing::unsetspecCode()
{
    specCodeIsSet_ = false;
}

std::string Billing::getStatus() const
{
    return status_;
}

void Billing::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool Billing::statusIsSet() const
{
    return statusIsSet_;
}

void Billing::unsetstatus()
{
    statusIsSet_ = false;
}

std::string Billing::getStorageUnit() const
{
    return storageUnit_;
}

void Billing::setStorageUnit(const std::string& value)
{
    storageUnit_ = value;
    storageUnitIsSet_ = true;
}

bool Billing::storageUnitIsSet() const
{
    return storageUnitIsSet_;
}

void Billing::unsetstorageUnit()
{
    storageUnitIsSet_ = false;
}

int32_t Billing::getUsed() const
{
    return used_;
}

void Billing::setUsed(int32_t value)
{
    used_ = value;
    usedIsSet_ = true;
}

bool Billing::usedIsSet() const
{
    return usedIsSet_;
}

void Billing::unsetused()
{
    usedIsSet_ = false;
}

std::string Billing::getFrozenScene() const
{
    return frozenScene_;
}

void Billing::setFrozenScene(const std::string& value)
{
    frozenScene_ = value;
    frozenSceneIsSet_ = true;
}

bool Billing::frozenSceneIsSet() const
{
    return frozenSceneIsSet_;
}

void Billing::unsetfrozenScene()
{
    frozenSceneIsSet_ = false;
}

bool Billing::isIsMultiAz() const
{
    return isMultiAz_;
}

void Billing::setIsMultiAz(bool value)
{
    isMultiAz_ = value;
    isMultiAzIsSet_ = true;
}

bool Billing::isMultiAzIsSet() const
{
    return isMultiAzIsSet_;
}

void Billing::unsetisMultiAz()
{
    isMultiAzIsSet_ = false;
}

}
}
}
}
}


