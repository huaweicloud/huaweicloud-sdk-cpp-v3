

#include "huaweicloud/meeting/v1/model/OpenWebinarOngoingInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OpenWebinarOngoingInfo::OpenWebinarOngoingInfo()
{
    onlineAttendeeCount_ = 0;
    onlineAttendeeCountIsSet_ = false;
    confUUID_ = "";
    confUUIDIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
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
    timeZoneId_ = 0;
    timeZoneIdIsSet_ = false;
    scheduserId_ = "";
    scheduserIdIsSet_ = false;
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

OpenWebinarOngoingInfo::~OpenWebinarOngoingInfo() = default;

void OpenWebinarOngoingInfo::validate()
{
}

web::json::value OpenWebinarOngoingInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(onlineAttendeeCountIsSet_) {
        val[utility::conversions::to_string_t("onlineAttendeeCount")] = ModelBase::toJson(onlineAttendeeCount_);
    }
    if(confUUIDIsSet_) {
        val[utility::conversions::to_string_t("confUUID")] = ModelBase::toJson(confUUID_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
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
    if(timeZoneIdIsSet_) {
        val[utility::conversions::to_string_t("timeZoneId")] = ModelBase::toJson(timeZoneId_);
    }
    if(scheduserIdIsSet_) {
        val[utility::conversions::to_string_t("scheduserId")] = ModelBase::toJson(scheduserId_);
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
bool OpenWebinarOngoingInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("onlineAttendeeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("onlineAttendeeCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlineAttendeeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUUID(refVal);
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


int32_t OpenWebinarOngoingInfo::getOnlineAttendeeCount() const
{
    return onlineAttendeeCount_;
}

void OpenWebinarOngoingInfo::setOnlineAttendeeCount(int32_t value)
{
    onlineAttendeeCount_ = value;
    onlineAttendeeCountIsSet_ = true;
}

bool OpenWebinarOngoingInfo::onlineAttendeeCountIsSet() const
{
    return onlineAttendeeCountIsSet_;
}

void OpenWebinarOngoingInfo::unsetonlineAttendeeCount()
{
    onlineAttendeeCountIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getConfUUID() const
{
    return confUUID_;
}

void OpenWebinarOngoingInfo::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool OpenWebinarOngoingInfo::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void OpenWebinarOngoingInfo::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getDeptName() const
{
    return deptName_;
}

void OpenWebinarOngoingInfo::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool OpenWebinarOngoingInfo::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void OpenWebinarOngoingInfo::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getConferenceId() const
{
    return conferenceId_;
}

void OpenWebinarOngoingInfo::setConferenceId(const std::string& value)
{
    conferenceId_ = value;
    conferenceIdIsSet_ = true;
}

bool OpenWebinarOngoingInfo::conferenceIdIsSet() const
{
    return conferenceIdIsSet_;
}

void OpenWebinarOngoingInfo::unsetconferenceId()
{
    conferenceIdIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getCorpId() const
{
    return corpId_;
}

void OpenWebinarOngoingInfo::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool OpenWebinarOngoingInfo::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void OpenWebinarOngoingInfo::unsetcorpId()
{
    corpIdIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getSubject() const
{
    return subject_;
}

void OpenWebinarOngoingInfo::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool OpenWebinarOngoingInfo::subjectIsSet() const
{
    return subjectIsSet_;
}

void OpenWebinarOngoingInfo::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getDescription() const
{
    return description_;
}

void OpenWebinarOngoingInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool OpenWebinarOngoingInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void OpenWebinarOngoingInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getStartTime() const
{
    return startTime_;
}

void OpenWebinarOngoingInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool OpenWebinarOngoingInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void OpenWebinarOngoingInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t OpenWebinarOngoingInfo::getTimeZoneId() const
{
    return timeZoneId_;
}

void OpenWebinarOngoingInfo::setTimeZoneId(int32_t value)
{
    timeZoneId_ = value;
    timeZoneIdIsSet_ = true;
}

bool OpenWebinarOngoingInfo::timeZoneIdIsSet() const
{
    return timeZoneIdIsSet_;
}

void OpenWebinarOngoingInfo::unsettimeZoneId()
{
    timeZoneIdIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getScheduserId() const
{
    return scheduserId_;
}

void OpenWebinarOngoingInfo::setScheduserId(const std::string& value)
{
    scheduserId_ = value;
    scheduserIdIsSet_ = true;
}

bool OpenWebinarOngoingInfo::scheduserIdIsSet() const
{
    return scheduserIdIsSet_;
}

void OpenWebinarOngoingInfo::unsetscheduserId()
{
    scheduserIdIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getScheduserName() const
{
    return scheduserName_;
}

void OpenWebinarOngoingInfo::setScheduserName(const std::string& value)
{
    scheduserName_ = value;
    scheduserNameIsSet_ = true;
}

bool OpenWebinarOngoingInfo::scheduserNameIsSet() const
{
    return scheduserNameIsSet_;
}

void OpenWebinarOngoingInfo::unsetscheduserName()
{
    scheduserNameIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getVmrPkgName() const
{
    return vmrPkgName_;
}

void OpenWebinarOngoingInfo::setVmrPkgName(const std::string& value)
{
    vmrPkgName_ = value;
    vmrPkgNameIsSet_ = true;
}

bool OpenWebinarOngoingInfo::vmrPkgNameIsSet() const
{
    return vmrPkgNameIsSet_;
}

void OpenWebinarOngoingInfo::unsetvmrPkgName()
{
    vmrPkgNameIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getChairJoinUri() const
{
    return chairJoinUri_;
}

void OpenWebinarOngoingInfo::setChairJoinUri(const std::string& value)
{
    chairJoinUri_ = value;
    chairJoinUriIsSet_ = true;
}

bool OpenWebinarOngoingInfo::chairJoinUriIsSet() const
{
    return chairJoinUriIsSet_;
}

void OpenWebinarOngoingInfo::unsetchairJoinUri()
{
    chairJoinUriIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getChairPasswd() const
{
    return chairPasswd_;
}

void OpenWebinarOngoingInfo::setChairPasswd(const std::string& value)
{
    chairPasswd_ = value;
    chairPasswdIsSet_ = true;
}

bool OpenWebinarOngoingInfo::chairPasswdIsSet() const
{
    return chairPasswdIsSet_;
}

void OpenWebinarOngoingInfo::unsetchairPasswd()
{
    chairPasswdIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getGuestJoinUri() const
{
    return guestJoinUri_;
}

void OpenWebinarOngoingInfo::setGuestJoinUri(const std::string& value)
{
    guestJoinUri_ = value;
    guestJoinUriIsSet_ = true;
}

bool OpenWebinarOngoingInfo::guestJoinUriIsSet() const
{
    return guestJoinUriIsSet_;
}

void OpenWebinarOngoingInfo::unsetguestJoinUri()
{
    guestJoinUriIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getGuestPasswd() const
{
    return guestPasswd_;
}

void OpenWebinarOngoingInfo::setGuestPasswd(const std::string& value)
{
    guestPasswd_ = value;
    guestPasswdIsSet_ = true;
}

bool OpenWebinarOngoingInfo::guestPasswdIsSet() const
{
    return guestPasswdIsSet_;
}

void OpenWebinarOngoingInfo::unsetguestPasswd()
{
    guestPasswdIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getAudienceJoinUri() const
{
    return audienceJoinUri_;
}

void OpenWebinarOngoingInfo::setAudienceJoinUri(const std::string& value)
{
    audienceJoinUri_ = value;
    audienceJoinUriIsSet_ = true;
}

bool OpenWebinarOngoingInfo::audienceJoinUriIsSet() const
{
    return audienceJoinUriIsSet_;
}

void OpenWebinarOngoingInfo::unsetaudienceJoinUri()
{
    audienceJoinUriIsSet_ = false;
}

std::string OpenWebinarOngoingInfo::getAudiencePasswd() const
{
    return audiencePasswd_;
}

void OpenWebinarOngoingInfo::setAudiencePasswd(const std::string& value)
{
    audiencePasswd_ = value;
    audiencePasswdIsSet_ = true;
}

bool OpenWebinarOngoingInfo::audiencePasswdIsSet() const
{
    return audiencePasswdIsSet_;
}

void OpenWebinarOngoingInfo::unsetaudiencePasswd()
{
    audiencePasswdIsSet_ = false;
}

}
}
}
}
}


