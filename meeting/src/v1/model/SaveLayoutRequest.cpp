

#include "huaweicloud/meeting/v1/model/SaveLayoutRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SaveLayoutRequest::SaveLayoutRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

SaveLayoutRequest::~SaveLayoutRequest() = default;

void SaveLayoutRequest::validate()
{
}

web::json::value SaveLayoutRequest::toJson() const
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
bool SaveLayoutRequest::fromJson(const web::json::value& val)
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
            RestPicLayoutBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SaveLayoutRequest::getConferenceID() const
{
    return conferenceID_;
}

void SaveLayoutRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool SaveLayoutRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void SaveLayoutRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string SaveLayoutRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void SaveLayoutRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool SaveLayoutRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void SaveLayoutRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

RestPicLayoutBody SaveLayoutRequest::getBody() const
{
    return body_;
}

void SaveLayoutRequest::setBody(const RestPicLayoutBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveLayoutRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveLayoutRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


