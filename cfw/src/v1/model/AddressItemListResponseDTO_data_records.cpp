

#include "huaweicloud/cfw/v1/model/AddressItemListResponseDTO_data_records.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddressItemListResponseDTO_data_records::AddressItemListResponseDTO_data_records()
{
    itemId_ = "";
    itemIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
}

AddressItemListResponseDTO_data_records::~AddressItemListResponseDTO_data_records() = default;

void AddressItemListResponseDTO_data_records::validate()
{
}

web::json::value AddressItemListResponseDTO_data_records::toJson() const
{
    web::json::value val = web::json::value::object();

    if(itemIdIsSet_) {
        val[utility::conversions::to_string_t("item_id")] = ModelBase::toJson(itemId_);
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
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }

    return val;
}

bool AddressItemListResponseDTO_data_records::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("item_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    return ok;
}


std::string AddressItemListResponseDTO_data_records::getItemId() const
{
    return itemId_;
}

void AddressItemListResponseDTO_data_records::setItemId(const std::string& value)
{
    itemId_ = value;
    itemIdIsSet_ = true;
}

bool AddressItemListResponseDTO_data_records::itemIdIsSet() const
{
    return itemIdIsSet_;
}

void AddressItemListResponseDTO_data_records::unsetitemId()
{
    itemIdIsSet_ = false;
}

std::string AddressItemListResponseDTO_data_records::getName() const
{
    return name_;
}

void AddressItemListResponseDTO_data_records::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddressItemListResponseDTO_data_records::nameIsSet() const
{
    return nameIsSet_;
}

void AddressItemListResponseDTO_data_records::unsetname()
{
    nameIsSet_ = false;
}

std::string AddressItemListResponseDTO_data_records::getDescription() const
{
    return description_;
}

void AddressItemListResponseDTO_data_records::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddressItemListResponseDTO_data_records::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddressItemListResponseDTO_data_records::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t AddressItemListResponseDTO_data_records::getAddressType() const
{
    return addressType_;
}

void AddressItemListResponseDTO_data_records::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool AddressItemListResponseDTO_data_records::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void AddressItemListResponseDTO_data_records::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string AddressItemListResponseDTO_data_records::getAddress() const
{
    return address_;
}

void AddressItemListResponseDTO_data_records::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool AddressItemListResponseDTO_data_records::addressIsSet() const
{
    return addressIsSet_;
}

void AddressItemListResponseDTO_data_records::unsetaddress()
{
    addressIsSet_ = false;
}

}
}
}
}
}


