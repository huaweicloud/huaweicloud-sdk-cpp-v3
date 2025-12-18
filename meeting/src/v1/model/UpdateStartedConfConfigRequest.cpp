

#include "huaweicloud/meeting/v1/model/UpdateStartedConfConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




UpdateStartedConfConfigRequest::UpdateStartedConfConfigRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateStartedConfConfigRequest::~UpdateStartedConfConfigRequest() = default;

void UpdateStartedConfConfigRequest::validate()
{
}

web::json::value UpdateStartedConfConfigRequest::toJson() const
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
bool UpdateStartedConfConfigRequest::fromJson(const web::json::value& val)
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
            UpdateStartedConfigReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateStartedConfConfigRequest::getConferenceID() const
{
    return conferenceID_;
}

void UpdateStartedConfConfigRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool UpdateStartedConfConfigRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void UpdateStartedConfConfigRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string UpdateStartedConfConfigRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void UpdateStartedConfConfigRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool UpdateStartedConfConfigRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void UpdateStartedConfConfigRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

UpdateStartedConfigReqBody UpdateStartedConfConfigRequest::getBody() const
{
    return body_;
}

void UpdateStartedConfConfigRequest::setBody(const UpdateStartedConfigReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateStartedConfConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateStartedConfConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


