

#include "huaweicloud/meeting/v1/model/OpenWebinarHistoryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




OpenWebinarHistoryInfo::OpenWebinarHistoryInfo()
{
    conferenceId_ = "";
    conferenceIdIsSet_ = false;
    confUUID_ = "";
    confUUIDIsSet_ = false;
    subject_ = "";
    subjectIsSet_ = false;
    scheduserName_ = "";
    scheduserNameIsSet_ = false;
    moderator_ = "";
    moderatorIsSet_ = false;
    deptName_ = "";
    deptNameIsSet_ = false;
    timeZoneId_ = 0;
    timeZoneIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    actualStartTime_ = "";
    actualStartTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    actualDuration_ = 0;
    actualDurationIsSet_ = false;
    attendeeCount_ = 0;
    attendeeCountIsSet_ = false;
    chairCount_ = 0;
    chairCountIsSet_ = false;
    guestCount_ = 0;
    guestCountIsSet_ = false;
    audienceCount_ = 0;
    audienceCountIsSet_ = false;
    vmrId_ = "";
    vmrIdIsSet_ = false;
    vmrPkgAudienceParties_ = 0;
    vmrPkgAudiencePartiesIsSet_ = false;
    vmrPkgName_ = "";
    vmrPkgNameIsSet_ = false;
}

OpenWebinarHistoryInfo::~OpenWebinarHistoryInfo() = default;

void OpenWebinarHistoryInfo::validate()
{
}

web::json::value OpenWebinarHistoryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIdIsSet_) {
        val[utility::conversions::to_string_t("conferenceId")] = ModelBase::toJson(conferenceId_);
    }
    if(confUUIDIsSet_) {
        val[utility::conversions::to_string_t("confUUID")] = ModelBase::toJson(confUUID_);
    }
    if(subjectIsSet_) {
        val[utility::conversions::to_string_t("subject")] = ModelBase::toJson(subject_);
    }
    if(scheduserNameIsSet_) {
        val[utility::conversions::to_string_t("scheduserName")] = ModelBase::toJson(scheduserName_);
    }
    if(moderatorIsSet_) {
        val[utility::conversions::to_string_t("moderator")] = ModelBase::toJson(moderator_);
    }
    if(deptNameIsSet_) {
        val[utility::conversions::to_string_t("deptName")] = ModelBase::toJson(deptName_);
    }
    if(timeZoneIdIsSet_) {
        val[utility::conversions::to_string_t("timeZoneId")] = ModelBase::toJson(timeZoneId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(actualStartTimeIsSet_) {
        val[utility::conversions::to_string_t("actualStartTime")] = ModelBase::toJson(actualStartTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }
    if(actualDurationIsSet_) {
        val[utility::conversions::to_string_t("actualDuration")] = ModelBase::toJson(actualDuration_);
    }
    if(attendeeCountIsSet_) {
        val[utility::conversions::to_string_t("attendeeCount")] = ModelBase::toJson(attendeeCount_);
    }
    if(chairCountIsSet_) {
        val[utility::conversions::to_string_t("chairCount")] = ModelBase::toJson(chairCount_);
    }
    if(guestCountIsSet_) {
        val[utility::conversions::to_string_t("guestCount")] = ModelBase::toJson(guestCount_);
    }
    if(audienceCountIsSet_) {
        val[utility::conversions::to_string_t("audienceCount")] = ModelBase::toJson(audienceCount_);
    }
    if(vmrIdIsSet_) {
        val[utility::conversions::to_string_t("vmrId")] = ModelBase::toJson(vmrId_);
    }
    if(vmrPkgAudiencePartiesIsSet_) {
        val[utility::conversions::to_string_t("vmrPkgAudienceParties")] = ModelBase::toJson(vmrPkgAudienceParties_);
    }
    if(vmrPkgNameIsSet_) {
        val[utility::conversions::to_string_t("vmrPkgName")] = ModelBase::toJson(vmrPkgName_);
    }

    return val;
}
bool OpenWebinarHistoryInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("confUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUUID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("moderator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("moderator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModerator(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("timeZoneId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeZoneId"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeZoneId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("actualStartTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actualStartTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("actualDuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("actualDuration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActualDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attendeeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attendeeCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttendeeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("chairCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("chairCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChairCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("guestCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guestCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGuestCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audienceCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audienceCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudienceCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vmrPkgAudienceParties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrPkgAudienceParties"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrPkgAudienceParties(refVal);
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
    return ok;
}


std::string OpenWebinarHistoryInfo::getConferenceId() const
{
    return conferenceId_;
}

void OpenWebinarHistoryInfo::setConferenceId(const std::string& value)
{
    conferenceId_ = value;
    conferenceIdIsSet_ = true;
}

bool OpenWebinarHistoryInfo::conferenceIdIsSet() const
{
    return conferenceIdIsSet_;
}

void OpenWebinarHistoryInfo::unsetconferenceId()
{
    conferenceIdIsSet_ = false;
}

std::string OpenWebinarHistoryInfo::getConfUUID() const
{
    return confUUID_;
}

void OpenWebinarHistoryInfo::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool OpenWebinarHistoryInfo::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void OpenWebinarHistoryInfo::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

std::string OpenWebinarHistoryInfo::getSubject() const
{
    return subject_;
}

void OpenWebinarHistoryInfo::setSubject(const std::string& value)
{
    subject_ = value;
    subjectIsSet_ = true;
}

bool OpenWebinarHistoryInfo::subjectIsSet() const
{
    return subjectIsSet_;
}

void OpenWebinarHistoryInfo::unsetsubject()
{
    subjectIsSet_ = false;
}

std::string OpenWebinarHistoryInfo::getScheduserName() const
{
    return scheduserName_;
}

void OpenWebinarHistoryInfo::setScheduserName(const std::string& value)
{
    scheduserName_ = value;
    scheduserNameIsSet_ = true;
}

bool OpenWebinarHistoryInfo::scheduserNameIsSet() const
{
    return scheduserNameIsSet_;
}

void OpenWebinarHistoryInfo::unsetscheduserName()
{
    scheduserNameIsSet_ = false;
}

std::string OpenWebinarHistoryInfo::getModerator() const
{
    return moderator_;
}

void OpenWebinarHistoryInfo::setModerator(const std::string& value)
{
    moderator_ = value;
    moderatorIsSet_ = true;
}

bool OpenWebinarHistoryInfo::moderatorIsSet() const
{
    return moderatorIsSet_;
}

void OpenWebinarHistoryInfo::unsetmoderator()
{
    moderatorIsSet_ = false;
}

std::string OpenWebinarHistoryInfo::getDeptName() const
{
    return deptName_;
}

void OpenWebinarHistoryInfo::setDeptName(const std::string& value)
{
    deptName_ = value;
    deptNameIsSet_ = true;
}

bool OpenWebinarHistoryInfo::deptNameIsSet() const
{
    return deptNameIsSet_;
}

void OpenWebinarHistoryInfo::unsetdeptName()
{
    deptNameIsSet_ = false;
}

int32_t OpenWebinarHistoryInfo::getTimeZoneId() const
{
    return timeZoneId_;
}

void OpenWebinarHistoryInfo::setTimeZoneId(int32_t value)
{
    timeZoneId_ = value;
    timeZoneIdIsSet_ = true;
}

bool OpenWebinarHistoryInfo::timeZoneIdIsSet() const
{
    return timeZoneIdIsSet_;
}

void OpenWebinarHistoryInfo::unsettimeZoneId()
{
    timeZoneIdIsSet_ = false;
}

std::string OpenWebinarHistoryInfo::getStartTime() const
{
    return startTime_;
}

void OpenWebinarHistoryInfo::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool OpenWebinarHistoryInfo::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void OpenWebinarHistoryInfo::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int32_t OpenWebinarHistoryInfo::getDuration() const
{
    return duration_;
}

void OpenWebinarHistoryInfo::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool OpenWebinarHistoryInfo::durationIsSet() const
{
    return durationIsSet_;
}

void OpenWebinarHistoryInfo::unsetduration()
{
    durationIsSet_ = false;
}

std::string OpenWebinarHistoryInfo::getActualStartTime() const
{
    return actualStartTime_;
}

void OpenWebinarHistoryInfo::setActualStartTime(const std::string& value)
{
    actualStartTime_ = value;
    actualStartTimeIsSet_ = true;
}

bool OpenWebinarHistoryInfo::actualStartTimeIsSet() const
{
    return actualStartTimeIsSet_;
}

void OpenWebinarHistoryInfo::unsetactualStartTime()
{
    actualStartTimeIsSet_ = false;
}

std::string OpenWebinarHistoryInfo::getEndTime() const
{
    return endTime_;
}

void OpenWebinarHistoryInfo::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool OpenWebinarHistoryInfo::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void OpenWebinarHistoryInfo::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t OpenWebinarHistoryInfo::getActualDuration() const
{
    return actualDuration_;
}

void OpenWebinarHistoryInfo::setActualDuration(int32_t value)
{
    actualDuration_ = value;
    actualDurationIsSet_ = true;
}

bool OpenWebinarHistoryInfo::actualDurationIsSet() const
{
    return actualDurationIsSet_;
}

void OpenWebinarHistoryInfo::unsetactualDuration()
{
    actualDurationIsSet_ = false;
}

int32_t OpenWebinarHistoryInfo::getAttendeeCount() const
{
    return attendeeCount_;
}

void OpenWebinarHistoryInfo::setAttendeeCount(int32_t value)
{
    attendeeCount_ = value;
    attendeeCountIsSet_ = true;
}

bool OpenWebinarHistoryInfo::attendeeCountIsSet() const
{
    return attendeeCountIsSet_;
}

void OpenWebinarHistoryInfo::unsetattendeeCount()
{
    attendeeCountIsSet_ = false;
}

int32_t OpenWebinarHistoryInfo::getChairCount() const
{
    return chairCount_;
}

void OpenWebinarHistoryInfo::setChairCount(int32_t value)
{
    chairCount_ = value;
    chairCountIsSet_ = true;
}

bool OpenWebinarHistoryInfo::chairCountIsSet() const
{
    return chairCountIsSet_;
}

void OpenWebinarHistoryInfo::unsetchairCount()
{
    chairCountIsSet_ = false;
}

int32_t OpenWebinarHistoryInfo::getGuestCount() const
{
    return guestCount_;
}

void OpenWebinarHistoryInfo::setGuestCount(int32_t value)
{
    guestCount_ = value;
    guestCountIsSet_ = true;
}

bool OpenWebinarHistoryInfo::guestCountIsSet() const
{
    return guestCountIsSet_;
}

void OpenWebinarHistoryInfo::unsetguestCount()
{
    guestCountIsSet_ = false;
}

int32_t OpenWebinarHistoryInfo::getAudienceCount() const
{
    return audienceCount_;
}

void OpenWebinarHistoryInfo::setAudienceCount(int32_t value)
{
    audienceCount_ = value;
    audienceCountIsSet_ = true;
}

bool OpenWebinarHistoryInfo::audienceCountIsSet() const
{
    return audienceCountIsSet_;
}

void OpenWebinarHistoryInfo::unsetaudienceCount()
{
    audienceCountIsSet_ = false;
}

std::string OpenWebinarHistoryInfo::getVmrId() const
{
    return vmrId_;
}

void OpenWebinarHistoryInfo::setVmrId(const std::string& value)
{
    vmrId_ = value;
    vmrIdIsSet_ = true;
}

bool OpenWebinarHistoryInfo::vmrIdIsSet() const
{
    return vmrIdIsSet_;
}

void OpenWebinarHistoryInfo::unsetvmrId()
{
    vmrIdIsSet_ = false;
}

int32_t OpenWebinarHistoryInfo::getVmrPkgAudienceParties() const
{
    return vmrPkgAudienceParties_;
}

void OpenWebinarHistoryInfo::setVmrPkgAudienceParties(int32_t value)
{
    vmrPkgAudienceParties_ = value;
    vmrPkgAudiencePartiesIsSet_ = true;
}

bool OpenWebinarHistoryInfo::vmrPkgAudiencePartiesIsSet() const
{
    return vmrPkgAudiencePartiesIsSet_;
}

void OpenWebinarHistoryInfo::unsetvmrPkgAudienceParties()
{
    vmrPkgAudiencePartiesIsSet_ = false;
}

std::string OpenWebinarHistoryInfo::getVmrPkgName() const
{
    return vmrPkgName_;
}

void OpenWebinarHistoryInfo::setVmrPkgName(const std::string& value)
{
    vmrPkgName_ = value;
    vmrPkgNameIsSet_ = true;
}

bool OpenWebinarHistoryInfo::vmrPkgNameIsSet() const
{
    return vmrPkgNameIsSet_;
}

void OpenWebinarHistoryInfo::unsetvmrPkgName()
{
    vmrPkgNameIsSet_ = false;
}

}
}
}
}
}


