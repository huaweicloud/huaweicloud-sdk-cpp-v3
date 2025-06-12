

#include "huaweicloud/metastudio/v1/model/UpdateWelcomeSpeechRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateWelcomeSpeechRequest::UpdateWelcomeSpeechRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    welcomeSpeechId_ = "";
    welcomeSpeechIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateWelcomeSpeechRequest::~UpdateWelcomeSpeechRequest() = default;

void UpdateWelcomeSpeechRequest::validate()
{
}

web::json::value UpdateWelcomeSpeechRequest::toJson() const
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
    if(welcomeSpeechIdIsSet_) {
        val[utility::conversions::to_string_t("welcome_speech_id")] = ModelBase::toJson(welcomeSpeechId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateWelcomeSpeechRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("welcome_speech_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("welcome_speech_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWelcomeSpeechId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateWelcomeSpeechReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateWelcomeSpeechRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateWelcomeSpeechRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateWelcomeSpeechRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateWelcomeSpeechRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateWelcomeSpeechRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateWelcomeSpeechRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateWelcomeSpeechRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateWelcomeSpeechRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateWelcomeSpeechRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateWelcomeSpeechRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateWelcomeSpeechRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateWelcomeSpeechRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateWelcomeSpeechRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateWelcomeSpeechRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateWelcomeSpeechRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateWelcomeSpeechRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateWelcomeSpeechRequest::getWelcomeSpeechId() const
{
    return welcomeSpeechId_;
}

void UpdateWelcomeSpeechRequest::setWelcomeSpeechId(const std::string& value)
{
    welcomeSpeechId_ = value;
    welcomeSpeechIdIsSet_ = true;
}

bool UpdateWelcomeSpeechRequest::welcomeSpeechIdIsSet() const
{
    return welcomeSpeechIdIsSet_;
}

void UpdateWelcomeSpeechRequest::unsetwelcomeSpeechId()
{
    welcomeSpeechIdIsSet_ = false;
}

UpdateWelcomeSpeechReq UpdateWelcomeSpeechRequest::getBody() const
{
    return body_;
}

void UpdateWelcomeSpeechRequest::setBody(const UpdateWelcomeSpeechReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateWelcomeSpeechRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateWelcomeSpeechRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


