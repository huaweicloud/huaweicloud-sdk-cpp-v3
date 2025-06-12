

#include "huaweicloud/metastudio/v1/model/ShowAssetReplicationInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowAssetReplicationInfoResponse::ShowAssetReplicationInfoResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    assetInfo_ = "";
    assetInfoIsSet_ = false;
    encryptionInfoIsSet_ = false;
    expireTime_ = 0L;
    expireTimeIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowAssetReplicationInfoResponse::~ShowAssetReplicationInfoResponse() = default;

void ShowAssetReplicationInfoResponse::validate()
{
}

web::json::value ShowAssetReplicationInfoResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowAssetReplicationInfoResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowAssetReplicationInfoResponse::getAssetId() const
{
    return assetId_;
}

void ShowAssetReplicationInfoResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowAssetReplicationInfoResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowAssetReplicationInfoResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ShowAssetReplicationInfoResponse::getAssetInfo() const
{
    return assetInfo_;
}

void ShowAssetReplicationInfoResponse::setAssetInfo(const std::string& value)
{
    assetInfo_ = value;
    assetInfoIsSet_ = true;
}

bool ShowAssetReplicationInfoResponse::assetInfoIsSet() const
{
    return assetInfoIsSet_;
}

void ShowAssetReplicationInfoResponse::unsetassetInfo()
{
    assetInfoIsSet_ = false;
}

ReplicationEncInfo ShowAssetReplicationInfoResponse::getEncryptionInfo() const
{
    return encryptionInfo_;
}

void ShowAssetReplicationInfoResponse::setEncryptionInfo(const ReplicationEncInfo& value)
{
    encryptionInfo_ = value;
    encryptionInfoIsSet_ = true;
}

bool ShowAssetReplicationInfoResponse::encryptionInfoIsSet() const
{
    return encryptionInfoIsSet_;
}

void ShowAssetReplicationInfoResponse::unsetencryptionInfo()
{
    encryptionInfoIsSet_ = false;
}

int64_t ShowAssetReplicationInfoResponse::getExpireTime() const
{
    return expireTime_;
}

void ShowAssetReplicationInfoResponse::setExpireTime(int64_t value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool ShowAssetReplicationInfoResponse::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void ShowAssetReplicationInfoResponse::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string ShowAssetReplicationInfoResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowAssetReplicationInfoResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowAssetReplicationInfoResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowAssetReplicationInfoResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


