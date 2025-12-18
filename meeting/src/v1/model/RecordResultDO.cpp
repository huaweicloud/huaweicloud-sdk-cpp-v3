

#include "huaweicloud/meeting/v1/model/RecordResultDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RecordResultDO::RecordResultDO()
{
    confUUID_ = "";
    confUUIDIsSet_ = false;
    confID_ = "";
    confIDIsSet_ = false;
    urlIsSet_ = false;
    rcdTime_ = 0;
    rcdTimeIsSet_ = false;
    rcdSize_ = 0;
    rcdSizeIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    scheduserName_ = "";
    scheduserNameIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    isDecodeFinish_ = false;
    isDecodeFinishIsSet_ = false;
    decodeEndTime_ = 0L;
    decodeEndTimeIsSet_ = false;
    available_ = false;
    availableIsSet_ = false;
    recordAuthType_ = 0;
    recordAuthTypeIsSet_ = false;
}

RecordResultDO::~RecordResultDO() = default;

void RecordResultDO::validate()
{
}

web::json::value RecordResultDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confUUIDIsSet_) {
        val[utility::conversions::to_string_t("confUUID")] = ModelBase::toJson(confUUID_);
    }
    if(confIDIsSet_) {
        val[utility::conversions::to_string_t("confID")] = ModelBase::toJson(confID_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(rcdTimeIsSet_) {
        val[utility::conversions::to_string_t("rcdTime")] = ModelBase::toJson(rcdTime_);
    }
    if(rcdSizeIsSet_) {
        val[utility::conversions::to_string_t("rcdSize")] = ModelBase::toJson(rcdSize_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(scheduserNameIsSet_) {
        val[utility::conversions::to_string_t("scheduserName")] = ModelBase::toJson(scheduserName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(isDecodeFinishIsSet_) {
        val[utility::conversions::to_string_t("isDecodeFinish")] = ModelBase::toJson(isDecodeFinish_);
    }
    if(decodeEndTimeIsSet_) {
        val[utility::conversions::to_string_t("decodeEndTime")] = ModelBase::toJson(decodeEndTime_);
    }
    if(availableIsSet_) {
        val[utility::conversions::to_string_t("available")] = ModelBase::toJson(available_);
    }
    if(recordAuthTypeIsSet_) {
        val[utility::conversions::to_string_t("recordAuthType")] = ModelBase::toJson(recordAuthType_);
    }

    return val;
}
bool RecordResultDO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUUID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rcdTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rcdTime"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRcdTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rcdSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rcdSize"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRcdSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scheduserName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scheduserName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isDecodeFinish"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isDecodeFinish"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDecodeFinish(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("decodeEndTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("decodeEndTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDecodeEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recordAuthType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recordAuthType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordAuthType(refVal);
        }
    }
    return ok;
}


std::string RecordResultDO::getConfUUID() const
{
    return confUUID_;
}

void RecordResultDO::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool RecordResultDO::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void RecordResultDO::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

std::string RecordResultDO::getConfID() const
{
    return confID_;
}

void RecordResultDO::setConfID(const std::string& value)
{
    confID_ = value;
    confIDIsSet_ = true;
}

bool RecordResultDO::confIDIsSet() const
{
    return confIDIsSet_;
}

void RecordResultDO::unsetconfID()
{
    confIDIsSet_ = false;
}

std::vector<std::string>& RecordResultDO::getUrl()
{
    return url_;
}

void RecordResultDO::setUrl(const std::vector<std::string>& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool RecordResultDO::urlIsSet() const
{
    return urlIsSet_;
}

void RecordResultDO::unseturl()
{
    urlIsSet_ = false;
}

int32_t RecordResultDO::getRcdTime() const
{
    return rcdTime_;
}

void RecordResultDO::setRcdTime(int32_t value)
{
    rcdTime_ = value;
    rcdTimeIsSet_ = true;
}

bool RecordResultDO::rcdTimeIsSet() const
{
    return rcdTimeIsSet_;
}

void RecordResultDO::unsetrcdTime()
{
    rcdTimeIsSet_ = false;
}

int32_t RecordResultDO::getRcdSize() const
{
    return rcdSize_;
}

void RecordResultDO::setRcdSize(int32_t value)
{
    rcdSize_ = value;
    rcdSizeIsSet_ = true;
}

bool RecordResultDO::rcdSizeIsSet() const
{
    return rcdSizeIsSet_;
}

void RecordResultDO::unsetrcdSize()
{
    rcdSizeIsSet_ = false;
}

std::string RecordResultDO::getSubject() const
{
    return subject_;
}

void RecordResultDO::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool RecordResultDO::subjectIsSet() const
{
    return subjectIsSet_;
}

void RecordResultDO::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string RecordResultDO::getScheduserName() const
{
    return scheduserName_;
}

void RecordResultDO::setScheduserName(const std::string& value)
{
    scheduserName_ = value;
    scheduserNameIsSet_ = true;
}

bool RecordResultDO::scheduserNameIsSet() const
{
    return scheduserNameIsSet_;
}

void RecordResultDO::unsetscheduserName()
{
    scheduserNameIsSet_ = false;
}

std::string RecordResultDO::getStartTime() const
{
    return startTime_;
}

void RecordResultDO::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool RecordResultDO::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void RecordResultDO::unsetstartTime()
{
    startTimeIsSet_ = false;
}

bool RecordResultDO::isIsDecodeFinish() const
{
    return isDecodeFinish_;
}

void RecordResultDO::setIsDecodeFinish(bool value)
{
    isDecodeFinish_ = value;
    isDecodeFinishIsSet_ = true;
}

bool RecordResultDO::isDecodeFinishIsSet() const
{
    return isDecodeFinishIsSet_;
}

void RecordResultDO::unsetisDecodeFinish()
{
    isDecodeFinishIsSet_ = false;
}

int64_t RecordResultDO::getDecodeEndTime() const
{
    return decodeEndTime_;
}

void RecordResultDO::setDecodeEndTime(int64_t value)
{
    decodeEndTime_ = value;
    decodeEndTimeIsSet_ = true;
}

bool RecordResultDO::decodeEndTimeIsSet() const
{
    return decodeEndTimeIsSet_;
}

void RecordResultDO::unsetdecodeEndTime()
{
    decodeEndTimeIsSet_ = false;
}

bool RecordResultDO::isAvailable() const
{
    return available_;
}

void RecordResultDO::setAvailable(bool value)
{
    available_ = value;
    availableIsSet_ = true;
}

bool RecordResultDO::availableIsSet() const
{
    return availableIsSet_;
}

void RecordResultDO::unsetavailable()
{
    availableIsSet_ = false;
}

int32_t RecordResultDO::getRecordAuthType() const
{
    return recordAuthType_;
}

void RecordResultDO::setRecordAuthType(int32_t value)
{
    recordAuthType_ = value;
    recordAuthTypeIsSet_ = true;
}

bool RecordResultDO::recordAuthTypeIsSet() const
{
    return recordAuthTypeIsSet_;
}

void RecordResultDO::unsetrecordAuthType()
{
    recordAuthTypeIsSet_ = false;
}

}
}
}
}
}


