

#include "huaweicloud/metastudio/v1/model/BindUserAssetResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




BindUserAssetResourceRequest::BindUserAssetResourceRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

BindUserAssetResourceRequest::~BindUserAssetResourceRequest() = default;

void BindUserAssetResourceRequest::validate()
{
}

web::json::value BindUserAssetResourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BindUserAssetResourceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BindAssetResourceReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BindUserAssetResourceRequest::getAuthorization() const
{
    return authorization_;
}

void BindUserAssetResourceRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool BindUserAssetResourceRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void BindUserAssetResourceRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string BindUserAssetResourceRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void BindUserAssetResourceRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool BindUserAssetResourceRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void BindUserAssetResourceRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string BindUserAssetResourceRequest::getXProjectId() const
{
    return xProjectId_;
}

void BindUserAssetResourceRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool BindUserAssetResourceRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void BindUserAssetResourceRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

BindAssetResourceReq BindUserAssetResourceRequest::getBody() const
{
    return body_;
}

void BindUserAssetResourceRequest::setBody(const BindAssetResourceReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BindUserAssetResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BindUserAssetResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


