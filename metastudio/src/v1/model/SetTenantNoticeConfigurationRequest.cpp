

#include "huaweicloud/metastudio/v1/model/SetTenantNoticeConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




SetTenantNoticeConfigurationRequest::SetTenantNoticeConfigurationRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

SetTenantNoticeConfigurationRequest::~SetTenantNoticeConfigurationRequest() = default;

void SetTenantNoticeConfigurationRequest::validate()
{
}

web::json::value SetTenantNoticeConfigurationRequest::toJson() const
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
bool SetTenantNoticeConfigurationRequest::fromJson(const web::json::value& val)
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
            SetTenantNoticeConfigurationReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetTenantNoticeConfigurationRequest::getAuthorization() const
{
    return authorization_;
}

void SetTenantNoticeConfigurationRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool SetTenantNoticeConfigurationRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void SetTenantNoticeConfigurationRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string SetTenantNoticeConfigurationRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void SetTenantNoticeConfigurationRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool SetTenantNoticeConfigurationRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void SetTenantNoticeConfigurationRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string SetTenantNoticeConfigurationRequest::getXProjectId() const
{
    return xProjectId_;
}

void SetTenantNoticeConfigurationRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool SetTenantNoticeConfigurationRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void SetTenantNoticeConfigurationRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

SetTenantNoticeConfigurationReq SetTenantNoticeConfigurationRequest::getBody() const
{
    return body_;
}

void SetTenantNoticeConfigurationRequest::setBody(const SetTenantNoticeConfigurationReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetTenantNoticeConfigurationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetTenantNoticeConfigurationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


