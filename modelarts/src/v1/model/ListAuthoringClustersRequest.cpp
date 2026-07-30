

#include "huaweicloud/modelarts/v1/model/ListAuthoringClustersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListAuthoringClustersRequest::ListAuthoringClustersRequest()
{
    type_ = "";
    typeIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    scope_ = "";
    scopeIsSet_ = false;
}

ListAuthoringClustersRequest::~ListAuthoringClustersRequest() = default;

void ListAuthoringClustersRequest::validate()
{
}

web::json::value ListAuthoringClustersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(scopeIsSet_) {
        val[utility::conversions::to_string_t("scope")] = ModelBase::toJson(scope_);
    }

    return val;
}
bool ListAuthoringClustersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    return ok;
}


std::string ListAuthoringClustersRequest::getType() const
{
    return type_;
}

void ListAuthoringClustersRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListAuthoringClustersRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListAuthoringClustersRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListAuthoringClustersRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ListAuthoringClustersRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ListAuthoringClustersRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ListAuthoringClustersRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

int32_t ListAuthoringClustersRequest::getLimit() const
{
    return limit_;
}

void ListAuthoringClustersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAuthoringClustersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAuthoringClustersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListAuthoringClustersRequest::getOffset() const
{
    return offset_;
}

void ListAuthoringClustersRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAuthoringClustersRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAuthoringClustersRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListAuthoringClustersRequest::getScope() const
{
    return scope_;
}

void ListAuthoringClustersRequest::setScope(const std::string& value)
{
    scope_ = value;
    scopeIsSet_ = true;
}

bool ListAuthoringClustersRequest::scopeIsSet() const
{
    return scopeIsSet_;
}

void ListAuthoringClustersRequest::unsetscope()
{
    scopeIsSet_ = false;
}

}
}
}
}
}


