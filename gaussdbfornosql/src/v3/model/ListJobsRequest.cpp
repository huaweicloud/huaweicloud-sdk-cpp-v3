

#include "huaweicloud/gaussdbfornosql/v3/model/ListJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListJobsRequest::ListJobsRequest()
{
    id_ = "";
    idIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListJobsRequest::~ListJobsRequest() = default;

void ListJobsRequest::validate()
{
}

web::json::value ListJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListJobsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


std::string ListJobsRequest::getId() const
{
    return id_;
}

void ListJobsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListJobsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListJobsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListJobsRequest::getStartTime() const
{
    return startTime_;
}

void ListJobsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListJobsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListJobsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListJobsRequest::getEndTime() const
{
    return endTime_;
}

void ListJobsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListJobsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListJobsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListJobsRequest::getStatus() const
{
    return status_;
}

void ListJobsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListJobsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListJobsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListJobsRequest::getName() const
{
    return name_;
}

void ListJobsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListJobsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListJobsRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListJobsRequest::getOffset() const
{
    return offset_;
}

void ListJobsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListJobsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListJobsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListJobsRequest::getLimit() const
{
    return limit_;
}

void ListJobsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListJobsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListJobsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


