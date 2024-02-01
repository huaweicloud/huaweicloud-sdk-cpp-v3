

#include "huaweicloud/cdn/v2/model/ShowLogsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowLogsResponse::ShowLogsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    logsIsSet_ = false;
}

ShowLogsResponse::~ShowLogsResponse() = default;

void ShowLogsResponse::validate()
{
}

web::json::value ShowLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(logsIsSet_) {
        val[utility::conversions::to_string_t("logs")] = ModelBase::toJson(logs_);
    }

    return val;
}
bool ShowLogsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logs"));
        if(!fieldValue.is_null())
        {
            std::vector<LogObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogs(refVal);
        }
    }
    return ok;
}


int32_t ShowLogsResponse::getTotal() const
{
    return total_;
}

void ShowLogsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowLogsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowLogsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<LogObject>& ShowLogsResponse::getLogs()
{
    return logs_;
}

void ShowLogsResponse::setLogs(const std::vector<LogObject>& value)
{
    logs_ = value;
    logsIsSet_ = true;
}

bool ShowLogsResponse::logsIsSet() const
{
    return logsIsSet_;
}

void ShowLogsResponse::unsetlogs()
{
    logsIsSet_ = false;
}

}
}
}
}
}


