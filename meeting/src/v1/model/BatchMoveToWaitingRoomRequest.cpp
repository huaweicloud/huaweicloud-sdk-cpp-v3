

#include "huaweicloud/meeting/v1/model/BatchMoveToWaitingRoomRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




BatchMoveToWaitingRoomRequest::BatchMoveToWaitingRoomRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

BatchMoveToWaitingRoomRequest::~BatchMoveToWaitingRoomRequest() = default;

void BatchMoveToWaitingRoomRequest::validate()
{
}

web::json::value BatchMoveToWaitingRoomRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(xConferenceAuthorizationIsSet_) {
        val[utility::conversions::to_string_t("X-Conference-Authorization")] = ModelBase::toJson(xConferenceAuthorization_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchMoveToWaitingRoomRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RestBatchMoveToWaitingRoomReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchMoveToWaitingRoomRequest::getConferenceID() const
{
    return conferenceID_;
}

void BatchMoveToWaitingRoomRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool BatchMoveToWaitingRoomRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void BatchMoveToWaitingRoomRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string BatchMoveToWaitingRoomRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void BatchMoveToWaitingRoomRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool BatchMoveToWaitingRoomRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void BatchMoveToWaitingRoomRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestBatchMoveToWaitingRoomReqBody BatchMoveToWaitingRoomRequest::getBody() const
{
    return body_;
}

void BatchMoveToWaitingRoomRequest::setBody(const RestBatchMoveToWaitingRoomReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchMoveToWaitingRoomRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchMoveToWaitingRoomRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


