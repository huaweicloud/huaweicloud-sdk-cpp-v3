

#include "huaweicloud/metastudio/v1/model/UpdateDigitalAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateDigitalAssetRequest::UpdateDigitalAssetRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    assetId_ = "";
    assetIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDigitalAssetRequest::~UpdateDigitalAssetRequest() = default;

void UpdateDigitalAssetRequest::validate()
{
}

web::json::value UpdateDigitalAssetRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateDigitalAssetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateDigitalAssetRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDigitalAssetRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateDigitalAssetRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateDigitalAssetRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateDigitalAssetRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateDigitalAssetRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateDigitalAssetRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateDigitalAssetRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateDigitalAssetRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateDigitalAssetRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateDigitalAssetRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateDigitalAssetRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateDigitalAssetRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateDigitalAssetRequest::getAssetId() const
{
    return assetId_;
}

void UpdateDigitalAssetRequest::setAssetId(const std::string& value)
{
    assetId_ = value;
    assetIdIsSet_ = true;
}

bool UpdateDigitalAssetRequest::assetIdIsSet() const
{
    return assetIdIsSet_;
}

void UpdateDigitalAssetRequest::unsetassetId()
{
    assetIdIsSet_ = false;
}

UpdateDigitalAssetRequestBody UpdateDigitalAssetRequest::getBody() const
{
    return body_;
}

void UpdateDigitalAssetRequest::setBody(const UpdateDigitalAssetRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDigitalAssetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDigitalAssetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


