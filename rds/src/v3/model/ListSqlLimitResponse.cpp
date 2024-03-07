

#include "huaweicloud/rds/v3/model/ListSqlLimitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSqlLimitResponse::ListSqlLimitResponse()
{
    count_ = 0;
    countIsSet_ = false;
    sqlLimitObjectsIsSet_ = false;
}

ListSqlLimitResponse::~ListSqlLimitResponse() = default;

void ListSqlLimitResponse::validate()
{
}

web::json::value ListSqlLimitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(sqlLimitObjectsIsSet_) {
        val[utility::conversions::to_string_t("sql_limit_objects")] = ModelBase::toJson(sqlLimitObjects_);
    }

    return val;
}
bool ListSqlLimitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_limit_objects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_limit_objects"));
        if(!fieldValue.is_null())
        {
            std::vector<SqlLimitObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlLimitObjects(refVal);
        }
    }
    return ok;
}


int32_t ListSqlLimitResponse::getCount() const
{
    return count_;
}

void ListSqlLimitResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListSqlLimitResponse::countIsSet() const
{
    return countIsSet_;
}

void ListSqlLimitResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<SqlLimitObject>& ListSqlLimitResponse::getSqlLimitObjects()
{
    return sqlLimitObjects_;
}

void ListSqlLimitResponse::setSqlLimitObjects(const std::vector<SqlLimitObject>& value)
{
    sqlLimitObjects_ = value;
    sqlLimitObjectsIsSet_ = true;
}

bool ListSqlLimitResponse::sqlLimitObjectsIsSet() const
{
    return sqlLimitObjectsIsSet_;
}

void ListSqlLimitResponse::unsetsqlLimitObjects()
{
    sqlLimitObjectsIsSet_ = false;
}

}
}
}
}
}


