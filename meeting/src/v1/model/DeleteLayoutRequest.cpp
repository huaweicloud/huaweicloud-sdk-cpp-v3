

#include "huaweicloud/meeting/v1/model/DeleteLayoutRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DeleteLayoutRequest::DeleteLayoutRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    uuID_ = "";
    uuIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
}

DeleteLayoutRequest::~DeleteLayoutRequest() = default;

void DeleteLayoutRequest::validate()
{
}

web::json::value DeleteLayoutRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(uuIDIsSet_) {
        val[utility::conversions::to_string_t("uuID")] = ModelBase::toJson(uuID_);
    }
    if(xConferenceAuthorizationIsSet_) {
        val[utility::conversions::to_string_t("X-Conference-Authorization")] = ModelBase::toJson(xConferenceAuthorization_);
    }

    return val;
}
bool DeleteLayoutRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("uuID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuID(refVal);
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


std::string DeleteLayoutRequest::getConferenceID() const
{
    return conferenceID_;
}

void DeleteLayoutRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool DeleteLayoutRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void DeleteLayoutRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string DeleteLayoutRequest::getUuID() const
{
    return uuID_;
}

void DeleteLayoutRequest::setUuID(const std::string& value)
{
    uuID_ = value;
    uuIDIsSet_ = true;
}

bool DeleteLayoutRequest::uuIDIsSet() const
{
    return uuIDIsSet_;
}

void DeleteLayoutRequest::unsetuuID()
{
    uuIDIsSet_ = false;
}

std::string DeleteLayoutRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void DeleteLayoutRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool DeleteLayoutRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void DeleteLayoutRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

}
}
}
}
}


