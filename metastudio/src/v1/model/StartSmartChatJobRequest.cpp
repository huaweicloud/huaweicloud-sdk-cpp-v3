

#include "huaweicloud/metastudio/v1/model/StartSmartChatJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StartSmartChatJobRequest::StartSmartChatJobRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    roomId_ = "";
    roomIdIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartSmartChatJobRequest::~StartSmartChatJobRequest() = default;

void StartSmartChatJobRequest::validate()
{
}

web::json::value StartSmartChatJobRequest::toJson() const
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
    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StartSmartChatJobRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("room_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomId(refVal);
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
            SmartChatJobsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartSmartChatJobRequest::getAuthorization() const
{
    return authorization_;
}

void StartSmartChatJobRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool StartSmartChatJobRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void StartSmartChatJobRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string StartSmartChatJobRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void StartSmartChatJobRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool StartSmartChatJobRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void StartSmartChatJobRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string StartSmartChatJobRequest::getXProjectId() const
{
    return xProjectId_;
}

void StartSmartChatJobRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool StartSmartChatJobRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void StartSmartChatJobRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string StartSmartChatJobRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void StartSmartChatJobRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool StartSmartChatJobRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void StartSmartChatJobRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

std::string StartSmartChatJobRequest::getRoomId() const
{
    return roomId_;
}

void StartSmartChatJobRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool StartSmartChatJobRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void StartSmartChatJobRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string StartSmartChatJobRequest::getRobotId() const
{
    return robotId_;
}

void StartSmartChatJobRequest::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool StartSmartChatJobRequest::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void StartSmartChatJobRequest::unsetrobotId()
{
    robotIdIsSet_ = false;
}

SmartChatJobsReq StartSmartChatJobRequest::getBody() const
{
    return body_;
}

void StartSmartChatJobRequest::setBody(const SmartChatJobsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartSmartChatJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartSmartChatJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


