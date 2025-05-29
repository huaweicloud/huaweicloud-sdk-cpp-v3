

#include "huaweicloud/codeartsbuild/v3/model/ListProjectJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListProjectJobsRequest::ListProjectJobsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    pageIndex_ = 0;
    pageIndexIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    sortOrder_ = "";
    sortOrderIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    buildStatus_ = "";
    buildStatusIsSet_ = false;
    byGroup_ = false;
    byGroupIsSet_ = false;
    groupPathId_ = "";
    groupPathIdIsSet_ = false;
}

ListProjectJobsRequest::~ListProjectJobsRequest() = default;

void ListProjectJobsRequest::validate()
{
}

web::json::value ListProjectJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pageIndexIsSet_) {
        val[utility::conversions::to_string_t("page_index")] = ModelBase::toJson(pageIndex_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(sortOrderIsSet_) {
        val[utility::conversions::to_string_t("sort_order")] = ModelBase::toJson(sortOrder_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(buildStatusIsSet_) {
        val[utility::conversions::to_string_t("build_status")] = ModelBase::toJson(buildStatus_);
    }
    if(byGroupIsSet_) {
        val[utility::conversions::to_string_t("by_group")] = ModelBase::toJson(byGroup_);
    }
    if(groupPathIdIsSet_) {
        val[utility::conversions::to_string_t("group_path_id")] = ModelBase::toJson(groupPathId_);
    }

    return val;
}
bool ListProjectJobsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("build_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("by_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("by_group"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setByGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_path_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_path_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupPathId(refVal);
        }
    }
    return ok;
}


std::string ListProjectJobsRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectJobsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectJobsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectJobsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListProjectJobsRequest::getPageIndex() const
{
    return pageIndex_;
}

void ListProjectJobsRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ListProjectJobsRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ListProjectJobsRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ListProjectJobsRequest::getPageSize() const
{
    return pageSize_;
}

void ListProjectJobsRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListProjectJobsRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListProjectJobsRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListProjectJobsRequest::getSearch() const
{
    return search_;
}

void ListProjectJobsRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListProjectJobsRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListProjectJobsRequest::unsetsearch()
{
    searchIsSet_ = false;
}

std::string ListProjectJobsRequest::getSortField() const
{
    return sortField_;
}

void ListProjectJobsRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool ListProjectJobsRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void ListProjectJobsRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string ListProjectJobsRequest::getSortOrder() const
{
    return sortOrder_;
}

void ListProjectJobsRequest::setSortOrder(const std::string& value)
{
    sortOrder_ = value;
    sortOrderIsSet_ = true;
}

bool ListProjectJobsRequest::sortOrderIsSet() const
{
    return sortOrderIsSet_;
}

void ListProjectJobsRequest::unsetsortOrder()
{
    sortOrderIsSet_ = false;
}

std::string ListProjectJobsRequest::getCreatorId() const
{
    return creatorId_;
}

void ListProjectJobsRequest::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool ListProjectJobsRequest::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void ListProjectJobsRequest::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string ListProjectJobsRequest::getBuildStatus() const
{
    return buildStatus_;
}

void ListProjectJobsRequest::setBuildStatus(const std::string& value)
{
    buildStatus_ = value;
    buildStatusIsSet_ = true;
}

bool ListProjectJobsRequest::buildStatusIsSet() const
{
    return buildStatusIsSet_;
}

void ListProjectJobsRequest::unsetbuildStatus()
{
    buildStatusIsSet_ = false;
}

bool ListProjectJobsRequest::isByGroup() const
{
    return byGroup_;
}

void ListProjectJobsRequest::setByGroup(bool value)
{
    byGroup_ = value;
    byGroupIsSet_ = true;
}

bool ListProjectJobsRequest::byGroupIsSet() const
{
    return byGroupIsSet_;
}

void ListProjectJobsRequest::unsetbyGroup()
{
    byGroupIsSet_ = false;
}

std::string ListProjectJobsRequest::getGroupPathId() const
{
    return groupPathId_;
}

void ListProjectJobsRequest::setGroupPathId(const std::string& value)
{
    groupPathId_ = value;
    groupPathIdIsSet_ = true;
}

bool ListProjectJobsRequest::groupPathIdIsSet() const
{
    return groupPathIdIsSet_;
}

void ListProjectJobsRequest::unsetgroupPathId()
{
    groupPathIdIsSet_ = false;
}

}
}
}
}
}


