

#include "huaweicloud/codeartsartifact/v2/model/ReleaseStorageVOV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




ReleaseStorageVOV5::ReleaseStorageVOV5()
{
    usedCapacity_ = "";
    usedCapacityIsSet_ = false;
    totalCapacity_ = "";
    totalCapacityIsSet_ = false;
    usedCapacitySize_ = 0L;
    usedCapacitySizeIsSet_ = false;
    totalCapacitySize_ = 0L;
    totalCapacitySizeIsSet_ = false;
    packageType_ = "";
    packageTypeIsSet_ = false;
    totalCount_ = 0L;
    totalCountIsSet_ = false;
}

ReleaseStorageVOV5::~ReleaseStorageVOV5() = default;

void ReleaseStorageVOV5::validate()
{
}

web::json::value ReleaseStorageVOV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usedCapacityIsSet_) {
        val[utility::conversions::to_string_t("used_capacity")] = ModelBase::toJson(usedCapacity_);
    }
    if(totalCapacityIsSet_) {
        val[utility::conversions::to_string_t("total_capacity")] = ModelBase::toJson(totalCapacity_);
    }
    if(usedCapacitySizeIsSet_) {
        val[utility::conversions::to_string_t("used_capacity_size")] = ModelBase::toJson(usedCapacitySize_);
    }
    if(totalCapacitySizeIsSet_) {
        val[utility::conversions::to_string_t("total_capacity_size")] = ModelBase::toJson(totalCapacitySize_);
    }
    if(packageTypeIsSet_) {
        val[utility::conversions::to_string_t("package_type")] = ModelBase::toJson(packageType_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ReleaseStorageVOV5::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("used_capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_capacity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedCapacity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_capacity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCapacity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_capacity_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_capacity_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedCapacitySize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_capacity_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_capacity_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCapacitySize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::string ReleaseStorageVOV5::getUsedCapacity() const
{
    return usedCapacity_;
}

void ReleaseStorageVOV5::setUsedCapacity(const std::string& value)
{
    usedCapacity_ = value;
    usedCapacityIsSet_ = true;
}

bool ReleaseStorageVOV5::usedCapacityIsSet() const
{
    return usedCapacityIsSet_;
}

void ReleaseStorageVOV5::unsetusedCapacity()
{
    usedCapacityIsSet_ = false;
}

std::string ReleaseStorageVOV5::getTotalCapacity() const
{
    return totalCapacity_;
}

void ReleaseStorageVOV5::setTotalCapacity(const std::string& value)
{
    totalCapacity_ = value;
    totalCapacityIsSet_ = true;
}

bool ReleaseStorageVOV5::totalCapacityIsSet() const
{
    return totalCapacityIsSet_;
}

void ReleaseStorageVOV5::unsettotalCapacity()
{
    totalCapacityIsSet_ = false;
}

int64_t ReleaseStorageVOV5::getUsedCapacitySize() const
{
    return usedCapacitySize_;
}

void ReleaseStorageVOV5::setUsedCapacitySize(int64_t value)
{
    usedCapacitySize_ = value;
    usedCapacitySizeIsSet_ = true;
}

bool ReleaseStorageVOV5::usedCapacitySizeIsSet() const
{
    return usedCapacitySizeIsSet_;
}

void ReleaseStorageVOV5::unsetusedCapacitySize()
{
    usedCapacitySizeIsSet_ = false;
}

int64_t ReleaseStorageVOV5::getTotalCapacitySize() const
{
    return totalCapacitySize_;
}

void ReleaseStorageVOV5::setTotalCapacitySize(int64_t value)
{
    totalCapacitySize_ = value;
    totalCapacitySizeIsSet_ = true;
}

bool ReleaseStorageVOV5::totalCapacitySizeIsSet() const
{
    return totalCapacitySizeIsSet_;
}

void ReleaseStorageVOV5::unsettotalCapacitySize()
{
    totalCapacitySizeIsSet_ = false;
}

std::string ReleaseStorageVOV5::getPackageType() const
{
    return packageType_;
}

void ReleaseStorageVOV5::setPackageType(const std::string& value)
{
    packageType_ = value;
    packageTypeIsSet_ = true;
}

bool ReleaseStorageVOV5::packageTypeIsSet() const
{
    return packageTypeIsSet_;
}

void ReleaseStorageVOV5::unsetpackageType()
{
    packageTypeIsSet_ = false;
}

int64_t ReleaseStorageVOV5::getTotalCount() const
{
    return totalCount_;
}

void ReleaseStorageVOV5::setTotalCount(int64_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ReleaseStorageVOV5::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ReleaseStorageVOV5::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


