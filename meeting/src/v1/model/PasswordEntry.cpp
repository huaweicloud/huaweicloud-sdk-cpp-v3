

#include "huaweicloud/meeting/v1/model/PasswordEntry.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




PasswordEntry::PasswordEntry()
{
    conferenceRole_ = "";
    conferenceRoleIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

PasswordEntry::~PasswordEntry() = default;

void PasswordEntry::validate()
{
}

web::json::value PasswordEntry::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceRoleIsSet_) {
        val[utility::conversions::to_string_t("conferenceRole")] = ModelBase::toJson(conferenceRole_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool PasswordEntry::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conferenceRole"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceRole"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceRole(refVal);
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


std::string PasswordEntry::getConferenceRole() const
{
    return conferenceRole_;
}

void PasswordEntry::setConferenceRole(const std::string& value)
{
    conferenceRole_ = value;
    conferenceRoleIsSet_ = true;
}

bool PasswordEntry::conferenceRoleIsSet() const
{
    return conferenceRoleIsSet_;
}

void PasswordEntry::unsetconferenceRole()
{
    conferenceRoleIsSet_ = false;
}

std::string PasswordEntry::getPassword() const
{
    return password_;
}

void PasswordEntry::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool PasswordEntry::passwordIsSet() const
{
    return passwordIsSet_;
}

void PasswordEntry::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


