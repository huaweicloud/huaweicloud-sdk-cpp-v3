

#include "huaweicloud/metastudio/v1/model/ShowHotWordsSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowHotWordsSwitchRequest::ShowHotWordsSwitchRequest()
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

ShowHotWordsSwitchRequest::~ShowHotWordsSwitchRequest() = default;

void ShowHotWordsSwitchRequest::validate()
{
}

web::json::value ShowHotWordsSwitchRequest::toJson() const
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
bool ShowHotWordsSwitchRequest::fromJson(const web::json::value& val)
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


std::string ShowHotWordsSwitchRequest::getAuthorization() const
{
    return authorization_;
}

void ShowHotWordsSwitchRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowHotWordsSwitchRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowHotWordsSwitchRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowHotWordsSwitchRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowHotWordsSwitchRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowHotWordsSwitchRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowHotWordsSwitchRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowHotWordsSwitchRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowHotWordsSwitchRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowHotWordsSwitchRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowHotWordsSwitchRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowHotWordsSwitchRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowHotWordsSwitchRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowHotWordsSwitchRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowHotWordsSwitchRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowHotWordsSwitchRequest::getRobotId() const
{
    return robotId_;
}

void ShowHotWordsSwitchRequest::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ShowHotWordsSwitchRequest::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ShowHotWordsSwitchRequest::unsetrobotId()
{
    robotIdIsSet_ = false;
}

}
}
}
}
}


