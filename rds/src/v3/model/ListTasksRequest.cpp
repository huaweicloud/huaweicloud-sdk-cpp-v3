

#include "huaweicloud/rds/v3/model/ListTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListTasksRequest::ListTasksRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListTasksRequest::~ListTasksRequest() = default;

void ListTasksRequest::validate()
{
}

web::json::value ListTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListTasksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


int32_t ListTasksRequest::getOffset() const
{
    return offset_;
}

void ListTasksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTasksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTasksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTasksRequest::getLimit() const
{
    return limit_;
}

void ListTasksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTasksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTasksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListTasksRequest::getId() const
{
    return id_;
}

void ListTasksRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListTasksRequest::idIsSet() const
{
    return idIsSet_;
}

void ListTasksRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListTasksRequest::getInstanceId() const
{
    return instanceId_;
}

void ListTasksRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListTasksRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListTasksRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListTasksRequest::getOrderId() const
{
    return orderId_;
}

void ListTasksRequest::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ListTasksRequest::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ListTasksRequest::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ListTasksRequest::getName() const
{
    return name_;
}

void ListTasksRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListTasksRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListTasksRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListTasksRequest::getStatus() const
{
    return status_;
}

void ListTasksRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTasksRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListTasksRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListTasksRequest::getStartTime() const
{
    return startTime_;
}

void ListTasksRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListTasksRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListTasksRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListTasksRequest::getEndTime() const
{
    return endTime_;
}

void ListTasksRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListTasksRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListTasksRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


