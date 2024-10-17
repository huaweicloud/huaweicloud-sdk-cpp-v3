

#include "huaweicloud/dbss/v1/model/ListAuditAgentRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditAgentRequest::ListAuditAgentRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbId_ = "";
    dbIdIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListAuditAgentRequest::~ListAuditAgentRequest() = default;

void ListAuditAgentRequest::validate()
{
}

web::json::value ListAuditAgentRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dbIdIsSet_) {
        val[utility::conversions::to_string_t("db_id")] = ModelBase::toJson(dbId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListAuditAgentRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListAuditAgentRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditAgentRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditAgentRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditAgentRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAuditAgentRequest::getDbId() const
{
    return dbId_;
}

void ListAuditAgentRequest::setDbId(const std::string& value)
{
    dbId_ = value;
    dbIdIsSet_ = true;
}

bool ListAuditAgentRequest::dbIdIsSet() const
{
    return dbIdIsSet_;
}

void ListAuditAgentRequest::unsetdbId()
{
    dbIdIsSet_ = false;
}

std::string ListAuditAgentRequest::getOffset() const
{
    return offset_;
}

void ListAuditAgentRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAuditAgentRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAuditAgentRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAuditAgentRequest::getLimit() const
{
    return limit_;
}

void ListAuditAgentRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuditAgentRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuditAgentRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


