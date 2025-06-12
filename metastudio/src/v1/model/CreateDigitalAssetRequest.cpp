

#include "huaweicloud/metastudio/v1/model/CreateDigitalAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateDigitalAssetRequest::CreateDigitalAssetRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    xMSSAuthorization_ = "";
    xMSSAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

CreateDigitalAssetRequest::~CreateDigitalAssetRequest() = default;

void CreateDigitalAssetRequest::validate()
{
}

web::json::value CreateDigitalAssetRequest::toJson() const
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
    if(xMSSAuthorizationIsSet_) {
        val[utility::conversions::to_string_t("X-MSS-Authorization")] = ModelBase::toJson(xMSSAuthorization_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDigitalAssetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-MSS-Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-MSS-Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXMSSAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDigitalAssetRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateDigitalAssetRequest::getAuthorization() const
{
    return authorization_;
}

void CreateDigitalAssetRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateDigitalAssetRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateDigitalAssetRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateDigitalAssetRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateDigitalAssetRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateDigitalAssetRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateDigitalAssetRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateDigitalAssetRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateDigitalAssetRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateDigitalAssetRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateDigitalAssetRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string CreateDigitalAssetRequest::getXMSSAuthorization() const
{
    return xMSSAuthorization_;
}

void CreateDigitalAssetRequest::setXMSSAuthorization(const std::string& value)
{
    xMSSAuthorization_ = value;
    xMSSAuthorizationIsSet_ = true;
}

bool CreateDigitalAssetRequest::xMSSAuthorizationIsSet() const
{
    return xMSSAuthorizationIsSet_;
}

void CreateDigitalAssetRequest::unsetxMSSAuthorization()
{
    xMSSAuthorizationIsSet_ = false;
}

CreateDigitalAssetRequestBody CreateDigitalAssetRequest::getBody() const
{
    return body_;
}

void CreateDigitalAssetRequest::setBody(const CreateDigitalAssetRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDigitalAssetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDigitalAssetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


