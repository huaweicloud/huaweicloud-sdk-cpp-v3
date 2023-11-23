

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstancesSessionStatisticsRespondBody_top_source_ips.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstancesSessionStatisticsRespondBody_top_source_ips::ListInstancesSessionStatisticsRespondBody_top_source_ips()
{
    clientIp_ = "";
    clientIpIsSet_ = false;
    connectionCount_ = 0;
    connectionCountIsSet_ = false;
}

ListInstancesSessionStatisticsRespondBody_top_source_ips::~ListInstancesSessionStatisticsRespondBody_top_source_ips() = default;

void ListInstancesSessionStatisticsRespondBody_top_source_ips::validate()
{
}

web::json::value ListInstancesSessionStatisticsRespondBody_top_source_ips::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clientIpIsSet_) {
        val[utility::conversions::to_string_t("client_ip")] = ModelBase::toJson(clientIp_);
    }
    if(connectionCountIsSet_) {
        val[utility::conversions::to_string_t("connection_count")] = ModelBase::toJson(connectionCount_);
    }

    return val;
}
bool ListInstancesSessionStatisticsRespondBody_top_source_ips::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("client_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connection_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionCount(refVal);
        }
    }
    return ok;
}


std::string ListInstancesSessionStatisticsRespondBody_top_source_ips::getClientIp() const
{
    return clientIp_;
}

void ListInstancesSessionStatisticsRespondBody_top_source_ips::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool ListInstancesSessionStatisticsRespondBody_top_source_ips::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void ListInstancesSessionStatisticsRespondBody_top_source_ips::unsetclientIp()
{
    clientIpIsSet_ = false;
}

int32_t ListInstancesSessionStatisticsRespondBody_top_source_ips::getConnectionCount() const
{
    return connectionCount_;
}

void ListInstancesSessionStatisticsRespondBody_top_source_ips::setConnectionCount(int32_t value)
{
    connectionCount_ = value;
    connectionCountIsSet_ = true;
}

bool ListInstancesSessionStatisticsRespondBody_top_source_ips::connectionCountIsSet() const
{
    return connectionCountIsSet_;
}

void ListInstancesSessionStatisticsRespondBody_top_source_ips::unsetconnectionCount()
{
    connectionCountIsSet_ = false;
}

}
}
}
}
}


