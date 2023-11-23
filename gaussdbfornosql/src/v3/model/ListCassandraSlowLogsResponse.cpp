

#include "huaweicloud/gaussdbfornosql/v3/model/ListCassandraSlowLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListCassandraSlowLogsResponse::ListCassandraSlowLogsResponse()
{
    slowLogsIsSet_ = false;
}

ListCassandraSlowLogsResponse::~ListCassandraSlowLogsResponse() = default;

void ListCassandraSlowLogsResponse::validate()
{
}

web::json::value ListCassandraSlowLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(slowLogsIsSet_) {
        val[utility::conversions::to_string_t("slow_logs")] = ModelBase::toJson(slowLogs_);
    }

    return val;
}
bool ListCassandraSlowLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<CassandraSlowLogDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogs(refVal);
        }
    }
    return ok;
}


std::vector<CassandraSlowLogDetail>& ListCassandraSlowLogsResponse::getSlowLogs()
{
    return slowLogs_;
}

void ListCassandraSlowLogsResponse::setSlowLogs(const std::vector<CassandraSlowLogDetail>& value)
{
    slowLogs_ = value;
    slowLogsIsSet_ = true;
}

bool ListCassandraSlowLogsResponse::slowLogsIsSet() const
{
    return slowLogsIsSet_;
}

void ListCassandraSlowLogsResponse::unsetslowLogs()
{
    slowLogsIsSet_ = false;
}

}
}
}
}
}


