

#include "huaweicloud/gaussdbfornosql/v3/model/ListInfluxdbSlowLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInfluxdbSlowLogsResponse::ListInfluxdbSlowLogsResponse()
{
    slowLogsIsSet_ = false;
}

ListInfluxdbSlowLogsResponse::~ListInfluxdbSlowLogsResponse() = default;

void ListInfluxdbSlowLogsResponse::validate()
{
}

web::json::value ListInfluxdbSlowLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(slowLogsIsSet_) {
        val[utility::conversions::to_string_t("slow_logs")] = ModelBase::toJson(slowLogs_);
    }

    return val;
}
bool ListInfluxdbSlowLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<InfluxdbSlowLogDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogs(refVal);
        }
    }
    return ok;
}


std::vector<InfluxdbSlowLogDetail>& ListInfluxdbSlowLogsResponse::getSlowLogs()
{
    return slowLogs_;
}

void ListInfluxdbSlowLogsResponse::setSlowLogs(const std::vector<InfluxdbSlowLogDetail>& value)
{
    slowLogs_ = value;
    slowLogsIsSet_ = true;
}

bool ListInfluxdbSlowLogsResponse::slowLogsIsSet() const
{
    return slowLogsIsSet_;
}

void ListInfluxdbSlowLogsResponse::unsetslowLogs()
{
    slowLogsIsSet_ = false;
}

}
}
}
}
}


