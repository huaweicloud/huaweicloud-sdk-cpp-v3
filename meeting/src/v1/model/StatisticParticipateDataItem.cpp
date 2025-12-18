

#include "huaweicloud/meeting/v1/model/StatisticParticipateDataItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




StatisticParticipateDataItem::StatisticParticipateDataItem()
{
    time_ = "";
    timeIsSet_ = false;
    confUserName_ = "";
    confUserNameIsSet_ = false;
    confUserAccount_ = "";
    confUserAccountIsSet_ = false;
    confUserDeptName_ = "";
    confUserDeptNameIsSet_ = false;
    confUserCount_ = "";
    confUserCountIsSet_ = false;
    confUserDuration_ = "";
    confUserDurationIsSet_ = false;
    confHardTerminalName_ = "";
    confHardTerminalNameIsSet_ = false;
    confHardTerminalModel_ = "";
    confHardTerminalModelIsSet_ = false;
    confHardTerminalUserId_ = "";
    confHardTerminalUserIdIsSet_ = false;
    confHardTerminalCount_ = "";
    confHardTerminalCountIsSet_ = false;
    confHardTerminalDuration_ = "";
    confHardTerminalDurationIsSet_ = false;
    deviceType_ = "";
    deviceTypeIsSet_ = false;
    deviceVersion_ = "";
    deviceVersionIsSet_ = false;
    deviceAttendanceCount_ = "";
    deviceAttendanceCountIsSet_ = false;
}

StatisticParticipateDataItem::~StatisticParticipateDataItem() = default;

void StatisticParticipateDataItem::validate()
{
}

web::json::value StatisticParticipateDataItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(confUserNameIsSet_) {
        val[utility::conversions::to_string_t("confUserName")] = ModelBase::toJson(confUserName_);
    }
    if(confUserAccountIsSet_) {
        val[utility::conversions::to_string_t("confUserAccount")] = ModelBase::toJson(confUserAccount_);
    }
    if(confUserDeptNameIsSet_) {
        val[utility::conversions::to_string_t("confUserDeptName")] = ModelBase::toJson(confUserDeptName_);
    }
    if(confUserCountIsSet_) {
        val[utility::conversions::to_string_t("confUserCount")] = ModelBase::toJson(confUserCount_);
    }
    if(confUserDurationIsSet_) {
        val[utility::conversions::to_string_t("confUserDuration")] = ModelBase::toJson(confUserDuration_);
    }
    if(confHardTerminalNameIsSet_) {
        val[utility::conversions::to_string_t("confHardTerminalName")] = ModelBase::toJson(confHardTerminalName_);
    }
    if(confHardTerminalModelIsSet_) {
        val[utility::conversions::to_string_t("confHardTerminalModel")] = ModelBase::toJson(confHardTerminalModel_);
    }
    if(confHardTerminalUserIdIsSet_) {
        val[utility::conversions::to_string_t("confHardTerminalUserId")] = ModelBase::toJson(confHardTerminalUserId_);
    }
    if(confHardTerminalCountIsSet_) {
        val[utility::conversions::to_string_t("confHardTerminalCount")] = ModelBase::toJson(confHardTerminalCount_);
    }
    if(confHardTerminalDurationIsSet_) {
        val[utility::conversions::to_string_t("confHardTerminalDuration")] = ModelBase::toJson(confHardTerminalDuration_);
    }
    if(deviceTypeIsSet_) {
        val[utility::conversions::to_string_t("deviceType")] = ModelBase::toJson(deviceType_);
    }
    if(deviceVersionIsSet_) {
        val[utility::conversions::to_string_t("deviceVersion")] = ModelBase::toJson(deviceVersion_);
    }
    if(deviceAttendanceCountIsSet_) {
        val[utility::conversions::to_string_t("deviceAttendanceCount")] = ModelBase::toJson(deviceAttendanceCount_);
    }

    return val;
}
bool StatisticParticipateDataItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confUserName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUserName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confUserAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUserAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUserAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confUserDeptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUserDeptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUserDeptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confUserCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUserCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUserCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confUserDuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUserDuration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUserDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confHardTerminalName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confHardTerminalName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfHardTerminalName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confHardTerminalModel"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confHardTerminalModel"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfHardTerminalModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confHardTerminalUserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confHardTerminalUserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfHardTerminalUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confHardTerminalCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confHardTerminalCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfHardTerminalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confHardTerminalDuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confHardTerminalDuration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfHardTerminalDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deviceType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deviceType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deviceVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deviceVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deviceAttendanceCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deviceAttendanceCount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceAttendanceCount(refVal);
        }
    }
    return ok;
}


std::string StatisticParticipateDataItem::getTime() const
{
    return time_;
}

void StatisticParticipateDataItem::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool StatisticParticipateDataItem::timeIsSet() const
{
    return timeIsSet_;
}

void StatisticParticipateDataItem::unsettime()
{
    timeIsSet_ = false;
}

std::string StatisticParticipateDataItem::getConfUserName() const
{
    return confUserName_;
}

void StatisticParticipateDataItem::setConfUserName(const std::string& value)
{
    confUserName_ = value;
    confUserNameIsSet_ = true;
}

bool StatisticParticipateDataItem::confUserNameIsSet() const
{
    return confUserNameIsSet_;
}

void StatisticParticipateDataItem::unsetconfUserName()
{
    confUserNameIsSet_ = false;
}

std::string StatisticParticipateDataItem::getConfUserAccount() const
{
    return confUserAccount_;
}

void StatisticParticipateDataItem::setConfUserAccount(const std::string& value)
{
    confUserAccount_ = value;
    confUserAccountIsSet_ = true;
}

bool StatisticParticipateDataItem::confUserAccountIsSet() const
{
    return confUserAccountIsSet_;
}

void StatisticParticipateDataItem::unsetconfUserAccount()
{
    confUserAccountIsSet_ = false;
}

std::string StatisticParticipateDataItem::getConfUserDeptName() const
{
    return confUserDeptName_;
}

void StatisticParticipateDataItem::setConfUserDeptName(const std::string& value)
{
    confUserDeptName_ = value;
    confUserDeptNameIsSet_ = true;
}

bool StatisticParticipateDataItem::confUserDeptNameIsSet() const
{
    return confUserDeptNameIsSet_;
}

void StatisticParticipateDataItem::unsetconfUserDeptName()
{
    confUserDeptNameIsSet_ = false;
}

std::string StatisticParticipateDataItem::getConfUserCount() const
{
    return confUserCount_;
}

void StatisticParticipateDataItem::setConfUserCount(const std::string& value)
{
    confUserCount_ = value;
    confUserCountIsSet_ = true;
}

bool StatisticParticipateDataItem::confUserCountIsSet() const
{
    return confUserCountIsSet_;
}

void StatisticParticipateDataItem::unsetconfUserCount()
{
    confUserCountIsSet_ = false;
}

std::string StatisticParticipateDataItem::getConfUserDuration() const
{
    return confUserDuration_;
}

void StatisticParticipateDataItem::setConfUserDuration(const std::string& value)
{
    confUserDuration_ = value;
    confUserDurationIsSet_ = true;
}

bool StatisticParticipateDataItem::confUserDurationIsSet() const
{
    return confUserDurationIsSet_;
}

void StatisticParticipateDataItem::unsetconfUserDuration()
{
    confUserDurationIsSet_ = false;
}

std::string StatisticParticipateDataItem::getConfHardTerminalName() const
{
    return confHardTerminalName_;
}

void StatisticParticipateDataItem::setConfHardTerminalName(const std::string& value)
{
    confHardTerminalName_ = value;
    confHardTerminalNameIsSet_ = true;
}

bool StatisticParticipateDataItem::confHardTerminalNameIsSet() const
{
    return confHardTerminalNameIsSet_;
}

void StatisticParticipateDataItem::unsetconfHardTerminalName()
{
    confHardTerminalNameIsSet_ = false;
}

std::string StatisticParticipateDataItem::getConfHardTerminalModel() const
{
    return confHardTerminalModel_;
}

void StatisticParticipateDataItem::setConfHardTerminalModel(const std::string& value)
{
    confHardTerminalModel_ = value;
    confHardTerminalModelIsSet_ = true;
}

bool StatisticParticipateDataItem::confHardTerminalModelIsSet() const
{
    return confHardTerminalModelIsSet_;
}

void StatisticParticipateDataItem::unsetconfHardTerminalModel()
{
    confHardTerminalModelIsSet_ = false;
}

std::string StatisticParticipateDataItem::getConfHardTerminalUserId() const
{
    return confHardTerminalUserId_;
}

void StatisticParticipateDataItem::setConfHardTerminalUserId(const std::string& value)
{
    confHardTerminalUserId_ = value;
    confHardTerminalUserIdIsSet_ = true;
}

bool StatisticParticipateDataItem::confHardTerminalUserIdIsSet() const
{
    return confHardTerminalUserIdIsSet_;
}

void StatisticParticipateDataItem::unsetconfHardTerminalUserId()
{
    confHardTerminalUserIdIsSet_ = false;
}

std::string StatisticParticipateDataItem::getConfHardTerminalCount() const
{
    return confHardTerminalCount_;
}

void StatisticParticipateDataItem::setConfHardTerminalCount(const std::string& value)
{
    confHardTerminalCount_ = value;
    confHardTerminalCountIsSet_ = true;
}

bool StatisticParticipateDataItem::confHardTerminalCountIsSet() const
{
    return confHardTerminalCountIsSet_;
}

void StatisticParticipateDataItem::unsetconfHardTerminalCount()
{
    confHardTerminalCountIsSet_ = false;
}

std::string StatisticParticipateDataItem::getConfHardTerminalDuration() const
{
    return confHardTerminalDuration_;
}

void StatisticParticipateDataItem::setConfHardTerminalDuration(const std::string& value)
{
    confHardTerminalDuration_ = value;
    confHardTerminalDurationIsSet_ = true;
}

bool StatisticParticipateDataItem::confHardTerminalDurationIsSet() const
{
    return confHardTerminalDurationIsSet_;
}

void StatisticParticipateDataItem::unsetconfHardTerminalDuration()
{
    confHardTerminalDurationIsSet_ = false;
}

std::string StatisticParticipateDataItem::getDeviceType() const
{
    return deviceType_;
}

void StatisticParticipateDataItem::setDeviceType(const std::string& value)
{
    deviceType_ = value;
    deviceTypeIsSet_ = true;
}

bool StatisticParticipateDataItem::deviceTypeIsSet() const
{
    return deviceTypeIsSet_;
}

void StatisticParticipateDataItem::unsetdeviceType()
{
    deviceTypeIsSet_ = false;
}

std::string StatisticParticipateDataItem::getDeviceVersion() const
{
    return deviceVersion_;
}

void StatisticParticipateDataItem::setDeviceVersion(const std::string& value)
{
    deviceVersion_ = value;
    deviceVersionIsSet_ = true;
}

bool StatisticParticipateDataItem::deviceVersionIsSet() const
{
    return deviceVersionIsSet_;
}

void StatisticParticipateDataItem::unsetdeviceVersion()
{
    deviceVersionIsSet_ = false;
}

std::string StatisticParticipateDataItem::getDeviceAttendanceCount() const
{
    return deviceAttendanceCount_;
}

void StatisticParticipateDataItem::setDeviceAttendanceCount(const std::string& value)
{
    deviceAttendanceCount_ = value;
    deviceAttendanceCountIsSet_ = true;
}

bool StatisticParticipateDataItem::deviceAttendanceCountIsSet() const
{
    return deviceAttendanceCountIsSet_;
}

void StatisticParticipateDataItem::unsetdeviceAttendanceCount()
{
    deviceAttendanceCountIsSet_ = false;
}

}
}
}
}
}


