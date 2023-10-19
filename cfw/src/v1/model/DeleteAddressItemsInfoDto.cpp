

#include "huaweicloud/cfw/v1/model/DeleteAddressItemsInfoDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteAddressItemsInfoDto::DeleteAddressItemsInfoDto()
{
    setId_ = "";
    setIdIsSet_ = false;
    addressItemIdsIsSet_ = false;
}

DeleteAddressItemsInfoDto::~DeleteAddressItemsInfoDto() = default;

void DeleteAddressItemsInfoDto::validate()
{
}

web::json::value DeleteAddressItemsInfoDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
    if(addressItemIdsIsSet_) {
        val[utility::conversions::to_string_t("address_item_ids")] = ModelBase::toJson(addressItemIds_);
    }

    return val;
}
bool DeleteAddressItemsInfoDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("address_item_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_item_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressItemIds(refVal);
        }
    }
    return ok;
}


std::string DeleteAddressItemsInfoDto::getSetId() const
{
    return setId_;
}

void DeleteAddressItemsInfoDto::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool DeleteAddressItemsInfoDto::setIdIsSet() const
{
    return setIdIsSet_;
}

void DeleteAddressItemsInfoDto::unsetsetId()
{
    setIdIsSet_ = false;
}

std::vector<std::string>& DeleteAddressItemsInfoDto::getAddressItemIds()
{
    return addressItemIds_;
}

void DeleteAddressItemsInfoDto::setAddressItemIds(const std::vector<std::string>& value)
{
    addressItemIds_ = value;
    addressItemIdsIsSet_ = true;
}

bool DeleteAddressItemsInfoDto::addressItemIdsIsSet() const
{
    return addressItemIdsIsSet_;
}

void DeleteAddressItemsInfoDto::unsetaddressItemIds()
{
    addressItemIdsIsSet_ = false;
}

}
}
}
}
}


