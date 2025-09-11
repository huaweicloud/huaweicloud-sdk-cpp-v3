

#include "huaweicloud/dbss/v1/model/ListAuditRuleScopesNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditRuleScopesNewRequest::ListAuditRuleScopesNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListAuditRuleScopesNewRequest::~ListAuditRuleScopesNewRequest() = default;

void ListAuditRuleScopesNewRequest::validate()
{
}

web::json::value ListAuditRuleScopesNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListAuditRuleScopesNewRequest::fromJson(const web::json::value& val)
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


std::string ListAuditRuleScopesNewRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditRuleScopesNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditRuleScopesNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditRuleScopesNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAuditRuleScopesNewRequest::getOffset() const
{
    return offset_;
}

void ListAuditRuleScopesNewRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAuditRuleScopesNewRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAuditRuleScopesNewRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAuditRuleScopesNewRequest::getLimit() const
{
    return limit_;
}

void ListAuditRuleScopesNewRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuditRuleScopesNewRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuditRuleScopesNewRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


