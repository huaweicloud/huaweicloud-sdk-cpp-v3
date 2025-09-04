

#include "huaweicloud/iotdm/v5/model/IpAllowList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




IpAllowList::IpAllowList()
{
    address_ = "";
    addressIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
}

IpAllowList::~IpAllowList() = default;

void IpAllowList::validate()
{
}

web::json::value IpAllowList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }

    return val;
}
bool IpAllowList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string IpAllowList::getAddress() const
{
    return address_;
}

void IpAllowList::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool IpAllowList::addressIsSet() const
{
    return addressIsSet_;
}

void IpAllowList::unsetaddress()
{
    addressIsSet_ = false;
}

std::string IpAllowList::getDescription() const
{
    return description_;
}

void IpAllowList::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool IpAllowList::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void IpAllowList::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


