

#include "huaweicloud/antiddos/v1/model/ListDailyLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ListDailyLogResponse::ListDailyLogResponse()
{
    total_ = 0L;
    totalIsSet_ = false;
    logsIsSet_ = false;
}

ListDailyLogResponse::~ListDailyLogResponse() = default;

void ListDailyLogResponse::validate()
{
}

web::json::value ListDailyLogResponse::toJson() const
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
bool ListDailyLogResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logs"));
        if(!fieldValue.is_null())
        {
            std::vector<DailyLog> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogs(refVal);
        }
    }
    return ok;
}


int64_t ListDailyLogResponse::getTotal() const
{
    return total_;
}

void ListDailyLogResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListDailyLogResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListDailyLogResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<DailyLog>& ListDailyLogResponse::getLogs()
{
    return logs_;
}

void ListDailyLogResponse::setLogs(const std::vector<DailyLog>& value)
{
    logs_ = value;
    logsIsSet_ = true;
}

bool ListDailyLogResponse::logsIsSet() const
{
    return logsIsSet_;
}

void ListDailyLogResponse::unsetlogs()
{
    logsIsSet_ = false;
}

}
}
}
}
}


