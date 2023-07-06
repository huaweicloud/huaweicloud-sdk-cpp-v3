

#include "huaweicloud/cfw/v1/model/AddAddressItemsInfoDto.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddAddressItemsInfoDto::AddAddressItemsInfoDto()
{
    setId_ = "";
    setIdIsSet_ = false;
    addressItemsIsSet_ = false;
}

AddAddressItemsInfoDto::~AddAddressItemsInfoDto() = default;

void AddAddressItemsInfoDto::validate()
{
}

web::json::value AddAddressItemsInfoDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
    if(addressItemsIsSet_) {
        val[utility::conversions::to_string_t("address_items")] = ModelBase::toJson(addressItems_);
    }

    return val;
}

bool AddAddressItemsInfoDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address_items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_items"));
        if(!fieldValue.is_null())
        {
            std::vector<AddAddressItemsInfoDto_address_items> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressItems(refVal);
        }
    }
    return ok;
}

std::string AddAddressItemsInfoDto::getSetId() const
{
    return setId_;
}

void AddAddressItemsInfoDto::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool AddAddressItemsInfoDto::setIdIsSet() const
{
    return setIdIsSet_;
}

void AddAddressItemsInfoDto::unsetsetId()
{
    setIdIsSet_ = false;
}

std::vector<AddAddressItemsInfoDto_address_items>& AddAddressItemsInfoDto::getAddressItems()
{
    return addressItems_;
}

void AddAddressItemsInfoDto::setAddressItems(const std::vector<AddAddressItemsInfoDto_address_items>& value)
{
    addressItems_ = value;
    addressItemsIsSet_ = true;
}

bool AddAddressItemsInfoDto::addressItemsIsSet() const
{
    return addressItemsIsSet_;
}

void AddAddressItemsInfoDto::unsetaddressItems()
{
    addressItemsIsSet_ = false;
}

}
}
}
}
}


