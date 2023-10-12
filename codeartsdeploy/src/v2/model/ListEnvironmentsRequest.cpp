

#include "huaweicloud/codeartsdeploy/v2/model/ListEnvironmentsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




ListEnvironmentsRequest::ListEnvironmentsRequest()
{
    applicationId_ = "";
    applicationIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    pageIndex_ = 0;
    pageIndexIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
}

ListEnvironmentsRequest::~ListEnvironmentsRequest() = default;

void ListEnvironmentsRequest::validate()
{
}

web::json::value ListEnvironmentsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }

    return val;
}
bool ListEnvironmentsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    return ok;
}


std::string ListEnvironmentsRequest::getApplicationId() const
{
    return applicationId_;
}

void ListEnvironmentsRequest::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ListEnvironmentsRequest::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ListEnvironmentsRequest::unsetapplicationId()
{
    applicationIdIsSet_ = false;
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

int32_t ListEnvironmentsRequest::getPageIndex() const
{
    return pageIndex_;
}

void ListEnvironmentsRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ListEnvironmentsRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ListEnvironmentsRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ListEnvironmentsRequest::getPageSize() const
{
    return pageSize_;
}

void ListEnvironmentsRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListEnvironmentsRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListEnvironmentsRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListEnvironmentsRequest::getName() const
{
    return name_;
}

void ListEnvironmentsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListEnvironmentsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListEnvironmentsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListEnvironmentsRequest::getSortKey() const
{
    return sortKey_;
}

void ListEnvironmentsRequest::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListEnvironmentsRequest::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListEnvironmentsRequest::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListEnvironmentsRequest::getSortDir() const
{
    return sortDir_;
}

void ListEnvironmentsRequest::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListEnvironmentsRequest::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListEnvironmentsRequest::unsetsortDir()
{
    sortDirIsSet_ = false;
}

}
}
}
}
}


