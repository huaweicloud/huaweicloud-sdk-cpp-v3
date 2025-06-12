

#include "huaweicloud/metastudio/v1/model/ShowPacifyWordsSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPacifyWordsSwitchRequest::ShowPacifyWordsSwitchRequest()
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

ShowPacifyWordsSwitchRequest::~ShowPacifyWordsSwitchRequest() = default;

void ShowPacifyWordsSwitchRequest::validate()
{
}

web::json::value ShowPacifyWordsSwitchRequest::toJson() const
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
bool ShowPacifyWordsSwitchRequest::fromJson(const web::json::value& val)
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


std::string ShowPacifyWordsSwitchRequest::getAuthorization() const
{
    return authorization_;
}

void ShowPacifyWordsSwitchRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowPacifyWordsSwitchRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowPacifyWordsSwitchRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowPacifyWordsSwitchRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowPacifyWordsSwitchRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowPacifyWordsSwitchRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowPacifyWordsSwitchRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowPacifyWordsSwitchRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowPacifyWordsSwitchRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowPacifyWordsSwitchRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowPacifyWordsSwitchRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowPacifyWordsSwitchRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowPacifyWordsSwitchRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowPacifyWordsSwitchRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowPacifyWordsSwitchRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowPacifyWordsSwitchRequest::getRobotId() const
{
    return robotId_;
}

void ShowPacifyWordsSwitchRequest::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ShowPacifyWordsSwitchRequest::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ShowPacifyWordsSwitchRequest::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string ShowPacifyWordsSwitchRequest::getLanguage() const
{
    return language_;
}

void ShowPacifyWordsSwitchRequest::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool ShowPacifyWordsSwitchRequest::languageIsSet() const
{
    return languageIsSet_;
}

void ShowPacifyWordsSwitchRequest::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


