

#include "huaweicloud/codehub/v4/model/ListMergeRequestValidAssignedCandidatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListMergeRequestValidAssignedCandidatesRequest::ListMergeRequestValidAssignedCandidatesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    searchByNameList_ = "";
    searchByNameListIsSet_ = false;
    targetProjectId_ = "";
    targetProjectIdIsSet_ = false;
    view_ = "";
    viewIsSet_ = false;
    mode_ = "";
    modeIsSet_ = false;
    onlyDevelopers_ = false;
    onlyDevelopersIsSet_ = false;
}

ListMergeRequestValidAssignedCandidatesRequest::~ListMergeRequestValidAssignedCandidatesRequest() = default;

void ListMergeRequestValidAssignedCandidatesRequest::validate()
{
}

web::json::value ListMergeRequestValidAssignedCandidatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(searchByNameListIsSet_) {
        val[utility::conversions::to_string_t("search_by_name_list")] = ModelBase::toJson(searchByNameList_);
    }
    if(targetProjectIdIsSet_) {
        val[utility::conversions::to_string_t("target_project_id")] = ModelBase::toJson(targetProjectId_);
    }
    if(viewIsSet_) {
        val[utility::conversions::to_string_t("view")] = ModelBase::toJson(view_);
    }
    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(onlyDevelopersIsSet_) {
        val[utility::conversions::to_string_t("only_developers")] = ModelBase::toJson(onlyDevelopers_);
    }

    return val;
}
bool ListMergeRequestValidAssignedCandidatesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("target_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_iid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestIid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_by_name_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_by_name_list"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchByNameList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetProjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("only_developers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_developers"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyDevelopers(refVal);
        }
    }
    return ok;
}


int32_t ListMergeRequestValidAssignedCandidatesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeRequestValidAssignedCandidatesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeRequestValidAssignedCandidatesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeRequestValidAssignedCandidatesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListMergeRequestValidAssignedCandidatesRequest::getTargetBranch() const
{
    return targetBranch_;
}

void ListMergeRequestValidAssignedCandidatesRequest::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool ListMergeRequestValidAssignedCandidatesRequest::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void ListMergeRequestValidAssignedCandidatesRequest::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

int32_t ListMergeRequestValidAssignedCandidatesRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ListMergeRequestValidAssignedCandidatesRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ListMergeRequestValidAssignedCandidatesRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ListMergeRequestValidAssignedCandidatesRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

int32_t ListMergeRequestValidAssignedCandidatesRequest::getOffset() const
{
    return offset_;
}

void ListMergeRequestValidAssignedCandidatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMergeRequestValidAssignedCandidatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMergeRequestValidAssignedCandidatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMergeRequestValidAssignedCandidatesRequest::getLimit() const
{
    return limit_;
}

void ListMergeRequestValidAssignedCandidatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMergeRequestValidAssignedCandidatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMergeRequestValidAssignedCandidatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListMergeRequestValidAssignedCandidatesRequest::getSearch() const
{
    return search_;
}

void ListMergeRequestValidAssignedCandidatesRequest::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListMergeRequestValidAssignedCandidatesRequest::searchIsSet() const
{
    return searchIsSet_;
}

void ListMergeRequestValidAssignedCandidatesRequest::unsetsearch()
{
    searchIsSet_ = false;
}

std::string ListMergeRequestValidAssignedCandidatesRequest::getSearchByNameList() const
{
    return searchByNameList_;
}

void ListMergeRequestValidAssignedCandidatesRequest::setSearchByNameList(const std::string& value)
{
    searchByNameList_ = value;
    searchByNameListIsSet_ = true;
}

bool ListMergeRequestValidAssignedCandidatesRequest::searchByNameListIsSet() const
{
    return searchByNameListIsSet_;
}

void ListMergeRequestValidAssignedCandidatesRequest::unsetsearchByNameList()
{
    searchByNameListIsSet_ = false;
}

std::string ListMergeRequestValidAssignedCandidatesRequest::getTargetProjectId() const
{
    return targetProjectId_;
}

void ListMergeRequestValidAssignedCandidatesRequest::setTargetProjectId(const std::string& value)
{
    targetProjectId_ = value;
    targetProjectIdIsSet_ = true;
}

bool ListMergeRequestValidAssignedCandidatesRequest::targetProjectIdIsSet() const
{
    return targetProjectIdIsSet_;
}

void ListMergeRequestValidAssignedCandidatesRequest::unsettargetProjectId()
{
    targetProjectIdIsSet_ = false;
}

std::string ListMergeRequestValidAssignedCandidatesRequest::getView() const
{
    return view_;
}

void ListMergeRequestValidAssignedCandidatesRequest::setView(const std::string& value)
{
    view_ = value;
    viewIsSet_ = true;
}

bool ListMergeRequestValidAssignedCandidatesRequest::viewIsSet() const
{
    return viewIsSet_;
}

void ListMergeRequestValidAssignedCandidatesRequest::unsetview()
{
    viewIsSet_ = false;
}

std::string ListMergeRequestValidAssignedCandidatesRequest::getMode() const
{
    return mode_;
}

void ListMergeRequestValidAssignedCandidatesRequest::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool ListMergeRequestValidAssignedCandidatesRequest::modeIsSet() const
{
    return modeIsSet_;
}

void ListMergeRequestValidAssignedCandidatesRequest::unsetmode()
{
    modeIsSet_ = false;
}

bool ListMergeRequestValidAssignedCandidatesRequest::isOnlyDevelopers() const
{
    return onlyDevelopers_;
}

void ListMergeRequestValidAssignedCandidatesRequest::setOnlyDevelopers(bool value)
{
    onlyDevelopers_ = value;
    onlyDevelopersIsSet_ = true;
}

bool ListMergeRequestValidAssignedCandidatesRequest::onlyDevelopersIsSet() const
{
    return onlyDevelopersIsSet_;
}

void ListMergeRequestValidAssignedCandidatesRequest::unsetonlyDevelopers()
{
    onlyDevelopersIsSet_ = false;
}

}
}
}
}
}


