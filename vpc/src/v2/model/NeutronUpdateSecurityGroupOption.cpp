

#include "huaweicloud/vpc/v2/model/NeutronUpdateSecurityGroupOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateSecurityGroupOption::NeutronUpdateSecurityGroupOption()
{
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

NeutronUpdateSecurityGroupOption::~NeutronUpdateSecurityGroupOption() = default;

void NeutronUpdateSecurityGroupOption::validate()
{
}

web::json::value NeutronUpdateSecurityGroupOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool NeutronUpdateSecurityGroupOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string NeutronUpdateSecurityGroupOption::getDescription() const
{
    return description_;
}

void NeutronUpdateSecurityGroupOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronUpdateSecurityGroupOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronUpdateSecurityGroupOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronUpdateSecurityGroupOption::getName() const
{
    return name_;
}

void NeutronUpdateSecurityGroupOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronUpdateSecurityGroupOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronUpdateSecurityGroupOption::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


