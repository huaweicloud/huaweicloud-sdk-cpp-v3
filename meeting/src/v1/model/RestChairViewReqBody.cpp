

#include "huaweicloud/meeting/v1/model/RestChairViewReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




RestChairViewReqBody::RestChairViewReqBody()
{
    viewType_ = 0;
    viewTypeIsSet_ = false;
    participantID_ = "";
    participantIDIsSet_ = false;
    switchTime_ = 0;
    switchTimeIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

RestChairViewReqBody::~RestChairViewReqBody() = default;

void RestChairViewReqBody::validate()
{
}

web::json::value RestChairViewReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(viewTypeIsSet_) {
        val[utility::conversions::to_string_t("viewType")] = ModelBase::toJson(viewType_);
    }
    if(participantIDIsSet_) {
        val[utility::conversions::to_string_t("participantID")] = ModelBase::toJson(participantID_);
    }
    if(switchTimeIsSet_) {
        val[utility::conversions::to_string_t("switchTime")] = ModelBase::toJson(switchTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool RestChairViewReqBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("switchTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switchTime"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int32_t RestChairViewReqBody::getViewType() const
{
    return viewType_;
}

void RestChairViewReqBody::setViewType(int32_t value)
{
    viewType_ = value;
    viewTypeIsSet_ = true;
}

bool RestChairViewReqBody::viewTypeIsSet() const
{
    return viewTypeIsSet_;
}

void RestChairViewReqBody::unsetviewType()
{
    viewTypeIsSet_ = false;
}

std::string RestChairViewReqBody::getParticipantID() const
{
    return participantID_;
}

void RestChairViewReqBody::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool RestChairViewReqBody::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void RestChairViewReqBody::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

int32_t RestChairViewReqBody::getSwitchTime() const
{
    return switchTime_;
}

void RestChairViewReqBody::setSwitchTime(int32_t value)
{
    switchTime_ = value;
    switchTimeIsSet_ = true;
}

bool RestChairViewReqBody::switchTimeIsSet() const
{
    return switchTimeIsSet_;
}

void RestChairViewReqBody::unsetswitchTime()
{
    switchTimeIsSet_ = false;
}

int32_t RestChairViewReqBody::getStatus() const
{
    return status_;
}

void RestChairViewReqBody::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RestChairViewReqBody::statusIsSet() const
{
    return statusIsSet_;
}

void RestChairViewReqBody::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


