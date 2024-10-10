

#include "huaweicloud/drs/v5/model/ListConnectionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListConnectionsResponse::ListConnectionsResponse()
{
    connectionsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

ListConnectionsResponse::~ListConnectionsResponse() = default;

void ListConnectionsResponse::validate()
{
}

web::json::value ListConnectionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(connectionsIsSet_) {
        val[utility::conversions::to_string_t("connections")] = ModelBase::toJson(connections_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListConnectionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("connections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connections"));
        if(!fieldValue.is_null())
        {
            std::vector<ConnectionResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnections(refVal);
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


std::vector<ConnectionResp>& ListConnectionsResponse::getConnections()
{
    return connections_;
}

void ListConnectionsResponse::setConnections(const std::vector<ConnectionResp>& value)
{
    connections_ = value;
    connectionsIsSet_ = true;
}

bool ListConnectionsResponse::connectionsIsSet() const
{
    return connectionsIsSet_;
}

void ListConnectionsResponse::unsetconnections()
{
    connectionsIsSet_ = false;
}

int32_t ListConnectionsResponse::getCount() const
{
    return count_;
}

void ListConnectionsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListConnectionsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListConnectionsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


