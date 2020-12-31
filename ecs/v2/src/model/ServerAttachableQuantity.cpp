

#include "huaweicloud/ecs/model/ServerAttachableQuantity.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerAttachableQuantity::ServerAttachableQuantity()
{
    freeScsi_ = 0;
    freeScsiIsSet_ = false;
    freeBlk_ = 0;
    freeBlkIsSet_ = false;
    freeDisk_ = 0;
    freeDiskIsSet_ = false;
    freeNic_ = 0;
    freeNicIsSet_ = false;
}

ServerAttachableQuantity::~ServerAttachableQuantity() = default;

void ServerAttachableQuantity::validate()
{
}

web::json::value ServerAttachableQuantity::toJson() const
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
    if(freeNicIsSet_) {
        val[utility::conversions::to_string_t("free_nic")] = ModelBase::toJson(freeNic_);
    }

    return val;
}

bool ServerAttachableQuantity::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("free_nic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("free_nic"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreeNic(refVal);
        }
    }
    return ok;
}


int32_t ServerAttachableQuantity::getFreeScsi() const
{
    return freeScsi_;
}

void ServerAttachableQuantity::setFreeScsi(int32_t value)
{
    freeScsi_ = value;
    freeScsiIsSet_ = true;
}

bool ServerAttachableQuantity::freeScsiIsSet() const
{
    return freeScsiIsSet_;
}

void ServerAttachableQuantity::unsetfreeScsi()
{
    freeScsiIsSet_ = false;
}

int32_t ServerAttachableQuantity::getFreeBlk() const
{
    return freeBlk_;
}

void ServerAttachableQuantity::setFreeBlk(int32_t value)
{
    freeBlk_ = value;
    freeBlkIsSet_ = true;
}

bool ServerAttachableQuantity::freeBlkIsSet() const
{
    return freeBlkIsSet_;
}

void ServerAttachableQuantity::unsetfreeBlk()
{
    freeBlkIsSet_ = false;
}

int32_t ServerAttachableQuantity::getFreeDisk() const
{
    return freeDisk_;
}

void ServerAttachableQuantity::setFreeDisk(int32_t value)
{
    freeDisk_ = value;
    freeDiskIsSet_ = true;
}

bool ServerAttachableQuantity::freeDiskIsSet() const
{
    return freeDiskIsSet_;
}

void ServerAttachableQuantity::unsetfreeDisk()
{
    freeDiskIsSet_ = false;
}

int32_t ServerAttachableQuantity::getFreeNic() const
{
    return freeNic_;
}

void ServerAttachableQuantity::setFreeNic(int32_t value)
{
    freeNic_ = value;
    freeNicIsSet_ = true;
}

bool ServerAttachableQuantity::freeNicIsSet() const
{
    return freeNicIsSet_;
}

void ServerAttachableQuantity::unsetfreeNic()
{
    freeNicIsSet_ = false;
}

}
}
}
}
}


