

#include "huaweicloud/metastudio/v1/model/UpdateProductRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateProductRequest::UpdateProductRequest()
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

UpdateProductRequest::~UpdateProductRequest() = default;

void UpdateProductRequest::validate()
{
}

web::json::value UpdateProductRequest::toJson() const
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
bool UpdateProductRequest::fromJson(const web::json::value& val)
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
            UpdateProductRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProductRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateProductRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateProductRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateProductRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateProductRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateProductRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateProductRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateProductRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateProductRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateProductRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateProductRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateProductRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateProductRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateProductRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateProductRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateProductRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateProductRequest::getProductId() const
{
    return productId_;
}

void UpdateProductRequest::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool UpdateProductRequest::productIdIsSet() const
{
    return productIdIsSet_;
}

void UpdateProductRequest::unsetproductId()
{
    productIdIsSet_ = false;
}

UpdateProductRequestBody UpdateProductRequest::getBody() const
{
    return body_;
}

void UpdateProductRequest::setBody(const UpdateProductRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProductRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProductRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


