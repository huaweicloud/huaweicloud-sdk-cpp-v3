

#include "huaweicloud/codehub/v3/model/ListMergeRequestReviewersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListMergeRequestReviewersRequest::ListMergeRequestReviewersRequest()
{
    repositoryId_ = "";
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    perPage_ = 0;
    perPageIsSet_ = false;
}

ListMergeRequestReviewersRequest::~ListMergeRequestReviewersRequest() = default;

void ListMergeRequestReviewersRequest::validate()
{
}

web::json::value ListMergeRequestReviewersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(mergeRequestIidIsSet_) {
        val[utility::conversions::to_string_t("merge_request_iid")] = ModelBase::toJson(mergeRequestIid_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(perPageIsSet_) {
        val[utility::conversions::to_string_t("per_page")] = ModelBase::toJson(perPage_);
    }

    return val;
}
bool ListMergeRequestReviewersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("per_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("per_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPerPage(refVal);
        }
    }
    return ok;
}


std::string ListMergeRequestReviewersRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeRequestReviewersRequest::setRepositoryId(const std::string& value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeRequestReviewersRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeRequestReviewersRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListMergeRequestReviewersRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ListMergeRequestReviewersRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ListMergeRequestReviewersRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ListMergeRequestReviewersRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

int32_t ListMergeRequestReviewersRequest::getPage() const
{
    return page_;
}

void ListMergeRequestReviewersRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListMergeRequestReviewersRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListMergeRequestReviewersRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListMergeRequestReviewersRequest::getPerPage() const
{
    return perPage_;
}

void ListMergeRequestReviewersRequest::setPerPage(int32_t value)
{
    perPage_ = value;
    perPageIsSet_ = true;
}

bool ListMergeRequestReviewersRequest::perPageIsSet() const
{
    return perPageIsSet_;
}

void ListMergeRequestReviewersRequest::unsetperPage()
{
    perPageIsSet_ = false;
}

}
}
}
}
}


