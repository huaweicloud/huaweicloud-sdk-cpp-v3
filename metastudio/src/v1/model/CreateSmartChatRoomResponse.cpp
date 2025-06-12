

#include "huaweicloud/metastudio/v1/model/CreateSmartChatRoomResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateSmartChatRoomResponse::CreateSmartChatRoomResponse()
{
    roomId_ = "";
    roomIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateSmartChatRoomResponse::~CreateSmartChatRoomResponse() = default;

void CreateSmartChatRoomResponse::validate()
{
}

web::json::value CreateSmartChatRoomResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool CreateSmartChatRoomResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string CreateSmartChatRoomResponse::getRoomId() const
{
    return roomId_;
}

void CreateSmartChatRoomResponse::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool CreateSmartChatRoomResponse::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void CreateSmartChatRoomResponse::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string CreateSmartChatRoomResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateSmartChatRoomResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateSmartChatRoomResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateSmartChatRoomResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


