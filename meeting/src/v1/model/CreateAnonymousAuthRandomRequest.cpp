

#include "huaweicloud/meeting/v1/model/CreateAnonymousAuthRandomRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateAnonymousAuthRandomRequest::CreateAnonymousAuthRandomRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xPassword_ = "";
    xPasswordIsSet_ = false;
}

CreateAnonymousAuthRandomRequest::~CreateAnonymousAuthRandomRequest() = default;

void CreateAnonymousAuthRandomRequest::validate()
{
}

web::json::value CreateAnonymousAuthRandomRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(xPasswordIsSet_) {
        val[utility::conversions::to_string_t("X-Password")] = ModelBase::toJson(xPassword_);
    }

    return val;
}
bool CreateAnonymousAuthRandomRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXPassword(refVal);
        }
    }
    return ok;
}


std::string CreateAnonymousAuthRandomRequest::getConferenceID() const
{
    return conferenceID_;
}

void CreateAnonymousAuthRandomRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool CreateAnonymousAuthRandomRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void CreateAnonymousAuthRandomRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string CreateAnonymousAuthRandomRequest::getXPassword() const
{
    return xPassword_;
}

void CreateAnonymousAuthRandomRequest::setXPassword(const std::string& value)
{
    xPassword_ = value;
    xPasswordIsSet_ = true;
}

bool CreateAnonymousAuthRandomRequest::xPasswordIsSet() const
{
    return xPasswordIsSet_;
}

void CreateAnonymousAuthRandomRequest::unsetxPassword()
{
    xPasswordIsSet_ = false;
}

}
}
}
}
}


