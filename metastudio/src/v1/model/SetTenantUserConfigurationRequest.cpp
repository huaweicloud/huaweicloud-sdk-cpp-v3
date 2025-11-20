

#include "huaweicloud/metastudio/v1/model/SetTenantUserConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SetTenantUserConfigurationRequest::SetTenantUserConfigurationRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetTenantUserConfigurationRequest::~SetTenantUserConfigurationRequest() = default;

void SetTenantUserConfigurationRequest::validate()
{
}

web::json::value SetTenantUserConfigurationRequest::toJson() const
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
bool SetTenantUserConfigurationRequest::fromJson(const web::json::value& val)
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
            SetTenantUserConfigurationReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetTenantUserConfigurationRequest::getAuthorization() const
{
    return authorization_;
}

void SetTenantUserConfigurationRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool SetTenantUserConfigurationRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void SetTenantUserConfigurationRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string SetTenantUserConfigurationRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void SetTenantUserConfigurationRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool SetTenantUserConfigurationRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void SetTenantUserConfigurationRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string SetTenantUserConfigurationRequest::getXProjectId() const
{
    return xProjectId_;
}

void SetTenantUserConfigurationRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool SetTenantUserConfigurationRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void SetTenantUserConfigurationRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

SetTenantUserConfigurationReq SetTenantUserConfigurationRequest::getBody() const
{
    return body_;
}

void SetTenantUserConfigurationRequest::setBody(const SetTenantUserConfigurationReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetTenantUserConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetTenantUserConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


