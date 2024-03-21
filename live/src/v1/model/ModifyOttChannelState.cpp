

#include "huaweicloud/live/v1/model/ModifyOttChannelState.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelState::ModifyOttChannelState()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
}

ModifyOttChannelState::~ModifyOttChannelState() = default;

void ModifyOttChannelState::validate()
{
}

web::json::value ModifyOttChannelState::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }

    return val;
}
bool ModifyOttChannelState::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    return ok;
}


std::string ModifyOttChannelState::getDomain() const
{
    return domain_;
}

void ModifyOttChannelState::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ModifyOttChannelState::domainIsSet() const
{
    return domainIsSet_;
}

void ModifyOttChannelState::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ModifyOttChannelState::getAppName() const
{
    return appName_;
}

void ModifyOttChannelState::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ModifyOttChannelState::appNameIsSet() const
{
    return appNameIsSet_;
}

void ModifyOttChannelState::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ModifyOttChannelState::getId() const
{
    return id_;
}

void ModifyOttChannelState::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyOttChannelState::idIsSet() const
{
    return idIsSet_;
}

void ModifyOttChannelState::unsetid()
{
    idIsSet_ = false;
}

std::string ModifyOttChannelState::getState() const
{
    return state_;
}

void ModifyOttChannelState::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ModifyOttChannelState::stateIsSet() const
{
    return stateIsSet_;
}

void ModifyOttChannelState::unsetstate()
{
    stateIsSet_ = false;
}

}
}
}
}
}


