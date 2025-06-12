

#include "huaweicloud/metastudio/v1/model/ShowProductRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowProductRequest::ShowProductRequest()
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
}

ShowProductRequest::~ShowProductRequest() = default;

void ShowProductRequest::validate()
{
}

web::json::value ShowProductRequest::toJson() const
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

    return val;
}
bool ShowProductRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowProductRequest::getAuthorization() const
{
    return authorization_;
}

void ShowProductRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowProductRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowProductRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowProductRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowProductRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowProductRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowProductRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowProductRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowProductRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowProductRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowProductRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowProductRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowProductRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowProductRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowProductRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowProductRequest::getProductId() const
{
    return productId_;
}

void ShowProductRequest::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool ShowProductRequest::productIdIsSet() const
{
    return productIdIsSet_;
}

void ShowProductRequest::unsetproductId()
{
    productIdIsSet_ = false;
}

}
}
}
}
}


