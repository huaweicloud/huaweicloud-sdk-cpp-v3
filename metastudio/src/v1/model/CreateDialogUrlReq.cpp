

#include "huaweicloud/metastudio/v1/model/CreateDialogUrlReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateDialogUrlReq::CreateDialogUrlReq()
{
    roomId_ = "";
    roomIdIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
}

CreateDialogUrlReq::~CreateDialogUrlReq() = default;

void CreateDialogUrlReq::validate()
{
}

web::json::value CreateDialogUrlReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }

    return val;
}
bool CreateDialogUrlReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("robot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotId(refVal);
        }
    }
    return ok;
}


std::string CreateDialogUrlReq::getRoomId() const
{
    return roomId_;
}

void CreateDialogUrlReq::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool CreateDialogUrlReq::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void CreateDialogUrlReq::unsetroomId()
{
    roomIdIsSet_ = false;
}

std::string CreateDialogUrlReq::getRobotId() const
{
    return robotId_;
}

void CreateDialogUrlReq::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool CreateDialogUrlReq::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void CreateDialogUrlReq::unsetrobotId()
{
    robotIdIsSet_ = false;
}

}
}
}
}
}


