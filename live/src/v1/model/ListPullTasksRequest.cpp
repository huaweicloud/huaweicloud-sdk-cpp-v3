

#include "huaweicloud/live/v1/model/ListPullTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListPullTasksRequest::ListPullTasksRequest()
{
    region_ = "";
    regionIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ListPullTasksRequest::~ListPullTasksRequest() = default;

void ListPullTasksRequest::validate()
{
}

web::json::value ListPullTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool ListPullTasksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    return ok;
}


std::string ListPullTasksRequest::getRegion() const
{
    return region_;
}

void ListPullTasksRequest::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ListPullTasksRequest::regionIsSet() const
{
    return regionIsSet_;
}

void ListPullTasksRequest::unsetregion()
{
    regionIsSet_ = false;
}

int32_t ListPullTasksRequest::getOffset() const
{
    return offset_;
}

void ListPullTasksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPullTasksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPullTasksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPullTasksRequest::getLimit() const
{
    return limit_;
}

void ListPullTasksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPullTasksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPullTasksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPullTasksRequest::getTaskId() const
{
    return taskId_;
}

void ListPullTasksRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListPullTasksRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListPullTasksRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


