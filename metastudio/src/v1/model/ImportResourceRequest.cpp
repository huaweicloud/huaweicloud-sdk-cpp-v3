

#include "huaweicloud/metastudio/v1/model/ImportResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ImportResourceRequest::ImportResourceRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    resource_ = "";
    resourceIsSet_ = false;
    businessId_ = "";
    businessIdIsSet_ = false;
    bodyIsSet_ = false;
}

ImportResourceRequest::~ImportResourceRequest() = default;

void ImportResourceRequest::validate()
{
}

web::json::value ImportResourceRequest::toJson() const
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
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(businessIdIsSet_) {
        val[utility::conversions::to_string_t("business_id")] = ModelBase::toJson(businessId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ImportResourceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ImportResourceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ImportResourceRequest::getAuthorization() const
{
    return authorization_;
}

void ImportResourceRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ImportResourceRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ImportResourceRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ImportResourceRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ImportResourceRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ImportResourceRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ImportResourceRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ImportResourceRequest::getXProjectId() const
{
    return xProjectId_;
}

void ImportResourceRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ImportResourceRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ImportResourceRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ImportResourceRequest::getResource() const
{
    return resource_;
}

void ImportResourceRequest::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool ImportResourceRequest::resourceIsSet() const
{
    return resourceIsSet_;
}

void ImportResourceRequest::unsetresource()
{
    resourceIsSet_ = false;
}

std::string ImportResourceRequest::getBusinessId() const
{
    return businessId_;
}

void ImportResourceRequest::setBusinessId(const std::string& value)
{
    businessId_ = value;
    businessIdIsSet_ = true;
}

bool ImportResourceRequest::businessIdIsSet() const
{
    return businessIdIsSet_;
}

void ImportResourceRequest::unsetbusinessId()
{
    businessIdIsSet_ = false;
}

ImportResourceRequestBody ImportResourceRequest::getBody() const
{
    return body_;
}

void ImportResourceRequest::setBody(const ImportResourceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportResourceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportResourceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


