

#include "huaweicloud/metastudio/v1/model/DeleteTenantUserConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteTenantUserConfigurationRequest::DeleteTenantUserConfigurationRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteTenantUserConfigurationRequest::~DeleteTenantUserConfigurationRequest() = default;

void DeleteTenantUserConfigurationRequest::validate()
{
}

web::json::value DeleteTenantUserConfigurationRequest::toJson() const
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
bool DeleteTenantUserConfigurationRequest::fromJson(const web::json::value& val)
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
            DeleteTenantUserConfigurationReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteTenantUserConfigurationRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteTenantUserConfigurationRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteTenantUserConfigurationRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteTenantUserConfigurationRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteTenantUserConfigurationRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteTenantUserConfigurationRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteTenantUserConfigurationRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteTenantUserConfigurationRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteTenantUserConfigurationRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteTenantUserConfigurationRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteTenantUserConfigurationRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteTenantUserConfigurationRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

DeleteTenantUserConfigurationReq DeleteTenantUserConfigurationRequest::getBody() const
{
    return body_;
}

void DeleteTenantUserConfigurationRequest::setBody(const DeleteTenantUserConfigurationReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteTenantUserConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteTenantUserConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


