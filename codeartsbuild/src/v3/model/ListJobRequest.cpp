

#include "huaweicloud/codeartsbuild/v3/model/ListJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListJobRequest::ListJobRequest()
{
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
}

ListJobRequest::~ListJobRequest() = default;

void ListJobRequest::validate()
{
}

web::json::value ListJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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

    return val;
}
bool ListJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


int32_t ListJobRequest::getPageIndex() const
{
    return pageIndex_;
}

void ListJobRequest::setPageIndex(int32_t value)
{
    pageIndex_ = value;
    pageIndexIsSet_ = true;
}

bool ListJobRequest::pageIndexIsSet() const
{
    return pageIndexIsSet_;
}

void ListJobRequest::unsetpageIndex()
{
    pageIndexIsSet_ = false;
}

int32_t ListJobRequest::getPageSize() const
{
    return pageSize_;
}

void ListJobRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListJobRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListJobRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string ListJobRequest::getSearch() const
{
    return search_;
}

void ListJobRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListJobRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListJobRequest::unsetsearch()
{
    searchIsSet_ = false;
}

std::string ListJobRequest::getSortField() const
{
    return sortField_;
}

void ListJobRequest::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool ListJobRequest::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void ListJobRequest::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string ListJobRequest::getSortOrder() const
{
    return sortOrder_;
}

void ListJobRequest::setSortOrder(const std::string& value)
{
    sortOrder_ = value;
    sortOrderIsSet_ = true;
}

bool ListJobRequest::sortOrderIsSet() const
{
    return sortOrderIsSet_;
}

void ListJobRequest::unsetsortOrder()
{
    sortOrderIsSet_ = false;
}

std::string ListJobRequest::getCreatorId() const
{
    return creatorId_;
}

void ListJobRequest::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool ListJobRequest::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void ListJobRequest::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string ListJobRequest::getBuildStatus() const
{
    return buildStatus_;
}

void ListJobRequest::setBuildStatus(const std::string& value)
{
    buildStatus_ = value;
    buildStatusIsSet_ = true;
}

bool ListJobRequest::buildStatusIsSet() const
{
    return buildStatusIsSet_;
}

void ListJobRequest::unsetbuildStatus()
{
    buildStatusIsSet_ = false;
}

}
}
}
}
}


