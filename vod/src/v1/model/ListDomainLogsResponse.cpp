

#include "huaweicloud/vod/v1/model/ListDomainLogsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListDomainLogsResponse::ListDomainLogsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    logsIsSet_ = false;
}

ListDomainLogsResponse::~ListDomainLogsResponse() = default;

void ListDomainLogsResponse::validate()
{
}

web::json::value ListDomainLogsResponse::toJson() const
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

bool ListDomainLogsResponse::fromJson(const web::json::value& val)
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
            std::vector<CdnLog> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogs(refVal);
        }
    }
    return ok;
}

int32_t ListDomainLogsResponse::getTotal() const
{
    return total_;
}

void ListDomainLogsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListDomainLogsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListDomainLogsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<CdnLog>& ListDomainLogsResponse::getLogs()
{
    return logs_;
}

void ListDomainLogsResponse::setLogs(const std::vector<CdnLog>& value)
{
    logs_ = value;
    logsIsSet_ = true;
}

bool ListDomainLogsResponse::logsIsSet() const
{
    return logsIsSet_;
}

void ListDomainLogsResponse::unsetlogs()
{
    logsIsSet_ = false;
}

}
}
}
}
}


