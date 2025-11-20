

#include "huaweicloud/metastudio/v1/model/ShowTenantServiceConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowTenantServiceConfigsRequest::ShowTenantServiceConfigsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
}

ShowTenantServiceConfigsRequest::~ShowTenantServiceConfigsRequest() = default;

void ShowTenantServiceConfigsRequest::validate()
{
}

web::json::value ShowTenantServiceConfigsRequest::toJson() const
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

    return val;
}
bool ShowTenantServiceConfigsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowTenantServiceConfigsRequest::getAuthorization() const
{
    return authorization_;
}

void ShowTenantServiceConfigsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowTenantServiceConfigsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowTenantServiceConfigsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowTenantServiceConfigsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowTenantServiceConfigsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowTenantServiceConfigsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowTenantServiceConfigsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowTenantServiceConfigsRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowTenantServiceConfigsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowTenantServiceConfigsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowTenantServiceConfigsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

}
}
}
}
}


