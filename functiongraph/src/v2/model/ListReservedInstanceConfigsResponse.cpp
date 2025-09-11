

#include "huaweicloud/functiongraph/v2/model/ListReservedInstanceConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListReservedInstanceConfigsResponse::ListReservedInstanceConfigsResponse()
{
    reservedInstancesIsSet_ = false;
    pageInfoIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

ListReservedInstanceConfigsResponse::~ListReservedInstanceConfigsResponse() = default;

void ListReservedInstanceConfigsResponse::validate()
{
}

web::json::value ListReservedInstanceConfigsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reservedInstancesIsSet_) {
        val[utility::conversions::to_string_t("reserved_instances")] = ModelBase::toJson(reservedInstances_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListReservedInstanceConfigsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reserved_instances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reserved_instances"));
        if(!fieldValue.is_null())
        {
            std::vector<ReservedInstanceConfigs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReservedInstances(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<ReservedInstanceConfigs>& ListReservedInstanceConfigsResponse::getReservedInstances()
{
    return reservedInstances_;
}

void ListReservedInstanceConfigsResponse::setReservedInstances(const std::vector<ReservedInstanceConfigs>& value)
{
    reservedInstances_ = value;
    reservedInstancesIsSet_ = true;
}

bool ListReservedInstanceConfigsResponse::reservedInstancesIsSet() const
{
    return reservedInstancesIsSet_;
}

void ListReservedInstanceConfigsResponse::unsetreservedInstances()
{
    reservedInstancesIsSet_ = false;
}

PageInfo ListReservedInstanceConfigsResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListReservedInstanceConfigsResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListReservedInstanceConfigsResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListReservedInstanceConfigsResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

int64_t ListReservedInstanceConfigsResponse::getCount() const
{
    return count_;
}

void ListReservedInstanceConfigsResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListReservedInstanceConfigsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListReservedInstanceConfigsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


