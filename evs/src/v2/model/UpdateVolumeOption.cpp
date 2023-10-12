

#include "huaweicloud/evs/v2/model/UpdateVolumeOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateVolumeOption::UpdateVolumeOption()
{
    description_ = "";
    descriptionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

UpdateVolumeOption::~UpdateVolumeOption() = default;

void UpdateVolumeOption::validate()
{
}

web::json::value UpdateVolumeOption::toJson() const
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
bool UpdateVolumeOption::fromJson(const web::json::value& val)
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


std::string UpdateVolumeOption::getDescription() const
{
    return description_;
}

void UpdateVolumeOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateVolumeOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateVolumeOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateVolumeOption::getName() const
{
    return name_;
}

void UpdateVolumeOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateVolumeOption::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateVolumeOption::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


