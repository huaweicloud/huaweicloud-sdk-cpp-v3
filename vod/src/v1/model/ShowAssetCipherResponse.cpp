

#include "huaweicloud/vod/v1/model/ShowAssetCipherResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowAssetCipherResponse::ShowAssetCipherResponse()
{
    assetId_ = "";
    assetIdIsSet_ = false;
    edk_ = "";
    edkIsSet_ = false;
    dk_ = "";
    dkIsSet_ = false;
}

ShowAssetCipherResponse::~ShowAssetCipherResponse() = default;

void ShowAssetCipherResponse::validate()
{
}

web::json::value ShowAssetCipherResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }
    if(edkIsSet_) {
        val[utility::conversions::to_string_t("edk")] = ModelBase::toJson(edk_);
    }
    if(dkIsSet_) {
        val[utility::conversions::to_string_t("dk")] = ModelBase::toJson(dk_);
    }

    return val;
}
bool ShowAssetCipherResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("edk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("edk"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEdk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dk"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDk(refVal);
        }
    }
    return ok;
}


std::string ShowAssetCipherResponse::getAssetId() const
{
    return assetId_;
}

void ShowAssetCipherResponse::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowAssetCipherResponse::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowAssetCipherResponse::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string ShowAssetCipherResponse::getEdk() const
{
    return edk_;
}

void ShowAssetCipherResponse::setEdk(const std::string& value)
{
    edk_ = value;
    edkIsSet_ = true;
}

bool ShowAssetCipherResponse::edkIsSet() const
{
    return edkIsSet_;
}

void ShowAssetCipherResponse::unsetedk()
{
    edkIsSet_ = false;
}

std::string ShowAssetCipherResponse::getDk() const
{
    return dk_;
}

void ShowAssetCipherResponse::setDk(const std::string& value)
{
    dk_ = value;
    dkIsSet_ = true;
}

bool ShowAssetCipherResponse::dkIsSet() const
{
    return dkIsSet_;
}

void ShowAssetCipherResponse::unsetdk()
{
    dkIsSet_ = false;
}

}
}
}
}
}


