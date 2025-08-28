

#include "huaweicloud/metastudio/v1/model/UpdateRoleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateRoleRequest::UpdateRoleRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateRoleRequest::~UpdateRoleRequest() = default;

void UpdateRoleRequest::validate()
{
}

web::json::value UpdateRoleRequest::toJson() const
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
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRoleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateRoleReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRoleRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateRoleRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateRoleRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateRoleRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateRoleRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateRoleRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateRoleRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateRoleRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateRoleRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateRoleRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateRoleRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateRoleRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateRoleRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateRoleRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateRoleRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateRoleRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateRoleRequest::getRoleId() const
{
    return roleId_;
}

void UpdateRoleRequest::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool UpdateRoleRequest::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void UpdateRoleRequest::unsetroleId()
{
    roleIdIsSet_ = false;
}

UpdateRoleReq UpdateRoleRequest::getBody() const
{
    return body_;
}

void UpdateRoleRequest::setBody(const UpdateRoleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRoleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRoleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


