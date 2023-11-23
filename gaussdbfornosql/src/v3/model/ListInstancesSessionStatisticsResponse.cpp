

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstancesSessionStatisticsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstancesSessionStatisticsResponse::ListInstancesSessionStatisticsResponse()
{
    totalConnectionCount_ = 0;
    totalConnectionCountIsSet_ = false;
    activeConnectionCount_ = 0;
    activeConnectionCountIsSet_ = false;
    topSourceIpsIsSet_ = false;
    topDbsIsSet_ = false;
}

ListInstancesSessionStatisticsResponse::~ListInstancesSessionStatisticsResponse() = default;

void ListInstancesSessionStatisticsResponse::validate()
{
}

web::json::value ListInstancesSessionStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalConnectionCountIsSet_) {
        val[utility::conversions::to_string_t("total_connection_count")] = ModelBase::toJson(totalConnectionCount_);
    }
    if(activeConnectionCountIsSet_) {
        val[utility::conversions::to_string_t("active_connection_count")] = ModelBase::toJson(activeConnectionCount_);
    }
    if(topSourceIpsIsSet_) {
        val[utility::conversions::to_string_t("top_source_ips")] = ModelBase::toJson(topSourceIps_);
    }
    if(topDbsIsSet_) {
        val[utility::conversions::to_string_t("top_dbs")] = ModelBase::toJson(topDbs_);
    }

    return val;
}
bool ListInstancesSessionStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_connection_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_connection_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalConnectionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_connection_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_connection_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveConnectionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_source_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_source_ips"));
        if(!fieldValue.is_null())
        {
            std::vector<ListInstancesSessionStatisticsRespondBody_top_source_ips> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopSourceIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_dbs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_dbs"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopDbs(refVal);
        }
    }
    return ok;
}


int32_t ListInstancesSessionStatisticsResponse::getTotalConnectionCount() const
{
    return totalConnectionCount_;
}

void ListInstancesSessionStatisticsResponse::setTotalConnectionCount(int32_t value)
{
    totalConnectionCount_ = value;
    totalConnectionCountIsSet_ = true;
}

bool ListInstancesSessionStatisticsResponse::totalConnectionCountIsSet() const
{
    return totalConnectionCountIsSet_;
}

void ListInstancesSessionStatisticsResponse::unsettotalConnectionCount()
{
    totalConnectionCountIsSet_ = false;
}

int32_t ListInstancesSessionStatisticsResponse::getActiveConnectionCount() const
{
    return activeConnectionCount_;
}

void ListInstancesSessionStatisticsResponse::setActiveConnectionCount(int32_t value)
{
    activeConnectionCount_ = value;
    activeConnectionCountIsSet_ = true;
}

bool ListInstancesSessionStatisticsResponse::activeConnectionCountIsSet() const
{
    return activeConnectionCountIsSet_;
}

void ListInstancesSessionStatisticsResponse::unsetactiveConnectionCount()
{
    activeConnectionCountIsSet_ = false;
}

std::vector<ListInstancesSessionStatisticsRespondBody_top_source_ips>& ListInstancesSessionStatisticsResponse::getTopSourceIps()
{
    return topSourceIps_;
}

void ListInstancesSessionStatisticsResponse::setTopSourceIps(const std::vector<ListInstancesSessionStatisticsRespondBody_top_source_ips>& value)
{
    topSourceIps_ = value;
    topSourceIpsIsSet_ = true;
}

bool ListInstancesSessionStatisticsResponse::topSourceIpsIsSet() const
{
    return topSourceIpsIsSet_;
}

void ListInstancesSessionStatisticsResponse::unsettopSourceIps()
{
    topSourceIpsIsSet_ = false;
}

Object ListInstancesSessionStatisticsResponse::getTopDbs() const
{
    return topDbs_;
}

void ListInstancesSessionStatisticsResponse::setTopDbs(const Object& value)
{
    topDbs_ = value;
    topDbsIsSet_ = true;
}

bool ListInstancesSessionStatisticsResponse::topDbsIsSet() const
{
    return topDbsIsSet_;
}

void ListInstancesSessionStatisticsResponse::unsettopDbs()
{
    topDbsIsSet_ = false;
}

}
}
}
}
}


