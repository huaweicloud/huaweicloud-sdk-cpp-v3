

#include "huaweicloud/lts/v2/model/QuertHistorySQLResultsBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




QuertHistorySQLResultsBody::QuertHistorySQLResultsBody()
{
    lastUseTime_ = 0L;
    lastUseTimeIsSet_ = false;
    sqlStatement_ = "";
    sqlStatementIsSet_ = false;
}

QuertHistorySQLResultsBody::~QuertHistorySQLResultsBody() = default;

void QuertHistorySQLResultsBody::validate()
{
}

web::json::value QuertHistorySQLResultsBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(lastUseTimeIsSet_) {
        val[utility::conversions::to_string_t("last_use_time")] = ModelBase::toJson(lastUseTime_);
    }
    if(sqlStatementIsSet_) {
        val[utility::conversions::to_string_t("sql_statement")] = ModelBase::toJson(sqlStatement_);
    }

    return val;
}

bool QuertHistorySQLResultsBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("last_use_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_use_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUseTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_statement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_statement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlStatement(refVal);
        }
    }
    return ok;
}

int64_t QuertHistorySQLResultsBody::getLastUseTime() const
{
    return lastUseTime_;
}

void QuertHistorySQLResultsBody::setLastUseTime(int64_t value)
{
    lastUseTime_ = value;
    lastUseTimeIsSet_ = true;
}

bool QuertHistorySQLResultsBody::lastUseTimeIsSet() const
{
    return lastUseTimeIsSet_;
}

void QuertHistorySQLResultsBody::unsetlastUseTime()
{
    lastUseTimeIsSet_ = false;
}

std::string QuertHistorySQLResultsBody::getSqlStatement() const
{
    return sqlStatement_;
}

void QuertHistorySQLResultsBody::setSqlStatement(const std::string& value)
{
    sqlStatement_ = value;
    sqlStatementIsSet_ = true;
}

bool QuertHistorySQLResultsBody::sqlStatementIsSet() const
{
    return sqlStatementIsSet_;
}

void QuertHistorySQLResultsBody::unsetsqlStatement()
{
    sqlStatementIsSet_ = false;
}

}
}
}
}
}


