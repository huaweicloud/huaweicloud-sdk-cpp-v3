

#include "huaweicloud/rds/v3/model/ListScheduleEventsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListScheduleEventsRequest::ListScheduleEventsRequest()
{
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListScheduleEventsRequest::~ListScheduleEventsRequest() = default;

void ListScheduleEventsRequest::validate()
{
}

web::json::value ListScheduleEventsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListScheduleEventsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
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


std::string ListScheduleEventsRequest::getId() const
{
    return id_;
}

void ListScheduleEventsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListScheduleEventsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListScheduleEventsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListScheduleEventsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListScheduleEventsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListScheduleEventsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListScheduleEventsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListScheduleEventsRequest::getStatus() const
{
    return status_;
}

void ListScheduleEventsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListScheduleEventsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListScheduleEventsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListScheduleEventsRequest::getType() const
{
    return type_;
}

void ListScheduleEventsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListScheduleEventsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListScheduleEventsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListScheduleEventsRequest::getLevel() const
{
    return level_;
}

void ListScheduleEventsRequest::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool ListScheduleEventsRequest::levelIsSet() const
{
    return levelIsSet_;
}

void ListScheduleEventsRequest::unsetlevel()
{
    levelIsSet_ = false;
}

std::string ListScheduleEventsRequest::getSortField() const
{
    return sortField_;
}

void ListScheduleEventsRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool ListScheduleEventsRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void ListScheduleEventsRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string ListScheduleEventsRequest::getOrder() const
{
    return order_;
}

void ListScheduleEventsRequest::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListScheduleEventsRequest::orderIsSet() const
{
    return orderIsSet_;
}

void ListScheduleEventsRequest::unsetorder()
{
    orderIsSet_ = false;
}

int32_t ListScheduleEventsRequest::getOffset() const
{
    return offset_;
}

void ListScheduleEventsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListScheduleEventsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListScheduleEventsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListScheduleEventsRequest::getLimit() const
{
    return limit_;
}

void ListScheduleEventsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListScheduleEventsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListScheduleEventsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


