

#include "huaweicloud/codeartsartifact/v2/model/RepoFileQueryDTOV5.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




RepoFileQueryDTOV5::RepoFileQueryDTOV5()
{
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    searchName_ = "";
    searchNameIsSet_ = false;
    searchType_ = "";
    searchTypeIsSet_ = false;
    extension_ = "";
    extensionIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
}

RepoFileQueryDTOV5::~RepoFileQueryDTOV5() = default;

void RepoFileQueryDTOV5::validate()
{
}

web::json::value RepoFileQueryDTOV5::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(searchNameIsSet_) {
        val[utility::conversions::to_string_t("search_name")] = ModelBase::toJson(searchName_);
    }
    if(searchTypeIsSet_) {
        val[utility::conversions::to_string_t("search_type")] = ModelBase::toJson(searchType_);
    }
    if(extensionIsSet_) {
        val[utility::conversions::to_string_t("extension")] = ModelBase::toJson(extension_);
    }
    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }

    return val;
}
bool RepoFileQueryDTOV5::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("search_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extension"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extension"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtension(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    return ok;
}


int32_t RepoFileQueryDTOV5::getPageNo() const
{
    return pageNo_;
}

void RepoFileQueryDTOV5::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool RepoFileQueryDTOV5::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void RepoFileQueryDTOV5::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t RepoFileQueryDTOV5::getPageSize() const
{
    return pageSize_;
}

void RepoFileQueryDTOV5::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool RepoFileQueryDTOV5::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void RepoFileQueryDTOV5::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string RepoFileQueryDTOV5::getParentId() const
{
    return parentId_;
}

void RepoFileQueryDTOV5::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool RepoFileQueryDTOV5::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void RepoFileQueryDTOV5::unsetparentId()
{
    parentIdIsSet_ = false;
}

std::string RepoFileQueryDTOV5::getProjectId() const
{
    return projectId_;
}

void RepoFileQueryDTOV5::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepoFileQueryDTOV5::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepoFileQueryDTOV5::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string RepoFileQueryDTOV5::getSearchName() const
{
    return searchName_;
}

void RepoFileQueryDTOV5::setSearchName(const std::string& value)
{
    searchName_ = value;
    searchNameIsSet_ = true;
}

bool RepoFileQueryDTOV5::searchNameIsSet() const
{
    return searchNameIsSet_;
}

void RepoFileQueryDTOV5::unsetsearchName()
{
    searchNameIsSet_ = false;
}

std::string RepoFileQueryDTOV5::getSearchType() const
{
    return searchType_;
}

void RepoFileQueryDTOV5::setSearchType(const std::string& value)
{
    searchType_ = value;
    searchTypeIsSet_ = true;
}

bool RepoFileQueryDTOV5::searchTypeIsSet() const
{
    return searchTypeIsSet_;
}

void RepoFileQueryDTOV5::unsetsearchType()
{
    searchTypeIsSet_ = false;
}

std::string RepoFileQueryDTOV5::getExtension() const
{
    return extension_;
}

void RepoFileQueryDTOV5::setExtension(const std::string& value)
{
    extension_ = value;
    extensionIsSet_ = true;
}

bool RepoFileQueryDTOV5::extensionIsSet() const
{
    return extensionIsSet_;
}

void RepoFileQueryDTOV5::unsetextension()
{
    extensionIsSet_ = false;
}

std::string RepoFileQueryDTOV5::getOrderBy() const
{
    return orderBy_;
}

void RepoFileQueryDTOV5::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool RepoFileQueryDTOV5::orderByIsSet() const
{
    return orderByIsSet_;
}

void RepoFileQueryDTOV5::unsetorderBy()
{
    orderByIsSet_ = false;
}

std::string RepoFileQueryDTOV5::getSort() const
{
    return sort_;
}

void RepoFileQueryDTOV5::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool RepoFileQueryDTOV5::sortIsSet() const
{
    return sortIsSet_;
}

void RepoFileQueryDTOV5::unsetsort()
{
    sortIsSet_ = false;
}

std::string RepoFileQueryDTOV5::getStatus() const
{
    return status_;
}

void RepoFileQueryDTOV5::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RepoFileQueryDTOV5::statusIsSet() const
{
    return statusIsSet_;
}

void RepoFileQueryDTOV5::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RepoFileQueryDTOV5::getCategory() const
{
    return category_;
}

void RepoFileQueryDTOV5::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool RepoFileQueryDTOV5::categoryIsSet() const
{
    return categoryIsSet_;
}

void RepoFileQueryDTOV5::unsetcategory()
{
    categoryIsSet_ = false;
}

}
}
}
}
}


