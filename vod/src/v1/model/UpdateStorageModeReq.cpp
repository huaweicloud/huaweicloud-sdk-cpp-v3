

#include "huaweicloud/vod/v1/model/UpdateStorageModeReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateStorageModeReq::UpdateStorageModeReq()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    storageMode_ = "";
    storageModeIsSet_ = false;
    restoreMode_ = "";
    restoreModeIsSet_ = false;
    days_ = 0;
    daysIsSet_ = false;
    restoreTier_ = "";
    restoreTierIsSet_ = false;
}

UpdateStorageModeReq::~UpdateStorageModeReq() = default;

void UpdateStorageModeReq::validate()
{
}

web::json::value UpdateStorageModeReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(storageModeIsSet_) {
        val[utility::conversions::to_string_t("storage_mode")] = ModelBase::toJson(storageMode_);
    }
    if(restoreModeIsSet_) {
        val[utility::conversions::to_string_t("restore_mode")] = ModelBase::toJson(restoreMode_);
    }
    if(daysIsSet_) {
        val[utility::conversions::to_string_t("days")] = ModelBase::toJson(days_);
    }
    if(restoreTierIsSet_) {
        val[utility::conversions::to_string_t("restore_tier")] = ModelBase::toJson(restoreTier_);
    }

    return val;
}
bool UpdateStorageModeReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorageMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("restore_tier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restore_tier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestoreTier(refVal);
        }
    }
    return ok;
}


std::string UpdateStorageModeReq::getAssetId() const
{
    return assetId_;
}

void UpdateStorageModeReq::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool UpdateStorageModeReq::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void UpdateStorageModeReq::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string UpdateStorageModeReq::getStorageMode() const
{
    return storageMode_;
}

void UpdateStorageModeReq::setStorageMode(const std::string& value)
{
    storageMode_ = value;
    storageModeIsSet_ = true;
}

bool UpdateStorageModeReq::storageModeIsSet() const
{
    return storageModeIsSet_;
}

void UpdateStorageModeReq::unsetstorageMode()
{
    storageModeIsSet_ = false;
}

std::string UpdateStorageModeReq::getRestoreMode() const
{
    return restoreMode_;
}

void UpdateStorageModeReq::setRestoreMode(const std::string& value)
{
    restoreMode_ = value;
    restoreModeIsSet_ = true;
}

bool UpdateStorageModeReq::restoreModeIsSet() const
{
    return restoreModeIsSet_;
}

void UpdateStorageModeReq::unsetrestoreMode()
{
    restoreModeIsSet_ = false;
}

int32_t UpdateStorageModeReq::getDays() const
{
    return days_;
}

void UpdateStorageModeReq::setDays(int32_t value)
{
    days_ = value;
    daysIsSet_ = true;
}

bool UpdateStorageModeReq::daysIsSet() const
{
    return daysIsSet_;
}

void UpdateStorageModeReq::unsetdays()
{
    daysIsSet_ = false;
}

std::string UpdateStorageModeReq::getRestoreTier() const
{
    return restoreTier_;
}

void UpdateStorageModeReq::setRestoreTier(const std::string& value)
{
    restoreTier_ = value;
    restoreTierIsSet_ = true;
}

bool UpdateStorageModeReq::restoreTierIsSet() const
{
    return restoreTierIsSet_;
}

void UpdateStorageModeReq::unsetrestoreTier()
{
    restoreTierIsSet_ = false;
}

}
}
}
}
}


