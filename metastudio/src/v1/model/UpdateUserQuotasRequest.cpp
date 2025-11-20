

#include "huaweicloud/metastudio/v1/model/UpdateUserQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateUserQuotasRequest::UpdateUserQuotasRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateUserQuotasRequest::~UpdateUserQuotasRequest() = default;

void UpdateUserQuotasRequest::validate()
{
}

web::json::value UpdateUserQuotasRequest::toJson() const
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
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateUserQuotasRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateUserQuotaInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateUserQuotasRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateUserQuotasRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateUserQuotasRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateUserQuotasRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateUserQuotasRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateUserQuotasRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateUserQuotasRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateUserQuotasRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateUserQuotasRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateUserQuotasRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateUserQuotasRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateUserQuotasRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateUserQuotasRequest::getUserId() const
{
    return userId_;
}

void UpdateUserQuotasRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool UpdateUserQuotasRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void UpdateUserQuotasRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

UpdateUserQuotaInfo UpdateUserQuotasRequest::getBody() const
{
    return body_;
}

void UpdateUserQuotasRequest::setBody(const UpdateUserQuotaInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateUserQuotasRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateUserQuotasRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


