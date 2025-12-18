

#include "huaweicloud/meeting/v1/model/ConfAttendeeRecordInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ConfAttendeeRecordInfo::ConfAttendeeRecordInfo()
{
    displayName_ = "";
    displayNameIsSet_ = false;
    callNumber_ = "";
    callNumberIsSet_ = false;
    deviceType_ = "";
    deviceTypeIsSet_ = false;
    joinTime_ = 0L;
    joinTimeIsSet_ = false;
    leftTime_ = 0L;
    leftTimeIsSet_ = false;
    mediaType_ = "";
    mediaTypeIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
}

ConfAttendeeRecordInfo::~ConfAttendeeRecordInfo() = default;

void ConfAttendeeRecordInfo::validate()
{
}

web::json::value ConfAttendeeRecordInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("displayName")] = ModelBase::toJson(displayName_);
    }
    if(callNumberIsSet_) {
        val[utility::conversions::to_string_t("callNumber")] = ModelBase::toJson(callNumber_);
    }
    if(deviceTypeIsSet_) {
        val[utility::conversions::to_string_t("deviceType")] = ModelBase::toJson(deviceType_);
    }
    if(joinTimeIsSet_) {
        val[utility::conversions::to_string_t("joinTime")] = ModelBase::toJson(joinTime_);
    }
    if(leftTimeIsSet_) {
        val[utility::conversions::to_string_t("leftTime")] = ModelBase::toJson(leftTime_);
    }
    if(mediaTypeIsSet_) {
        val[utility::conversions::to_string_t("mediaType")] = ModelBase::toJson(mediaType_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }

    return val;
}
bool ConfAttendeeRecordInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("displayName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("displayName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callNumber"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callNumber"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("joinTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("joinTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJoinTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("leftTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("leftTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeftTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mediaType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mediaType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMediaType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptName(refVal);
        }
    }
    return ok;
}


std::string ConfAttendeeRecordInfo::getDisplayName() const
{
    return displayName_;
}

void ConfAttendeeRecordInfo::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ConfAttendeeRecordInfo::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ConfAttendeeRecordInfo::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

std::string ConfAttendeeRecordInfo::getCallNumber() const
{
    return callNumber_;
}

void ConfAttendeeRecordInfo::setCallNumber(const std::string& value)
{
    callNumber_ = value;
    callNumberIsSet_ = true;
}

bool ConfAttendeeRecordInfo::callNumberIsSet() const
{
    return callNumberIsSet_;
}

void ConfAttendeeRecordInfo::unsetcallNumber()
{
    callNumberIsSet_ = false;
}

std::string ConfAttendeeRecordInfo::getDeviceType() const
{
    return deviceType_;
}

void ConfAttendeeRecordInfo::setDeviceType(const std::string& value)
{
    deviceType_ = value;
    deviceTypeIsSet_ = true;
}

bool ConfAttendeeRecordInfo::deviceTypeIsSet() const
{
    return deviceTypeIsSet_;
}

void ConfAttendeeRecordInfo::unsetdeviceType()
{
    deviceTypeIsSet_ = false;
}

int64_t ConfAttendeeRecordInfo::getJoinTime() const
{
    return joinTime_;
}

void ConfAttendeeRecordInfo::setJoinTime(int64_t value)
{
    joinTime_ = value;
    joinTimeIsSet_ = true;
}

bool ConfAttendeeRecordInfo::joinTimeIsSet() const
{
    return joinTimeIsSet_;
}

void ConfAttendeeRecordInfo::unsetjoinTime()
{
    joinTimeIsSet_ = false;
}

int64_t ConfAttendeeRecordInfo::getLeftTime() const
{
    return leftTime_;
}

void ConfAttendeeRecordInfo::setLeftTime(int64_t value)
{
    leftTime_ = value;
    leftTimeIsSet_ = true;
}

bool ConfAttendeeRecordInfo::leftTimeIsSet() const
{
    return leftTimeIsSet_;
}

void ConfAttendeeRecordInfo::unsetleftTime()
{
    leftTimeIsSet_ = false;
}

std::string ConfAttendeeRecordInfo::getMediaType() const
{
    return mediaType_;
}

void ConfAttendeeRecordInfo::setMediaType(const std::string& value)
{
    mediaType_ = value;
    mediaTypeIsSet_ = true;
}

bool ConfAttendeeRecordInfo::mediaTypeIsSet() const
{
    return mediaTypeIsSet_;
}

void ConfAttendeeRecordInfo::unsetmediaType()
{
    mediaTypeIsSet_ = false;
}

std::string ConfAttendeeRecordInfo::getDeptName() const
{
    return deptName_;
}

void ConfAttendeeRecordInfo::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool ConfAttendeeRecordInfo::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void ConfAttendeeRecordInfo::unsetdeptName()
{
    deptNameIsSet_ = false;
}

}
}
}
}
}


