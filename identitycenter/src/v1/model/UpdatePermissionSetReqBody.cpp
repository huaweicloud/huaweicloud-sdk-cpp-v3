

#include "huaweicloud/identitycenter/v1/model/UpdatePermissionSetReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdatePermissionSetReqBody::UpdatePermissionSetReqBody()
{
    description_ = "";
    descriptionIsSet_ = false;
    relayState_ = "";
    relayStateIsSet_ = false;
    sessionDuration_ = "";
    sessionDurationIsSet_ = false;
}

UpdatePermissionSetReqBody::~UpdatePermissionSetReqBody() = default;

void UpdatePermissionSetReqBody::validate()
{
}

web::json::value UpdatePermissionSetReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(relayStateIsSet_) {
        val[utility::conversions::to_string_t("relay_state")] = ModelBase::toJson(relayState_);
    }
    if(sessionDurationIsSet_) {
        val[utility::conversions::to_string_t("session_duration")] = ModelBase::toJson(sessionDuration_);
    }

    return val;
}
bool UpdatePermissionSetReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relay_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relay_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelayState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionDuration(refVal);
        }
    }
    return ok;
}


std::string UpdatePermissionSetReqBody::getDescription() const
{
    return description_;
}

void UpdatePermissionSetReqBody::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdatePermissionSetReqBody::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdatePermissionSetReqBody::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdatePermissionSetReqBody::getRelayState() const
{
    return relayState_;
}

void UpdatePermissionSetReqBody::setRelayState(const std::string& value)
{
    relayState_ = value;
    relayStateIsSet_ = true;
}

bool UpdatePermissionSetReqBody::relayStateIsSet() const
{
    return relayStateIsSet_;
}

void UpdatePermissionSetReqBody::unsetrelayState()
{
    relayStateIsSet_ = false;
}

std::string UpdatePermissionSetReqBody::getSessionDuration() const
{
    return sessionDuration_;
}

void UpdatePermissionSetReqBody::setSessionDuration(const std::string& value)
{
    sessionDuration_ = value;
    sessionDurationIsSet_ = true;
}

bool UpdatePermissionSetReqBody::sessionDurationIsSet() const
{
    return sessionDurationIsSet_;
}

void UpdatePermissionSetReqBody::unsetsessionDuration()
{
    sessionDurationIsSet_ = false;
}

}
}
}
}
}


