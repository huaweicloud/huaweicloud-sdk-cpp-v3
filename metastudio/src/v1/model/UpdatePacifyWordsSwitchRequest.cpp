

#include "huaweicloud/metastudio/v1/model/UpdatePacifyWordsSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdatePacifyWordsSwitchRequest::UpdatePacifyWordsSwitchRequest()
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

UpdatePacifyWordsSwitchRequest::~UpdatePacifyWordsSwitchRequest() = default;

void UpdatePacifyWordsSwitchRequest::validate()
{
}

web::json::value UpdatePacifyWordsSwitchRequest::toJson() const
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
bool UpdatePacifyWordsSwitchRequest::fromJson(const web::json::value& val)
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
            UpdatePacifyWordsSwitchReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdatePacifyWordsSwitchRequest::getAuthorization() const
{
    return authorization_;
}

void UpdatePacifyWordsSwitchRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdatePacifyWordsSwitchRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdatePacifyWordsSwitchRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdatePacifyWordsSwitchRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdatePacifyWordsSwitchRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdatePacifyWordsSwitchRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdatePacifyWordsSwitchRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdatePacifyWordsSwitchRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdatePacifyWordsSwitchRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdatePacifyWordsSwitchRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdatePacifyWordsSwitchRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdatePacifyWordsSwitchRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdatePacifyWordsSwitchRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdatePacifyWordsSwitchRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdatePacifyWordsSwitchRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

UpdatePacifyWordsSwitchReq UpdatePacifyWordsSwitchRequest::getBody() const
{
    return body_;
}

void UpdatePacifyWordsSwitchRequest::setBody(const UpdatePacifyWordsSwitchReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePacifyWordsSwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePacifyWordsSwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


