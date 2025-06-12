

#include "huaweicloud/metastudio/v1/model/UpdateSmartChatRoomRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateSmartChatRoomRequest::UpdateSmartChatRoomRequest()
{
    roomId_ = "";
    roomIdIsSet_ = false;
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

UpdateSmartChatRoomRequest::~UpdateSmartChatRoomRequest() = default;

void UpdateSmartChatRoomRequest::validate()
{
}

web::json::value UpdateSmartChatRoomRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
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
bool UpdateSmartChatRoomRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("room_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("room_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoomId(refVal);
        }
    }
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
            CreateSmartChatRoomReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSmartChatRoomRequest::getRoomId() const
{
    return roomId_;
}

void UpdateSmartChatRoomRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool UpdateSmartChatRoomRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void UpdateSmartChatRoomRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string UpdateSmartChatRoomRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateSmartChatRoomRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateSmartChatRoomRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateSmartChatRoomRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateSmartChatRoomRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateSmartChatRoomRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateSmartChatRoomRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateSmartChatRoomRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateSmartChatRoomRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateSmartChatRoomRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateSmartChatRoomRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateSmartChatRoomRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateSmartChatRoomRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateSmartChatRoomRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateSmartChatRoomRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateSmartChatRoomRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateSmartChatRoomReq UpdateSmartChatRoomRequest::getBody() const
{
    return body_;
}

void UpdateSmartChatRoomRequest::setBody(const CreateSmartChatRoomReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSmartChatRoomRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSmartChatRoomRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


