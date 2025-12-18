

#include "huaweicloud/meeting/v1/model/CreateWebSocketTokenRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateWebSocketTokenRequest::CreateWebSocketTokenRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
}

CreateWebSocketTokenRequest::~CreateWebSocketTokenRequest() = default;

void CreateWebSocketTokenRequest::validate()
{
}

web::json::value CreateWebSocketTokenRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(xConferenceAuthorizationIsSet_) {
        val[utility::conversions::to_string_t("X-Conference-Authorization")] = ModelBase::toJson(xConferenceAuthorization_);
    }

    return val;
}
bool CreateWebSocketTokenRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateWebSocketTokenRequest::getConferenceID() const
{
    return conferenceID_;
}

void CreateWebSocketTokenRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool CreateWebSocketTokenRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void CreateWebSocketTokenRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string CreateWebSocketTokenRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void CreateWebSocketTokenRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool CreateWebSocketTokenRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void CreateWebSocketTokenRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

}
}
}
}
}


