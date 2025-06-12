

#include "huaweicloud/metastudio/v1/model/ShowWelcomeSpeechRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowWelcomeSpeechRequest::ShowWelcomeSpeechRequest()
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
}

ShowWelcomeSpeechRequest::~ShowWelcomeSpeechRequest() = default;

void ShowWelcomeSpeechRequest::validate()
{
}

web::json::value ShowWelcomeSpeechRequest::toJson() const
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

    return val;
}
bool ShowWelcomeSpeechRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowWelcomeSpeechRequest::getAuthorization() const
{
    return authorization_;
}

void ShowWelcomeSpeechRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowWelcomeSpeechRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowWelcomeSpeechRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowWelcomeSpeechRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowWelcomeSpeechRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowWelcomeSpeechRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowWelcomeSpeechRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowWelcomeSpeechRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowWelcomeSpeechRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowWelcomeSpeechRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowWelcomeSpeechRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowWelcomeSpeechRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowWelcomeSpeechRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowWelcomeSpeechRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowWelcomeSpeechRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowWelcomeSpeechRequest::getWelcomeSpeechId() const
{
    return welcomeSpeechId_;
}

void ShowWelcomeSpeechRequest::setWelcomeSpeechId(const std::string& value)
{
    welcomeSpeechId_ = value;
    welcomeSpeechIdIsSet_ = true;
}

bool ShowWelcomeSpeechRequest::welcomeSpeechIdIsSet() const
{
    return welcomeSpeechIdIsSet_;
}

void ShowWelcomeSpeechRequest::unsetwelcomeSpeechId()
{
    welcomeSpeechIdIsSet_ = false;
}

}
}
}
}
}


