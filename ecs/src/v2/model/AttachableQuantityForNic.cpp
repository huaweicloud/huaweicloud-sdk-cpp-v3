

#include "huaweicloud/ecs/v2/model/AttachableQuantityForNic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




AttachableQuantityForNic::AttachableQuantityForNic()
{
    freeEfiNic_ = 0;
    freeEfiNicIsSet_ = false;
    freeScsi_ = 0;
    freeScsiIsSet_ = false;
    freeBlk_ = 0;
    freeBlkIsSet_ = false;
    freeDisk_ = 0;
    freeDiskIsSet_ = false;
    freeNic_ = 0;
    freeNicIsSet_ = false;
}

AttachableQuantityForNic::~AttachableQuantityForNic() = default;

void AttachableQuantityForNic::validate()
{
}

web::json::value AttachableQuantityForNic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(freeEfiNicIsSet_) {
        val[utility::conversions::to_string_t("free_efi_nic")] = ModelBase::toJson(freeEfiNic_);
    }
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
bool AttachableQuantityForNic::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("free_efi_nic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("free_efi_nic"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreeEfiNic(refVal);
        }
    }
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


int32_t AttachableQuantityForNic::getFreeEfiNic() const
{
    return freeEfiNic_;
}

void AttachableQuantityForNic::setFreeEfiNic(int32_t value)
{
    freeEfiNic_ = value;
    freeEfiNicIsSet_ = true;
}

bool AttachableQuantityForNic::freeEfiNicIsSet() const
{
    return freeEfiNicIsSet_;
}

void AttachableQuantityForNic::unsetfreeEfiNic()
{
    freeEfiNicIsSet_ = false;
}

int32_t AttachableQuantityForNic::getFreeScsi() const
{
    return freeScsi_;
}

void AttachableQuantityForNic::setFreeScsi(int32_t value)
{
    freeScsi_ = value;
    freeScsiIsSet_ = true;
}

bool AttachableQuantityForNic::freeScsiIsSet() const
{
    return freeScsiIsSet_;
}

void AttachableQuantityForNic::unsetfreeScsi()
{
    freeScsiIsSet_ = false;
}

int32_t AttachableQuantityForNic::getFreeBlk() const
{
    return freeBlk_;
}

void AttachableQuantityForNic::setFreeBlk(int32_t value)
{
    freeBlk_ = value;
    freeBlkIsSet_ = true;
}

bool AttachableQuantityForNic::freeBlkIsSet() const
{
    return freeBlkIsSet_;
}

void AttachableQuantityForNic::unsetfreeBlk()
{
    freeBlkIsSet_ = false;
}

int32_t AttachableQuantityForNic::getFreeDisk() const
{
    return freeDisk_;
}

void AttachableQuantityForNic::setFreeDisk(int32_t value)
{
    freeDisk_ = value;
    freeDiskIsSet_ = true;
}

bool AttachableQuantityForNic::freeDiskIsSet() const
{
    return freeDiskIsSet_;
}

void AttachableQuantityForNic::unsetfreeDisk()
{
    freeDiskIsSet_ = false;
}

int32_t AttachableQuantityForNic::getFreeNic() const
{
    return freeNic_;
}

void AttachableQuantityForNic::setFreeNic(int32_t value)
{
    freeNic_ = value;
    freeNicIsSet_ = true;
}

bool AttachableQuantityForNic::freeNicIsSet() const
{
    return freeNicIsSet_;
}

void AttachableQuantityForNic::unsetfreeNic()
{
    freeNicIsSet_ = false;
}

}
}
}
}
}


