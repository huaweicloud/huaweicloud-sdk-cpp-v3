

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowGlobalSlowSqlDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowGlobalSlowSqlDetailResponse::ShowGlobalSlowSqlDetailResponse()
{
    slowSqlDetailsIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ShowGlobalSlowSqlDetailResponse::~ShowGlobalSlowSqlDetailResponse() = default;

void ShowGlobalSlowSqlDetailResponse::validate()
{
}

web::json::value ShowGlobalSlowSqlDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(slowSqlDetailsIsSet_) {
        val[utility::conversions::to_string_t("slow_sql_details")] = ModelBase::toJson(slowSqlDetails_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ShowGlobalSlowSqlDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_sql_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_sql_details"));
        if(!fieldValue.is_null())
        {
            std::vector<SlowSqlDetailResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowSqlDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<SlowSqlDetailResult>& ShowGlobalSlowSqlDetailResponse::getSlowSqlDetails()
{
    return slowSqlDetails_;
}

void ShowGlobalSlowSqlDetailResponse::setSlowSqlDetails(const std::vector<SlowSqlDetailResult>& value)
{
    slowSqlDetails_ = value;
    slowSqlDetailsIsSet_ = true;
}

bool ShowGlobalSlowSqlDetailResponse::slowSqlDetailsIsSet() const
{
    return slowSqlDetailsIsSet_;
}

void ShowGlobalSlowSqlDetailResponse::unsetslowSqlDetails()
{
    slowSqlDetailsIsSet_ = false;
}

int32_t ShowGlobalSlowSqlDetailResponse::getTotal() const
{
    return total_;
}

void ShowGlobalSlowSqlDetailResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowGlobalSlowSqlDetailResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowGlobalSlowSqlDetailResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


