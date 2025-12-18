

#include "huaweicloud/meeting/v1/model/ShowRealTimeInfoOfMeetingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowRealTimeInfoOfMeetingResponse::ShowRealTimeInfoOfMeetingResponse()
{
    attendeesIsSet_ = false;
    participantsIsSet_ = false;
    confInfoIsSet_ = false;
}

ShowRealTimeInfoOfMeetingResponse::~ShowRealTimeInfoOfMeetingResponse() = default;

void ShowRealTimeInfoOfMeetingResponse::validate()
{
}

web::json::value ShowRealTimeInfoOfMeetingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attendeesIsSet_) {
        val[utility::conversions::to_string_t("attendees")] = ModelBase::toJson(attendees_);
    }
    if(participantsIsSet_) {
        val[utility::conversions::to_string_t("participants")] = ModelBase::toJson(participants_);
    }
    if(confInfoIsSet_) {
        val[utility::conversions::to_string_t("confInfo")] = ModelBase::toJson(confInfo_);
    }

    return val;
}
bool ShowRealTimeInfoOfMeetingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attendees"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attendees"));
        if(!fieldValue.is_null())
        {
            std::vector<RealTimeAttendee> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttendees(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("participants"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("participants"));
        if(!fieldValue.is_null())
        {
            std::vector<RealTimeParticipant> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParticipants(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confInfo"));
        if(!fieldValue.is_null())
        {
            RealTimeConfInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfInfo(refVal);
        }
    }
    return ok;
}


std::vector<RealTimeAttendee>& ShowRealTimeInfoOfMeetingResponse::getAttendees()
{
    return attendees_;
}

void ShowRealTimeInfoOfMeetingResponse::setAttendees(const std::vector<RealTimeAttendee>& value)
{
    attendees_ = value;
    attendeesIsSet_ = true;
}

bool ShowRealTimeInfoOfMeetingResponse::attendeesIsSet() const
{
    return attendeesIsSet_;
}

void ShowRealTimeInfoOfMeetingResponse::unsetattendees()
{
    attendeesIsSet_ = false;
}

std::vector<RealTimeParticipant>& ShowRealTimeInfoOfMeetingResponse::getParticipants()
{
    return participants_;
}

void ShowRealTimeInfoOfMeetingResponse::setParticipants(const std::vector<RealTimeParticipant>& value)
{
    participants_ = value;
    participantsIsSet_ = true;
}

bool ShowRealTimeInfoOfMeetingResponse::participantsIsSet() const
{
    return participantsIsSet_;
}

void ShowRealTimeInfoOfMeetingResponse::unsetparticipants()
{
    participantsIsSet_ = false;
}

RealTimeConfInfo ShowRealTimeInfoOfMeetingResponse::getConfInfo() const
{
    return confInfo_;
}

void ShowRealTimeInfoOfMeetingResponse::setConfInfo(const RealTimeConfInfo& value)
{
    confInfo_ = value;
    confInfoIsSet_ = true;
}

bool ShowRealTimeInfoOfMeetingResponse::confInfoIsSet() const
{
    return confInfoIsSet_;
}

void ShowRealTimeInfoOfMeetingResponse::unsetconfInfo()
{
    confInfoIsSet_ = false;
}

}
}
}
}
}


