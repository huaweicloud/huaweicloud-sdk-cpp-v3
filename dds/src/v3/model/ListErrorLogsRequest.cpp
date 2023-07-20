

#include "huaweicloud/dds/v3/model/ListErrorLogsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListErrorLogsRequest::ListErrorLogsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListErrorLogsRequest::~ListErrorLogsRequest() = default;

void ListErrorLogsRequest::validate()
{
}

web::json::value ListErrorLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}

bool ListErrorLogsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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

std::string ListErrorLogsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListErrorLogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListErrorLogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListErrorLogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListErrorLogsRequest::getStartDate() const
{
    return startDate_;
}

void ListErrorLogsRequest::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ListErrorLogsRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void ListErrorLogsRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ListErrorLogsRequest::getEndDate() const
{
    return endDate_;
}

void ListErrorLogsRequest::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ListErrorLogsRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ListErrorLogsRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

std::string ListErrorLogsRequest::getNodeId() const
{
    return nodeId_;
}

void ListErrorLogsRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListErrorLogsRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListErrorLogsRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ListErrorLogsRequest::getType() const
{
    return type_;
}

void ListErrorLogsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListErrorLogsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListErrorLogsRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t ListErrorLogsRequest::getOffset() const
{
    return offset_;
}

void ListErrorLogsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListErrorLogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListErrorLogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListErrorLogsRequest::getLimit() const
{
    return limit_;
}

void ListErrorLogsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListErrorLogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListErrorLogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


