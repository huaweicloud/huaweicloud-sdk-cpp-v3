

#include "huaweicloud/metastudio/v1/model/CreateSmartLiveRoomResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateSmartLiveRoomResponse::CreateSmartLiveRoomResponse()
{
    roomId_ = "";
    roomIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateSmartLiveRoomResponse::~CreateSmartLiveRoomResponse() = default;

void CreateSmartLiveRoomResponse::validate()
{
}

web::json::value CreateSmartLiveRoomResponse::toJson() const
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
bool CreateSmartLiveRoomResponse::fromJson(const web::json::value& val)
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


std::string CreateSmartLiveRoomResponse::getRoomId() const
{
    return roomId_;
}

void CreateSmartLiveRoomResponse::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool CreateSmartLiveRoomResponse::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void CreateSmartLiveRoomResponse::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string CreateSmartLiveRoomResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateSmartLiveRoomResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateSmartLiveRoomResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateSmartLiveRoomResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


