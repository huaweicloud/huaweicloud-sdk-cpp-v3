

#include "huaweicloud/meeting/v1/model/InviteWithPwdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




InviteWithPwdRequest::InviteWithPwdRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    bodyIsSet_ = false;
}

InviteWithPwdRequest::~InviteWithPwdRequest() = default;

void InviteWithPwdRequest::validate()
{
}

web::json::value InviteWithPwdRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool InviteWithPwdRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            RestInviteWithPwdReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string InviteWithPwdRequest::getConferenceID() const
{
    return conferenceID_;
}

void InviteWithPwdRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool InviteWithPwdRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void InviteWithPwdRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

RestInviteWithPwdReqBody InviteWithPwdRequest::getBody() const
{
    return body_;
}

void InviteWithPwdRequest::setBody(const RestInviteWithPwdReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool InviteWithPwdRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void InviteWithPwdRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


