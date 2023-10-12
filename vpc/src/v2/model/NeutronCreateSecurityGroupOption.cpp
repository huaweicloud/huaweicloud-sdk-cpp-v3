

#include "huaweicloud/vpc/v2/model/NeutronCreateSecurityGroupOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateSecurityGroupOption::NeutronCreateSecurityGroupOption()
{
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

NeutronCreateSecurityGroupOption::~NeutronCreateSecurityGroupOption() = default;

void NeutronCreateSecurityGroupOption::validate()
{
}

web::json::value NeutronCreateSecurityGroupOption::toJson() const
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
bool NeutronCreateSecurityGroupOption::fromJson(const web::json::value& val)
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


std::string NeutronCreateSecurityGroupOption::getDescription() const
{
    return description_;
}

void NeutronCreateSecurityGroupOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronCreateSecurityGroupOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronCreateSecurityGroupOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronCreateSecurityGroupOption::getName() const
{
    return name_;
}

void NeutronCreateSecurityGroupOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronCreateSecurityGroupOption::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronCreateSecurityGroupOption::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


