

#include "huaweicloud/meeting/v1/model/RestLockSiteViewReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestLockSiteViewReqBody::RestLockSiteViewReqBody()
{
    status_ = 0;
    statusIsSet_ = false;
    participantID_ = "";
    participantIDIsSet_ = false;
}

RestLockSiteViewReqBody::~RestLockSiteViewReqBody() = default;

void RestLockSiteViewReqBody::validate()
{
}

web::json::value RestLockSiteViewReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(participantIDIsSet_) {
        val[utility::conversions::to_string_t("participantID")] = ModelBase::toJson(participantID_);
    }

    return val;
}
bool RestLockSiteViewReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


int32_t RestLockSiteViewReqBody::getStatus() const
{
    return status_;
}

void RestLockSiteViewReqBody::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RestLockSiteViewReqBody::statusIsSet() const
{
    return statusIsSet_;
}

void RestLockSiteViewReqBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RestLockSiteViewReqBody::getParticipantID() const
{
    return participantID_;
}

void RestLockSiteViewReqBody::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool RestLockSiteViewReqBody::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void RestLockSiteViewReqBody::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

}
}
}
}
}


