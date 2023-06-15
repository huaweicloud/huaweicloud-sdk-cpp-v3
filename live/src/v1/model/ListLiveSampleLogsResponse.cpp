

#include "huaweicloud/live/v1/model/ListLiveSampleLogsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListLiveSampleLogsResponse::ListLiveSampleLogsResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    logsIsSet_ = false;
}

ListLiveSampleLogsResponse::~ListLiveSampleLogsResponse() = default;

void ListLiveSampleLogsResponse::validate()
{
}

web::json::value ListLiveSampleLogsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(logsIsSet_) {
        val[utility::conversions::to_string_t("logs")] = ModelBase::toJson(logs_);
    }

    return val;
}

bool ListLiveSampleLogsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logs"));
        if(!fieldValue.is_null())
        {
            std::vector<LogInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogs(refVal);
        }
    }
    return ok;
}


int32_t ListLiveSampleLogsResponse::getTotal() const
{
    return total_;
}

void ListLiveSampleLogsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListLiveSampleLogsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListLiveSampleLogsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::string ListLiveSampleLogsResponse::getDomain() const
{
    return domain_;
}

void ListLiveSampleLogsResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListLiveSampleLogsResponse::domainIsSet() const
{
    return domainIsSet_;
}

void ListLiveSampleLogsResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::vector<LogInfo>& ListLiveSampleLogsResponse::getLogs()
{
    return logs_;
}

void ListLiveSampleLogsResponse::setLogs(const std::vector<LogInfo>& value)
{
    logs_ = value;
    logsIsSet_ = true;
}

bool ListLiveSampleLogsResponse::logsIsSet() const
{
    return logsIsSet_;
}

void ListLiveSampleLogsResponse::unsetlogs()
{
    logsIsSet_ = false;
}

}
}
}
}
}


