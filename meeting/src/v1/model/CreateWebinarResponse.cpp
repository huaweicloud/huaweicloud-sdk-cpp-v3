

#include "huaweicloud/meeting/v1/model/CreateWebinarResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateWebinarResponse::CreateWebinarResponse()
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
    attendeesIsSet_ = false;
}

CreateWebinarResponse::~CreateWebinarResponse() = default;

void CreateWebinarResponse::validate()
{
}

web::json::value CreateWebinarResponse::toJson() const
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
    if(attendeesIsSet_) {
        val[utility::conversions::to_string_t("attendees")] = ModelBase::toJson(attendees_);
    }

    return val;
}
bool CreateWebinarResponse::fromJson(const web::json::value& val)
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


std::string CreateWebinarResponse::getConferenceId() const
{
    return conferenceId_;
}

void CreateWebinarResponse::setConferenceId(const std::string& value)
{
    conferenceId_ = value;
    conferenceIdIsSet_ = true;
}

bool CreateWebinarResponse::conferenceIdIsSet() const
{
    return conferenceIdIsSet_;
}

void CreateWebinarResponse::unsetconferenceId()
{
    conferenceIdIsSet_ = false;
}

std::string CreateWebinarResponse::getCorpId() const
{
    return corpId_;
}

void CreateWebinarResponse::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool CreateWebinarResponse::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void CreateWebinarResponse::unsetcorpId()
{
    corpIdIsSet_ = false;
}

std::string CreateWebinarResponse::getSubject() const
{
    return subject_;
}

void CreateWebinarResponse::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool CreateWebinarResponse::subjectIsSet() const
{
    return subjectIsSet_;
}

void CreateWebinarResponse::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string CreateWebinarResponse::getDescription() const
{
    return description_;
}

void CreateWebinarResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateWebinarResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateWebinarResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateWebinarResponse::getStartTime() const
{
    return startTime_;
}

void CreateWebinarResponse::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool CreateWebinarResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void CreateWebinarResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t CreateWebinarResponse::getDuration() const
{
    return duration_;
}

void CreateWebinarResponse::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool CreateWebinarResponse::durationIsSet() const
{
    return durationIsSet_;
}

void CreateWebinarResponse::unsetduration()
{
    durationIsSet_ = false;
}

int32_t CreateWebinarResponse::getTimeZoneId() const
{
    return timeZoneId_;
}

void CreateWebinarResponse::setTimeZoneId(int32_t value)
{
    timeZoneId_ = value;
    timeZoneIdIsSet_ = true;
}

bool CreateWebinarResponse::timeZoneIdIsSet() const
{
    return timeZoneIdIsSet_;
}

void CreateWebinarResponse::unsettimeZoneId()
{
    timeZoneIdIsSet_ = false;
}

MeetingStatus CreateWebinarResponse::getState() const
{
    return state_;
}

void CreateWebinarResponse::setState(const MeetingStatus& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool CreateWebinarResponse::stateIsSet() const
{
    return stateIsSet_;
}

void CreateWebinarResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string CreateWebinarResponse::getScheduserId() const
{
    return scheduserId_;
}

void CreateWebinarResponse::setScheduserId(const std::string& value)
{
    scheduserId_ = value;
    scheduserIdIsSet_ = true;
}

bool CreateWebinarResponse::scheduserIdIsSet() const
{
    return scheduserIdIsSet_;
}

void CreateWebinarResponse::unsetscheduserId()
{
    scheduserIdIsSet_ = false;
}

std::string CreateWebinarResponse::getDeptName() const
{
    return deptName_;
}

void CreateWebinarResponse::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool CreateWebinarResponse::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void CreateWebinarResponse::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string CreateWebinarResponse::getScheduserName() const
{
    return scheduserName_;
}

void CreateWebinarResponse::setScheduserName(const std::string& value)
{
    scheduserName_ = value;
    scheduserNameIsSet_ = true;
}

bool CreateWebinarResponse::scheduserNameIsSet() const
{
    return scheduserNameIsSet_;
}

void CreateWebinarResponse::unsetscheduserName()
{
    scheduserNameIsSet_ = false;
}

std::string CreateWebinarResponse::getVmrPkgName() const
{
    return vmrPkgName_;
}

void CreateWebinarResponse::setVmrPkgName(const std::string& value)
{
    vmrPkgName_ = value;
    vmrPkgNameIsSet_ = true;
}

bool CreateWebinarResponse::vmrPkgNameIsSet() const
{
    return vmrPkgNameIsSet_;
}

void CreateWebinarResponse::unsetvmrPkgName()
{
    vmrPkgNameIsSet_ = false;
}

bool CreateWebinarResponse::isCallRestriction() const
{
    return callRestriction_;
}

void CreateWebinarResponse::setCallRestriction(bool value)
{
    callRestriction_ = value;
    callRestrictionIsSet_ = true;
}

bool CreateWebinarResponse::callRestrictionIsSet() const
{
    return callRestrictionIsSet_;
}

void CreateWebinarResponse::unsetcallRestriction()
{
    callRestrictionIsSet_ = false;
}

int32_t CreateWebinarResponse::getScope() const
{
    return scope_;
}

void CreateWebinarResponse::setScope(int32_t value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool CreateWebinarResponse::scopeIsSet() const
{
    return scopeIsSet_;
}

void CreateWebinarResponse::unsetscope()
{
    scopeIsSet_ = false;
}

int32_t CreateWebinarResponse::getAudienceScope() const
{
    return audienceScope_;
}

void CreateWebinarResponse::setAudienceScope(int32_t value)
{
    audienceScope_ = value;
    audienceScopeIsSet_ = true;
}

bool CreateWebinarResponse::audienceScopeIsSet() const
{
    return audienceScopeIsSet_;
}

void CreateWebinarResponse::unsetaudienceScope()
{
    audienceScopeIsSet_ = false;
}

std::string CreateWebinarResponse::getChairJoinUri() const
{
    return chairJoinUri_;
}

void CreateWebinarResponse::setChairJoinUri(const std::string& value)
{
    chairJoinUri_ = value;
    chairJoinUriIsSet_ = true;
}

bool CreateWebinarResponse::chairJoinUriIsSet() const
{
    return chairJoinUriIsSet_;
}

void CreateWebinarResponse::unsetchairJoinUri()
{
    chairJoinUriIsSet_ = false;
}

std::string CreateWebinarResponse::getChairPasswd() const
{
    return chairPasswd_;
}

void CreateWebinarResponse::setChairPasswd(const std::string& value)
{
    chairPasswd_ = value;
    chairPasswdIsSet_ = true;
}

bool CreateWebinarResponse::chairPasswdIsSet() const
{
    return chairPasswdIsSet_;
}

void CreateWebinarResponse::unsetchairPasswd()
{
    chairPasswdIsSet_ = false;
}

std::string CreateWebinarResponse::getGuestJoinUri() const
{
    return guestJoinUri_;
}

void CreateWebinarResponse::setGuestJoinUri(const std::string& value)
{
    guestJoinUri_ = value;
    guestJoinUriIsSet_ = true;
}

bool CreateWebinarResponse::guestJoinUriIsSet() const
{
    return guestJoinUriIsSet_;
}

void CreateWebinarResponse::unsetguestJoinUri()
{
    guestJoinUriIsSet_ = false;
}

std::string CreateWebinarResponse::getGuestPasswd() const
{
    return guestPasswd_;
}

void CreateWebinarResponse::setGuestPasswd(const std::string& value)
{
    guestPasswd_ = value;
    guestPasswdIsSet_ = true;
}

bool CreateWebinarResponse::guestPasswdIsSet() const
{
    return guestPasswdIsSet_;
}

void CreateWebinarResponse::unsetguestPasswd()
{
    guestPasswdIsSet_ = false;
}

std::string CreateWebinarResponse::getAudienceJoinUri() const
{
    return audienceJoinUri_;
}

void CreateWebinarResponse::setAudienceJoinUri(const std::string& value)
{
    audienceJoinUri_ = value;
    audienceJoinUriIsSet_ = true;
}

bool CreateWebinarResponse::audienceJoinUriIsSet() const
{
    return audienceJoinUriIsSet_;
}

void CreateWebinarResponse::unsetaudienceJoinUri()
{
    audienceJoinUriIsSet_ = false;
}

std::string CreateWebinarResponse::getAudiencePasswd() const
{
    return audiencePasswd_;
}

void CreateWebinarResponse::setAudiencePasswd(const std::string& value)
{
    audiencePasswd_ = value;
    audiencePasswdIsSet_ = true;
}

bool CreateWebinarResponse::audiencePasswdIsSet() const
{
    return audiencePasswdIsSet_;
}

void CreateWebinarResponse::unsetaudiencePasswd()
{
    audiencePasswdIsSet_ = false;
}

YesNoEnum CreateWebinarResponse::getEnableRecording() const
{
    return enableRecording_;
}

void CreateWebinarResponse::setEnableRecording(const YesNoEnum& value)
{
    enableRecording_ = value;
    enableRecordingIsSet_ = true;
}

bool CreateWebinarResponse::enableRecordingIsSet() const
{
    return enableRecordingIsSet_;
}

void CreateWebinarResponse::unsetenableRecording()
{
    enableRecordingIsSet_ = false;
}

std::string CreateWebinarResponse::getLiveAddress() const
{
    return liveAddress_;
}

void CreateWebinarResponse::setLiveAddress(const std::string& value)
{
    liveAddress_ = value;
    liveAddressIsSet_ = true;
}

bool CreateWebinarResponse::liveAddressIsSet() const
{
    return liveAddressIsSet_;
}

void CreateWebinarResponse::unsetliveAddress()
{
    liveAddressIsSet_ = false;
}

std::string CreateWebinarResponse::getAuxAddress() const
{
    return auxAddress_;
}

void CreateWebinarResponse::setAuxAddress(const std::string& value)
{
    auxAddress_ = value;
    auxAddressIsSet_ = true;
}

bool CreateWebinarResponse::auxAddressIsSet() const
{
    return auxAddressIsSet_;
}

void CreateWebinarResponse::unsetauxAddress()
{
    auxAddressIsSet_ = false;
}

std::string CreateWebinarResponse::getLiveUrl() const
{
    return liveUrl_;
}

void CreateWebinarResponse::setLiveUrl(const std::string& value)
{
    liveUrl_ = value;
    liveUrlIsSet_ = true;
}

bool CreateWebinarResponse::liveUrlIsSet() const
{
    return liveUrlIsSet_;
}

void CreateWebinarResponse::unsetliveUrl()
{
    liveUrlIsSet_ = false;
}

std::vector<std::string>& CreateWebinarResponse::getAttendees()
{
    return attendees_;
}

void CreateWebinarResponse::setAttendees(const std::vector<std::string>& value)
{
    attendees_ = value;
    attendeesIsSet_ = true;
}

bool CreateWebinarResponse::attendeesIsSet() const
{
    return attendeesIsSet_;
}

void CreateWebinarResponse::unsetattendees()
{
    attendeesIsSet_ = false;
}

}
}
}
}
}


