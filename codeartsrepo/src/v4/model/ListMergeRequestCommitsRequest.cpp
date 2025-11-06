

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestCommitsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestCommitsRequest::ListMergeRequestCommitsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    mergeRequestIid_ = 0;
    mergeRequestIidIsSet_ = false;
    view_ = "";
    viewIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListMergeRequestCommitsRequest::~ListMergeRequestCommitsRequest() = default;

void ListMergeRequestCommitsRequest::validate()
{
}

web::json::value ListMergeRequestCommitsRequest::toJson() const
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListMergeRequestCommitsRequest::fromJson(const web::json::value& val)
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
            int32_t refVal;
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


int32_t ListMergeRequestCommitsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListMergeRequestCommitsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListMergeRequestCommitsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListMergeRequestCommitsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListMergeRequestCommitsRequest::getMergeRequestIid() const
{
    return mergeRequestIid_;
}

void ListMergeRequestCommitsRequest::setMergeRequestIid(int32_t value)
{
    mergeRequestIid_ = value;
    mergeRequestIidIsSet_ = true;
}

bool ListMergeRequestCommitsRequest::mergeRequestIidIsSet() const
{
    return mergeRequestIidIsSet_;
}

void ListMergeRequestCommitsRequest::unsetmergeRequestIid()
{
    mergeRequestIidIsSet_ = false;
}

std::string ListMergeRequestCommitsRequest::getView() const
{
    return view_;
}

void ListMergeRequestCommitsRequest::setView(const std::string& value)
{
    view_ = value;
    viewIsSet_ = true;
}

bool ListMergeRequestCommitsRequest::viewIsSet() const
{
    return viewIsSet_;
}

void ListMergeRequestCommitsRequest::unsetview()
{
    viewIsSet_ = false;
}

int32_t ListMergeRequestCommitsRequest::getOffset() const
{
    return offset_;
}

void ListMergeRequestCommitsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListMergeRequestCommitsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListMergeRequestCommitsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListMergeRequestCommitsRequest::getLimit() const
{
    return limit_;
}

void ListMergeRequestCommitsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListMergeRequestCommitsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListMergeRequestCommitsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


