

#include "huaweicloud/metastudio/v1/model/TransferAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TransferAssetRequest::TransferAssetRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

TransferAssetRequest::~TransferAssetRequest() = default;

void TransferAssetRequest::validate()
{
}

web::json::value TransferAssetRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool TransferAssetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TransferAssetReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string TransferAssetRequest::getAuthorization() const
{
    return authorization_;
}

void TransferAssetRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool TransferAssetRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void TransferAssetRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string TransferAssetRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void TransferAssetRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool TransferAssetRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void TransferAssetRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string TransferAssetRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void TransferAssetRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool TransferAssetRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void TransferAssetRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

TransferAssetReq TransferAssetRequest::getBody() const
{
    return body_;
}

void TransferAssetRequest::setBody(const TransferAssetReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool TransferAssetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void TransferAssetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


