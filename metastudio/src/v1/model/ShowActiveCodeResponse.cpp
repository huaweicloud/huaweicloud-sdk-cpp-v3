

#include "huaweicloud/metastudio/v1/model/ShowActiveCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowActiveCodeResponse::ShowActiveCodeResponse()
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

ShowActiveCodeResponse::~ShowActiveCodeResponse() = default;

void ShowActiveCodeResponse::validate()
{
}

web::json::value ShowActiveCodeResponse::toJson() const
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
bool ShowActiveCodeResponse::fromJson(const web::json::value& val)
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


std::string ShowActiveCodeResponse::getActiveCodeId() const
{
    return activeCodeId_;
}

void ShowActiveCodeResponse::setActiveCodeId(const std::string& value)
{
    activeCodeId_ = value;
    activeCodeIdIsSet_ = true;
}

bool ShowActiveCodeResponse::activeCodeIdIsSet() const
{
    return activeCodeIdIsSet_;
}

void ShowActiveCodeResponse::unsetactiveCodeId()
{
    activeCodeIdIsSet_ = false;
}

std::string ShowActiveCodeResponse::getActiveCode() const
{
    return activeCode_;
}

void ShowActiveCodeResponse::setActiveCode(const std::string& value)
{
    activeCode_ = value;
    activeCodeIsSet_ = true;
}

bool ShowActiveCodeResponse::activeCodeIsSet() const
{
    return activeCodeIsSet_;
}

void ShowActiveCodeResponse::unsetactiveCode()
{
    activeCodeIsSet_ = false;
}

std::string ShowActiveCodeResponse::getRobotId() const
{
    return robotId_;
}

void ShowActiveCodeResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool ShowActiveCodeResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void ShowActiveCodeResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string ShowActiveCodeResponse::getRoomId() const
{
    return roomId_;
}

void ShowActiveCodeResponse::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool ShowActiveCodeResponse::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void ShowActiveCodeResponse::unsetroomId()
{
    roomIdIsSet_ = false;
}

int32_t ShowActiveCodeResponse::getValidPeriod() const
{
    return validPeriod_;
}

void ShowActiveCodeResponse::setValidPeriod(int32_t value)
{
    validPeriod_ = value;
    validPeriodIsSet_ = true;
}

bool ShowActiveCodeResponse::validPeriodIsSet() const
{
    return validPeriodIsSet_;
}

void ShowActiveCodeResponse::unsetvalidPeriod()
{
    validPeriodIsSet_ = false;
}

std::string ShowActiveCodeResponse::getExpireTime() const
{
    return expireTime_;
}

void ShowActiveCodeResponse::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool ShowActiveCodeResponse::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void ShowActiveCodeResponse::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string ShowActiveCodeResponse::getCreateTime() const
{
    return createTime_;
}

void ShowActiveCodeResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowActiveCodeResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowActiveCodeResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ShowActiveCodeResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowActiveCodeResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowActiveCodeResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowActiveCodeResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ShowActiveCodeResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowActiveCodeResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowActiveCodeResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowActiveCodeResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


