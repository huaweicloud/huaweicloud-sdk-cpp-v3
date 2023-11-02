

#include "huaweicloud/dbss/v1/model/ListAuditDatabasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditDatabasesRequest::ListAuditDatabasesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListAuditDatabasesRequest::~ListAuditDatabasesRequest() = default;

void ListAuditDatabasesRequest::validate()
{
}

web::json::value ListAuditDatabasesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListAuditDatabasesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


std::string ListAuditDatabasesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditDatabasesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditDatabasesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditDatabasesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAuditDatabasesRequest::getStatus() const
{
    return status_;
}

void ListAuditDatabasesRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAuditDatabasesRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAuditDatabasesRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListAuditDatabasesRequest::getOffset() const
{
    return offset_;
}

void ListAuditDatabasesRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAuditDatabasesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAuditDatabasesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAuditDatabasesRequest::getLimit() const
{
    return limit_;
}

void ListAuditDatabasesRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuditDatabasesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuditDatabasesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


