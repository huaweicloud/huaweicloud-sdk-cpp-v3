

#include "huaweicloud/vpc/v2/model/UpdateVpcPeeringOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateVpcPeeringOption::UpdateVpcPeeringOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateVpcPeeringOption::~UpdateVpcPeeringOption() = default;

void UpdateVpcPeeringOption::validate()
{
}

web::json::value UpdateVpcPeeringOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}

bool UpdateVpcPeeringOption::fromJson(const web::json::value& val)
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
    return ok;
}

std::string UpdateVpcPeeringOption::getName() const
{
    return name_;
}

void UpdateVpcPeeringOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateVpcPeeringOption::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateVpcPeeringOption::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateVpcPeeringOption::getDescription() const
{
    return description_;
}

void UpdateVpcPeeringOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateVpcPeeringOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateVpcPeeringOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


