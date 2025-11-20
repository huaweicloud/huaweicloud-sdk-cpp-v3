

#include "huaweicloud/metastudio/v1/model/UpdateTenantServiceConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateTenantServiceConfigsRequest::UpdateTenantServiceConfigsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTenantServiceConfigsRequest::~UpdateTenantServiceConfigsRequest() = default;

void UpdateTenantServiceConfigsRequest::validate()
{
}

web::json::value UpdateTenantServiceConfigsRequest::toJson() const
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
bool UpdateTenantServiceConfigsRequest::fromJson(const web::json::value& val)
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
            UpdateTenantServiceConfigsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTenantServiceConfigsRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateTenantServiceConfigsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateTenantServiceConfigsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateTenantServiceConfigsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateTenantServiceConfigsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateTenantServiceConfigsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateTenantServiceConfigsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateTenantServiceConfigsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateTenantServiceConfigsRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateTenantServiceConfigsRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateTenantServiceConfigsRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateTenantServiceConfigsRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

UpdateTenantServiceConfigsReq UpdateTenantServiceConfigsRequest::getBody() const
{
    return body_;
}

void UpdateTenantServiceConfigsRequest::setBody(const UpdateTenantServiceConfigsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTenantServiceConfigsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTenantServiceConfigsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


