

#include "huaweicloud/ga/v1/model/UpdateAcceleratorOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




UpdateAcceleratorOption::UpdateAcceleratorOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateAcceleratorOption::~UpdateAcceleratorOption() = default;

void UpdateAcceleratorOption::validate()
{
}

web::json::value UpdateAcceleratorOption::toJson() const
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
bool UpdateAcceleratorOption::fromJson(const web::json::value& val)
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


std::string UpdateAcceleratorOption::getName() const
{
    return name_;
}

void UpdateAcceleratorOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateAcceleratorOption::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateAcceleratorOption::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateAcceleratorOption::getDescription() const
{
    return description_;
}

void UpdateAcceleratorOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateAcceleratorOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateAcceleratorOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


