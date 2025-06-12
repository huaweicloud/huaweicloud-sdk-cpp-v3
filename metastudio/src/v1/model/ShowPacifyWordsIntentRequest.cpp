

#include "huaweicloud/metastudio/v1/model/ShowPacifyWordsIntentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowPacifyWordsIntentRequest::ShowPacifyWordsIntentRequest()
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
}

ShowPacifyWordsIntentRequest::~ShowPacifyWordsIntentRequest() = default;

void ShowPacifyWordsIntentRequest::validate()
{
}

web::json::value ShowPacifyWordsIntentRequest::toJson() const
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

    return val;
}
bool ShowPacifyWordsIntentRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowPacifyWordsIntentRequest::getAuthorization() const
{
    return authorization_;
}

void ShowPacifyWordsIntentRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowPacifyWordsIntentRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowPacifyWordsIntentRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowPacifyWordsIntentRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowPacifyWordsIntentRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowPacifyWordsIntentRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowPacifyWordsIntentRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowPacifyWordsIntentRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowPacifyWordsIntentRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowPacifyWordsIntentRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowPacifyWordsIntentRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowPacifyWordsIntentRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowPacifyWordsIntentRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowPacifyWordsIntentRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowPacifyWordsIntentRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowPacifyWordsIntentRequest::getRobotId() const
{
    return robotId_;
}

void ShowPacifyWordsIntentRequest::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ShowPacifyWordsIntentRequest::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ShowPacifyWordsIntentRequest::unsetrobotId()
{
    robotIdIsSet_ = false;
}

}
}
}
}
}


