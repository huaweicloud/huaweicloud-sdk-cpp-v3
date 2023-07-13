

#include "huaweicloud/cbr/v1/model/ListAgentRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListAgentRequest::ListAgentRequest()
{
    limit_ = "";
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    agentId_ = "";
    agentIdIsSet_ = false;
}

ListAgentRequest::~ListAgentRequest() = default;

void ListAgentRequest::validate()
{
}

web::json::value ListAgentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }

    return val;
}

bool ListAgentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentId(refVal);
        }
    }
    return ok;
}

std::string ListAgentRequest::getLimit() const
{
    return limit_;
}

void ListAgentRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAgentRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAgentRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAgentRequest::getOffset() const
{
    return offset_;
}

void ListAgentRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAgentRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAgentRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAgentRequest::getStatus() const
{
    return status_;
}

void ListAgentRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAgentRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAgentRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListAgentRequest::getAgentId() const
{
    return agentId_;
}

void ListAgentRequest::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool ListAgentRequest::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void ListAgentRequest::unsetagentId()
{
    agentIdIsSet_ = false;
}

}
}
}
}
}


