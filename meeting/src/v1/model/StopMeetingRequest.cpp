

#include "huaweicloud/meeting/v1/model/StopMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




StopMeetingRequest::StopMeetingRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
}

StopMeetingRequest::~StopMeetingRequest() = default;

void StopMeetingRequest::validate()
{
}

web::json::value StopMeetingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(xConferenceAuthorizationIsSet_) {
        val[utility::conversions::to_string_t("X-Conference-Authorization")] = ModelBase::toJson(xConferenceAuthorization_);
    }

    return val;
}
bool StopMeetingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conferenceID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Conference-Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Conference-Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXConferenceAuthorization(refVal);
        }
    }
    return ok;
}


std::string StopMeetingRequest::getConferenceID() const
{
    return conferenceID_;
}

void StopMeetingRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool StopMeetingRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void StopMeetingRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string StopMeetingRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void StopMeetingRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool StopMeetingRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void StopMeetingRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

}
}
}
}
}


