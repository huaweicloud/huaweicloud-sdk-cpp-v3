

#include "huaweicloud/metastudio/v1/model/ActiveCodeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ActiveCodeInfo::ActiveCodeInfo()
{
    activeCodeId_ = "";
    activeCodeIdIsSet_ = false;
    activeCode_ = "";
    activeCodeIsSet_ = false;
    robotId_ = "";
    robotIdIsSet_ = false;
    roomId_ = "";
    roomIdIsSet_ = false;
    validPeriod_ = 0;
    validPeriodIsSet_ = false;
    expireTime_ = "";
    expireTimeIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

ActiveCodeInfo::~ActiveCodeInfo() = default;

void ActiveCodeInfo::validate()
{
}

web::json::value ActiveCodeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(activeCodeIdIsSet_) {
        val[utility::conversions::to_string_t("active_code_id")] = ModelBase::toJson(activeCodeId_);
    }
    if(activeCodeIsSet_) {
        val[utility::conversions::to_string_t("active_code")] = ModelBase::toJson(activeCode_);
    }
    if(robotIdIsSet_) {
        val[utility::conversions::to_string_t("robot_id")] = ModelBase::toJson(robotId_);
    }
    if(roomIdIsSet_) {
        val[utility::conversions::to_string_t("room_id")] = ModelBase::toJson(roomId_);
    }
    if(validPeriodIsSet_) {
        val[utility::conversions::to_string_t("valid_period")] = ModelBase::toJson(validPeriod_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool ActiveCodeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("active_code_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_code_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveCodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string ActiveCodeInfo::getActiveCodeId() const
{
    return activeCodeId_;
}

void ActiveCodeInfo::setActiveCodeId(const std::string& value)
{
    activeCodeId_ = value;
    activeCodeIdIsSet_ = true;
}

bool ActiveCodeInfo::activeCodeIdIsSet() const
{
    return activeCodeIdIsSet_;
}

void ActiveCodeInfo::unsetactiveCodeId()
{
    activeCodeIdIsSet_ = false;
}

std::string ActiveCodeInfo::getActiveCode() const
{
    return activeCode_;
}

void ActiveCodeInfo::setActiveCode(const std::string& value)
{
    activeCode_ = value;
    activeCodeIsSet_ = true;
}

bool ActiveCodeInfo::activeCodeIsSet() const
{
    return activeCodeIsSet_;
}

void ActiveCodeInfo::unsetactiveCode()
{
    activeCodeIsSet_ = false;
}

std::string ActiveCodeInfo::getRobotId() const
{
    return robotId_;
}

void ActiveCodeInfo::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ActiveCodeInfo::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ActiveCodeInfo::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string ActiveCodeInfo::getRoomId() const
{
    return roomId_;
}

void ActiveCodeInfo::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ActiveCodeInfo::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ActiveCodeInfo::unsetroomId()
{
    roomIdIsSet_ = false;
}

int32_t ActiveCodeInfo::getValidPeriod() const
{
    return validPeriod_;
}

void ActiveCodeInfo::setValidPeriod(int32_t value)
{
    validPeriod_ = value;
    validPeriodIsSet_ = true;
}

bool ActiveCodeInfo::validPeriodIsSet() const
{
    return validPeriodIsSet_;
}

void ActiveCodeInfo::unsetvalidPeriod()
{
    validPeriodIsSet_ = false;
}

std::string ActiveCodeInfo::getExpireTime() const
{
    return expireTime_;
}

void ActiveCodeInfo::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool ActiveCodeInfo::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void ActiveCodeInfo::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string ActiveCodeInfo::getCreateTime() const
{
    return createTime_;
}

void ActiveCodeInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ActiveCodeInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ActiveCodeInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ActiveCodeInfo::getUpdateTime() const
{
    return updateTime_;
}

void ActiveCodeInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ActiveCodeInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ActiveCodeInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


