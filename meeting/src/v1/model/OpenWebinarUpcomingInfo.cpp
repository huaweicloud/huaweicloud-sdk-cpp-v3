

#include "huaweicloud/meeting/v1/model/OpenWebinarUpcomingInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OpenWebinarUpcomingInfo::OpenWebinarUpcomingInfo()
{
    conferenceId_ = "";
    conferenceIdIsSet_ = false;
    corpId_ = "";
    corpIdIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    timeZoneId_ = 0;
    timeZoneIdIsSet_ = false;
    scheduserId_ = "";
    scheduserIdIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    scheduserName_ = "";
    scheduserNameIsSet_ = false;
    vmrPkgName_ = "";
    vmrPkgNameIsSet_ = false;
    chairJoinUri_ = "";
    chairJoinUriIsSet_ = false;
    chairPasswd_ = "";
    chairPasswdIsSet_ = false;
    guestJoinUri_ = "";
    guestJoinUriIsSet_ = false;
    guestPasswd_ = "";
    guestPasswdIsSet_ = false;
    audienceJoinUri_ = "";
    audienceJoinUriIsSet_ = false;
    audiencePasswd_ = "";
    audiencePasswdIsSet_ = false;
}

OpenWebinarUpcomingInfo::~OpenWebinarUpcomingInfo() = default;

void OpenWebinarUpcomingInfo::validate()
{
}

web::json::value OpenWebinarUpcomingInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIdIsSet_) {
        val[utility::conversions::to_string_t("conferenceId")] = ModelBase::toJson(conferenceId_);
    }
    if(corpIdIsSet_) {
        val[utility::conversions::to_string_t("corpId")] = ModelBase::toJson(corpId_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(timeZoneIdIsSet_) {
        val[utility::conversions::to_string_t("timeZoneId")] = ModelBase::toJson(timeZoneId_);
    }
    if(scheduserIdIsSet_) {
        val[utility::conversions::to_string_t("scheduserId")] = ModelBase::toJson(scheduserId_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(scheduserNameIsSet_) {
        val[utility::conversions::to_string_t("scheduserName")] = ModelBase::toJson(scheduserName_);
    }
    if(vmrPkgNameIsSet_) {
        val[utility::conversions::to_string_t("vmrPkgName")] = ModelBase::toJson(vmrPkgName_);
    }
    if(chairJoinUriIsSet_) {
        val[utility::conversions::to_string_t("chairJoinUri")] = ModelBase::toJson(chairJoinUri_);
    }
    if(chairPasswdIsSet_) {
        val[utility::conversions::to_string_t("chairPasswd")] = ModelBase::toJson(chairPasswd_);
    }
    if(guestJoinUriIsSet_) {
        val[utility::conversions::to_string_t("guestJoinUri")] = ModelBase::toJson(guestJoinUri_);
    }
    if(guestPasswdIsSet_) {
        val[utility::conversions::to_string_t("guestPasswd")] = ModelBase::toJson(guestPasswd_);
    }
    if(audienceJoinUriIsSet_) {
        val[utility::conversions::to_string_t("audienceJoinUri")] = ModelBase::toJson(audienceJoinUri_);
    }
    if(audiencePasswdIsSet_) {
        val[utility::conversions::to_string_t("audiencePasswd")] = ModelBase::toJson(audiencePasswd_);
    }

    return val;
}
bool OpenWebinarUpcomingInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conferenceId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("corpId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("corpId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorpId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeZoneId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeZoneId"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZoneId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scheduserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scheduserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduserId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("scheduserName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scheduserName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrPkgName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrPkgName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrPkgName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chairJoinUri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chairJoinUri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChairJoinUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chairPasswd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chairPasswd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChairPasswd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("guestJoinUri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guestJoinUri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGuestJoinUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("guestPasswd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guestPasswd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGuestPasswd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audienceJoinUri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audienceJoinUri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudienceJoinUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audiencePasswd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audiencePasswd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudiencePasswd(refVal);
        }
    }
    return ok;
}


std::string OpenWebinarUpcomingInfo::getConferenceId() const
{
    return conferenceId_;
}

void OpenWebinarUpcomingInfo::setConferenceId(const std::string& value)
{
    conferenceId_ = value;
    conferenceIdIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::conferenceIdIsSet() const
{
    return conferenceIdIsSet_;
}

void OpenWebinarUpcomingInfo::unsetconferenceId()
{
    conferenceIdIsSet_ = false;
}

std::string OpenWebinarUpcomingInfo::getCorpId() const
{
    return corpId_;
}

void OpenWebinarUpcomingInfo::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void OpenWebinarUpcomingInfo::unsetcorpId()
{
    corpIdIsSet_ = false;
}

std::string OpenWebinarUpcomingInfo::getSubject() const
{
    return subject_;
}

void OpenWebinarUpcomingInfo::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::subjectIsSet() const
{
    return subjectIsSet_;
}

void OpenWebinarUpcomingInfo::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string OpenWebinarUpcomingInfo::getDescription() const
{
    return description_;
}

void OpenWebinarUpcomingInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void OpenWebinarUpcomingInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string OpenWebinarUpcomingInfo::getStartTime() const
{
    return startTime_;
}

void OpenWebinarUpcomingInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void OpenWebinarUpcomingInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t OpenWebinarUpcomingInfo::getDuration() const
{
    return duration_;
}

void OpenWebinarUpcomingInfo::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::durationIsSet() const
{
    return durationIsSet_;
}

void OpenWebinarUpcomingInfo::unsetduration()
{
    durationIsSet_ = false;
}

int32_t OpenWebinarUpcomingInfo::getTimeZoneId() const
{
    return timeZoneId_;
}

void OpenWebinarUpcomingInfo::setTimeZoneId(int32_t value)
{
    timeZoneId_ = value;
    timeZoneIdIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::timeZoneIdIsSet() const
{
    return timeZoneIdIsSet_;
}

void OpenWebinarUpcomingInfo::unsettimeZoneId()
{
    timeZoneIdIsSet_ = false;
}

std::string OpenWebinarUpcomingInfo::getScheduserId() const
{
    return scheduserId_;
}

void OpenWebinarUpcomingInfo::setScheduserId(const std::string& value)
{
    scheduserId_ = value;
    scheduserIdIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::scheduserIdIsSet() const
{
    return scheduserIdIsSet_;
}

void OpenWebinarUpcomingInfo::unsetscheduserId()
{
    scheduserIdIsSet_ = false;
}

std::string OpenWebinarUpcomingInfo::getDeptName() const
{
    return deptName_;
}

void OpenWebinarUpcomingInfo::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void OpenWebinarUpcomingInfo::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string OpenWebinarUpcomingInfo::getScheduserName() const
{
    return scheduserName_;
}

void OpenWebinarUpcomingInfo::setScheduserName(const std::string& value)
{
    scheduserName_ = value;
    scheduserNameIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::scheduserNameIsSet() const
{
    return scheduserNameIsSet_;
}

void OpenWebinarUpcomingInfo::unsetscheduserName()
{
    scheduserNameIsSet_ = false;
}

std::string OpenWebinarUpcomingInfo::getVmrPkgName() const
{
    return vmrPkgName_;
}

void OpenWebinarUpcomingInfo::setVmrPkgName(const std::string& value)
{
    vmrPkgName_ = value;
    vmrPkgNameIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::vmrPkgNameIsSet() const
{
    return vmrPkgNameIsSet_;
}

void OpenWebinarUpcomingInfo::unsetvmrPkgName()
{
    vmrPkgNameIsSet_ = false;
}

std::string OpenWebinarUpcomingInfo::getChairJoinUri() const
{
    return chairJoinUri_;
}

void OpenWebinarUpcomingInfo::setChairJoinUri(const std::string& value)
{
    chairJoinUri_ = value;
    chairJoinUriIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::chairJoinUriIsSet() const
{
    return chairJoinUriIsSet_;
}

void OpenWebinarUpcomingInfo::unsetchairJoinUri()
{
    chairJoinUriIsSet_ = false;
}

std::string OpenWebinarUpcomingInfo::getChairPasswd() const
{
    return chairPasswd_;
}

void OpenWebinarUpcomingInfo::setChairPasswd(const std::string& value)
{
    chairPasswd_ = value;
    chairPasswdIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::chairPasswdIsSet() const
{
    return chairPasswdIsSet_;
}

void OpenWebinarUpcomingInfo::unsetchairPasswd()
{
    chairPasswdIsSet_ = false;
}

std::string OpenWebinarUpcomingInfo::getGuestJoinUri() const
{
    return guestJoinUri_;
}

void OpenWebinarUpcomingInfo::setGuestJoinUri(const std::string& value)
{
    guestJoinUri_ = value;
    guestJoinUriIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::guestJoinUriIsSet() const
{
    return guestJoinUriIsSet_;
}

void OpenWebinarUpcomingInfo::unsetguestJoinUri()
{
    guestJoinUriIsSet_ = false;
}

std::string OpenWebinarUpcomingInfo::getGuestPasswd() const
{
    return guestPasswd_;
}

void OpenWebinarUpcomingInfo::setGuestPasswd(const std::string& value)
{
    guestPasswd_ = value;
    guestPasswdIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::guestPasswdIsSet() const
{
    return guestPasswdIsSet_;
}

void OpenWebinarUpcomingInfo::unsetguestPasswd()
{
    guestPasswdIsSet_ = false;
}

std::string OpenWebinarUpcomingInfo::getAudienceJoinUri() const
{
    return audienceJoinUri_;
}

void OpenWebinarUpcomingInfo::setAudienceJoinUri(const std::string& value)
{
    audienceJoinUri_ = value;
    audienceJoinUriIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::audienceJoinUriIsSet() const
{
    return audienceJoinUriIsSet_;
}

void OpenWebinarUpcomingInfo::unsetaudienceJoinUri()
{
    audienceJoinUriIsSet_ = false;
}

std::string OpenWebinarUpcomingInfo::getAudiencePasswd() const
{
    return audiencePasswd_;
}

void OpenWebinarUpcomingInfo::setAudiencePasswd(const std::string& value)
{
    audiencePasswd_ = value;
    audiencePasswdIsSet_ = true;
}

bool OpenWebinarUpcomingInfo::audiencePasswdIsSet() const
{
    return audiencePasswdIsSet_;
}

void OpenWebinarUpcomingInfo::unsetaudiencePasswd()
{
    audiencePasswdIsSet_ = false;
}

}
}
}
}
}


