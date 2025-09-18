

#include "huaweicloud/projectman/v4/model/ListWorkitemsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListWorkitemsRequest::ListWorkitemsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    createdTimeInterval_ = "";
    createdTimeIntervalIsSet_ = false;
}

ListWorkitemsRequest::~ListWorkitemsRequest() = default;

void ListWorkitemsRequest::validate()
{
}

web::json::value ListWorkitemsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(createdTimeIntervalIsSet_) {
        val[utility::conversions::to_string_t("created_time_interval")] = ModelBase::toJson(createdTimeInterval_);
    }

    return val;
}
bool ListWorkitemsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_time_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time_interval"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTimeInterval(refVal);
        }
    }
    return ok;
}


std::string ListWorkitemsRequest::getProjectId() const
{
    return projectId_;
}

void ListWorkitemsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListWorkitemsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListWorkitemsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListWorkitemsRequest::getOffset() const
{
    return offset_;
}

void ListWorkitemsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListWorkitemsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListWorkitemsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListWorkitemsRequest::getLimit() const
{
    return limit_;
}

void ListWorkitemsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListWorkitemsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListWorkitemsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListWorkitemsRequest::getCreatedTimeInterval() const
{
    return createdTimeInterval_;
}

void ListWorkitemsRequest::setCreatedTimeInterval(const std::string& value)
{
    createdTimeInterval_ = value;
    createdTimeIntervalIsSet_ = true;
}

bool ListWorkitemsRequest::createdTimeIntervalIsSet() const
{
    return createdTimeIntervalIsSet_;
}

void ListWorkitemsRequest::unsetcreatedTimeInterval()
{
    createdTimeIntervalIsSet_ = false;
}

}
}
}
}
}


