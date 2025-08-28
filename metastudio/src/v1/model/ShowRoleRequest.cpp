

#include "huaweicloud/metastudio/v1/model/ShowRoleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowRoleRequest::ShowRoleRequest()
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
}

ShowRoleRequest::~ShowRoleRequest() = default;

void ShowRoleRequest::validate()
{
}

web::json::value ShowRoleRequest::toJson() const
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

    return val;
}
bool ShowRoleRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowRoleRequest::getAuthorization() const
{
    return authorization_;
}

void ShowRoleRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowRoleRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowRoleRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowRoleRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowRoleRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowRoleRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowRoleRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowRoleRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowRoleRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowRoleRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowRoleRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowRoleRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowRoleRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowRoleRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowRoleRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowRoleRequest::getRoleId() const
{
    return roleId_;
}

void ShowRoleRequest::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool ShowRoleRequest::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void ShowRoleRequest::unsetroleId()
{
    roleIdIsSet_ = false;
}

}
}
}
}
}


