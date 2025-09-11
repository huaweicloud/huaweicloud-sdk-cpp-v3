

#include "huaweicloud/dbss/v1/model/ListAuditSensitiveMasksNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditSensitiveMasksNewRequest::ListAuditSensitiveMasksNewRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
}

ListAuditSensitiveMasksNewRequest::~ListAuditSensitiveMasksNewRequest() = default;

void ListAuditSensitiveMasksNewRequest::validate()
{
}

web::json::value ListAuditSensitiveMasksNewRequest::toJson() const
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
bool ListAuditSensitiveMasksNewRequest::fromJson(const web::json::value& val)
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


std::string ListAuditSensitiveMasksNewRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditSensitiveMasksNewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditSensitiveMasksNewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditSensitiveMasksNewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListAuditSensitiveMasksNewRequest::getOffset() const
{
    return offset_;
}

void ListAuditSensitiveMasksNewRequest::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAuditSensitiveMasksNewRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAuditSensitiveMasksNewRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAuditSensitiveMasksNewRequest::getLimit() const
{
    return limit_;
}

void ListAuditSensitiveMasksNewRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuditSensitiveMasksNewRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuditSensitiveMasksNewRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


