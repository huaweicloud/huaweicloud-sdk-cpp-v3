

#include "huaweicloud/metastudio/v1/model/RTCRoomInfoList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




RTCRoomInfoList::RTCRoomInfoList()
{
    appId_ = "";
    appIdIsSet_ = false;
    roomId_ = "";
    roomIdIsSet_ = false;
    usersIsSet_ = false;
}

RTCRoomInfoList::~RTCRoomInfoList() = default;

void RTCRoomInfoList::validate()
{
}

web::json::value RTCRoomInfoList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool RTCRoomInfoList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<RTCUserInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::string RTCRoomInfoList::getAppId() const
{
    return appId_;
}

void RTCRoomInfoList::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool RTCRoomInfoList::appIdIsSet() const
{
    return appIdIsSet_;
}

void RTCRoomInfoList::unsetappId()
{
    appIdIsSet_ = false;
}

std::string RTCRoomInfoList::getRoomId() const
{
    return roomId_;
}

void RTCRoomInfoList::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool RTCRoomInfoList::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void RTCRoomInfoList::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::vector<RTCUserInfo>& RTCRoomInfoList::getUsers()
{
    return users_;
}

void RTCRoomInfoList::setUsers(const std::vector<RTCUserInfo>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool RTCRoomInfoList::usersIsSet() const
{
    return usersIsSet_;
}

void RTCRoomInfoList::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


