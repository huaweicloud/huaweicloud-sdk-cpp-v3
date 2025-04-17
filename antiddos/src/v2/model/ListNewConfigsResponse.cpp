

#include "huaweicloud/antiddos/v2/model/ListNewConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {




ListNewConfigsResponse::ListNewConfigsResponse()
{
    trafficLimitedListIsSet_ = false;
    httpLimitedListIsSet_ = false;
    connectionLimitedListIsSet_ = false;
    extendDdosConfigIsSet_ = false;
}

ListNewConfigsResponse::~ListNewConfigsResponse() = default;

void ListNewConfigsResponse::validate()
{
}

web::json::value ListNewConfigsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trafficLimitedListIsSet_) {
        val[utility::conversions::to_string_t("traffic_limited_list")] = ModelBase::toJson(trafficLimitedList_);
    }
    if(httpLimitedListIsSet_) {
        val[utility::conversions::to_string_t("http_limited_list")] = ModelBase::toJson(httpLimitedList_);
    }
    if(connectionLimitedListIsSet_) {
        val[utility::conversions::to_string_t("connection_limited_list")] = ModelBase::toJson(connectionLimitedList_);
    }
    if(extendDdosConfigIsSet_) {
        val[utility::conversions::to_string_t("extend_ddos_config")] = ModelBase::toJson(extendDdosConfig_);
    }

    return val;
}
bool ListNewConfigsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("traffic_limited_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_limited_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TriggerBpsDict> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficLimitedList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_limited_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_limited_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TriggerQpsDict> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpLimitedList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connection_limited_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_limited_list"));
        if(!fieldValue.is_null())
        {
            std::vector<CleanLimitDict> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionLimitedList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_ddos_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_ddos_config"));
        if(!fieldValue.is_null())
        {
            std::vector<ExtendDDoSSet> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendDdosConfig(refVal);
        }
    }
    return ok;
}


std::vector<TriggerBpsDict>& ListNewConfigsResponse::getTrafficLimitedList()
{
    return trafficLimitedList_;
}

void ListNewConfigsResponse::setTrafficLimitedList(const std::vector<TriggerBpsDict>& value)
{
    trafficLimitedList_ = value;
    trafficLimitedListIsSet_ = true;
}

bool ListNewConfigsResponse::trafficLimitedListIsSet() const
{
    return trafficLimitedListIsSet_;
}

void ListNewConfigsResponse::unsettrafficLimitedList()
{
    trafficLimitedListIsSet_ = false;
}

std::vector<TriggerQpsDict>& ListNewConfigsResponse::getHttpLimitedList()
{
    return httpLimitedList_;
}

void ListNewConfigsResponse::setHttpLimitedList(const std::vector<TriggerQpsDict>& value)
{
    httpLimitedList_ = value;
    httpLimitedListIsSet_ = true;
}

bool ListNewConfigsResponse::httpLimitedListIsSet() const
{
    return httpLimitedListIsSet_;
}

void ListNewConfigsResponse::unsethttpLimitedList()
{
    httpLimitedListIsSet_ = false;
}

std::vector<CleanLimitDict>& ListNewConfigsResponse::getConnectionLimitedList()
{
    return connectionLimitedList_;
}

void ListNewConfigsResponse::setConnectionLimitedList(const std::vector<CleanLimitDict>& value)
{
    connectionLimitedList_ = value;
    connectionLimitedListIsSet_ = true;
}

bool ListNewConfigsResponse::connectionLimitedListIsSet() const
{
    return connectionLimitedListIsSet_;
}

void ListNewConfigsResponse::unsetconnectionLimitedList()
{
    connectionLimitedListIsSet_ = false;
}

std::vector<ExtendDDoSSet>& ListNewConfigsResponse::getExtendDdosConfig()
{
    return extendDdosConfig_;
}

void ListNewConfigsResponse::setExtendDdosConfig(const std::vector<ExtendDDoSSet>& value)
{
    extendDdosConfig_ = value;
    extendDdosConfigIsSet_ = true;
}

bool ListNewConfigsResponse::extendDdosConfigIsSet() const
{
    return extendDdosConfigIsSet_;
}

void ListNewConfigsResponse::unsetextendDdosConfig()
{
    extendDdosConfigIsSet_ = false;
}

}
}
}
}
}


