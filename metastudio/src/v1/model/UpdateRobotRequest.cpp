

#include "huaweicloud/metastudio/v1/model/UpdateRobotRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateRobotRequest::UpdateRobotRequest()
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
    bodyIsSet_ = false;
}

UpdateRobotRequest::~UpdateRobotRequest() = default;

void UpdateRobotRequest::validate()
{
}

web::json::value UpdateRobotRequest::toJson() const
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
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateRobotRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateRobotReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateRobotRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateRobotRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateRobotRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateRobotRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateRobotRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateRobotRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateRobotRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateRobotRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateRobotRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateRobotRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateRobotRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateRobotRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateRobotRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateRobotRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateRobotRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateRobotRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string UpdateRobotRequest::getRobotId() const
{
    return robotId_;
}

void UpdateRobotRequest::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool UpdateRobotRequest::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void UpdateRobotRequest::unsetrobotId()
{
    robotIdIsSet_ = false;
}

UpdateRobotReq UpdateRobotRequest::getBody() const
{
    return body_;
}

void UpdateRobotRequest::setBody(const UpdateRobotReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateRobotRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateRobotRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


