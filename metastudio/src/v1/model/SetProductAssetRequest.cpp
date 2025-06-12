

#include "huaweicloud/metastudio/v1/model/SetProductAssetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SetProductAssetRequest::SetProductAssetRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    productId_ = "";
    productIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetProductAssetRequest::~SetProductAssetRequest() = default;

void SetProductAssetRequest::validate()
{
}

web::json::value SetProductAssetRequest::toJson() const
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
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(productIdIsSet_) {
        val[utility::conversions::to_string_t("product_id")] = ModelBase::toJson(productId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetProductAssetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("product_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("product_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProductId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ProductAssetReleation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetProductAssetRequest::getAuthorization() const
{
    return authorization_;
}

void SetProductAssetRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool SetProductAssetRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void SetProductAssetRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string SetProductAssetRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void SetProductAssetRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool SetProductAssetRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void SetProductAssetRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string SetProductAssetRequest::getXProjectId() const
{
    return xProjectId_;
}

void SetProductAssetRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool SetProductAssetRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void SetProductAssetRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string SetProductAssetRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void SetProductAssetRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool SetProductAssetRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void SetProductAssetRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string SetProductAssetRequest::getProductId() const
{
    return productId_;
}

void SetProductAssetRequest::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool SetProductAssetRequest::productIdIsSet() const
{
    return productIdIsSet_;
}

void SetProductAssetRequest::unsetproductId()
{
    productIdIsSet_ = false;
}

ProductAssetReleation SetProductAssetRequest::getBody() const
{
    return body_;
}

void SetProductAssetRequest::setBody(const ProductAssetReleation& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetProductAssetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetProductAssetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


