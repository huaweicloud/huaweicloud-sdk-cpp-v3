

#include "huaweicloud/metastudio/v1/model/ShowResourceUsageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowResourceUsageRequest::ShowResourceUsageRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    resource_ = "";
    resourceIsSet_ = false;
    business_ = "";
    businessIsSet_ = false;
}

ShowResourceUsageRequest::~ShowResourceUsageRequest() = default;

void ShowResourceUsageRequest::validate()
{
}

web::json::value ShowResourceUsageRequest::toJson() const
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
    if(businessIsSet_) {
        val[utility::conversions::to_string_t("business")] = ModelBase::toJson(business_);
    }

    return val;
}
bool ShowResourceUsageRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("business"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusiness(refVal);
        }
    }
    return ok;
}


std::string ShowResourceUsageRequest::getAuthorization() const
{
    return authorization_;
}

void ShowResourceUsageRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowResourceUsageRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowResourceUsageRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowResourceUsageRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowResourceUsageRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowResourceUsageRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowResourceUsageRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowResourceUsageRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowResourceUsageRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowResourceUsageRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowResourceUsageRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowResourceUsageRequest::getResource() const
{
    return resource_;
}

void ShowResourceUsageRequest::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool ShowResourceUsageRequest::resourceIsSet() const
{
    return resourceIsSet_;
}

void ShowResourceUsageRequest::unsetresource()
{
    resourceIsSet_ = false;
}

std::string ShowResourceUsageRequest::getBusiness() const
{
    return business_;
}

void ShowResourceUsageRequest::setBusiness(const std::string& value)
{
    business_ = value;
    businessIsSet_ = true;
}

bool ShowResourceUsageRequest::businessIsSet() const
{
    return businessIsSet_;
}

void ShowResourceUsageRequest::unsetbusiness()
{
    businessIsSet_ = false;
}

}
}
}
}
}


