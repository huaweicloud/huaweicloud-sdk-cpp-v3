

#include "huaweicloud/meeting/v1/model/StartRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




StartRequest::StartRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

StartRequest::~StartRequest() = default;

void StartRequest::validate()
{
}

web::json::value StartRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool StartRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    return ok;
}


std::string StartRequest::getConferenceID() const
{
    return conferenceID_;
}

void StartRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool StartRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void StartRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string StartRequest::getPassword() const
{
    return password_;
}

void StartRequest::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool StartRequest::passwordIsSet() const
{
    return passwordIsSet_;
}

void StartRequest::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


