

#include "huaweicloud/vod/v1/model/ShowAssetCipherRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowAssetCipherRequest::ShowAssetCipherRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
}

ShowAssetCipherRequest::~ShowAssetCipherRequest() = default;

void ShowAssetCipherRequest::validate()
{
}

web::json::value ShowAssetCipherRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }

    return val;
}

bool ShowAssetCipherRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssetId(refVal);
        }
    }
    return ok;
}


std::string ShowAssetCipherRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowAssetCipherRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowAssetCipherRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowAssetCipherRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowAssetCipherRequest::getAssetId() const
{
    return assetId_;
}

void ShowAssetCipherRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowAssetCipherRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowAssetCipherRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


