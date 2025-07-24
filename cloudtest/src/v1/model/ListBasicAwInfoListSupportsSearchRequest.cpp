

#include "huaweicloud/cloudtest/v1/model/ListBasicAwInfoListSupportsSearchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListBasicAwInfoListSupportsSearchRequest::ListBasicAwInfoListSupportsSearchRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pageNo_ = "";
    pageNoIsSet_ = false;
    pageSize_ = "";
    pageSizeIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListBasicAwInfoListSupportsSearchRequest::~ListBasicAwInfoListSupportsSearchRequest() = default;

void ListBasicAwInfoListSupportsSearchRequest::validate()
{
}

web::json::value ListBasicAwInfoListSupportsSearchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListBasicAwInfoListSupportsSearchRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SearchRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListBasicAwInfoListSupportsSearchRequest::getProjectId() const
{
    return projectId_;
}

void ListBasicAwInfoListSupportsSearchRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListBasicAwInfoListSupportsSearchRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListBasicAwInfoListSupportsSearchRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListBasicAwInfoListSupportsSearchRequest::getPageNo() const
{
    return pageNo_;
}

void ListBasicAwInfoListSupportsSearchRequest::setPageNo(const std::string& value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListBasicAwInfoListSupportsSearchRequest::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListBasicAwInfoListSupportsSearchRequest::unsetpageNo()
{
    pageNoIsSet_ = false;
}

std::string ListBasicAwInfoListSupportsSearchRequest::getPageSize() const
{
    return pageSize_;
}

void ListBasicAwInfoListSupportsSearchRequest::setPageSize(const std::string& value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListBasicAwInfoListSupportsSearchRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListBasicAwInfoListSupportsSearchRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListBasicAwInfoListSupportsSearchRequest::getParentId() const
{
    return parentId_;
}

void ListBasicAwInfoListSupportsSearchRequest::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool ListBasicAwInfoListSupportsSearchRequest::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void ListBasicAwInfoListSupportsSearchRequest::unsetparentId()
{
    parentIdIsSet_ = false;
}

SearchRequest ListBasicAwInfoListSupportsSearchRequest::getBody() const
{
    return body_;
}

void ListBasicAwInfoListSupportsSearchRequest::setBody(const SearchRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListBasicAwInfoListSupportsSearchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListBasicAwInfoListSupportsSearchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


