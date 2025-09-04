

#include "huaweicloud/ecs/v2/model/ShowAppendableVolumeQuotaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowAppendableVolumeQuotaResponse::ShowAppendableVolumeQuotaResponse()
{
    freeScsi_ = 0;
    freeScsiIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    freeBlk_ = 0;
    freeBlkIsSet_ = false;
}

ShowAppendableVolumeQuotaResponse::~ShowAppendableVolumeQuotaResponse() = default;

void ShowAppendableVolumeQuotaResponse::validate()
{
}

web::json::value ShowAppendableVolumeQuotaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(freeScsiIsSet_) {
        val[utility::conversions::to_string_t("free_scsi")] = ModelBase::toJson(freeScsi_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(freeBlkIsSet_) {
        val[utility::conversions::to_string_t("free_blk")] = ModelBase::toJson(freeBlk_);
    }

    return val;
}
bool ShowAppendableVolumeQuotaResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
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
    return ok;
}


int32_t ShowAppendableVolumeQuotaResponse::getFreeScsi() const
{
    return freeScsi_;
}

void ShowAppendableVolumeQuotaResponse::setFreeScsi(int32_t value)
{
    freeScsi_ = value;
    freeScsiIsSet_ = true;
}

bool ShowAppendableVolumeQuotaResponse::freeScsiIsSet() const
{
    return freeScsiIsSet_;
}

void ShowAppendableVolumeQuotaResponse::unsetfreeScsi()
{
    freeScsiIsSet_ = false;
}

int32_t ShowAppendableVolumeQuotaResponse::getCount() const
{
    return count_;
}

void ShowAppendableVolumeQuotaResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowAppendableVolumeQuotaResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowAppendableVolumeQuotaResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ShowAppendableVolumeQuotaResponse::getFreeBlk() const
{
    return freeBlk_;
}

void ShowAppendableVolumeQuotaResponse::setFreeBlk(int32_t value)
{
    freeBlk_ = value;
    freeBlkIsSet_ = true;
}

bool ShowAppendableVolumeQuotaResponse::freeBlkIsSet() const
{
    return freeBlkIsSet_;
}

void ShowAppendableVolumeQuotaResponse::unsetfreeBlk()
{
    freeBlkIsSet_ = false;
}

}
}
}
}
}


