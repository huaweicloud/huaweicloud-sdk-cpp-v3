

#include "huaweicloud/gaussdb/v3/model/ShowAutoSqlLimitingLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowAutoSqlLimitingLogResponse::ShowAutoSqlLimitingLogResponse()
{
    logsIsSet_ = false;
}

ShowAutoSqlLimitingLogResponse::~ShowAutoSqlLimitingLogResponse() = default;

void ShowAutoSqlLimitingLogResponse::validate()
{
}

web::json::value ShowAutoSqlLimitingLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logsIsSet_) {
        val[utility::conversions::to_string_t("logs")] = ModelBase::toJson(logs_);
    }

    return val;
}
bool ShowAutoSqlLimitingLogResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logs"));
        if(!fieldValue.is_null())
        {
            std::vector<AutoSqlLimitingLog> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogs(refVal);
        }
    }
    return ok;
}


std::vector<AutoSqlLimitingLog>& ShowAutoSqlLimitingLogResponse::getLogs()
{
    return logs_;
}

void ShowAutoSqlLimitingLogResponse::setLogs(const std::vector<AutoSqlLimitingLog>& value)
{
    logs_ = value;
    logsIsSet_ = true;
}

bool ShowAutoSqlLimitingLogResponse::logsIsSet() const
{
    return logsIsSet_;
}

void ShowAutoSqlLimitingLogResponse::unsetlogs()
{
    logsIsSet_ = false;
}

}
}
}
}
}


