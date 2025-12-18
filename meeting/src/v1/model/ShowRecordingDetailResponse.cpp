

#include "huaweicloud/meeting/v1/model/ShowRecordingDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowRecordingDetailResponse::ShowRecordingDetailResponse()
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

ShowRecordingDetailResponse::~ShowRecordingDetailResponse() = default;

void ShowRecordingDetailResponse::validate()
{
}

web::json::value ShowRecordingDetailResponse::toJson() const
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
bool ShowRecordingDetailResponse::fromJson(const web::json::value& val)
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


std::string ShowRecordingDetailResponse::getConfUUID() const
{
    return confUUID_;
}

void ShowRecordingDetailResponse::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool ShowRecordingDetailResponse::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void ShowRecordingDetailResponse::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

std::string ShowRecordingDetailResponse::getConfID() const
{
    return confID_;
}

void ShowRecordingDetailResponse::setConfID(const std::string& value)
{
    confID_ = value;
    confIDIsSet_ = true;
}

bool ShowRecordingDetailResponse::confIDIsSet() const
{
    return confIDIsSet_;
}

void ShowRecordingDetailResponse::unsetconfID()
{
    confIDIsSet_ = false;
}

std::vector<std::string>& ShowRecordingDetailResponse::getUrl()
{
    return url_;
}

void ShowRecordingDetailResponse::setUrl(const std::vector<std::string>& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ShowRecordingDetailResponse::urlIsSet() const
{
    return urlIsSet_;
}

void ShowRecordingDetailResponse::unseturl()
{
    urlIsSet_ = false;
}

int32_t ShowRecordingDetailResponse::getRcdTime() const
{
    return rcdTime_;
}

void ShowRecordingDetailResponse::setRcdTime(int32_t value)
{
    rcdTime_ = value;
    rcdTimeIsSet_ = true;
}

bool ShowRecordingDetailResponse::rcdTimeIsSet() const
{
    return rcdTimeIsSet_;
}

void ShowRecordingDetailResponse::unsetrcdTime()
{
    rcdTimeIsSet_ = false;
}

int32_t ShowRecordingDetailResponse::getRcdSize() const
{
    return rcdSize_;
}

void ShowRecordingDetailResponse::setRcdSize(int32_t value)
{
    rcdSize_ = value;
    rcdSizeIsSet_ = true;
}

bool ShowRecordingDetailResponse::rcdSizeIsSet() const
{
    return rcdSizeIsSet_;
}

void ShowRecordingDetailResponse::unsetrcdSize()
{
    rcdSizeIsSet_ = false;
}

std::string ShowRecordingDetailResponse::getSubject() const
{
    return subject_;
}

void ShowRecordingDetailResponse::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool ShowRecordingDetailResponse::subjectIsSet() const
{
    return subjectIsSet_;
}

void ShowRecordingDetailResponse::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string ShowRecordingDetailResponse::getScheduserName() const
{
    return scheduserName_;
}

void ShowRecordingDetailResponse::setScheduserName(const std::string& value)
{
    scheduserName_ = value;
    scheduserNameIsSet_ = true;
}

bool ShowRecordingDetailResponse::scheduserNameIsSet() const
{
    return scheduserNameIsSet_;
}

void ShowRecordingDetailResponse::unsetscheduserName()
{
    scheduserNameIsSet_ = false;
}

std::string ShowRecordingDetailResponse::getStartTime() const
{
    return startTime_;
}

void ShowRecordingDetailResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowRecordingDetailResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowRecordingDetailResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

bool ShowRecordingDetailResponse::isIsDecodeFinish() const
{
    return isDecodeFinish_;
}

void ShowRecordingDetailResponse::setIsDecodeFinish(bool value)
{
    isDecodeFinish_ = value;
    isDecodeFinishIsSet_ = true;
}

bool ShowRecordingDetailResponse::isDecodeFinishIsSet() const
{
    return isDecodeFinishIsSet_;
}

void ShowRecordingDetailResponse::unsetisDecodeFinish()
{
    isDecodeFinishIsSet_ = false;
}

int64_t ShowRecordingDetailResponse::getDecodeEndTime() const
{
    return decodeEndTime_;
}

void ShowRecordingDetailResponse::setDecodeEndTime(int64_t value)
{
    decodeEndTime_ = value;
    decodeEndTimeIsSet_ = true;
}

bool ShowRecordingDetailResponse::decodeEndTimeIsSet() const
{
    return decodeEndTimeIsSet_;
}

void ShowRecordingDetailResponse::unsetdecodeEndTime()
{
    decodeEndTimeIsSet_ = false;
}

bool ShowRecordingDetailResponse::isAvailable() const
{
    return available_;
}

void ShowRecordingDetailResponse::setAvailable(bool value)
{
    available_ = value;
    availableIsSet_ = true;
}

bool ShowRecordingDetailResponse::availableIsSet() const
{
    return availableIsSet_;
}

void ShowRecordingDetailResponse::unsetavailable()
{
    availableIsSet_ = false;
}

int32_t ShowRecordingDetailResponse::getRecordAuthType() const
{
    return recordAuthType_;
}

void ShowRecordingDetailResponse::setRecordAuthType(int32_t value)
{
    recordAuthType_ = value;
    recordAuthTypeIsSet_ = true;
}

bool ShowRecordingDetailResponse::recordAuthTypeIsSet() const
{
    return recordAuthTypeIsSet_;
}

void ShowRecordingDetailResponse::unsetrecordAuthType()
{
    recordAuthTypeIsSet_ = false;
}

}
}
}
}
}


