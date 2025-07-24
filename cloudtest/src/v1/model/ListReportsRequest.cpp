

#include "huaweicloud/cloudtest/v1/model/ListReportsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListReportsRequest::ListReportsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pageSize_ = 0L;
    pageSizeIsSet_ = false;
    offset_ = 0L;
    offsetIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
}

ListReportsRequest::~ListReportsRequest() = default;

void ListReportsRequest::validate()
{
}

web::json::value ListReportsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListReportsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ListReportsRequest::getProjectId() const
{
    return projectId_;
}

void ListReportsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListReportsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListReportsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int64_t ListReportsRequest::getPageSize() const
{
    return pageSize_;
}

void ListReportsRequest::setPageSize(int64_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListReportsRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListReportsRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int64_t ListReportsRequest::getOffset() const
{
    return offset_;
}

void ListReportsRequest::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListReportsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListReportsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListReportsRequest::getVersionId() const
{
    return versionId_;
}

void ListReportsRequest::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool ListReportsRequest::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void ListReportsRequest::unsetversionId()
{
    versionIdIsSet_ = false;
}

int32_t ListReportsRequest::getType() const
{
    return type_;
}

void ListReportsRequest::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListReportsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListReportsRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


