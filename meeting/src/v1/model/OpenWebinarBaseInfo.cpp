

#include "huaweicloud/meeting/v1/model/OpenWebinarBaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OpenWebinarBaseInfo::OpenWebinarBaseInfo()
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
}

OpenWebinarBaseInfo::~OpenWebinarBaseInfo() = default;

void OpenWebinarBaseInfo::validate()
{
}

web::json::value OpenWebinarBaseInfo::toJson() const
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

    return val;
}
bool OpenWebinarBaseInfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string OpenWebinarBaseInfo::getConferenceId() const
{
    return conferenceId_;
}

void OpenWebinarBaseInfo::setConferenceId(const std::string& value)
{
    conferenceId_ = value;
    conferenceIdIsSet_ = true;
}

bool OpenWebinarBaseInfo::conferenceIdIsSet() const
{
    return conferenceIdIsSet_;
}

void OpenWebinarBaseInfo::unsetconferenceId()
{
    conferenceIdIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getCorpId() const
{
    return corpId_;
}

void OpenWebinarBaseInfo::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool OpenWebinarBaseInfo::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void OpenWebinarBaseInfo::unsetcorpId()
{
    corpIdIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getSubject() const
{
    return subject_;
}

void OpenWebinarBaseInfo::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool OpenWebinarBaseInfo::subjectIsSet() const
{
    return subjectIsSet_;
}

void OpenWebinarBaseInfo::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getDescription() const
{
    return description_;
}

void OpenWebinarBaseInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool OpenWebinarBaseInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void OpenWebinarBaseInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getStartTime() const
{
    return startTime_;
}

void OpenWebinarBaseInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool OpenWebinarBaseInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void OpenWebinarBaseInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t OpenWebinarBaseInfo::getDuration() const
{
    return duration_;
}

void OpenWebinarBaseInfo::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool OpenWebinarBaseInfo::durationIsSet() const
{
    return durationIsSet_;
}

void OpenWebinarBaseInfo::unsetduration()
{
    durationIsSet_ = false;
}

int32_t OpenWebinarBaseInfo::getTimeZoneId() const
{
    return timeZoneId_;
}

void OpenWebinarBaseInfo::setTimeZoneId(int32_t value)
{
    timeZoneId_ = value;
    timeZoneIdIsSet_ = true;
}

bool OpenWebinarBaseInfo::timeZoneIdIsSet() const
{
    return timeZoneIdIsSet_;
}

void OpenWebinarBaseInfo::unsettimeZoneId()
{
    timeZoneIdIsSet_ = false;
}

MeetingStatus OpenWebinarBaseInfo::getState() const
{
    return state_;
}

void OpenWebinarBaseInfo::setState(const MeetingStatus& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool OpenWebinarBaseInfo::stateIsSet() const
{
    return stateIsSet_;
}

void OpenWebinarBaseInfo::unsetstate()
{
    stateIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getScheduserId() const
{
    return scheduserId_;
}

void OpenWebinarBaseInfo::setScheduserId(const std::string& value)
{
    scheduserId_ = value;
    scheduserIdIsSet_ = true;
}

bool OpenWebinarBaseInfo::scheduserIdIsSet() const
{
    return scheduserIdIsSet_;
}

void OpenWebinarBaseInfo::unsetscheduserId()
{
    scheduserIdIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getDeptName() const
{
    return deptName_;
}

void OpenWebinarBaseInfo::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool OpenWebinarBaseInfo::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void OpenWebinarBaseInfo::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getScheduserName() const
{
    return scheduserName_;
}

void OpenWebinarBaseInfo::setScheduserName(const std::string& value)
{
    scheduserName_ = value;
    scheduserNameIsSet_ = true;
}

bool OpenWebinarBaseInfo::scheduserNameIsSet() const
{
    return scheduserNameIsSet_;
}

void OpenWebinarBaseInfo::unsetscheduserName()
{
    scheduserNameIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getVmrPkgName() const
{
    return vmrPkgName_;
}

void OpenWebinarBaseInfo::setVmrPkgName(const std::string& value)
{
    vmrPkgName_ = value;
    vmrPkgNameIsSet_ = true;
}

bool OpenWebinarBaseInfo::vmrPkgNameIsSet() const
{
    return vmrPkgNameIsSet_;
}

void OpenWebinarBaseInfo::unsetvmrPkgName()
{
    vmrPkgNameIsSet_ = false;
}

bool OpenWebinarBaseInfo::isCallRestriction() const
{
    return callRestriction_;
}

void OpenWebinarBaseInfo::setCallRestriction(bool value)
{
    callRestriction_ = value;
    callRestrictionIsSet_ = true;
}

bool OpenWebinarBaseInfo::callRestrictionIsSet() const
{
    return callRestrictionIsSet_;
}

void OpenWebinarBaseInfo::unsetcallRestriction()
{
    callRestrictionIsSet_ = false;
}

int32_t OpenWebinarBaseInfo::getScope() const
{
    return scope_;
}

void OpenWebinarBaseInfo::setScope(int32_t value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool OpenWebinarBaseInfo::scopeIsSet() const
{
    return scopeIsSet_;
}

void OpenWebinarBaseInfo::unsetscope()
{
    scopeIsSet_ = false;
}

int32_t OpenWebinarBaseInfo::getAudienceScope() const
{
    return audienceScope_;
}

void OpenWebinarBaseInfo::setAudienceScope(int32_t value)
{
    audienceScope_ = value;
    audienceScopeIsSet_ = true;
}

bool OpenWebinarBaseInfo::audienceScopeIsSet() const
{
    return audienceScopeIsSet_;
}

void OpenWebinarBaseInfo::unsetaudienceScope()
{
    audienceScopeIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getChairJoinUri() const
{
    return chairJoinUri_;
}

void OpenWebinarBaseInfo::setChairJoinUri(const std::string& value)
{
    chairJoinUri_ = value;
    chairJoinUriIsSet_ = true;
}

bool OpenWebinarBaseInfo::chairJoinUriIsSet() const
{
    return chairJoinUriIsSet_;
}

void OpenWebinarBaseInfo::unsetchairJoinUri()
{
    chairJoinUriIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getChairPasswd() const
{
    return chairPasswd_;
}

void OpenWebinarBaseInfo::setChairPasswd(const std::string& value)
{
    chairPasswd_ = value;
    chairPasswdIsSet_ = true;
}

bool OpenWebinarBaseInfo::chairPasswdIsSet() const
{
    return chairPasswdIsSet_;
}

void OpenWebinarBaseInfo::unsetchairPasswd()
{
    chairPasswdIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getGuestJoinUri() const
{
    return guestJoinUri_;
}

void OpenWebinarBaseInfo::setGuestJoinUri(const std::string& value)
{
    guestJoinUri_ = value;
    guestJoinUriIsSet_ = true;
}

bool OpenWebinarBaseInfo::guestJoinUriIsSet() const
{
    return guestJoinUriIsSet_;
}

void OpenWebinarBaseInfo::unsetguestJoinUri()
{
    guestJoinUriIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getGuestPasswd() const
{
    return guestPasswd_;
}

void OpenWebinarBaseInfo::setGuestPasswd(const std::string& value)
{
    guestPasswd_ = value;
    guestPasswdIsSet_ = true;
}

bool OpenWebinarBaseInfo::guestPasswdIsSet() const
{
    return guestPasswdIsSet_;
}

void OpenWebinarBaseInfo::unsetguestPasswd()
{
    guestPasswdIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getAudienceJoinUri() const
{
    return audienceJoinUri_;
}

void OpenWebinarBaseInfo::setAudienceJoinUri(const std::string& value)
{
    audienceJoinUri_ = value;
    audienceJoinUriIsSet_ = true;
}

bool OpenWebinarBaseInfo::audienceJoinUriIsSet() const
{
    return audienceJoinUriIsSet_;
}

void OpenWebinarBaseInfo::unsetaudienceJoinUri()
{
    audienceJoinUriIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getAudiencePasswd() const
{
    return audiencePasswd_;
}

void OpenWebinarBaseInfo::setAudiencePasswd(const std::string& value)
{
    audiencePasswd_ = value;
    audiencePasswdIsSet_ = true;
}

bool OpenWebinarBaseInfo::audiencePasswdIsSet() const
{
    return audiencePasswdIsSet_;
}

void OpenWebinarBaseInfo::unsetaudiencePasswd()
{
    audiencePasswdIsSet_ = false;
}

YesNoEnum OpenWebinarBaseInfo::getEnableRecording() const
{
    return enableRecording_;
}

void OpenWebinarBaseInfo::setEnableRecording(const YesNoEnum& value)
{
    enableRecording_ = value;
    enableRecordingIsSet_ = true;
}

bool OpenWebinarBaseInfo::enableRecordingIsSet() const
{
    return enableRecordingIsSet_;
}

void OpenWebinarBaseInfo::unsetenableRecording()
{
    enableRecordingIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getLiveAddress() const
{
    return liveAddress_;
}

void OpenWebinarBaseInfo::setLiveAddress(const std::string& value)
{
    liveAddress_ = value;
    liveAddressIsSet_ = true;
}

bool OpenWebinarBaseInfo::liveAddressIsSet() const
{
    return liveAddressIsSet_;
}

void OpenWebinarBaseInfo::unsetliveAddress()
{
    liveAddressIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getAuxAddress() const
{
    return auxAddress_;
}

void OpenWebinarBaseInfo::setAuxAddress(const std::string& value)
{
    auxAddress_ = value;
    auxAddressIsSet_ = true;
}

bool OpenWebinarBaseInfo::auxAddressIsSet() const
{
    return auxAddressIsSet_;
}

void OpenWebinarBaseInfo::unsetauxAddress()
{
    auxAddressIsSet_ = false;
}

std::string OpenWebinarBaseInfo::getLiveUrl() const
{
    return liveUrl_;
}

void OpenWebinarBaseInfo::setLiveUrl(const std::string& value)
{
    liveUrl_ = value;
    liveUrlIsSet_ = true;
}

bool OpenWebinarBaseInfo::liveUrlIsSet() const
{
    return liveUrlIsSet_;
}

void OpenWebinarBaseInfo::unsetliveUrl()
{
    liveUrlIsSet_ = false;
}

}
}
}
}
}


