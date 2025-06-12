

#include "huaweicloud/metastudio/v1/model/UpdatePacifyWordsTriggerTimeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdatePacifyWordsTriggerTimeRequest::UpdatePacifyWordsTriggerTimeRequest()
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

UpdatePacifyWordsTriggerTimeRequest::~UpdatePacifyWordsTriggerTimeRequest() = default;

void UpdatePacifyWordsTriggerTimeRequest::validate()
{
}

web::json::value UpdatePacifyWordsTriggerTimeRequest::toJson() const
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
bool UpdatePacifyWordsTriggerTimeRequest::fromJson(const web::json::value& val)
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
            UpdatePacifyWordsTriggerTimeReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePacifyWordsTriggerTimeRequest::getAuthorization() const
{
    return authorization_;
}

void UpdatePacifyWordsTriggerTimeRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdatePacifyWordsTriggerTimeRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdatePacifyWordsTriggerTimeRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdatePacifyWordsTriggerTimeRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdatePacifyWordsTriggerTimeRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdatePacifyWordsTriggerTimeRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdatePacifyWordsTriggerTimeRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdatePacifyWordsTriggerTimeRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdatePacifyWordsTriggerTimeRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdatePacifyWordsTriggerTimeRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdatePacifyWordsTriggerTimeRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdatePacifyWordsTriggerTimeRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdatePacifyWordsTriggerTimeRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdatePacifyWordsTriggerTimeRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdatePacifyWordsTriggerTimeRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

UpdatePacifyWordsTriggerTimeReq UpdatePacifyWordsTriggerTimeRequest::getBody() const
{
    return body_;
}

void UpdatePacifyWordsTriggerTimeRequest::setBody(const UpdatePacifyWordsTriggerTimeReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePacifyWordsTriggerTimeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePacifyWordsTriggerTimeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


