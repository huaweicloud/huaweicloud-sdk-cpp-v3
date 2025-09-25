

#include "huaweicloud/codehub/v4/model/ListManageableGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListManageableGroupsRequest::ListManageableGroupsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    scope_ = "";
    scopeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListManageableGroupsRequest::~ListManageableGroupsRequest() = default;

void ListManageableGroupsRequest::validate()
{
}

web::json::value ListManageableGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListManageableGroupsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScope(refVal);
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


std::string ListManageableGroupsRequest::getProjectId() const
{
    return projectId_;
}

void ListManageableGroupsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListManageableGroupsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListManageableGroupsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListManageableGroupsRequest::getScope() const
{
    return scope_;
}

void ListManageableGroupsRequest::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool ListManageableGroupsRequest::scopeIsSet() const
{
    return scopeIsSet_;
}

void ListManageableGroupsRequest::unsetscope()
{
    scopeIsSet_ = false;
}

int32_t ListManageableGroupsRequest::getOffset() const
{
    return offset_;
}

void ListManageableGroupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListManageableGroupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListManageableGroupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListManageableGroupsRequest::getLimit() const
{
    return limit_;
}

void ListManageableGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListManageableGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListManageableGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


