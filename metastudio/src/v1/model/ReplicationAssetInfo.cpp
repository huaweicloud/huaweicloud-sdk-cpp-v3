

#include "huaweicloud/metastudio/v1/model/ReplicationAssetInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ReplicationAssetInfo::ReplicationAssetInfo()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    assetInfo_ = "";
    assetInfoIsSet_ = false;
    encryptionInfoIsSet_ = false;
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
}

ReplicationAssetInfo::~ReplicationAssetInfo() = default;

void ReplicationAssetInfo::validate()
{
}

web::json::value ReplicationAssetInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(assetInfoIsSet_) {
        val[utility::conversions::to_string_t("asset_info")] = ModelBase::toJson(assetInfo_);
    }
    if(encryptionInfoIsSet_) {
        val[utility::conversions::to_string_t("encryption_info")] = ModelBase::toJson(encryptionInfo_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }

    return val;
}
bool ReplicationAssetInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("asset_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encryption_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption_info"));
        if(!fieldValue.is_null())
        {
            ReplicationEncInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptionInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    return ok;
}


std::string ReplicationAssetInfo::getAssetId() const
{
    return assetId_;
}

void ReplicationAssetInfo::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ReplicationAssetInfo::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ReplicationAssetInfo::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ReplicationAssetInfo::getAssetInfo() const
{
    return assetInfo_;
}

void ReplicationAssetInfo::setAssetInfo(const std::string& value)
{
    assetInfo_ = value;
    assetInfoIsSet_ = true;
}

bool ReplicationAssetInfo::assetInfoIsSet() const
{
    return assetInfoIsSet_;
}

void ReplicationAssetInfo::unsetassetInfo()
{
    assetInfoIsSet_ = false;
}

ReplicationEncInfo ReplicationAssetInfo::getEncryptionInfo() const
{
    return encryptionInfo_;
}

void ReplicationAssetInfo::setEncryptionInfo(const ReplicationEncInfo& value)
{
    encryptionInfo_ = value;
    encryptionInfoIsSet_ = true;
}

bool ReplicationAssetInfo::encryptionInfoIsSet() const
{
    return encryptionInfoIsSet_;
}

void ReplicationAssetInfo::unsetencryptionInfo()
{
    encryptionInfoIsSet_ = false;
}

int64_t ReplicationAssetInfo::getExpireTime() const
{
    return expireTime_;
}

void ReplicationAssetInfo::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool ReplicationAssetInfo::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void ReplicationAssetInfo::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

}
}
}
}
}


