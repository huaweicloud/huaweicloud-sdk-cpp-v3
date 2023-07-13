

#include "huaweicloud/ecs/v2/model/ListServersDetailsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServersDetailsResponse::ListServersDetailsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    serversIsSet_ = false;
}

ListServersDetailsResponse::~ListServersDetailsResponse() = default;

void ListServersDetailsResponse::validate()
{
}

web::json::value ListServersDetailsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(serversIsSet_) {
        val[utility::conversions::to_string_t("servers")] = ModelBase::toJson(servers_);
    }

    return val;
}

bool ListServersDetailsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("servers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("servers"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServers(refVal);
        }
    }
    return ok;
}

int32_t ListServersDetailsResponse::getCount() const
{
    return count_;
}

void ListServersDetailsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListServersDetailsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListServersDetailsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ServerDetail>& ListServersDetailsResponse::getServers()
{
    return servers_;
}

void ListServersDetailsResponse::setServers(const std::vector<ServerDetail>& value)
{
    servers_ = value;
    serversIsSet_ = true;
}

bool ListServersDetailsResponse::serversIsSet() const
{
    return serversIsSet_;
}

void ListServersDetailsResponse::unsetservers()
{
    serversIsSet_ = false;
}

}
}
}
}
}


