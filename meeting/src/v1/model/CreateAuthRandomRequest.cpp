

#include "huaweicloud/meeting/v1/model/CreateAuthRandomRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




CreateAuthRandomRequest::CreateAuthRandomRequest()
{
    confId_ = "";
    confIdIsSet_ = false;
    guestWaiting_ = 0;
    guestWaitingIsSet_ = false;
    xPassword_ = "";
    xPasswordIsSet_ = false;
}

CreateAuthRandomRequest::~CreateAuthRandomRequest() = default;

void CreateAuthRandomRequest::validate()
{
}

web::json::value CreateAuthRandomRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confIdIsSet_) {
        val[utility::conversions::to_string_t("conf_id")] = ModelBase::toJson(confId_);
    }
    if(guestWaitingIsSet_) {
        val[utility::conversions::to_string_t("guest_waiting")] = ModelBase::toJson(guestWaiting_);
    }
    if(xPasswordIsSet_) {
        val[utility::conversions::to_string_t("X-Password")] = ModelBase::toJson(xPassword_);
    }

    return val;
}
bool CreateAuthRandomRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conf_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conf_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("guest_waiting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("guest_waiting"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGuestWaiting(refVal);
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


std::string CreateAuthRandomRequest::getConfId() const
{
    return confId_;
}

void CreateAuthRandomRequest::setConfId(const std::string& value)
{
    confId_ = value;
    confIdIsSet_ = true;
}

bool CreateAuthRandomRequest::confIdIsSet() const
{
    return confIdIsSet_;
}

void CreateAuthRandomRequest::unsetconfId()
{
    confIdIsSet_ = false;
}

int32_t CreateAuthRandomRequest::getGuestWaiting() const
{
    return guestWaiting_;
}

void CreateAuthRandomRequest::setGuestWaiting(int32_t value)
{
    guestWaiting_ = value;
    guestWaitingIsSet_ = true;
}

bool CreateAuthRandomRequest::guestWaitingIsSet() const
{
    return guestWaitingIsSet_;
}

void CreateAuthRandomRequest::unsetguestWaiting()
{
    guestWaitingIsSet_ = false;
}

std::string CreateAuthRandomRequest::getXPassword() const
{
    return xPassword_;
}

void CreateAuthRandomRequest::setXPassword(const std::string& value)
{
    xPassword_ = value;
    xPasswordIsSet_ = true;
}

bool CreateAuthRandomRequest::xPasswordIsSet() const
{
    return xPasswordIsSet_;
}

void CreateAuthRandomRequest::unsetxPassword()
{
    xPasswordIsSet_ = false;
}

}
}
}
}
}


