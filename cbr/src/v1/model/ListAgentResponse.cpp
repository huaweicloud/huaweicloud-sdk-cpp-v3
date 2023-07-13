

#include "huaweicloud/cbr/v1/model/ListAgentResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListAgentResponse::ListAgentResponse()
{
    agentsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListAgentResponse::~ListAgentResponse() = default;

void ListAgentResponse::validate()
{
}

web::json::value ListAgentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentsIsSet_) {
        val[utility::conversions::to_string_t("agents")] = ModelBase::toJson(agents_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}

bool ListAgentResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agents"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agents"));
        if(!fieldValue.is_null())
        {
            std::vector<Agent> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgents(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}

std::vector<Agent>& ListAgentResponse::getAgents()
{
    return agents_;
}

void ListAgentResponse::setAgents(const std::vector<Agent>& value)
{
    agents_ = value;
    agentsIsSet_ = true;
}

bool ListAgentResponse::agentsIsSet() const
{
    return agentsIsSet_;
}

void ListAgentResponse::unsetagents()
{
    agentsIsSet_ = false;
}

int32_t ListAgentResponse::getCount() const
{
    return count_;
}

void ListAgentResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListAgentResponse::countIsSet() const
{
    return countIsSet_;
}

void ListAgentResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ListAgentResponse::getLimit() const
{
    return limit_;
}

void ListAgentResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAgentResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListAgentResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAgentResponse::getOffset() const
{
    return offset_;
}

void ListAgentResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAgentResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAgentResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


