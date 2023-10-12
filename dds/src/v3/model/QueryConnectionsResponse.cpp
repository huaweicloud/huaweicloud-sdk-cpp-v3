

#include "huaweicloud/dds/v3/model/QueryConnectionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




QueryConnectionsResponse::QueryConnectionsResponse()
{
    clientIp_ = "";
    clientIpIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

QueryConnectionsResponse::~QueryConnectionsResponse() = default;

void QueryConnectionsResponse::validate()
{
}

web::json::value QueryConnectionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clientIpIsSet_) {
        val[utility::conversions::to_string_t("client_ip")] = ModelBase::toJson(clientIp_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool QueryConnectionsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::string QueryConnectionsResponse::getClientIp() const
{
    return clientIp_;
}

void QueryConnectionsResponse::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool QueryConnectionsResponse::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void QueryConnectionsResponse::unsetclientIp()
{
    clientIpIsSet_ = false;
}

int32_t QueryConnectionsResponse::getCount() const
{
    return count_;
}

void QueryConnectionsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool QueryConnectionsResponse::countIsSet() const
{
    return countIsSet_;
}

void QueryConnectionsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


