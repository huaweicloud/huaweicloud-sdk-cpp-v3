

#include "huaweicloud/meeting/v1/model/ShowRegionInfoOfMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowRegionInfoOfMeetingRequest::ShowRegionInfoOfMeetingRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
}

ShowRegionInfoOfMeetingRequest::~ShowRegionInfoOfMeetingRequest() = default;

void ShowRegionInfoOfMeetingRequest::validate()
{
}

web::json::value ShowRegionInfoOfMeetingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }

    return val;
}
bool ShowRegionInfoOfMeetingRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowRegionInfoOfMeetingRequest::getConferenceID() const
{
    return conferenceID_;
}

void ShowRegionInfoOfMeetingRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool ShowRegionInfoOfMeetingRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void ShowRegionInfoOfMeetingRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

}
}
}
}
}


