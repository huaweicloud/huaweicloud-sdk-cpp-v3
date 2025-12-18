

#include "huaweicloud/meeting/v1/model/ShowWebinarResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowWebinarResponse::ShowWebinarResponse()
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
    stateIsSet_ = false;
    scheduserId_ = "";
    scheduserIdIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    scheduserName_ = "";
    scheduserNameIsSet_ = false;
    vmrPkgName_ = "";
    vmrPkgNameIsSet_ = false;
    callRestriction_ = false;
    callRestrictionIsSet_ = false;
    scope_ = 0;
    scopeIsSet_ = false;
    audienceScope_ = 0;
    audienceScopeIsSet_ = false;
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
    enableRecordingIsSet_ = false;
    liveAddress_ = "";
    liveAddressIsSet_ = false;
    auxAddress_ = "";
    auxAddressIsSet_ = false;
    liveUrl_ = "";
    liveUrlIsSet_ = false;
    notifySettingIsSet_ = false;
    attendeesIsSet_ = false;
}

ShowWebinarResponse::~ShowWebinarResponse() = default;

void ShowWebinarResponse::validate()
{
}

web::json::value ShowWebinarResponse::toJson() const
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
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
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
    if(callRestrictionIsSet_) {
        val[utility::conversions::to_string_t("callRestriction")] = ModelBase::toJson(callRestriction_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(audienceScopeIsSet_) {
        val[utility::conversions::to_string_t("audienceScope")] = ModelBase::toJson(audienceScope_);
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
    if(enableRecordingIsSet_) {
        val[utility::conversions::to_string_t("enableRecording")] = ModelBase::toJson(enableRecording_);
    }
    if(liveAddressIsSet_) {
        val[utility::conversions::to_string_t("liveAddress")] = ModelBase::toJson(liveAddress_);
    }
    if(auxAddressIsSet_) {
        val[utility::conversions::to_string_t("auxAddress")] = ModelBase::toJson(auxAddress_);
    }
    if(liveUrlIsSet_) {
        val[utility::conversions::to_string_t("liveUrl")] = ModelBase::toJson(liveUrl_);
    }
    if(notifySettingIsSet_) {
        val[utility::conversions::to_string_t("notifySetting")] = ModelBase::toJson(notifySetting_);
    }
    if(attendeesIsSet_) {
        val[utility::conversions::to_string_t("attendees")] = ModelBase::toJson(attendees_);
    }

    return val;
}
bool ShowWebinarResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            MeetingStatus refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("callRestriction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callRestriction"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallRestriction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audienceScope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audienceScope"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudienceScope(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enableRecording"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableRecording"));
        if(!fieldValue.is_null())
        {
            YesNoEnum refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableRecording(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("liveAddress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("liveAddress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auxAddress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auxAddress"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuxAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("liveUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("liveUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLiveUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notifySetting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notifySetting"));
        if(!fieldValue.is_null())
        {
            OpenNotifySetting refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotifySetting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attendees"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attendees"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttendees(refVal);
        }
    }
    return ok;
}


std::string ShowWebinarResponse::getConferenceId() const
{
    return conferenceId_;
}

void ShowWebinarResponse::setConferenceId(const std::string& value)
{
    conferenceId_ = value;
    conferenceIdIsSet_ = true;
}

bool ShowWebinarResponse::conferenceIdIsSet() const
{
    return conferenceIdIsSet_;
}

void ShowWebinarResponse::unsetconferenceId()
{
    conferenceIdIsSet_ = false;
}

std::string ShowWebinarResponse::getCorpId() const
{
    return corpId_;
}

void ShowWebinarResponse::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool ShowWebinarResponse::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void ShowWebinarResponse::unsetcorpId()
{
    corpIdIsSet_ = false;
}

std::string ShowWebinarResponse::getSubject() const
{
    return subject_;
}

void ShowWebinarResponse::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool ShowWebinarResponse::subjectIsSet() const
{
    return subjectIsSet_;
}

void ShowWebinarResponse::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string ShowWebinarResponse::getDescription() const
{
    return description_;
}

void ShowWebinarResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowWebinarResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowWebinarResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowWebinarResponse::getStartTime() const
{
    return startTime_;
}

void ShowWebinarResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowWebinarResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowWebinarResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t ShowWebinarResponse::getDuration() const
{
    return duration_;
}

void ShowWebinarResponse::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool ShowWebinarResponse::durationIsSet() const
{
    return durationIsSet_;
}

void ShowWebinarResponse::unsetduration()
{
    durationIsSet_ = false;
}

int32_t ShowWebinarResponse::getTimeZoneId() const
{
    return timeZoneId_;
}

void ShowWebinarResponse::setTimeZoneId(int32_t value)
{
    timeZoneId_ = value;
    timeZoneIdIsSet_ = true;
}

bool ShowWebinarResponse::timeZoneIdIsSet() const
{
    return timeZoneIdIsSet_;
}

void ShowWebinarResponse::unsettimeZoneId()
{
    timeZoneIdIsSet_ = false;
}

MeetingStatus ShowWebinarResponse::getState() const
{
    return state_;
}

void ShowWebinarResponse::setState(const MeetingStatus& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowWebinarResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowWebinarResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ShowWebinarResponse::getScheduserId() const
{
    return scheduserId_;
}

void ShowWebinarResponse::setScheduserId(const std::string& value)
{
    scheduserId_ = value;
    scheduserIdIsSet_ = true;
}

bool ShowWebinarResponse::scheduserIdIsSet() const
{
    return scheduserIdIsSet_;
}

void ShowWebinarResponse::unsetscheduserId()
{
    scheduserIdIsSet_ = false;
}

std::string ShowWebinarResponse::getDeptName() const
{
    return deptName_;
}

void ShowWebinarResponse::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool ShowWebinarResponse::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void ShowWebinarResponse::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string ShowWebinarResponse::getScheduserName() const
{
    return scheduserName_;
}

void ShowWebinarResponse::setScheduserName(const std::string& value)
{
    scheduserName_ = value;
    scheduserNameIsSet_ = true;
}

bool ShowWebinarResponse::scheduserNameIsSet() const
{
    return scheduserNameIsSet_;
}

void ShowWebinarResponse::unsetscheduserName()
{
    scheduserNameIsSet_ = false;
}

std::string ShowWebinarResponse::getVmrPkgName() const
{
    return vmrPkgName_;
}

void ShowWebinarResponse::setVmrPkgName(const std::string& value)
{
    vmrPkgName_ = value;
    vmrPkgNameIsSet_ = true;
}

bool ShowWebinarResponse::vmrPkgNameIsSet() const
{
    return vmrPkgNameIsSet_;
}

void ShowWebinarResponse::unsetvmrPkgName()
{
    vmrPkgNameIsSet_ = false;
}

bool ShowWebinarResponse::isCallRestriction() const
{
    return callRestriction_;
}

void ShowWebinarResponse::setCallRestriction(bool value)
{
    callRestriction_ = value;
    callRestrictionIsSet_ = true;
}

bool ShowWebinarResponse::callRestrictionIsSet() const
{
    return callRestrictionIsSet_;
}

void ShowWebinarResponse::unsetcallRestriction()
{
    callRestrictionIsSet_ = false;
}

int32_t ShowWebinarResponse::getScope() const
{
    return scope_;
}

void ShowWebinarResponse::setScope(int32_t value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool ShowWebinarResponse::scopeIsSet() const
{
    return scopeIsSet_;
}

void ShowWebinarResponse::unsetscope()
{
    scopeIsSet_ = false;
}

int32_t ShowWebinarResponse::getAudienceScope() const
{
    return audienceScope_;
}

void ShowWebinarResponse::setAudienceScope(int32_t value)
{
    audienceScope_ = value;
    audienceScopeIsSet_ = true;
}

bool ShowWebinarResponse::audienceScopeIsSet() const
{
    return audienceScopeIsSet_;
}

void ShowWebinarResponse::unsetaudienceScope()
{
    audienceScopeIsSet_ = false;
}

std::string ShowWebinarResponse::getChairJoinUri() const
{
    return chairJoinUri_;
}

void ShowWebinarResponse::setChairJoinUri(const std::string& value)
{
    chairJoinUri_ = value;
    chairJoinUriIsSet_ = true;
}

bool ShowWebinarResponse::chairJoinUriIsSet() const
{
    return chairJoinUriIsSet_;
}

void ShowWebinarResponse::unsetchairJoinUri()
{
    chairJoinUriIsSet_ = false;
}

std::string ShowWebinarResponse::getChairPasswd() const
{
    return chairPasswd_;
}

void ShowWebinarResponse::setChairPasswd(const std::string& value)
{
    chairPasswd_ = value;
    chairPasswdIsSet_ = true;
}

bool ShowWebinarResponse::chairPasswdIsSet() const
{
    return chairPasswdIsSet_;
}

void ShowWebinarResponse::unsetchairPasswd()
{
    chairPasswdIsSet_ = false;
}

std::string ShowWebinarResponse::getGuestJoinUri() const
{
    return guestJoinUri_;
}

void ShowWebinarResponse::setGuestJoinUri(const std::string& value)
{
    guestJoinUri_ = value;
    guestJoinUriIsSet_ = true;
}

bool ShowWebinarResponse::guestJoinUriIsSet() const
{
    return guestJoinUriIsSet_;
}

void ShowWebinarResponse::unsetguestJoinUri()
{
    guestJoinUriIsSet_ = false;
}

std::string ShowWebinarResponse::getGuestPasswd() const
{
    return guestPasswd_;
}

void ShowWebinarResponse::setGuestPasswd(const std::string& value)
{
    guestPasswd_ = value;
    guestPasswdIsSet_ = true;
}

bool ShowWebinarResponse::guestPasswdIsSet() const
{
    return guestPasswdIsSet_;
}

void ShowWebinarResponse::unsetguestPasswd()
{
    guestPasswdIsSet_ = false;
}

std::string ShowWebinarResponse::getAudienceJoinUri() const
{
    return audienceJoinUri_;
}

void ShowWebinarResponse::setAudienceJoinUri(const std::string& value)
{
    audienceJoinUri_ = value;
    audienceJoinUriIsSet_ = true;
}

bool ShowWebinarResponse::audienceJoinUriIsSet() const
{
    return audienceJoinUriIsSet_;
}

void ShowWebinarResponse::unsetaudienceJoinUri()
{
    audienceJoinUriIsSet_ = false;
}

std::string ShowWebinarResponse::getAudiencePasswd() const
{
    return audiencePasswd_;
}

void ShowWebinarResponse::setAudiencePasswd(const std::string& value)
{
    audiencePasswd_ = value;
    audiencePasswdIsSet_ = true;
}

bool ShowWebinarResponse::audiencePasswdIsSet() const
{
    return audiencePasswdIsSet_;
}

void ShowWebinarResponse::unsetaudiencePasswd()
{
    audiencePasswdIsSet_ = false;
}

YesNoEnum ShowWebinarResponse::getEnableRecording() const
{
    return enableRecording_;
}

void ShowWebinarResponse::setEnableRecording(const YesNoEnum& value)
{
    enableRecording_ = value;
    enableRecordingIsSet_ = true;
}

bool ShowWebinarResponse::enableRecordingIsSet() const
{
    return enableRecordingIsSet_;
}

void ShowWebinarResponse::unsetenableRecording()
{
    enableRecordingIsSet_ = false;
}

std::string ShowWebinarResponse::getLiveAddress() const
{
    return liveAddress_;
}

void ShowWebinarResponse::setLiveAddress(const std::string& value)
{
    liveAddress_ = value;
    liveAddressIsSet_ = true;
}

bool ShowWebinarResponse::liveAddressIsSet() const
{
    return liveAddressIsSet_;
}

void ShowWebinarResponse::unsetliveAddress()
{
    liveAddressIsSet_ = false;
}

std::string ShowWebinarResponse::getAuxAddress() const
{
    return auxAddress_;
}

void ShowWebinarResponse::setAuxAddress(const std::string& value)
{
    auxAddress_ = value;
    auxAddressIsSet_ = true;
}

bool ShowWebinarResponse::auxAddressIsSet() const
{
    return auxAddressIsSet_;
}

void ShowWebinarResponse::unsetauxAddress()
{
    auxAddressIsSet_ = false;
}

std::string ShowWebinarResponse::getLiveUrl() const
{
    return liveUrl_;
}

void ShowWebinarResponse::setLiveUrl(const std::string& value)
{
    liveUrl_ = value;
    liveUrlIsSet_ = true;
}

bool ShowWebinarResponse::liveUrlIsSet() const
{
    return liveUrlIsSet_;
}

void ShowWebinarResponse::unsetliveUrl()
{
    liveUrlIsSet_ = false;
}

OpenNotifySetting ShowWebinarResponse::getNotifySetting() const
{
    return notifySetting_;
}

void ShowWebinarResponse::setNotifySetting(const OpenNotifySetting& value)
{
    notifySetting_ = value;
    notifySettingIsSet_ = true;
}

bool ShowWebinarResponse::notifySettingIsSet() const
{
    return notifySettingIsSet_;
}

void ShowWebinarResponse::unsetnotifySetting()
{
    notifySettingIsSet_ = false;
}

std::vector<std::string>& ShowWebinarResponse::getAttendees()
{
    return attendees_;
}

void ShowWebinarResponse::setAttendees(const std::vector<std::string>& value)
{
    attendees_ = value;
    attendeesIsSet_ = true;
}

bool ShowWebinarResponse::attendeesIsSet() const
{
    return attendeesIsSet_;
}

void ShowWebinarResponse::unsetattendees()
{
    attendeesIsSet_ = false;
}

}
}
}
}
}


