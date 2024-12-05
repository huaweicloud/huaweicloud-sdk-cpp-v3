

#include "huaweicloud/gaussdbfornosql/v3/model/ListNodeSessionsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListNodeSessionsResult::ListNodeSessionsResult()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    sessionsIsSet_ = false;
}

ListNodeSessionsResult::~ListNodeSessionsResult() = default;

void ListNodeSessionsResult::validate()
{
}

web::json::value ListNodeSessionsResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(sessionsIsSet_) {
        val[utility::conversions::to_string_t("sessions")] = ModelBase::toJson(sessions_);
    }

    return val;
}
bool ListNodeSessionsResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sessions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sessions"));
        if(!fieldValue.is_null())
        {
            std::vector<ListNodeSessionsResult_sessions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessions(refVal);
        }
    }
    return ok;
}


std::string ListNodeSessionsResult::getNodeId() const
{
    return nodeId_;
}

void ListNodeSessionsResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListNodeSessionsResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListNodeSessionsResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

int32_t ListNodeSessionsResult::getTotalCount() const
{
    return totalCount_;
}

void ListNodeSessionsResult::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListNodeSessionsResult::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListNodeSessionsResult::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ListNodeSessionsResult_sessions>& ListNodeSessionsResult::getSessions()
{
    return sessions_;
}

void ListNodeSessionsResult::setSessions(const std::vector<ListNodeSessionsResult_sessions>& value)
{
    sessions_ = value;
    sessionsIsSet_ = true;
}

bool ListNodeSessionsResult::sessionsIsSet() const
{
    return sessionsIsSet_;
}

void ListNodeSessionsResult::unsetsessions()
{
    sessionsIsSet_ = false;
}

}
}
}
}
}


