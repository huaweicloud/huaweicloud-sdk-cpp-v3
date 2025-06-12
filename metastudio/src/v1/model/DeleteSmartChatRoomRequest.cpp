

#include "huaweicloud/metastudio/v1/model/DeleteSmartChatRoomRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteSmartChatRoomRequest::DeleteSmartChatRoomRequest()
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
}

DeleteSmartChatRoomRequest::~DeleteSmartChatRoomRequest() = default;

void DeleteSmartChatRoomRequest::validate()
{
}

web::json::value DeleteSmartChatRoomRequest::toJson() const
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

    return val;
}
bool DeleteSmartChatRoomRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteSmartChatRoomRequest::getRoomId() const
{
    return roomId_;
}

void DeleteSmartChatRoomRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool DeleteSmartChatRoomRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void DeleteSmartChatRoomRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string DeleteSmartChatRoomRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteSmartChatRoomRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteSmartChatRoomRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteSmartChatRoomRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteSmartChatRoomRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteSmartChatRoomRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteSmartChatRoomRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteSmartChatRoomRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteSmartChatRoomRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteSmartChatRoomRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteSmartChatRoomRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteSmartChatRoomRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteSmartChatRoomRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteSmartChatRoomRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteSmartChatRoomRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteSmartChatRoomRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


