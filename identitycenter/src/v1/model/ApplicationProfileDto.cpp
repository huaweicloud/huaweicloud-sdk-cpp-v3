

#include "huaweicloud/identitycenter/v1/model/ApplicationProfileDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ApplicationProfileDto::ApplicationProfileDto()
{
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    profileId_ = "";
    profileIdIsSet_ = false;
}

ApplicationProfileDto::~ApplicationProfileDto() = default;

void ApplicationProfileDto::validate()
{
}

web::json::value ApplicationProfileDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(profileIdIsSet_) {
        val[utility::conversions::to_string_t("profile_id")] = ModelBase::toJson(profileId_);
    }

    return val;
}
bool ApplicationProfileDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("profile_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfileId(refVal);
        }
    }
    return ok;
}


std::string ApplicationProfileDto::getName() const
{
    return name_;
}

void ApplicationProfileDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ApplicationProfileDto::nameIsSet() const
{
    return nameIsSet_;
}

void ApplicationProfileDto::unsetname()
{
    nameIsSet_ = false;
}

std::string ApplicationProfileDto::getStatus() const
{
    return status_;
}

void ApplicationProfileDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ApplicationProfileDto::statusIsSet() const
{
    return statusIsSet_;
}

void ApplicationProfileDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ApplicationProfileDto::getProfileId() const
{
    return profileId_;
}

void ApplicationProfileDto::setProfileId(const std::string& value)
{
    profileId_ = value;
    profileIdIsSet_ = true;
}

bool ApplicationProfileDto::profileIdIsSet() const
{
    return profileIdIsSet_;
}

void ApplicationProfileDto::unsetprofileId()
{
    profileIdIsSet_ = false;
}

}
}
}
}
}


