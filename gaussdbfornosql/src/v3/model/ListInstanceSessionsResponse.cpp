

#include "huaweicloud/gaussdbfornosql/v3/model/ListInstanceSessionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListInstanceSessionsResponse::ListInstanceSessionsResponse()
{
    nodeSessionsIsSet_ = false;
}

ListInstanceSessionsResponse::~ListInstanceSessionsResponse() = default;

void ListInstanceSessionsResponse::validate()
{
}

web::json::value ListInstanceSessionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeSessionsIsSet_) {
        val[utility::conversions::to_string_t("node_sessions")] = ModelBase::toJson(nodeSessions_);
    }

    return val;
}
bool ListInstanceSessionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_sessions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_sessions"));
        if(!fieldValue.is_null())
        {
            std::vector<ListNodeSessionsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeSessions(refVal);
        }
    }
    return ok;
}


std::vector<ListNodeSessionsResult>& ListInstanceSessionsResponse::getNodeSessions()
{
    return nodeSessions_;
}

void ListInstanceSessionsResponse::setNodeSessions(const std::vector<ListNodeSessionsResult>& value)
{
    nodeSessions_ = value;
    nodeSessionsIsSet_ = true;
}

bool ListInstanceSessionsResponse::nodeSessionsIsSet() const
{
    return nodeSessionsIsSet_;
}

void ListInstanceSessionsResponse::unsetnodeSessions()
{
    nodeSessionsIsSet_ = false;
}

}
}
}
}
}


