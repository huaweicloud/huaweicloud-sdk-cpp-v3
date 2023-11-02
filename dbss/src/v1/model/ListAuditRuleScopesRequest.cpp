

#include "huaweicloud/dbss/v1/model/ListAuditRuleScopesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditRuleScopesRequest::ListAuditRuleScopesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListAuditRuleScopesRequest::~ListAuditRuleScopesRequest() = default;

void ListAuditRuleScopesRequest::validate()
{
}

web::json::value ListAuditRuleScopesRequest::toJson() const
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
bool ListAuditRuleScopesRequest::fromJson(const web::json::value& val)
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


std::string ListAuditRuleScopesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditRuleScopesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditRuleScopesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditRuleScopesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAuditRuleScopesRequest::getOffset() const
{
    return offset_;
}

void ListAuditRuleScopesRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAuditRuleScopesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAuditRuleScopesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAuditRuleScopesRequest::getLimit() const
{
    return limit_;
}

void ListAuditRuleScopesRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuditRuleScopesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuditRuleScopesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


