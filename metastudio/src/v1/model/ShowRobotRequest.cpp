

#include "huaweicloud/metastudio/v1/model/ShowRobotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowRobotRequest::ShowRobotRequest()
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

ShowRobotRequest::~ShowRobotRequest() = default;

void ShowRobotRequest::validate()
{
}

web::json::value ShowRobotRequest::toJson() const
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
bool ShowRobotRequest::fromJson(const web::json::value& val)
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


std::string ShowRobotRequest::getAuthorization() const
{
    return authorization_;
}

void ShowRobotRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ShowRobotRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ShowRobotRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ShowRobotRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowRobotRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowRobotRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowRobotRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowRobotRequest::getXProjectId() const
{
    return xProjectId_;
}

void ShowRobotRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ShowRobotRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ShowRobotRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ShowRobotRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ShowRobotRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ShowRobotRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ShowRobotRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string ShowRobotRequest::getRobotId() const
{
    return robotId_;
}

void ShowRobotRequest::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ShowRobotRequest::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ShowRobotRequest::unsetrobotId()
{
    robotIdIsSet_ = false;
}

}
}
}
}
}


