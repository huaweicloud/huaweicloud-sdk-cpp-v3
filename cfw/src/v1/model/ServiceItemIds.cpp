

#include "huaweicloud/cfw/v1/model/ServiceItemIds.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ServiceItemIds::ServiceItemIds()
{
    itemsIsSet_ = false;
}

ServiceItemIds::~ServiceItemIds() = default;

void ServiceItemIds::validate()
{
}

web::json::value ServiceItemIds::toJson() const
{
    web::json::value val = web::json::value::object();

    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}

bool ServiceItemIds::fromJson(const web::json::value& val)
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

std::vector<IdObject>& ServiceItemIds::getItems()
{
    return items_;
}

void ServiceItemIds::setItems(const std::vector<IdObject>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ServiceItemIds::itemsIsSet() const
{
    return itemsIsSet_;
}

void ServiceItemIds::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


