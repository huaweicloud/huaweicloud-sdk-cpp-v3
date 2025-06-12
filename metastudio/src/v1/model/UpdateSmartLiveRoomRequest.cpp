

#include "huaweicloud/metastudio/v1/model/UpdateSmartLiveRoomRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateSmartLiveRoomRequest::UpdateSmartLiveRoomRequest()
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

UpdateSmartLiveRoomRequest::~UpdateSmartLiveRoomRequest() = default;

void UpdateSmartLiveRoomRequest::validate()
{
}

web::json::value UpdateSmartLiveRoomRequest::toJson() const
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
bool UpdateSmartLiveRoomRequest::fromJson(const web::json::value& val)
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
            CreateSmartLiveRoomReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSmartLiveRoomRequest::getRoomId() const
{
    return roomId_;
}

void UpdateSmartLiveRoomRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool UpdateSmartLiveRoomRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void UpdateSmartLiveRoomRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string UpdateSmartLiveRoomRequest::getAuthorization() const
{
    return authorization_;
}

void UpdateSmartLiveRoomRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool UpdateSmartLiveRoomRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void UpdateSmartLiveRoomRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string UpdateSmartLiveRoomRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void UpdateSmartLiveRoomRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool UpdateSmartLiveRoomRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void UpdateSmartLiveRoomRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string UpdateSmartLiveRoomRequest::getXProjectId() const
{
    return xProjectId_;
}

void UpdateSmartLiveRoomRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool UpdateSmartLiveRoomRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void UpdateSmartLiveRoomRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string UpdateSmartLiveRoomRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void UpdateSmartLiveRoomRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool UpdateSmartLiveRoomRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void UpdateSmartLiveRoomRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

CreateSmartLiveRoomReq UpdateSmartLiveRoomRequest::getBody() const
{
    return body_;
}

void UpdateSmartLiveRoomRequest::setBody(const CreateSmartLiveRoomReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSmartLiveRoomRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSmartLiveRoomRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


