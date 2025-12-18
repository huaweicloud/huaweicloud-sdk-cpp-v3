

#include "huaweicloud/meeting/v1/model/RestMoveToWaitingRoomReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestMoveToWaitingRoomReqBody::RestMoveToWaitingRoomReqBody()
{
    participantID_ = "";
    participantIDIsSet_ = false;
}

RestMoveToWaitingRoomReqBody::~RestMoveToWaitingRoomReqBody() = default;

void RestMoveToWaitingRoomReqBody::validate()
{
}

web::json::value RestMoveToWaitingRoomReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(participantIDIsSet_) {
        val[utility::conversions::to_string_t("participantID")] = ModelBase::toJson(participantID_);
    }

    return val;
}
bool RestMoveToWaitingRoomReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("participantID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("participantID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParticipantID(refVal);
        }
    }
    return ok;
}


std::string RestMoveToWaitingRoomReqBody::getParticipantID() const
{
    return participantID_;
}

void RestMoveToWaitingRoomReqBody::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool RestMoveToWaitingRoomReqBody::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void RestMoveToWaitingRoomReqBody::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

}
}
}
}
}


