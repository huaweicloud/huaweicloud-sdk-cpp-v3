

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSlowSqlsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSlowSqlsResponse::ListSlowSqlsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    slowSqlInfosIsSet_ = false;
}

ListSlowSqlsResponse::~ListSlowSqlsResponse() = default;

void ListSlowSqlsResponse::validate()
{
}

web::json::value ListSlowSqlsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(slowSqlInfosIsSet_) {
        val[utility::conversions::to_string_t("slow_sql_infos")] = ModelBase::toJson(slowSqlInfos_);
    }

    return val;
}
bool ListSlowSqlsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("slow_sql_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_sql_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<SlowSQLInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowSqlInfos(refVal);
        }
    }
    return ok;
}


int32_t ListSlowSqlsResponse::getTotal() const
{
    return total_;
}

void ListSlowSqlsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSlowSqlsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSlowSqlsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<SlowSQLInfoResult>& ListSlowSqlsResponse::getSlowSqlInfos()
{
    return slowSqlInfos_;
}

void ListSlowSqlsResponse::setSlowSqlInfos(const std::vector<SlowSQLInfoResult>& value)
{
    slowSqlInfos_ = value;
    slowSqlInfosIsSet_ = true;
}

bool ListSlowSqlsResponse::slowSqlInfosIsSet() const
{
    return slowSqlInfosIsSet_;
}

void ListSlowSqlsResponse::unsetslowSqlInfos()
{
    slowSqlInfosIsSet_ = false;
}

}
}
}
}
}


