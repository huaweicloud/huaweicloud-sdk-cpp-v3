

#include "huaweicloud/projectman/v4/model/ListProjectDomainsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectDomainsRequest::ListProjectDomainsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListProjectDomainsRequest::~ListProjectDomainsRequest() = default;

void ListProjectDomainsRequest::validate()
{
}

web::json::value ListProjectDomainsRequest::toJson() const
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
bool ListProjectDomainsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListProjectDomainsRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectDomainsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectDomainsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectDomainsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListProjectDomainsRequest::getOffset() const
{
    return offset_;
}

void ListProjectDomainsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectDomainsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectDomainsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectDomainsRequest::getLimit() const
{
    return limit_;
}

void ListProjectDomainsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectDomainsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectDomainsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


