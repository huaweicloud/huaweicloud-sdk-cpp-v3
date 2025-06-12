

#include "huaweicloud/ecs/v2/model/UpdateServerOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerOption::UpdateServerOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    hostname_ = "";
    hostnameIsSet_ = false;
    securityOptionsIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
}

UpdateServerOption::~UpdateServerOption() = default;

void UpdateServerOption::validate()
{
}

web::json::value UpdateServerOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(hostnameIsSet_) {
        val[utility::conversions::to_string_t("hostname")] = ModelBase::toJson(hostname_);
    }
    if(securityOptionsIsSet_) {
        val[utility::conversions::to_string_t("security_options")] = ModelBase::toJson(securityOptions_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }

    return val;
}
bool UpdateServerOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hostname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_options"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_options"));
        if(!fieldValue.is_null())
        {
            SecurityOptions refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    return ok;
}


std::string UpdateServerOption::getName() const
{
    return name_;
}

void UpdateServerOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateServerOption::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateServerOption::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateServerOption::getDescription() const
{
    return description_;
}

void UpdateServerOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateServerOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateServerOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateServerOption::getHostname() const
{
    return hostname_;
}

void UpdateServerOption::setHostname(const std::string& value)
{
    hostname_ = value;
    hostnameIsSet_ = true;
}

bool UpdateServerOption::hostnameIsSet() const
{
    return hostnameIsSet_;
}

void UpdateServerOption::unsethostname()
{
    hostnameIsSet_ = false;
}

SecurityOptions UpdateServerOption::getSecurityOptions() const
{
    return securityOptions_;
}

void UpdateServerOption::setSecurityOptions(const SecurityOptions& value)
{
    securityOptions_ = value;
    securityOptionsIsSet_ = true;
}

bool UpdateServerOption::securityOptionsIsSet() const
{
    return securityOptionsIsSet_;
}

void UpdateServerOption::unsetsecurityOptions()
{
    securityOptionsIsSet_ = false;
}

std::string UpdateServerOption::getUserData() const
{
    return userData_;
}

void UpdateServerOption::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool UpdateServerOption::userDataIsSet() const
{
    return userDataIsSet_;
}

void UpdateServerOption::unsetuserData()
{
    userDataIsSet_ = false;
}

}
}
}
}
}


