

#include "huaweicloud/meeting/v1/model/ShowRealTimeInfoOfMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowRealTimeInfoOfMeetingRequest::ShowRealTimeInfoOfMeetingRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
}

ShowRealTimeInfoOfMeetingRequest::~ShowRealTimeInfoOfMeetingRequest() = default;

void ShowRealTimeInfoOfMeetingRequest::validate()
{
}

web::json::value ShowRealTimeInfoOfMeetingRequest::toJson() const
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
bool ShowRealTimeInfoOfMeetingRequest::fromJson(const web::json::value& val)
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


std::string ShowRealTimeInfoOfMeetingRequest::getConferenceID() const
{
    return conferenceID_;
}

void ShowRealTimeInfoOfMeetingRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool ShowRealTimeInfoOfMeetingRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void ShowRealTimeInfoOfMeetingRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string ShowRealTimeInfoOfMeetingRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void ShowRealTimeInfoOfMeetingRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool ShowRealTimeInfoOfMeetingRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void ShowRealTimeInfoOfMeetingRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

}
}
}
}
}


