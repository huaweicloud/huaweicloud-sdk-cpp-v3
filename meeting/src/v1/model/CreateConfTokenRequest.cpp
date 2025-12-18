

#include "huaweicloud/meeting/v1/model/CreateConfTokenRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateConfTokenRequest::CreateConfTokenRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    xConferenceAuthorization_ = "";
    xConferenceAuthorizationIsSet_ = false;
    xPassword_ = "";
    xPasswordIsSet_ = false;
    xLoginType_ = 0;
    xLoginTypeIsSet_ = false;
    xNonce_ = "";
    xNonceIsSet_ = false;
}

CreateConfTokenRequest::~CreateConfTokenRequest() = default;

void CreateConfTokenRequest::validate()
{
}

web::json::value CreateConfTokenRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
    }
    if(xConferenceAuthorizationIsSet_) {
        val[utility::conversions::to_string_t("X-Conference-Authorization")] = ModelBase::toJson(xConferenceAuthorization_);
    }
    if(xPasswordIsSet_) {
        val[utility::conversions::to_string_t("X-Password")] = ModelBase::toJson(xPassword_);
    }
    if(xLoginTypeIsSet_) {
        val[utility::conversions::to_string_t("X-Login-Type")] = ModelBase::toJson(xLoginType_);
    }
    if(xNonceIsSet_) {
        val[utility::conversions::to_string_t("X-Nonce")] = ModelBase::toJson(xNonce_);
    }

    return val;
}
bool CreateConfTokenRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Login-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Login-Type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLoginType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Nonce"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Nonce"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXNonce(refVal);
        }
    }
    return ok;
}


std::string CreateConfTokenRequest::getConferenceID() const
{
    return conferenceID_;
}

void CreateConfTokenRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool CreateConfTokenRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void CreateConfTokenRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

std::string CreateConfTokenRequest::getXConferenceAuthorization() const
{
    return xConferenceAuthorization_;
}

void CreateConfTokenRequest::setXConferenceAuthorization(const std::string& value)
{
    xConferenceAuthorization_ = value;
    xConferenceAuthorizationIsSet_ = true;
}

bool CreateConfTokenRequest::xConferenceAuthorizationIsSet() const
{
    return xConferenceAuthorizationIsSet_;
}

void CreateConfTokenRequest::unsetxConferenceAuthorization()
{
    xConferenceAuthorizationIsSet_ = false;
}

std::string CreateConfTokenRequest::getXPassword() const
{
    return xPassword_;
}

void CreateConfTokenRequest::setXPassword(const std::string& value)
{
    xPassword_ = value;
    xPasswordIsSet_ = true;
}

bool CreateConfTokenRequest::xPasswordIsSet() const
{
    return xPasswordIsSet_;
}

void CreateConfTokenRequest::unsetxPassword()
{
    xPasswordIsSet_ = false;
}

int32_t CreateConfTokenRequest::getXLoginType() const
{
    return xLoginType_;
}

void CreateConfTokenRequest::setXLoginType(int32_t value)
{
    xLoginType_ = value;
    xLoginTypeIsSet_ = true;
}

bool CreateConfTokenRequest::xLoginTypeIsSet() const
{
    return xLoginTypeIsSet_;
}

void CreateConfTokenRequest::unsetxLoginType()
{
    xLoginTypeIsSet_ = false;
}

std::string CreateConfTokenRequest::getXNonce() const
{
    return xNonce_;
}

void CreateConfTokenRequest::setXNonce(const std::string& value)
{
    xNonce_ = value;
    xNonceIsSet_ = true;
}

bool CreateConfTokenRequest::xNonceIsSet() const
{
    return xNonceIsSet_;
}

void CreateConfTokenRequest::unsetxNonce()
{
    xNonceIsSet_ = false;
}

}
}
}
}
}


