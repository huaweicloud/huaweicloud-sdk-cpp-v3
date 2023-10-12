

#include "huaweicloud/dds/v3/model/ListLtsSlowLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListLtsSlowLogsResponse::ListLtsSlowLogsResponse()
{
    slowLogsIsSet_ = false;
}

ListLtsSlowLogsResponse::~ListLtsSlowLogsResponse() = default;

void ListLtsSlowLogsResponse::validate()
{
}

web::json::value ListLtsSlowLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(slowLogsIsSet_) {
        val[utility::conversions::to_string_t("slow_logs")] = ModelBase::toJson(slowLogs_);
    }

    return val;
}
bool ListLtsSlowLogsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("slow_logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_logs"));
        if(!fieldValue.is_null())
        {
            std::vector<SlowLogDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogs(refVal);
        }
    }
    return ok;
}


std::vector<SlowLogDetail>& ListLtsSlowLogsResponse::getSlowLogs()
{
    return slowLogs_;
}

void ListLtsSlowLogsResponse::setSlowLogs(const std::vector<SlowLogDetail>& value)
{
    slowLogs_ = value;
    slowLogsIsSet_ = true;
}

bool ListLtsSlowLogsResponse::slowLogsIsSet() const
{
    return slowLogsIsSet_;
}

void ListLtsSlowLogsResponse::unsetslowLogs()
{
    slowLogsIsSet_ = false;
}

}
}
}
}
}


