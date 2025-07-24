

#include "huaweicloud/cloudtest/v1/model/ListEnvironmentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListEnvironmentsRequest::ListEnvironmentsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0L;
    offsetIsSet_ = false;
    limit_ = 0L;
    limitIsSet_ = false;
}

ListEnvironmentsRequest::~ListEnvironmentsRequest() = default;

void ListEnvironmentsRequest::validate()
{
}

web::json::value ListEnvironmentsRequest::toJson() const
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

    return val;
}
bool ListEnvironmentsRequest::fromJson(const web::json::value& val)
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
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListEnvironmentsRequest::getProjectId() const
{
    return projectId_;
}

void ListEnvironmentsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListEnvironmentsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListEnvironmentsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int64_t ListEnvironmentsRequest::getOffset() const
{
    return offset_;
}

void ListEnvironmentsRequest::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListEnvironmentsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListEnvironmentsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t ListEnvironmentsRequest::getLimit() const
{
    return limit_;
}

void ListEnvironmentsRequest::setLimit(int64_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEnvironmentsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEnvironmentsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


