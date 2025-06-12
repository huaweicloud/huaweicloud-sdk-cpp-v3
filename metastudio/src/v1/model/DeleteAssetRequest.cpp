

#include "huaweicloud/metastudio/v1/model/DeleteAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteAssetRequest::DeleteAssetRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
}

DeleteAssetRequest::~DeleteAssetRequest() = default;

void DeleteAssetRequest::validate()
{
}

web::json::value DeleteAssetRequest::toJson() const
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
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }

    return val;
}
bool DeleteAssetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    return ok;
}


std::string DeleteAssetRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteAssetRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteAssetRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteAssetRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteAssetRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteAssetRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteAssetRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteAssetRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteAssetRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteAssetRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteAssetRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteAssetRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string DeleteAssetRequest::getAssetId() const
{
    return assetId_;
}

void DeleteAssetRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool DeleteAssetRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void DeleteAssetRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

std::string DeleteAssetRequest::getMode() const
{
    return mode_;
}

void DeleteAssetRequest::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool DeleteAssetRequest::modeIsSet() const
{
    return modeIsSet_;
}

void DeleteAssetRequest::unsetmode()
{
    modeIsSet_ = false;
}

}
}
}
}
}


