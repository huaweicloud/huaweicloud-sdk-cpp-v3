

#include "huaweicloud/metastudio/v1/model/ShowAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowAssetRequest::ShowAssetRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
}

ShowAssetRequest::~ShowAssetRequest() = default;

void ShowAssetRequest::validate()
{
}

web::json::value ShowAssetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(assetIdIsSet_) {
        val[utility::conversions::to_string_t("asset_id")] = ModelBase::toJson(assetId_);
    }

    return val;
}
bool ShowAssetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
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


std::string ShowAssetRequest::getAuthorization() const
{
    return authorization_;
}

void ShowAssetRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowAssetRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowAssetRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowAssetRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowAssetRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowAssetRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowAssetRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowAssetRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowAssetRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowAssetRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowAssetRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowAssetRequest::getAssetId() const
{
    return assetId_;
}

void ShowAssetRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool ShowAssetRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void ShowAssetRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

}
}
}
}
}


