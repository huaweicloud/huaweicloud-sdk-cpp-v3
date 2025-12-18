

#include "huaweicloud/meeting/v1/model/OpenEditConfReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OpenEditConfReq::OpenEditConfReq()
{
    conferenceId_ = "";
    conferenceIdIsSet_ = false;
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
    attendeesIsSet_ = false;
    notifySettingIsSet_ = false;
    guestPasswd_ = "";
    guestPasswdIsSet_ = false;
    audiencePasswd_ = "";
    audiencePasswdIsSet_ = false;
    callRestriction_ = false;
    callRestrictionIsSet_ = false;
    scope_ = 0;
    scopeIsSet_ = false;
    audienceScope_ = 0;
    audienceScopeIsSet_ = false;
    enableRecordingIsSet_ = false;
    liveAddress_ = "";
    liveAddressIsSet_ = false;
    auxAddress_ = "";
    auxAddressIsSet_ = false;
    liveUrl_ = "";
    liveUrlIsSet_ = false;
}

OpenEditConfReq::~OpenEditConfReq() = default;

void OpenEditConfReq::validate()
{
}

web::json::value OpenEditConfReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIdIsSet_) {
        val[utility::conversions::to_string_t("conferenceId")] = ModelBase::toJson(conferenceId_);
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
    if(attendeesIsSet_) {
        val[utility::conversions::to_string_t("attendees")] = ModelBase::toJson(attendees_);
    }
    if(notifySettingIsSet_) {
        val[utility::conversions::to_string_t("notifySetting")] = ModelBase::toJson(notifySetting_);
    }
    if(guestPasswdIsSet_) {
        val[utility::conversions::to_string_t("guestPasswd")] = ModelBase::toJson(guestPasswd_);
    }
    if(audiencePasswdIsSet_) {
        val[utility::conversions::to_string_t("audiencePasswd")] = ModelBase::toJson(audiencePasswd_);
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
bool OpenEditConfReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("attendees"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attendees"));
        if(!fieldValue.is_null())
        {
            std::vector<OpenAttendeeEntity> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttendees(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("guestPasswd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guestPasswd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGuestPasswd(refVal);
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


std::string OpenEditConfReq::getConferenceId() const
{
    return conferenceId_;
}

void OpenEditConfReq::setConferenceId(const std::string& value)
{
    conferenceId_ = value;
    conferenceIdIsSet_ = true;
}

bool OpenEditConfReq::conferenceIdIsSet() const
{
    return conferenceIdIsSet_;
}

void OpenEditConfReq::unsetconferenceId()
{
    conferenceIdIsSet_ = false;
}

std::string OpenEditConfReq::getSubject() const
{
    return subject_;
}

void OpenEditConfReq::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool OpenEditConfReq::subjectIsSet() const
{
    return subjectIsSet_;
}

void OpenEditConfReq::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string OpenEditConfReq::getDescription() const
{
    return description_;
}

void OpenEditConfReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool OpenEditConfReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void OpenEditConfReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string OpenEditConfReq::getStartTime() const
{
    return startTime_;
}

void OpenEditConfReq::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool OpenEditConfReq::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void OpenEditConfReq::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t OpenEditConfReq::getDuration() const
{
    return duration_;
}

void OpenEditConfReq::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool OpenEditConfReq::durationIsSet() const
{
    return durationIsSet_;
}

void OpenEditConfReq::unsetduration()
{
    durationIsSet_ = false;
}

int32_t OpenEditConfReq::getTimeZoneId() const
{
    return timeZoneId_;
}

void OpenEditConfReq::setTimeZoneId(int32_t value)
{
    timeZoneId_ = value;
    timeZoneIdIsSet_ = true;
}

bool OpenEditConfReq::timeZoneIdIsSet() const
{
    return timeZoneIdIsSet_;
}

void OpenEditConfReq::unsettimeZoneId()
{
    timeZoneIdIsSet_ = false;
}

std::vector<OpenAttendeeEntity>& OpenEditConfReq::getAttendees()
{
    return attendees_;
}

void OpenEditConfReq::setAttendees(const std::vector<OpenAttendeeEntity>& value)
{
    attendees_ = value;
    attendeesIsSet_ = true;
}

bool OpenEditConfReq::attendeesIsSet() const
{
    return attendeesIsSet_;
}

void OpenEditConfReq::unsetattendees()
{
    attendeesIsSet_ = false;
}

OpenNotifySetting OpenEditConfReq::getNotifySetting() const
{
    return notifySetting_;
}

void OpenEditConfReq::setNotifySetting(const OpenNotifySetting& value)
{
    notifySetting_ = value;
    notifySettingIsSet_ = true;
}

bool OpenEditConfReq::notifySettingIsSet() const
{
    return notifySettingIsSet_;
}

void OpenEditConfReq::unsetnotifySetting()
{
    notifySettingIsSet_ = false;
}

std::string OpenEditConfReq::getGuestPasswd() const
{
    return guestPasswd_;
}

void OpenEditConfReq::setGuestPasswd(const std::string& value)
{
    guestPasswd_ = value;
    guestPasswdIsSet_ = true;
}

bool OpenEditConfReq::guestPasswdIsSet() const
{
    return guestPasswdIsSet_;
}

void OpenEditConfReq::unsetguestPasswd()
{
    guestPasswdIsSet_ = false;
}

std::string OpenEditConfReq::getAudiencePasswd() const
{
    return audiencePasswd_;
}

void OpenEditConfReq::setAudiencePasswd(const std::string& value)
{
    audiencePasswd_ = value;
    audiencePasswdIsSet_ = true;
}

bool OpenEditConfReq::audiencePasswdIsSet() const
{
    return audiencePasswdIsSet_;
}

void OpenEditConfReq::unsetaudiencePasswd()
{
    audiencePasswdIsSet_ = false;
}

bool OpenEditConfReq::isCallRestriction() const
{
    return callRestriction_;
}

void OpenEditConfReq::setCallRestriction(bool value)
{
    callRestriction_ = value;
    callRestrictionIsSet_ = true;
}

bool OpenEditConfReq::callRestrictionIsSet() const
{
    return callRestrictionIsSet_;
}

void OpenEditConfReq::unsetcallRestriction()
{
    callRestrictionIsSet_ = false;
}

int32_t OpenEditConfReq::getScope() const
{
    return scope_;
}

void OpenEditConfReq::setScope(int32_t value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool OpenEditConfReq::scopeIsSet() const
{
    return scopeIsSet_;
}

void OpenEditConfReq::unsetscope()
{
    scopeIsSet_ = false;
}

int32_t OpenEditConfReq::getAudienceScope() const
{
    return audienceScope_;
}

void OpenEditConfReq::setAudienceScope(int32_t value)
{
    audienceScope_ = value;
    audienceScopeIsSet_ = true;
}

bool OpenEditConfReq::audienceScopeIsSet() const
{
    return audienceScopeIsSet_;
}

void OpenEditConfReq::unsetaudienceScope()
{
    audienceScopeIsSet_ = false;
}

YesNoEnum OpenEditConfReq::getEnableRecording() const
{
    return enableRecording_;
}

void OpenEditConfReq::setEnableRecording(const YesNoEnum& value)
{
    enableRecording_ = value;
    enableRecordingIsSet_ = true;
}

bool OpenEditConfReq::enableRecordingIsSet() const
{
    return enableRecordingIsSet_;
}

void OpenEditConfReq::unsetenableRecording()
{
    enableRecordingIsSet_ = false;
}

std::string OpenEditConfReq::getLiveAddress() const
{
    return liveAddress_;
}

void OpenEditConfReq::setLiveAddress(const std::string& value)
{
    liveAddress_ = value;
    liveAddressIsSet_ = true;
}

bool OpenEditConfReq::liveAddressIsSet() const
{
    return liveAddressIsSet_;
}

void OpenEditConfReq::unsetliveAddress()
{
    liveAddressIsSet_ = false;
}

std::string OpenEditConfReq::getAuxAddress() const
{
    return auxAddress_;
}

void OpenEditConfReq::setAuxAddress(const std::string& value)
{
    auxAddress_ = value;
    auxAddressIsSet_ = true;
}

bool OpenEditConfReq::auxAddressIsSet() const
{
    return auxAddressIsSet_;
}

void OpenEditConfReq::unsetauxAddress()
{
    auxAddressIsSet_ = false;
}

std::string OpenEditConfReq::getLiveUrl() const
{
    return liveUrl_;
}

void OpenEditConfReq::setLiveUrl(const std::string& value)
{
    liveUrl_ = value;
    liveUrlIsSet_ = true;
}

bool OpenEditConfReq::liveUrlIsSet() const
{
    return liveUrlIsSet_;
}

void OpenEditConfReq::unsetliveUrl()
{
    liveUrlIsSet_ = false;
}

}
}
}
}
}


