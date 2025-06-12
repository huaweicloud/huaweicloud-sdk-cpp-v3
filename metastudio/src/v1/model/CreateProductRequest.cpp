

#include "huaweicloud/metastudio/v1/model/CreateProductRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateProductRequest::CreateProductRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateProductRequest::~CreateProductRequest() = default;

void CreateProductRequest::validate()
{
}

web::json::value CreateProductRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateProductRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateProductRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateProductRequest::getAuthorization() const
{
    return authorization_;
}

void CreateProductRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateProductRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateProductRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateProductRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateProductRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateProductRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateProductRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateProductRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateProductRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateProductRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateProductRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateProductRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateProductRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateProductRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateProductRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateProductRequestBody CreateProductRequest::getBody() const
{
    return body_;
}

void CreateProductRequest::setBody(const CreateProductRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateProductRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateProductRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


