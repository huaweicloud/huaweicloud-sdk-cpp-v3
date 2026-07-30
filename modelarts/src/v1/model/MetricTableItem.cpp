

#include "huaweicloud/modelarts/v1/model/MetricTableItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




MetricTableItem::MetricTableItem()
{
    allocatedIsSet_ = false;
    capacityIsSet_ = false;
}

MetricTableItem::~MetricTableItem() = default;

void MetricTableItem::validate()
{
}

web::json::value MetricTableItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allocatedIsSet_) {
        val[utility::conversions::to_string_t("allocated")] = ModelBase::toJson(allocated_);
    }
    if(capacityIsSet_) {
        val[utility::conversions::to_string_t("capacity")] = ModelBase::toJson(capacity_);
    }

    return val;
}
bool MetricTableItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("allocated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allocated"));
        if(!fieldValue.is_null())
        {
            Allocated refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllocated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("capacity"));
        if(!fieldValue.is_null())
        {
            Capacity refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCapacity(refVal);
        }
    }
    return ok;
}


Allocated MetricTableItem::getAllocated() const
{
    return allocated_;
}

void MetricTableItem::setAllocated(const Allocated& value)
{
    allocated_ = value;
    allocatedIsSet_ = true;
}

bool MetricTableItem::allocatedIsSet() const
{
    return allocatedIsSet_;
}

void MetricTableItem::unsetallocated()
{
    allocatedIsSet_ = false;
}

Capacity MetricTableItem::getCapacity() const
{
    return capacity_;
}

void MetricTableItem::setCapacity(const Capacity& value)
{
    capacity_ = value;
    capacityIsSet_ = true;
}

bool MetricTableItem::capacityIsSet() const
{
    return capacityIsSet_;
}

void MetricTableItem::unsetcapacity()
{
    capacityIsSet_ = false;
}

}
}
}
}
}


