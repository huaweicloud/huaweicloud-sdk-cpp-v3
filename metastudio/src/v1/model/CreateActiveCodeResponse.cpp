

#include "huaweicloud/metastudio/v1/model/CreateActiveCodeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateActiveCodeResponse::CreateActiveCodeResponse()
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

CreateActiveCodeResponse::~CreateActiveCodeResponse() = default;

void CreateActiveCodeResponse::validate()
{
}

web::json::value CreateActiveCodeResponse::toJson() const
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
bool CreateActiveCodeResponse::fromJson(const web::json::value& val)
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


std::string CreateActiveCodeResponse::getActiveCodeId() const
{
    return activeCodeId_;
}

void CreateActiveCodeResponse::setActiveCodeId(const std::string& value)
{
    activeCodeId_ = value;
    activeCodeIdIsSet_ = true;
}

bool CreateActiveCodeResponse::activeCodeIdIsSet() const
{
    return activeCodeIdIsSet_;
}

void CreateActiveCodeResponse::unsetactiveCodeId()
{
    activeCodeIdIsSet_ = false;
}

std::string CreateActiveCodeResponse::getActiveCode() const
{
    return activeCode_;
}

void CreateActiveCodeResponse::setActiveCode(const std::string& value)
{
    activeCode_ = value;
    activeCodeIsSet_ = true;
}

bool CreateActiveCodeResponse::activeCodeIsSet() const
{
    return activeCodeIsSet_;
}

void CreateActiveCodeResponse::unsetactiveCode()
{
    activeCodeIsSet_ = false;
}

std::string CreateActiveCodeResponse::getRobotId() const
{
    return robotId_;
}

void CreateActiveCodeResponse::setRobotId(const std::string& value)
{
    robotId_ = value;
    robotIdIsSet_ = true;
}

bool CreateActiveCodeResponse::robotIdIsSet() const
{
    return robotIdIsSet_;
}

void CreateActiveCodeResponse::unsetrobotId()
{
    robotIdIsSet_ = false;
}

std::string CreateActiveCodeResponse::getRoomId() const
{
    return roomId_;
}

void CreateActiveCodeResponse::setRoomId(const std::string& value)
{
    roomId_ = value;
    roomIdIsSet_ = true;
}

bool CreateActiveCodeResponse::roomIdIsSet() const
{
    return roomIdIsSet_;
}

void CreateActiveCodeResponse::unsetroomId()
{
    roomIdIsSet_ = false;
}

int32_t CreateActiveCodeResponse::getValidPeriod() const
{
    return validPeriod_;
}

void CreateActiveCodeResponse::setValidPeriod(int32_t value)
{
    validPeriod_ = value;
    validPeriodIsSet_ = true;
}

bool CreateActiveCodeResponse::validPeriodIsSet() const
{
    return validPeriodIsSet_;
}

void CreateActiveCodeResponse::unsetvalidPeriod()
{
    validPeriodIsSet_ = false;
}

std::string CreateActiveCodeResponse::getExpireTime() const
{
    return expireTime_;
}

void CreateActiveCodeResponse::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool CreateActiveCodeResponse::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void CreateActiveCodeResponse::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string CreateActiveCodeResponse::getCreateTime() const
{
    return createTime_;
}

void CreateActiveCodeResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateActiveCodeResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateActiveCodeResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string CreateActiveCodeResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateActiveCodeResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateActiveCodeResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateActiveCodeResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string CreateActiveCodeResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateActiveCodeResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateActiveCodeResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateActiveCodeResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


