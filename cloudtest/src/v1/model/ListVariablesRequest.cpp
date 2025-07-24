

#include "huaweicloud/cloudtest/v1/model/ListVariablesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListVariablesRequest::ListVariablesRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    pageNo_ = "";
    pageNoIsSet_ = false;
    pageSize_ = "";
    pageSizeIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

ListVariablesRequest::~ListVariablesRequest() = default;

void ListVariablesRequest::validate()
{
}

web::json::value ListVariablesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ListVariablesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


std::string ListVariablesRequest::getGroupId() const
{
    return groupId_;
}

void ListVariablesRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListVariablesRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListVariablesRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListVariablesRequest::getPageNo() const
{
    return pageNo_;
}

void ListVariablesRequest::setPageNo(const std::string& value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListVariablesRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListVariablesRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

std::string ListVariablesRequest::getPageSize() const
{
    return pageSize_;
}

void ListVariablesRequest::setPageSize(const std::string& value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListVariablesRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListVariablesRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListVariablesRequest::getProjectId() const
{
    return projectId_;
}

void ListVariablesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListVariablesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListVariablesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


