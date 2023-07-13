

#include "huaweicloud/cfw/v1/model/AddressSetDetailResponseDTO_data.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddressSetDetailResponseDTO_data::AddressSetDetailResponseDTO_data()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
}

AddressSetDetailResponseDTO_data::~AddressSetDetailResponseDTO_data() = default;

void AddressSetDetailResponseDTO_data::validate()
{
}

web::json::value AddressSetDetailResponseDTO_data::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
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

bool AddressSetDetailResponseDTO_data::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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

std::string AddressSetDetailResponseDTO_data::getId() const
{
    return id_;
}

void AddressSetDetailResponseDTO_data::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AddressSetDetailResponseDTO_data::idIsSet() const
{
    return idIsSet_;
}

void AddressSetDetailResponseDTO_data::unsetid()
{
    idIsSet_ = false;
}

std::string AddressSetDetailResponseDTO_data::getName() const
{
    return name_;
}

void AddressSetDetailResponseDTO_data::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddressSetDetailResponseDTO_data::nameIsSet() const
{
    return nameIsSet_;
}

void AddressSetDetailResponseDTO_data::unsetname()
{
    nameIsSet_ = false;
}

std::string AddressSetDetailResponseDTO_data::getDescription() const
{
    return description_;
}

void AddressSetDetailResponseDTO_data::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddressSetDetailResponseDTO_data::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddressSetDetailResponseDTO_data::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t AddressSetDetailResponseDTO_data::getAddressType() const
{
    return addressType_;
}

void AddressSetDetailResponseDTO_data::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool AddressSetDetailResponseDTO_data::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void AddressSetDetailResponseDTO_data::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

}
}
}
}
}


