

#include "huaweicloud/metastudio/v1/model/CreateActiveCodeReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateActiveCodeReq::CreateActiveCodeReq()
{
    robotId_ = "";
    robotIdIsSet_ = false;
    roomId_ = "";
    roomIdIsSet_ = false;
    validPeriod_ = 0;
    validPeriodIsSet_ = false;
}

CreateActiveCodeReq::~CreateActiveCodeReq() = default;

void CreateActiveCodeReq::validate()
{
}

web::json::value CreateActiveCodeReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(validPeriodIsSet_) {
        val[utility::conversions::to_string_t("valid_period")] = ModelBase::toJson(validPeriod_);
    }

    return val;
}
bool CreateActiveCodeReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("robot_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("robot_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRobotId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("valid_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_period"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidPeriod(refVal);
        }
    }
    return ok;
}


std::string CreateActiveCodeReq::getRobotId() const
{
    return robotId_;
}

void CreateActiveCodeReq::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool CreateActiveCodeReq::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void CreateActiveCodeReq::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string CreateActiveCodeReq::getRoomId() const
{
    return roomId_;
}

void CreateActiveCodeReq::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool CreateActiveCodeReq::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void CreateActiveCodeReq::unsetroomId()
{
    roomIdIsSet_ = false;
}

int32_t CreateActiveCodeReq::getValidPeriod() const
{
    return validPeriod_;
}

void CreateActiveCodeReq::setValidPeriod(int32_t value)
{
    validPeriod_ = value;
    validPeriodIsSet_ = true;
}

bool CreateActiveCodeReq::validPeriodIsSet() const
{
    return validPeriodIsSet_;
}

void CreateActiveCodeReq::unsetvalidPeriod()
{
    validPeriodIsSet_ = false;
}

}
}
}
}
}


