

#include "huaweicloud/metastudio/v1/model/UpdateActiveCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateActiveCodeResponse::UpdateActiveCodeResponse()
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

UpdateActiveCodeResponse::~UpdateActiveCodeResponse() = default;

void UpdateActiveCodeResponse::validate()
{
}

web::json::value UpdateActiveCodeResponse::toJson() const
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
bool UpdateActiveCodeResponse::fromJson(const web::json::value& val)
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


std::string UpdateActiveCodeResponse::getActiveCodeId() const
{
    return activeCodeId_;
}

void UpdateActiveCodeResponse::setActiveCodeId(const std::string& value)
{
    activeCodeId_ = value;
    activeCodeIdIsSet_ = true;
}

bool UpdateActiveCodeResponse::activeCodeIdIsSet() const
{
    return activeCodeIdIsSet_;
}

void UpdateActiveCodeResponse::unsetactiveCodeId()
{
    activeCodeIdIsSet_ = false;
}

std::string UpdateActiveCodeResponse::getActiveCode() const
{
    return activeCode_;
}

void UpdateActiveCodeResponse::setActiveCode(const std::string& value)
{
    activeCode_ = value;
    activeCodeIsSet_ = true;
}

bool UpdateActiveCodeResponse::activeCodeIsSet() const
{
    return activeCodeIsSet_;
}

void UpdateActiveCodeResponse::unsetactiveCode()
{
    activeCodeIsSet_ = false;
}

std::string UpdateActiveCodeResponse::getRobotId() const
{
    return robotId_;
}

void UpdateActiveCodeResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool UpdateActiveCodeResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void UpdateActiveCodeResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string UpdateActiveCodeResponse::getRoomId() const
{
    return roomId_;
}

void UpdateActiveCodeResponse::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool UpdateActiveCodeResponse::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void UpdateActiveCodeResponse::unsetroomId()
{
    roomIdIsSet_ = false;
}

int32_t UpdateActiveCodeResponse::getValidPeriod() const
{
    return validPeriod_;
}

void UpdateActiveCodeResponse::setValidPeriod(int32_t value)
{
    validPeriod_ = value;
    validPeriodIsSet_ = true;
}

bool UpdateActiveCodeResponse::validPeriodIsSet() const
{
    return validPeriodIsSet_;
}

void UpdateActiveCodeResponse::unsetvalidPeriod()
{
    validPeriodIsSet_ = false;
}

std::string UpdateActiveCodeResponse::getExpireTime() const
{
    return expireTime_;
}

void UpdateActiveCodeResponse::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool UpdateActiveCodeResponse::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void UpdateActiveCodeResponse::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string UpdateActiveCodeResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateActiveCodeResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateActiveCodeResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateActiveCodeResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateActiveCodeResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateActiveCodeResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateActiveCodeResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateActiveCodeResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateActiveCodeResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateActiveCodeResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateActiveCodeResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateActiveCodeResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


