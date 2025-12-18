

#include "huaweicloud/meeting/v1/model/RestParticipantViewReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestParticipantViewReqBody::RestParticipantViewReqBody()
{
    viewType_ = 0;
    viewTypeIsSet_ = false;
    participantID_ = "";
    participantIDIsSet_ = false;
}

RestParticipantViewReqBody::~RestParticipantViewReqBody() = default;

void RestParticipantViewReqBody::validate()
{
}

web::json::value RestParticipantViewReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(viewTypeIsSet_) {
        val[utility::conversions::to_string_t("viewType")] = ModelBase::toJson(viewType_);
    }
    if(participantIDIsSet_) {
        val[utility::conversions::to_string_t("participantID")] = ModelBase::toJson(participantID_);
    }

    return val;
}
bool RestParticipantViewReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("viewType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("viewType"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setViewType(refVal);
        }
    }
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


int32_t RestParticipantViewReqBody::getViewType() const
{
    return viewType_;
}

void RestParticipantViewReqBody::setViewType(int32_t value)
{
    viewType_ = value;
    viewTypeIsSet_ = true;
}

bool RestParticipantViewReqBody::viewTypeIsSet() const
{
    return viewTypeIsSet_;
}

void RestParticipantViewReqBody::unsetviewType()
{
    viewTypeIsSet_ = false;
}

std::string RestParticipantViewReqBody::getParticipantID() const
{
    return participantID_;
}

void RestParticipantViewReqBody::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool RestParticipantViewReqBody::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void RestParticipantViewReqBody::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

}
}
}
}
}


