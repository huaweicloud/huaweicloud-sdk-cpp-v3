

#include "huaweicloud/metastudio/v1/model/ResetActiveCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ResetActiveCodeResponse::ResetActiveCodeResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ResetActiveCodeResponse::~ResetActiveCodeResponse() = default;

void ResetActiveCodeResponse::validate()
{
}

web::json::value ResetActiveCodeResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ResetActiveCodeResponse::fromJson(const web::json::value& val)
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


std::string ResetActiveCodeResponse::getActiveCodeId() const
{
    return activeCodeId_;
}

void ResetActiveCodeResponse::setActiveCodeId(const std::string& value)
{
    activeCodeId_ = value;
    activeCodeIdIsSet_ = true;
}

bool ResetActiveCodeResponse::activeCodeIdIsSet() const
{
    return activeCodeIdIsSet_;
}

void ResetActiveCodeResponse::unsetactiveCodeId()
{
    activeCodeIdIsSet_ = false;
}

std::string ResetActiveCodeResponse::getActiveCode() const
{
    return activeCode_;
}

void ResetActiveCodeResponse::setActiveCode(const std::string& value)
{
    activeCode_ = value;
    activeCodeIsSet_ = true;
}

bool ResetActiveCodeResponse::activeCodeIsSet() const
{
    return activeCodeIsSet_;
}

void ResetActiveCodeResponse::unsetactiveCode()
{
    activeCodeIsSet_ = false;
}

std::string ResetActiveCodeResponse::getRobotId() const
{
    return robotId_;
}

void ResetActiveCodeResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ResetActiveCodeResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ResetActiveCodeResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string ResetActiveCodeResponse::getRoomId() const
{
    return roomId_;
}

void ResetActiveCodeResponse::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ResetActiveCodeResponse::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ResetActiveCodeResponse::unsetroomId()
{
    roomIdIsSet_ = false;
}

int32_t ResetActiveCodeResponse::getValidPeriod() const
{
    return validPeriod_;
}

void ResetActiveCodeResponse::setValidPeriod(int32_t value)
{
    validPeriod_ = value;
    validPeriodIsSet_ = true;
}

bool ResetActiveCodeResponse::validPeriodIsSet() const
{
    return validPeriodIsSet_;
}

void ResetActiveCodeResponse::unsetvalidPeriod()
{
    validPeriodIsSet_ = false;
}

std::string ResetActiveCodeResponse::getExpireTime() const
{
    return expireTime_;
}

void ResetActiveCodeResponse::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool ResetActiveCodeResponse::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void ResetActiveCodeResponse::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string ResetActiveCodeResponse::getCreateTime() const
{
    return createTime_;
}

void ResetActiveCodeResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ResetActiveCodeResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ResetActiveCodeResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ResetActiveCodeResponse::getUpdateTime() const
{
    return updateTime_;
}

void ResetActiveCodeResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ResetActiveCodeResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ResetActiveCodeResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ResetActiveCodeResponse::getXRequestId() const
{
    return xRequestId_;
}

void ResetActiveCodeResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ResetActiveCodeResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ResetActiveCodeResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


