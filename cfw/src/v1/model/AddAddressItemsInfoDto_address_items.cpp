

#include "huaweicloud/cfw/v1/model/AddAddressItemsInfoDto_address_items.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddAddressItemsInfoDto_address_items::AddAddressItemsInfoDto_address_items()
{
    addressType_ = 0;
    addressTypeIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

AddAddressItemsInfoDto_address_items::~AddAddressItemsInfoDto_address_items() = default;

void AddAddressItemsInfoDto_address_items::validate()
{
}

web::json::value AddAddressItemsInfoDto_address_items::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool AddAddressItemsInfoDto_address_items::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("address_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
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


int32_t AddAddressItemsInfoDto_address_items::getAddressType() const
{
    return addressType_;
}

void AddAddressItemsInfoDto_address_items::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool AddAddressItemsInfoDto_address_items::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void AddAddressItemsInfoDto_address_items::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string AddAddressItemsInfoDto_address_items::getAddress() const
{
    return address_;
}

void AddAddressItemsInfoDto_address_items::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool AddAddressItemsInfoDto_address_items::addressIsSet() const
{
    return addressIsSet_;
}

void AddAddressItemsInfoDto_address_items::unsetaddress()
{
    addressIsSet_ = false;
}

std::string AddAddressItemsInfoDto_address_items::getDescription() const
{
    return description_;
}

void AddAddressItemsInfoDto_address_items::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddAddressItemsInfoDto_address_items::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddAddressItemsInfoDto_address_items::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


