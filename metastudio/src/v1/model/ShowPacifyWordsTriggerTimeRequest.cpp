

#include "huaweicloud/metastudio/v1/model/ShowPacifyWordsTriggerTimeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPacifyWordsTriggerTimeRequest::ShowPacifyWordsTriggerTimeRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

ShowPacifyWordsTriggerTimeRequest::~ShowPacifyWordsTriggerTimeRequest() = default;

void ShowPacifyWordsTriggerTimeRequest::validate()
{
}

web::json::value ShowPacifyWordsTriggerTimeRequest::toJson() const
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
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool ShowPacifyWordsTriggerTimeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("robot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    return ok;
}


std::string ShowPacifyWordsTriggerTimeRequest::getAuthorization() const
{
    return authorization_;
}

void ShowPacifyWordsTriggerTimeRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowPacifyWordsTriggerTimeRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowPacifyWordsTriggerTimeRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowPacifyWordsTriggerTimeRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowPacifyWordsTriggerTimeRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowPacifyWordsTriggerTimeRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowPacifyWordsTriggerTimeRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowPacifyWordsTriggerTimeRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowPacifyWordsTriggerTimeRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowPacifyWordsTriggerTimeRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowPacifyWordsTriggerTimeRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowPacifyWordsTriggerTimeRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowPacifyWordsTriggerTimeRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowPacifyWordsTriggerTimeRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowPacifyWordsTriggerTimeRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowPacifyWordsTriggerTimeRequest::getRobotId() const
{
    return robotId_;
}

void ShowPacifyWordsTriggerTimeRequest::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ShowPacifyWordsTriggerTimeRequest::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ShowPacifyWordsTriggerTimeRequest::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string ShowPacifyWordsTriggerTimeRequest::getLanguage() const
{
    return language_;
}

void ShowPacifyWordsTriggerTimeRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ShowPacifyWordsTriggerTimeRequest::languageIsSet() const
{
    return languageIsSet_;
}

void ShowPacifyWordsTriggerTimeRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


