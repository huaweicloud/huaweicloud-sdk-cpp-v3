

#include "huaweicloud/cfw/v1/model/UpdateAddressSetDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAddressSetDto::UpdateAddressSetDto()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

UpdateAddressSetDto::~UpdateAddressSetDto() = default;

void UpdateAddressSetDto::validate()
{
}

web::json::value UpdateAddressSetDto::toJson() const
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
bool UpdateAddressSetDto::fromJson(const web::json::value& val)
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


std::string UpdateAddressSetDto::getName() const
{
    return name_;
}

void UpdateAddressSetDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateAddressSetDto::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateAddressSetDto::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateAddressSetDto::getDescription() const
{
    return description_;
}

void UpdateAddressSetDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateAddressSetDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateAddressSetDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


