

#include "huaweicloud/tics/v1/model/ListAgentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




ListAgentsRequest::ListAgentsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    agentName_ = "";
    agentNameIsSet_ = false;
    leagueName_ = "";
    leagueNameIsSet_ = false;
}

ListAgentsRequest::~ListAgentsRequest() = default;

void ListAgentsRequest::validate()
{
}

web::json::value ListAgentsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(agentNameIsSet_) {
        val[utility::conversions::to_string_t("agent_name")] = ModelBase::toJson(agentName_);
    }
    if(leagueNameIsSet_) {
        val[utility::conversions::to_string_t("league_name")] = ModelBase::toJson(leagueName_);
    }

    return val;
}
bool ListAgentsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("agent_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("league_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("league_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLeagueName(refVal);
        }
    }
    return ok;
}


int32_t ListAgentsRequest::getLimit() const
{
    return limit_;
}

void ListAgentsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAgentsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAgentsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAgentsRequest::getOffset() const
{
    return offset_;
}

void ListAgentsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAgentsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAgentsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAgentsRequest::getAgentName() const
{
    return agentName_;
}

void ListAgentsRequest::setAgentName(const std::string& value)
{
    agentName_ = value;
    agentNameIsSet_ = true;
}

bool ListAgentsRequest::agentNameIsSet() const
{
    return agentNameIsSet_;
}

void ListAgentsRequest::unsetagentName()
{
    agentNameIsSet_ = false;
}

std::string ListAgentsRequest::getLeagueName() const
{
    return leagueName_;
}

void ListAgentsRequest::setLeagueName(const std::string& value)
{
    leagueName_ = value;
    leagueNameIsSet_ = true;
}

bool ListAgentsRequest::leagueNameIsSet() const
{
    return leagueNameIsSet_;
}

void ListAgentsRequest::unsetleagueName()
{
    leagueNameIsSet_ = false;
}

}
}
}
}
}


