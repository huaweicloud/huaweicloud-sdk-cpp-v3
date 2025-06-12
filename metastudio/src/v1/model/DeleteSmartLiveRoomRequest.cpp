

#include "huaweicloud/metastudio/v1/model/DeleteSmartLiveRoomRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




DeleteSmartLiveRoomRequest::DeleteSmartLiveRoomRequest()
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

DeleteSmartLiveRoomRequest::~DeleteSmartLiveRoomRequest() = default;

void DeleteSmartLiveRoomRequest::validate()
{
}

web::json::value DeleteSmartLiveRoomRequest::toJson() const
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
bool DeleteSmartLiveRoomRequest::fromJson(const web::json::value& val)
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


std::string DeleteSmartLiveRoomRequest::getRoomId() const
{
    return roomId_;
}

void DeleteSmartLiveRoomRequest::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool DeleteSmartLiveRoomRequest::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void DeleteSmartLiveRoomRequest::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string DeleteSmartLiveRoomRequest::getAuthorization() const
{
    return authorization_;
}

void DeleteSmartLiveRoomRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeleteSmartLiveRoomRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeleteSmartLiveRoomRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeleteSmartLiveRoomRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void DeleteSmartLiveRoomRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool DeleteSmartLiveRoomRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void DeleteSmartLiveRoomRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string DeleteSmartLiveRoomRequest::getXProjectId() const
{
    return xProjectId_;
}

void DeleteSmartLiveRoomRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool DeleteSmartLiveRoomRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void DeleteSmartLiveRoomRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string DeleteSmartLiveRoomRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void DeleteSmartLiveRoomRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool DeleteSmartLiveRoomRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void DeleteSmartLiveRoomRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

}
}
}
}
}


