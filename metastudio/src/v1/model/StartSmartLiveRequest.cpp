

#include "huaweicloud/metastudio/v1/model/StartSmartLiveRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




StartSmartLiveRequest::StartSmartLiveRequest()
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

StartSmartLiveRequest::~StartSmartLiveRequest() = default;

void StartSmartLiveRequest::validate()
{
}

web::json::value StartSmartLiveRequest::toJson() const
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
bool StartSmartLiveRequest::fromJson(const web::json::value& val)
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
            StartSmartLiveReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartSmartLiveRequest::getRoomId() const
{
    return roomId_;
}

void StartSmartLiveRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool StartSmartLiveRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void StartSmartLiveRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string StartSmartLiveRequest::getAuthorization() const
{
    return authorization_;
}

void StartSmartLiveRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool StartSmartLiveRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void StartSmartLiveRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string StartSmartLiveRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void StartSmartLiveRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool StartSmartLiveRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void StartSmartLiveRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string StartSmartLiveRequest::getXProjectId() const
{
    return xProjectId_;
}

void StartSmartLiveRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool StartSmartLiveRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void StartSmartLiveRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string StartSmartLiveRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void StartSmartLiveRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool StartSmartLiveRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void StartSmartLiveRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

StartSmartLiveReq StartSmartLiveRequest::getBody() const
{
    return body_;
}

void StartSmartLiveRequest::setBody(const StartSmartLiveReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartSmartLiveRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartSmartLiveRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


