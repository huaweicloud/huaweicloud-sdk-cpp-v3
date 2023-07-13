

#include "huaweicloud/cfw/v1/model/AddressItems.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddressItems::AddressItems()
{
    itemsIsSet_ = false;
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

}
}
}
}
}


