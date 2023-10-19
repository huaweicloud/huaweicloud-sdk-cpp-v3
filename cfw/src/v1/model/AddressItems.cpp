

#include "huaweicloud/cfw/v1/model/AddressItems.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddressItems::AddressItems()
{
    itemsIsSet_ = false;
    coveredIpIsSet_ = false;
}

AddressItems::~AddressItems() = default;

void AddressItems::validate()
{
}

web::json::value AddressItems::toJson() const
{
    web::json::value val = web::json::value::object();

    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }
    if(coveredIpIsSet_) {
        val[utility::conversions::to_string_t("covered_ip")] = ModelBase::toJson(coveredIp_);
    }

    return val;
}
bool AddressItems::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<IdObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("covered_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("covered_ip"));
        if(!fieldValue.is_null())
        {
            std::vector<CoveredIPVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCoveredIp(refVal);
        }
    }
    return ok;
}


std::vector<IdObject>& AddressItems::getItems()
{
    return items_;
}

void AddressItems::setItems(const std::vector<IdObject>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool AddressItems::itemsIsSet() const
{
    return itemsIsSet_;
}

void AddressItems::unsetitems()
{
    itemsIsSet_ = false;
}

std::vector<CoveredIPVO>& AddressItems::getCoveredIp()
{
    return coveredIp_;
}

void AddressItems::setCoveredIp(const std::vector<CoveredIPVO>& value)
{
    coveredIp_ = value;
    coveredIpIsSet_ = true;
}

bool AddressItems::coveredIpIsSet() const
{
    return coveredIpIsSet_;
}

void AddressItems::unsetcoveredIp()
{
    coveredIpIsSet_ = false;
}

}
}
}
}
}


