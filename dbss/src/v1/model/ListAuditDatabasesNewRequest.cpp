

#include "huaweicloud/dbss/v1/model/ListAuditDatabasesNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditDatabasesNewRequest::ListAuditDatabasesNewRequest()
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

ListAuditDatabasesNewRequest::~ListAuditDatabasesNewRequest() = default;

void ListAuditDatabasesNewRequest::validate()
{
}

web::json::value ListAuditDatabasesNewRequest::toJson() const
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
bool ListAuditDatabasesNewRequest::fromJson(const web::json::value& val)
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


std::string ListAuditDatabasesNewRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditDatabasesNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditDatabasesNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditDatabasesNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAuditDatabasesNewRequest::getStatus() const
{
    return status_;
}

void ListAuditDatabasesNewRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAuditDatabasesNewRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAuditDatabasesNewRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListAuditDatabasesNewRequest::getOffset() const
{
    return offset_;
}

void ListAuditDatabasesNewRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAuditDatabasesNewRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAuditDatabasesNewRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAuditDatabasesNewRequest::getLimit() const
{
    return limit_;
}

void ListAuditDatabasesNewRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuditDatabasesNewRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuditDatabasesNewRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


