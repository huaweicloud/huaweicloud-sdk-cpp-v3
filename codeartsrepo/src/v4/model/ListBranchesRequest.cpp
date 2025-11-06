

#include "huaweicloud/codeartsrepo/v4/model/ListBranchesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListBranchesRequest::ListBranchesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    branchType_ = "";
    branchTypeIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
    queryView_ = "";
    queryViewIsSet_ = false;
    view_ = "";
    viewIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListBranchesRequest::~ListBranchesRequest() = default;

void ListBranchesRequest::validate()
{
}

web::json::value ListBranchesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(branchTypeIsSet_) {
        val[utility::conversions::to_string_t("branch_type")] = ModelBase::toJson(branchType_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }
    if(queryViewIsSet_) {
        val[utility::conversions::to_string_t("query_view")] = ModelBase::toJson(queryView_);
    }
    if(viewIsSet_) {
        val[utility::conversions::to_string_t("view")] = ModelBase::toJson(view_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListBranchesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("query_view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_view"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryView(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("view"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("view"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setView(refVal);
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


int32_t ListBranchesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListBranchesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListBranchesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListBranchesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListBranchesRequest::getBranchType() const
{
    return branchType_;
}

void ListBranchesRequest::setBranchType(const std::string& value)
{
    branchType_ = value;
    branchTypeIsSet_ = true;
}

bool ListBranchesRequest::branchTypeIsSet() const
{
    return branchTypeIsSet_;
}

void ListBranchesRequest::unsetbranchType()
{
    branchTypeIsSet_ = false;
}

std::string ListBranchesRequest::getCreator() const
{
    return creator_;
}

void ListBranchesRequest::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool ListBranchesRequest::creatorIsSet() const
{
    return creatorIsSet_;
}

void ListBranchesRequest::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string ListBranchesRequest::getSort() const
{
    return sort_;
}

void ListBranchesRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListBranchesRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListBranchesRequest::unsetsort()
{
    sortIsSet_ = false;
}

std::string ListBranchesRequest::getQueryView() const
{
    return queryView_;
}

void ListBranchesRequest::setQueryView(const std::string& value)
{
    queryView_ = value;
    queryViewIsSet_ = true;
}

bool ListBranchesRequest::queryViewIsSet() const
{
    return queryViewIsSet_;
}

void ListBranchesRequest::unsetqueryView()
{
    queryViewIsSet_ = false;
}

std::string ListBranchesRequest::getView() const
{
    return view_;
}

void ListBranchesRequest::setView(const std::string& value)
{
    view_ = value;
    viewIsSet_ = true;
}

bool ListBranchesRequest::viewIsSet() const
{
    return viewIsSet_;
}

void ListBranchesRequest::unsetview()
{
    viewIsSet_ = false;
}

int32_t ListBranchesRequest::getOffset() const
{
    return offset_;
}

void ListBranchesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListBranchesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListBranchesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListBranchesRequest::getLimit() const
{
    return limit_;
}

void ListBranchesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListBranchesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListBranchesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


