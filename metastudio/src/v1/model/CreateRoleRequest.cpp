

#include "huaweicloud/metastudio/v1/model/CreateRoleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateRoleRequest::CreateRoleRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateRoleRequest::~CreateRoleRequest() = default;

void CreateRoleRequest::validate()
{
}

web::json::value CreateRoleRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateRoleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateRoleReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateRoleRequest::getAuthorization() const
{
    return authorization_;
}

void CreateRoleRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool CreateRoleRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void CreateRoleRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string CreateRoleRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void CreateRoleRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool CreateRoleRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void CreateRoleRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string CreateRoleRequest::getXProjectId() const
{
    return xProjectId_;
}

void CreateRoleRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool CreateRoleRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void CreateRoleRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string CreateRoleRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void CreateRoleRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool CreateRoleRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void CreateRoleRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateRoleReq CreateRoleRequest::getBody() const
{
    return body_;
}

void CreateRoleRequest::setBody(const CreateRoleReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateRoleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateRoleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


