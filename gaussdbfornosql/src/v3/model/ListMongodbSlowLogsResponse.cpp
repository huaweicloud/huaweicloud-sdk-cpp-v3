

#include "huaweicloud/gaussdbfornosql/v3/model/ListMongodbSlowLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListMongodbSlowLogsResponse::ListMongodbSlowLogsResponse()
{
    slowLogsIsSet_ = false;
}

ListMongodbSlowLogsResponse::~ListMongodbSlowLogsResponse() = default;

void ListMongodbSlowLogsResponse::validate()
{
}

web::json::value ListMongodbSlowLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(slowLogsIsSet_) {
        val[utility::conversions::to_string_t("slow_logs")] = ModelBase::toJson(slowLogs_);
    }

    return val;
}
bool ListMongodbSlowLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<MongodbSlowLogDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogs(refVal);
        }
    }
    return ok;
}


std::vector<MongodbSlowLogDetail>& ListMongodbSlowLogsResponse::getSlowLogs()
{
    return slowLogs_;
}

void ListMongodbSlowLogsResponse::setSlowLogs(const std::vector<MongodbSlowLogDetail>& value)
{
    slowLogs_ = value;
    slowLogsIsSet_ = true;
}

bool ListMongodbSlowLogsResponse::slowLogsIsSet() const
{
    return slowLogsIsSet_;
}

void ListMongodbSlowLogsResponse::unsetslowLogs()
{
    slowLogsIsSet_ = false;
}

}
}
}
}
}


