

#include "huaweicloud/rds/v3/model/ListReplicationProfilesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListReplicationProfilesRequest::ListReplicationProfilesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    agentType_ = "";
    agentTypeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListReplicationProfilesRequest::~ListReplicationProfilesRequest() = default;

void ListReplicationProfilesRequest::validate()
{
}

web::json::value ListReplicationProfilesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(agentTypeIsSet_) {
        val[utility::conversions::to_string_t("agent_type")] = ModelBase::toJson(agentType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListReplicationProfilesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListReplicationProfilesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListReplicationProfilesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListReplicationProfilesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListReplicationProfilesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListReplicationProfilesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListReplicationProfilesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListReplicationProfilesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListReplicationProfilesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListReplicationProfilesRequest::getAgentType() const
{
    return agentType_;
}

void ListReplicationProfilesRequest::setAgentType(const std::string& value)
{
    agentType_ = value;
    agentTypeIsSet_ = true;
}

bool ListReplicationProfilesRequest::agentTypeIsSet() const
{
    return agentTypeIsSet_;
}

void ListReplicationProfilesRequest::unsetagentType()
{
    agentTypeIsSet_ = false;
}

int32_t ListReplicationProfilesRequest::getOffset() const
{
    return offset_;
}

void ListReplicationProfilesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListReplicationProfilesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListReplicationProfilesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListReplicationProfilesRequest::getLimit() const
{
    return limit_;
}

void ListReplicationProfilesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListReplicationProfilesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListReplicationProfilesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


