

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSlowSqlDetailsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSlowSqlDetailsResponse::ListSlowSqlDetailsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    slowSqlDetailsIsSet_ = false;
}

ListSlowSqlDetailsResponse::~ListSlowSqlDetailsResponse() = default;

void ListSlowSqlDetailsResponse::validate()
{
}

web::json::value ListSlowSqlDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(slowSqlDetailsIsSet_) {
        val[utility::conversions::to_string_t("slow_sql_details")] = ModelBase::toJson(slowSqlDetails_);
    }

    return val;
}
bool ListSlowSqlDetailsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("slow_sql_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_sql_details"));
        if(!fieldValue.is_null())
        {
            std::vector<SlowSqlDetailResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowSqlDetails(refVal);
        }
    }
    return ok;
}


int32_t ListSlowSqlDetailsResponse::getTotal() const
{
    return total_;
}

void ListSlowSqlDetailsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSlowSqlDetailsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSlowSqlDetailsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<SlowSqlDetailResult>& ListSlowSqlDetailsResponse::getSlowSqlDetails()
{
    return slowSqlDetails_;
}

void ListSlowSqlDetailsResponse::setSlowSqlDetails(const std::vector<SlowSqlDetailResult>& value)
{
    slowSqlDetails_ = value;
    slowSqlDetailsIsSet_ = true;
}

bool ListSlowSqlDetailsResponse::slowSqlDetailsIsSet() const
{
    return slowSqlDetailsIsSet_;
}

void ListSlowSqlDetailsResponse::unsetslowSqlDetails()
{
    slowSqlDetailsIsSet_ = false;
}

}
}
}
}
}


