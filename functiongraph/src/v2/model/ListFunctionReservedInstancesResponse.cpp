

#include "huaweicloud/functiongraph/v2/model/ListFunctionReservedInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionReservedInstancesResponse::ListFunctionReservedInstancesResponse()
{
    reservedinstancesIsSet_ = false;
    pageInfoIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

ListFunctionReservedInstancesResponse::~ListFunctionReservedInstancesResponse() = default;

void ListFunctionReservedInstancesResponse::validate()
{
}

web::json::value ListFunctionReservedInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reservedinstancesIsSet_) {
        val[utility::conversions::to_string_t("reservedinstances")] = ModelBase::toJson(reservedinstances_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListFunctionReservedInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("reservedinstances"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reservedinstances"));
        if(!fieldValue.is_null())
        {
            std::vector<FuncReservedInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReservedinstances(refVal);
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


std::vector<FuncReservedInstance>& ListFunctionReservedInstancesResponse::getReservedinstances()
{
    return reservedinstances_;
}

void ListFunctionReservedInstancesResponse::setReservedinstances(const std::vector<FuncReservedInstance>& value)
{
    reservedinstances_ = value;
    reservedinstancesIsSet_ = true;
}

bool ListFunctionReservedInstancesResponse::reservedinstancesIsSet() const
{
    return reservedinstancesIsSet_;
}

void ListFunctionReservedInstancesResponse::unsetreservedinstances()
{
    reservedinstancesIsSet_ = false;
}

PageInfo ListFunctionReservedInstancesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListFunctionReservedInstancesResponse::setPageInfo(const PageInfo& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListFunctionReservedInstancesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListFunctionReservedInstancesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

int64_t ListFunctionReservedInstancesResponse::getCount() const
{
    return count_;
}

void ListFunctionReservedInstancesResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListFunctionReservedInstancesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListFunctionReservedInstancesResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


