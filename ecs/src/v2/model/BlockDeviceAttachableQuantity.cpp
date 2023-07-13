

#include "huaweicloud/ecs/v2/model/BlockDeviceAttachableQuantity.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BlockDeviceAttachableQuantity::BlockDeviceAttachableQuantity()
{
    freeScsi_ = 0;
    freeScsiIsSet_ = false;
    freeBlk_ = 0;
    freeBlkIsSet_ = false;
    freeDisk_ = 0;
    freeDiskIsSet_ = false;
}

BlockDeviceAttachableQuantity::~BlockDeviceAttachableQuantity() = default;

void BlockDeviceAttachableQuantity::validate()
{
}

web::json::value BlockDeviceAttachableQuantity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(freeScsiIsSet_) {
        val[utility::conversions::to_string_t("free_scsi")] = ModelBase::toJson(freeScsi_);
    }
    if(freeBlkIsSet_) {
        val[utility::conversions::to_string_t("free_blk")] = ModelBase::toJson(freeBlk_);
    }
    if(freeDiskIsSet_) {
        val[utility::conversions::to_string_t("free_disk")] = ModelBase::toJson(freeDisk_);
    }

    return val;
}

bool BlockDeviceAttachableQuantity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("free_scsi"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("free_scsi"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreeScsi(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("free_blk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("free_blk"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreeBlk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("free_disk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("free_disk"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreeDisk(refVal);
        }
    }
    return ok;
}

int32_t BlockDeviceAttachableQuantity::getFreeScsi() const
{
    return freeScsi_;
}

void BlockDeviceAttachableQuantity::setFreeScsi(int32_t value)
{
    freeScsi_ = value;
    freeScsiIsSet_ = true;
}

bool BlockDeviceAttachableQuantity::freeScsiIsSet() const
{
    return freeScsiIsSet_;
}

void BlockDeviceAttachableQuantity::unsetfreeScsi()
{
    freeScsiIsSet_ = false;
}

int32_t BlockDeviceAttachableQuantity::getFreeBlk() const
{
    return freeBlk_;
}

void BlockDeviceAttachableQuantity::setFreeBlk(int32_t value)
{
    freeBlk_ = value;
    freeBlkIsSet_ = true;
}

bool BlockDeviceAttachableQuantity::freeBlkIsSet() const
{
    return freeBlkIsSet_;
}

void BlockDeviceAttachableQuantity::unsetfreeBlk()
{
    freeBlkIsSet_ = false;
}

int32_t BlockDeviceAttachableQuantity::getFreeDisk() const
{
    return freeDisk_;
}

void BlockDeviceAttachableQuantity::setFreeDisk(int32_t value)
{
    freeDisk_ = value;
    freeDiskIsSet_ = true;
}

bool BlockDeviceAttachableQuantity::freeDiskIsSet() const
{
    return freeDiskIsSet_;
}

void BlockDeviceAttachableQuantity::unsetfreeDisk()
{
    freeDiskIsSet_ = false;
}

}
}
}
}
}


