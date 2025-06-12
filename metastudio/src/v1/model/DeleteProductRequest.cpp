

#include "huaweicloud/metastudio/v1/model/DeleteProductRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteProductRequest::DeleteProductRequest()
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

DeleteProductRequest::~DeleteProductRequest() = default;

void DeleteProductRequest::validate()
{
}

web::json::value DeleteProductRequest::toJson() const
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
bool DeleteProductRequest::fromJson(const web::json::value& val)
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


std::string DeleteProductRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteProductRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteProductRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteProductRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteProductRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteProductRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteProductRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteProductRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteProductRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteProductRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteProductRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteProductRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteProductRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteProductRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteProductRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteProductRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string DeleteProductRequest::getProductId() const
{
    return productId_;
}

void DeleteProductRequest::setProductId(const std::string& value)
{
    productId_ = value;
    productIdIsSet_ = true;
}

bool DeleteProductRequest::productIdIsSet() const
{
    return productIdIsSet_;
}

void DeleteProductRequest::unsetproductId()
{
    productIdIsSet_ = false;
}

}
}
}
}
}


