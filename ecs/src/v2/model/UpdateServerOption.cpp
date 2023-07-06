

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

}
}
}
}
}


