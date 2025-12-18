

#include "huaweicloud/meeting/v1/model/OpenScheduleConfReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OpenScheduleConfReq::OpenScheduleConfReq()
{
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
    vmrID_ = "";
    vmrIDIsSet_ = false;
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

OpenScheduleConfReq::~OpenScheduleConfReq() = default;

void OpenScheduleConfReq::validate()
{
}

web::json::value OpenScheduleConfReq::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(vmrIDIsSet_) {
        val[utility::conversions::to_string_t("vmrID")] = ModelBase::toJson(vmrID_);
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
bool OpenScheduleConfReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("vmrID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrID(refVal);
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


std::string OpenScheduleConfReq::getSubject() const
{
    return subject_;
}

void OpenScheduleConfReq::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool OpenScheduleConfReq::subjectIsSet() const
{
    return subjectIsSet_;
}

void OpenScheduleConfReq::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string OpenScheduleConfReq::getDescription() const
{
    return description_;
}

void OpenScheduleConfReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool OpenScheduleConfReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void OpenScheduleConfReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string OpenScheduleConfReq::getStartTime() const
{
    return startTime_;
}

void OpenScheduleConfReq::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool OpenScheduleConfReq::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void OpenScheduleConfReq::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t OpenScheduleConfReq::getDuration() const
{
    return duration_;
}

void OpenScheduleConfReq::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool OpenScheduleConfReq::durationIsSet() const
{
    return durationIsSet_;
}

void OpenScheduleConfReq::unsetduration()
{
    durationIsSet_ = false;
}

int32_t OpenScheduleConfReq::getTimeZoneId() const
{
    return timeZoneId_;
}

void OpenScheduleConfReq::setTimeZoneId(int32_t value)
{
    timeZoneId_ = value;
    timeZoneIdIsSet_ = true;
}

bool OpenScheduleConfReq::timeZoneIdIsSet() const
{
    return timeZoneIdIsSet_;
}

void OpenScheduleConfReq::unsettimeZoneId()
{
    timeZoneIdIsSet_ = false;
}

std::vector<OpenAttendeeEntity>& OpenScheduleConfReq::getAttendees()
{
    return attendees_;
}

void OpenScheduleConfReq::setAttendees(const std::vector<OpenAttendeeEntity>& value)
{
    attendees_ = value;
    attendeesIsSet_ = true;
}

bool OpenScheduleConfReq::attendeesIsSet() const
{
    return attendeesIsSet_;
}

void OpenScheduleConfReq::unsetattendees()
{
    attendeesIsSet_ = false;
}

OpenNotifySetting OpenScheduleConfReq::getNotifySetting() const
{
    return notifySetting_;
}

void OpenScheduleConfReq::setNotifySetting(const OpenNotifySetting& value)
{
    notifySetting_ = value;
    notifySettingIsSet_ = true;
}

bool OpenScheduleConfReq::notifySettingIsSet() const
{
    return notifySettingIsSet_;
}

void OpenScheduleConfReq::unsetnotifySetting()
{
    notifySettingIsSet_ = false;
}

std::string OpenScheduleConfReq::getVmrID() const
{
    return vmrID_;
}

void OpenScheduleConfReq::setVmrID(const std::string& value)
{
    vmrID_ = value;
    vmrIDIsSet_ = true;
}

bool OpenScheduleConfReq::vmrIDIsSet() const
{
    return vmrIDIsSet_;
}

void OpenScheduleConfReq::unsetvmrID()
{
    vmrIDIsSet_ = false;
}

std::string OpenScheduleConfReq::getGuestPasswd() const
{
    return guestPasswd_;
}

void OpenScheduleConfReq::setGuestPasswd(const std::string& value)
{
    guestPasswd_ = value;
    guestPasswdIsSet_ = true;
}

bool OpenScheduleConfReq::guestPasswdIsSet() const
{
    return guestPasswdIsSet_;
}

void OpenScheduleConfReq::unsetguestPasswd()
{
    guestPasswdIsSet_ = false;
}

std::string OpenScheduleConfReq::getAudiencePasswd() const
{
    return audiencePasswd_;
}

void OpenScheduleConfReq::setAudiencePasswd(const std::string& value)
{
    audiencePasswd_ = value;
    audiencePasswdIsSet_ = true;
}

bool OpenScheduleConfReq::audiencePasswdIsSet() const
{
    return audiencePasswdIsSet_;
}

void OpenScheduleConfReq::unsetaudiencePasswd()
{
    audiencePasswdIsSet_ = false;
}

bool OpenScheduleConfReq::isCallRestriction() const
{
    return callRestriction_;
}

void OpenScheduleConfReq::setCallRestriction(bool value)
{
    callRestriction_ = value;
    callRestrictionIsSet_ = true;
}

bool OpenScheduleConfReq::callRestrictionIsSet() const
{
    return callRestrictionIsSet_;
}

void OpenScheduleConfReq::unsetcallRestriction()
{
    callRestrictionIsSet_ = false;
}

int32_t OpenScheduleConfReq::getScope() const
{
    return scope_;
}

void OpenScheduleConfReq::setScope(int32_t value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool OpenScheduleConfReq::scopeIsSet() const
{
    return scopeIsSet_;
}

void OpenScheduleConfReq::unsetscope()
{
    scopeIsSet_ = false;
}

int32_t OpenScheduleConfReq::getAudienceScope() const
{
    return audienceScope_;
}

void OpenScheduleConfReq::setAudienceScope(int32_t value)
{
    audienceScope_ = value;
    audienceScopeIsSet_ = true;
}

bool OpenScheduleConfReq::audienceScopeIsSet() const
{
    return audienceScopeIsSet_;
}

void OpenScheduleConfReq::unsetaudienceScope()
{
    audienceScopeIsSet_ = false;
}

YesNoEnum OpenScheduleConfReq::getEnableRecording() const
{
    return enableRecording_;
}

void OpenScheduleConfReq::setEnableRecording(const YesNoEnum& value)
{
    enableRecording_ = value;
    enableRecordingIsSet_ = true;
}

bool OpenScheduleConfReq::enableRecordingIsSet() const
{
    return enableRecordingIsSet_;
}

void OpenScheduleConfReq::unsetenableRecording()
{
    enableRecordingIsSet_ = false;
}

std::string OpenScheduleConfReq::getLiveAddress() const
{
    return liveAddress_;
}

void OpenScheduleConfReq::setLiveAddress(const std::string& value)
{
    liveAddress_ = value;
    liveAddressIsSet_ = true;
}

bool OpenScheduleConfReq::liveAddressIsSet() const
{
    return liveAddressIsSet_;
}

void OpenScheduleConfReq::unsetliveAddress()
{
    liveAddressIsSet_ = false;
}

std::string OpenScheduleConfReq::getAuxAddress() const
{
    return auxAddress_;
}

void OpenScheduleConfReq::setAuxAddress(const std::string& value)
{
    auxAddress_ = value;
    auxAddressIsSet_ = true;
}

bool OpenScheduleConfReq::auxAddressIsSet() const
{
    return auxAddressIsSet_;
}

void OpenScheduleConfReq::unsetauxAddress()
{
    auxAddressIsSet_ = false;
}

std::string OpenScheduleConfReq::getLiveUrl() const
{
    return liveUrl_;
}

void OpenScheduleConfReq::setLiveUrl(const std::string& value)
{
    liveUrl_ = value;
    liveUrlIsSet_ = true;
}

bool OpenScheduleConfReq::liveUrlIsSet() const
{
    return liveUrlIsSet_;
}

void OpenScheduleConfReq::unsetliveUrl()
{
    liveUrlIsSet_ = false;
}

}
}
}
}
}


