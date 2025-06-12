

#include "huaweicloud/metastudio/v1/model/ConfirmSmarLiveRoomRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ConfirmSmarLiveRoomRequest::ConfirmSmarLiveRoomRequest()
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

ConfirmSmarLiveRoomRequest::~ConfirmSmarLiveRoomRequest() = default;

void ConfirmSmarLiveRoomRequest::validate()
{
}

web::json::value ConfirmSmarLiveRoomRequest::toJson() const
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
bool ConfirmSmarLiveRoomRequest::fromJson(const web::json::value& val)
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
            ConfirmSmarLiveRoomReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ConfirmSmarLiveRoomRequest::getRoomId() const
{
    return roomId_;
}

void ConfirmSmarLiveRoomRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ConfirmSmarLiveRoomRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ConfirmSmarLiveRoomRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string ConfirmSmarLiveRoomRequest::getAuthorization() const
{
    return authorization_;
}

void ConfirmSmarLiveRoomRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ConfirmSmarLiveRoomRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ConfirmSmarLiveRoomRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ConfirmSmarLiveRoomRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ConfirmSmarLiveRoomRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ConfirmSmarLiveRoomRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ConfirmSmarLiveRoomRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ConfirmSmarLiveRoomRequest::getXProjectId() const
{
    return xProjectId_;
}

void ConfirmSmarLiveRoomRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ConfirmSmarLiveRoomRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ConfirmSmarLiveRoomRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ConfirmSmarLiveRoomRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ConfirmSmarLiveRoomRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ConfirmSmarLiveRoomRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ConfirmSmarLiveRoomRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

ConfirmSmarLiveRoomReq ConfirmSmarLiveRoomRequest::getBody() const
{
    return body_;
}

void ConfirmSmarLiveRoomRequest::setBody(const ConfirmSmarLiveRoomReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ConfirmSmarLiveRoomRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ConfirmSmarLiveRoomRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


