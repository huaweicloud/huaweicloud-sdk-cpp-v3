

#include "huaweicloud/meeting/v1/model/RestInviteReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestInviteReqBody::RestInviteReqBody()
{
    attendeesIsSet_ = false;
}

RestInviteReqBody::~RestInviteReqBody() = default;

void RestInviteReqBody::validate()
{
}

web::json::value RestInviteReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attendeesIsSet_) {
        val[utility::conversions::to_string_t("attendees")] = ModelBase::toJson(attendees_);
    }

    return val;
}
bool RestInviteReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attendees"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attendees"));
        if(!fieldValue.is_null())
        {
            std::vector<Attendee> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttendees(refVal);
        }
    }
    return ok;
}


std::vector<Attendee>& RestInviteReqBody::getAttendees()
{
    return attendees_;
}

void RestInviteReqBody::setAttendees(const std::vector<Attendee>& value)
{
    attendees_ = value;
    attendeesIsSet_ = true;
}

bool RestInviteReqBody::attendeesIsSet() const
{
    return attendeesIsSet_;
}

void RestInviteReqBody::unsetattendees()
{
    attendeesIsSet_ = false;
}

}
}
}
}
}


