

#include "huaweicloud/metastudio/v1/model/ExportResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ExportResourceRequest::ExportResourceRequest()
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
}

ExportResourceRequest::~ExportResourceRequest() = default;

void ExportResourceRequest::validate()
{
}

web::json::value ExportResourceRequest::toJson() const
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

    return val;
}
bool ExportResourceRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ExportResourceRequest::getAuthorization() const
{
    return authorization_;
}

void ExportResourceRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ExportResourceRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ExportResourceRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ExportResourceRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ExportResourceRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ExportResourceRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ExportResourceRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ExportResourceRequest::getXProjectId() const
{
    return xProjectId_;
}

void ExportResourceRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ExportResourceRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ExportResourceRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ExportResourceRequest::getResource() const
{
    return resource_;
}

void ExportResourceRequest::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool ExportResourceRequest::resourceIsSet() const
{
    return resourceIsSet_;
}

void ExportResourceRequest::unsetresource()
{
    resourceIsSet_ = false;
}

std::string ExportResourceRequest::getBusinessId() const
{
    return businessId_;
}

void ExportResourceRequest::setBusinessId(const std::string& value)
{
    businessId_ = value;
    businessIdIsSet_ = true;
}

bool ExportResourceRequest::businessIdIsSet() const
{
    return businessIdIsSet_;
}

void ExportResourceRequest::unsetbusinessId()
{
    businessIdIsSet_ = false;
}

}
}
}
}
}


