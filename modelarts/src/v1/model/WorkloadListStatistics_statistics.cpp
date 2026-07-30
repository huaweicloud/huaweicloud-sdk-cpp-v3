

#include "huaweicloud/modelarts/v1/model/WorkloadListStatistics_statistics.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




WorkloadListStatistics_statistics::WorkloadListStatistics_statistics()
{
    total_ = 0;
    totalIsSet_ = false;
    itemsIsSet_ = false;
}

WorkloadListStatistics_statistics::~WorkloadListStatistics_statistics() = default;

void WorkloadListStatistics_statistics::validate()
{
}

web::json::value WorkloadListStatistics_statistics::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool WorkloadListStatistics_statistics::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<WorkloadStatistics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


int32_t WorkloadListStatistics_statistics::getTotal() const
{
    return total_;
}

void WorkloadListStatistics_statistics::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool WorkloadListStatistics_statistics::totalIsSet() const
{
    return totalIsSet_;
}

void WorkloadListStatistics_statistics::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<WorkloadStatistics>& WorkloadListStatistics_statistics::getItems()
{
    return items_;
}

void WorkloadListStatistics_statistics::setItems(const std::vector<WorkloadStatistics>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool WorkloadListStatistics_statistics::itemsIsSet() const
{
    return itemsIsSet_;
}

void WorkloadListStatistics_statistics::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


