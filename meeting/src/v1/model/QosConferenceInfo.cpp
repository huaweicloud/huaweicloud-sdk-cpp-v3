

#include "huaweicloud/meeting/v1/model/QosConferenceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QosConferenceInfo::QosConferenceInfo()
{
    confUUID_ = "";
    confUUIDIsSet_ = false;
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    scheduserName_ = "";
    scheduserNameIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    alarm_ = "";
    alarmIsSet_ = false;
    audioAlarm_ = "";
    audioAlarmIsSet_ = false;
    videoAlarm_ = "";
    videoAlarmIsSet_ = false;
    screenAlarm_ = "";
    screenAlarmIsSet_ = false;
    cpuAlarm_ = "";
    cpuAlarmIsSet_ = false;
    timeZoneID_ = "";
    timeZoneIDIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    participants_ = 0;
    participantsIsSet_ = false;
    webinar_ = false;
    webinarIsSet_ = false;
}

QosConferenceInfo::~QosConferenceInfo() = default;

void QosConferenceInfo::validate()
{
}

web::json::value QosConferenceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confUUIDIsSet_) {
        val[utility::conversions::to_string_t("confUUID")] = ModelBase::toJson(confUUID_);
    }
    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(scheduserNameIsSet_) {
        val[utility::conversions::to_string_t("scheduserName")] = ModelBase::toJson(scheduserName_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(alarmIsSet_) {
        val[utility::conversions::to_string_t("alarm")] = ModelBase::toJson(alarm_);
    }
    if(audioAlarmIsSet_) {
        val[utility::conversions::to_string_t("audioAlarm")] = ModelBase::toJson(audioAlarm_);
    }
    if(videoAlarmIsSet_) {
        val[utility::conversions::to_string_t("videoAlarm")] = ModelBase::toJson(videoAlarm_);
    }
    if(screenAlarmIsSet_) {
        val[utility::conversions::to_string_t("screenAlarm")] = ModelBase::toJson(screenAlarm_);
    }
    if(cpuAlarmIsSet_) {
        val[utility::conversions::to_string_t("cpuAlarm")] = ModelBase::toJson(cpuAlarm_);
    }
    if(timeZoneIDIsSet_) {
        val[utility::conversions::to_string_t("timeZoneID")] = ModelBase::toJson(timeZoneID_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(participantsIsSet_) {
        val[utility::conversions::to_string_t("participants")] = ModelBase::toJson(participants_);
    }
    if(webinarIsSet_) {
        val[utility::conversions::to_string_t("webinar")] = ModelBase::toJson(webinar_);
    }

    return val;
}
bool QosConferenceInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("conferenceID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("deptName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audioAlarm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audioAlarm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioAlarm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("videoAlarm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("videoAlarm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoAlarm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("screenAlarm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("screenAlarm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScreenAlarm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpuAlarm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpuAlarm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuAlarm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeZoneID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeZoneID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZoneID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("participants"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("participants"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParticipants(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("webinar"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("webinar"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebinar(refVal);
        }
    }
    return ok;
}


std::string QosConferenceInfo::getConfUUID() const
{
    return confUUID_;
}

void QosConferenceInfo::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool QosConferenceInfo::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void QosConferenceInfo::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

std::string QosConferenceInfo::getConferenceID() const
{
    return conferenceID_;
}

void QosConferenceInfo::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool QosConferenceInfo::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void QosConferenceInfo::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string QosConferenceInfo::getSubject() const
{
    return subject_;
}

void QosConferenceInfo::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool QosConferenceInfo::subjectIsSet() const
{
    return subjectIsSet_;
}

void QosConferenceInfo::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string QosConferenceInfo::getScheduserName() const
{
    return scheduserName_;
}

void QosConferenceInfo::setScheduserName(const std::string& value)
{
    scheduserName_ = value;
    scheduserNameIsSet_ = true;
}

bool QosConferenceInfo::scheduserNameIsSet() const
{
    return scheduserNameIsSet_;
}

void QosConferenceInfo::unsetscheduserName()
{
    scheduserNameIsSet_ = false;
}

std::string QosConferenceInfo::getDeptName() const
{
    return deptName_;
}

void QosConferenceInfo::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool QosConferenceInfo::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void QosConferenceInfo::unsetdeptName()
{
    deptNameIsSet_ = false;
}

std::string QosConferenceInfo::getAlarm() const
{
    return alarm_;
}

void QosConferenceInfo::setAlarm(const std::string& value)
{
    alarm_ = value;
    alarmIsSet_ = true;
}

bool QosConferenceInfo::alarmIsSet() const
{
    return alarmIsSet_;
}

void QosConferenceInfo::unsetalarm()
{
    alarmIsSet_ = false;
}

std::string QosConferenceInfo::getAudioAlarm() const
{
    return audioAlarm_;
}

void QosConferenceInfo::setAudioAlarm(const std::string& value)
{
    audioAlarm_ = value;
    audioAlarmIsSet_ = true;
}

bool QosConferenceInfo::audioAlarmIsSet() const
{
    return audioAlarmIsSet_;
}

void QosConferenceInfo::unsetaudioAlarm()
{
    audioAlarmIsSet_ = false;
}

std::string QosConferenceInfo::getVideoAlarm() const
{
    return videoAlarm_;
}

void QosConferenceInfo::setVideoAlarm(const std::string& value)
{
    videoAlarm_ = value;
    videoAlarmIsSet_ = true;
}

bool QosConferenceInfo::videoAlarmIsSet() const
{
    return videoAlarmIsSet_;
}

void QosConferenceInfo::unsetvideoAlarm()
{
    videoAlarmIsSet_ = false;
}

std::string QosConferenceInfo::getScreenAlarm() const
{
    return screenAlarm_;
}

void QosConferenceInfo::setScreenAlarm(const std::string& value)
{
    screenAlarm_ = value;
    screenAlarmIsSet_ = true;
}

bool QosConferenceInfo::screenAlarmIsSet() const
{
    return screenAlarmIsSet_;
}

void QosConferenceInfo::unsetscreenAlarm()
{
    screenAlarmIsSet_ = false;
}

std::string QosConferenceInfo::getCpuAlarm() const
{
    return cpuAlarm_;
}

void QosConferenceInfo::setCpuAlarm(const std::string& value)
{
    cpuAlarm_ = value;
    cpuAlarmIsSet_ = true;
}

bool QosConferenceInfo::cpuAlarmIsSet() const
{
    return cpuAlarmIsSet_;
}

void QosConferenceInfo::unsetcpuAlarm()
{
    cpuAlarmIsSet_ = false;
}

std::string QosConferenceInfo::getTimeZoneID() const
{
    return timeZoneID_;
}

void QosConferenceInfo::setTimeZoneID(const std::string& value)
{
    timeZoneID_ = value;
    timeZoneIDIsSet_ = true;
}

bool QosConferenceInfo::timeZoneIDIsSet() const
{
    return timeZoneIDIsSet_;
}

void QosConferenceInfo::unsettimeZoneID()
{
    timeZoneIDIsSet_ = false;
}

int64_t QosConferenceInfo::getStartTime() const
{
    return startTime_;
}

void QosConferenceInfo::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool QosConferenceInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void QosConferenceInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t QosConferenceInfo::getEndTime() const
{
    return endTime_;
}

void QosConferenceInfo::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool QosConferenceInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void QosConferenceInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t QosConferenceInfo::getDuration() const
{
    return duration_;
}

void QosConferenceInfo::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool QosConferenceInfo::durationIsSet() const
{
    return durationIsSet_;
}

void QosConferenceInfo::unsetduration()
{
    durationIsSet_ = false;
}

int32_t QosConferenceInfo::getParticipants() const
{
    return participants_;
}

void QosConferenceInfo::setParticipants(int32_t value)
{
    participants_ = value;
    participantsIsSet_ = true;
}

bool QosConferenceInfo::participantsIsSet() const
{
    return participantsIsSet_;
}

void QosConferenceInfo::unsetparticipants()
{
    participantsIsSet_ = false;
}

bool QosConferenceInfo::isWebinar() const
{
    return webinar_;
}

void QosConferenceInfo::setWebinar(bool value)
{
    webinar_ = value;
    webinarIsSet_ = true;
}

bool QosConferenceInfo::webinarIsSet() const
{
    return webinarIsSet_;
}

void QosConferenceInfo::unsetwebinar()
{
    webinarIsSet_ = false;
}

}
}
}
}
}


