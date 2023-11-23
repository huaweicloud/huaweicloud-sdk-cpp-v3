

#include "huaweicloud/gaussdbfornosql/v3/model/ListRedisSlowLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListRedisSlowLogsResponse::ListRedisSlowLogsResponse()
{
    slowLogsIsSet_ = false;
}

ListRedisSlowLogsResponse::~ListRedisSlowLogsResponse() = default;

void ListRedisSlowLogsResponse::validate()
{
}

web::json::value ListRedisSlowLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(slowLogsIsSet_) {
        val[utility::conversions::to_string_t("slow_logs")] = ModelBase::toJson(slowLogs_);
    }

    return val;
}
bool ListRedisSlowLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<RedisSlowLogDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogs(refVal);
        }
    }
    return ok;
}


std::vector<RedisSlowLogDetail>& ListRedisSlowLogsResponse::getSlowLogs()
{
    return slowLogs_;
}

void ListRedisSlowLogsResponse::setSlowLogs(const std::vector<RedisSlowLogDetail>& value)
{
    slowLogs_ = value;
    slowLogsIsSet_ = true;
}

bool ListRedisSlowLogsResponse::slowLogsIsSet() const
{
    return slowLogsIsSet_;
}

void ListRedisSlowLogsResponse::unsetslowLogs()
{
    slowLogsIsSet_ = false;
}

}
}
}
}
}


