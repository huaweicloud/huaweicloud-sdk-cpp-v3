

#include "huaweicloud/codehub/v3/model/ListMergeChangesTreesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListMergeChangesTreesRequest::ListMergeChangesTreesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = "";
    mergeRequestIidIsSet_ = false;
    view_ = "";
    viewIsSet_ = false;
    commitId_ = "";
    commitIdIsSet_ = false;
}

ListMergeChangesTreesRequest::~ListMergeChangesTreesRequest() = default;

void ListMergeChangesTreesRequest::validate()
{
}

web::json::value ListMergeChangesTreesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(viewIsSet_) {
        val[utility::conversions::to_string_t("view")] = ModelBase::toJson(view_);
    }
    if(commitIdIsSet_) {
        val[utility::conversions::to_string_t("commit_id")] = ModelBase::toJson(commitId_);
    }

    return val;
}
bool ListMergeChangesTreesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("merge_request_iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_iid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestIid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommitId(refVal);
        }
    }
    return ok;
}


int32_t ListMergeChangesTreesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeChangesTreesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeChangesTreesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeChangesTreesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListMergeChangesTreesRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ListMergeChangesTreesRequest::setMergeRequestIid(const std::string& value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ListMergeChangesTreesRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ListMergeChangesTreesRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

std::string ListMergeChangesTreesRequest::getView() const
{
    return view_;
}

void ListMergeChangesTreesRequest::setView(const std::string& value)
{
    view_ = value;
    viewIsSet_ = true;
}

bool ListMergeChangesTreesRequest::viewIsSet() const
{
    return viewIsSet_;
}

void ListMergeChangesTreesRequest::unsetview()
{
    viewIsSet_ = false;
}

std::string ListMergeChangesTreesRequest::getCommitId() const
{
    return commitId_;
}

void ListMergeChangesTreesRequest::setCommitId(const std::string& value)
{
    commitId_ = value;
    commitIdIsSet_ = true;
}

bool ListMergeChangesTreesRequest::commitIdIsSet() const
{
    return commitIdIsSet_;
}

void ListMergeChangesTreesRequest::unsetcommitId()
{
    commitIdIsSet_ = false;
}

}
}
}
}
}


