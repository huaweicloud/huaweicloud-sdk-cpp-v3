

#include "huaweicloud/gaussdbforopengauss/v3/model/ListSqlPlanActionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListSqlPlanActionResponse::ListSqlPlanActionResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    sqlPlanBindStateListIsSet_ = false;
}

ListSqlPlanActionResponse::~ListSqlPlanActionResponse() = default;

void ListSqlPlanActionResponse::validate()
{
}

web::json::value ListSqlPlanActionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(sqlPlanBindStateListIsSet_) {
        val[utility::conversions::to_string_t("sql_plan_bind_state_list")] = ModelBase::toJson(sqlPlanBindStateList_);
    }

    return val;
}
bool ListSqlPlanActionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sql_plan_bind_state_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_plan_bind_state_list"));
        if(!fieldValue.is_null())
        {
            std::vector<SqlPlanStateListResponse_sql_plan_bind_state_list> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlPlanBindStateList(refVal);
        }
    }
    return ok;
}


int32_t ListSqlPlanActionResponse::getTotal() const
{
    return total_;
}

void ListSqlPlanActionResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSqlPlanActionResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSqlPlanActionResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<SqlPlanStateListResponse_sql_plan_bind_state_list>& ListSqlPlanActionResponse::getSqlPlanBindStateList()
{
    return sqlPlanBindStateList_;
}

void ListSqlPlanActionResponse::setSqlPlanBindStateList(const std::vector<SqlPlanStateListResponse_sql_plan_bind_state_list>& value)
{
    sqlPlanBindStateList_ = value;
    sqlPlanBindStateListIsSet_ = true;
}

bool ListSqlPlanActionResponse::sqlPlanBindStateListIsSet() const
{
    return sqlPlanBindStateListIsSet_;
}

void ListSqlPlanActionResponse::unsetsqlPlanBindStateList()
{
    sqlPlanBindStateListIsSet_ = false;
}

}
}
}
}
}


