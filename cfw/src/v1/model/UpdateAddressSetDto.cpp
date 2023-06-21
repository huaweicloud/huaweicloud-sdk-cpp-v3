

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
    addressType_ = 0;
    addressTypeIsSet_ = false;
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
    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
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
    if(val.has_field(utility::conversions::to_string_t("address_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressType(refVal);
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

int32_t UpdateAddressSetDto::getAddressType() const
{
    return addressType_;
}

void UpdateAddressSetDto::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool UpdateAddressSetDto::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void UpdateAddressSetDto::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

}
}
}
}
}


