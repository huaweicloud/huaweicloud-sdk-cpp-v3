

#include "huaweicloud/gaussdbfornosql/v3/model/ListSlowLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListSlowLogsRequest::ListSlowLogsRequest()
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

ListSlowLogsRequest::~ListSlowLogsRequest() = default;

void ListSlowLogsRequest::validate()
{
}

web::json::value ListSlowLogsRequest::toJson() const
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
bool ListSlowLogsRequest::fromJson(const web::json::value& val)
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


std::string ListSlowLogsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSlowLogsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSlowLogsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSlowLogsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListSlowLogsRequest::getStartDate() const
{
    return startDate_;
}

void ListSlowLogsRequest::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ListSlowLogsRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void ListSlowLogsRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ListSlowLogsRequest::getEndDate() const
{
    return endDate_;
}

void ListSlowLogsRequest::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ListSlowLogsRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ListSlowLogsRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

std::string ListSlowLogsRequest::getNodeId() const
{
    return nodeId_;
}

void ListSlowLogsRequest::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListSlowLogsRequest::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListSlowLogsRequest::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ListSlowLogsRequest::getType() const
{
    return type_;
}

void ListSlowLogsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListSlowLogsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListSlowLogsRequest::unsettype()
{
    typeIsSet_ = false;
}

int32_t ListSlowLogsRequest::getOffset() const
{
    return offset_;
}

void ListSlowLogsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSlowLogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSlowLogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListSlowLogsRequest::getLimit() const
{
    return limit_;
}

void ListSlowLogsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSlowLogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSlowLogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


