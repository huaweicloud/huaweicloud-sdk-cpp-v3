

#include "huaweicloud/meeting/v1/model/SearchQosParticipantDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchQosParticipantDetailRequest::SearchQosParticipantDetailRequest()
{
    confUUID_ = "";
    confUUIDIsSet_ = false;
    confType_ = "";
    confTypeIsSet_ = false;
    participantID_ = "";
    participantIDIsSet_ = false;
    qosType_ = "";
    qosTypeIsSet_ = false;
}

SearchQosParticipantDetailRequest::~SearchQosParticipantDetailRequest() = default;

void SearchQosParticipantDetailRequest::validate()
{
}

web::json::value SearchQosParticipantDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confUUIDIsSet_) {
        val[utility::conversions::to_string_t("confUUID")] = ModelBase::toJson(confUUID_);
    }
    if(confTypeIsSet_) {
        val[utility::conversions::to_string_t("confType")] = ModelBase::toJson(confType_);
    }
    if(participantIDIsSet_) {
        val[utility::conversions::to_string_t("participantID")] = ModelBase::toJson(participantID_);
    }
    if(qosTypeIsSet_) {
        val[utility::conversions::to_string_t("qosType")] = ModelBase::toJson(qosType_);
    }

    return val;
}
bool SearchQosParticipantDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUUID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("qosType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qosType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQosType(refVal);
        }
    }
    return ok;
}


std::string SearchQosParticipantDetailRequest::getConfUUID() const
{
    return confUUID_;
}

void SearchQosParticipantDetailRequest::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool SearchQosParticipantDetailRequest::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void SearchQosParticipantDetailRequest::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

std::string SearchQosParticipantDetailRequest::getConfType() const
{
    return confType_;
}

void SearchQosParticipantDetailRequest::setConfType(const std::string& value)
{
    confType_ = value;
    confTypeIsSet_ = true;
}

bool SearchQosParticipantDetailRequest::confTypeIsSet() const
{
    return confTypeIsSet_;
}

void SearchQosParticipantDetailRequest::unsetconfType()
{
    confTypeIsSet_ = false;
}

std::string SearchQosParticipantDetailRequest::getParticipantID() const
{
    return participantID_;
}

void SearchQosParticipantDetailRequest::setParticipantID(const std::string& value)
{
    participantID_ = value;
    participantIDIsSet_ = true;
}

bool SearchQosParticipantDetailRequest::participantIDIsSet() const
{
    return participantIDIsSet_;
}

void SearchQosParticipantDetailRequest::unsetparticipantID()
{
    participantIDIsSet_ = false;
}

std::string SearchQosParticipantDetailRequest::getQosType() const
{
    return qosType_;
}

void SearchQosParticipantDetailRequest::setQosType(const std::string& value)
{
    qosType_ = value;
    qosTypeIsSet_ = true;
}

bool SearchQosParticipantDetailRequest::qosTypeIsSet() const
{
    return qosTypeIsSet_;
}

void SearchQosParticipantDetailRequest::unsetqosType()
{
    qosTypeIsSet_ = false;
}

}
}
}
}
}


