

#include "huaweicloud/metastudio/v1/model/UpdateWelcomeSpeechSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateWelcomeSpeechSwitchRequest::UpdateWelcomeSpeechSwitchRequest()
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

UpdateWelcomeSpeechSwitchRequest::~UpdateWelcomeSpeechSwitchRequest() = default;

void UpdateWelcomeSpeechSwitchRequest::validate()
{
}

web::json::value UpdateWelcomeSpeechSwitchRequest::toJson() const
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
bool UpdateWelcomeSpeechSwitchRequest::fromJson(const web::json::value& val)
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
            UpdateWelcomeSpeechSwitchReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateWelcomeSpeechSwitchRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateWelcomeSpeechSwitchRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateWelcomeSpeechSwitchRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateWelcomeSpeechSwitchRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateWelcomeSpeechSwitchRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateWelcomeSpeechSwitchRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateWelcomeSpeechSwitchRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateWelcomeSpeechSwitchRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateWelcomeSpeechSwitchRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateWelcomeSpeechSwitchRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateWelcomeSpeechSwitchRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateWelcomeSpeechSwitchRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateWelcomeSpeechSwitchRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateWelcomeSpeechSwitchRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateWelcomeSpeechSwitchRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateWelcomeSpeechSwitchRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

UpdateWelcomeSpeechSwitchReq UpdateWelcomeSpeechSwitchRequest::getBody() const
{
    return body_;
}

void UpdateWelcomeSpeechSwitchRequest::setBody(const UpdateWelcomeSpeechSwitchReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateWelcomeSpeechSwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateWelcomeSpeechSwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


