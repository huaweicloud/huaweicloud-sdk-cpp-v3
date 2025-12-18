

#include "huaweicloud/meeting/v1/model/RestAllowWaitingParticipantReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestAllowWaitingParticipantReqBody::RestAllowWaitingParticipantReqBody()
{
    participantID_ = "";
    participantIDIsSet_ = false;
    allowAll_ = false;
    allowAllIsSet_ = false;
}

RestAllowWaitingParticipantReqBody::~RestAllowWaitingParticipantReqBody() = default;

void RestAllowWaitingParticipantReqBody::validate()
{
}

web::json::value RestAllowWaitingParticipantReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(participantIDIsSet_) {
        val[utility::conversions::to_string_t("participantID")] = ModelBase::toJson(participantID_);
    }
    if(allowAllIsSet_) {
        val[utility::conversions::to_string_t("allowAll")] = ModelBase::toJson(allowAll_);
    }

    return val;
}
bool RestAllowWaitingParticipantReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("allowAll"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowAll"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowAll(refVal);
        }
    }
    return ok;
}


std::string RestAllowWaitingParticipantReqBody::getParticipantID() const
{
    return participantID_;
}

void RestAllowWaitingParticipantReqBody::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool RestAllowWaitingParticipantReqBody::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void RestAllowWaitingParticipantReqBody::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

bool RestAllowWaitingParticipantReqBody::isAllowAll() const
{
    return allowAll_;
}

void RestAllowWaitingParticipantReqBody::setAllowAll(bool value)
{
    allowAll_ = value;
    allowAllIsSet_ = true;
}

bool RestAllowWaitingParticipantReqBody::allowAllIsSet() const
{
    return allowAllIsSet_;
}

void RestAllowWaitingParticipantReqBody::unsetallowAll()
{
    allowAllIsSet_ = false;
}

}
}
}
}
}


