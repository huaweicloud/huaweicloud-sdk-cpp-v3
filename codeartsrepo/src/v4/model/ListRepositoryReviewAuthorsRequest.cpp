

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryReviewAuthorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryReviewAuthorsRequest::ListRepositoryReviewAuthorsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    noteableType_ = "";
    noteableTypeIsSet_ = false;
    resolvedStatus_ = "";
    resolvedStatusIsSet_ = false;
    reviewersFilter_ = "";
    reviewersFilterIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRepositoryReviewAuthorsRequest::~ListRepositoryReviewAuthorsRequest() = default;

void ListRepositoryReviewAuthorsRequest::validate()
{
}

web::json::value ListRepositoryReviewAuthorsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(noteableTypeIsSet_) {
        val[utility::conversions::to_string_t("noteable_type")] = ModelBase::toJson(noteableType_);
    }
    if(resolvedStatusIsSet_) {
        val[utility::conversions::to_string_t("resolved_status")] = ModelBase::toJson(resolvedStatus_);
    }
    if(reviewersFilterIsSet_) {
        val[utility::conversions::to_string_t("reviewers_filter")] = ModelBase::toJson(reviewersFilter_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRepositoryReviewAuthorsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("noteable_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("noteable_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoteableType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolved_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolved_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolvedStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reviewers_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewers_filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewersFilter(refVal);
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


int32_t ListRepositoryReviewAuthorsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryReviewAuthorsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryReviewAuthorsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryReviewAuthorsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListRepositoryReviewAuthorsRequest::getNoteableType() const
{
    return noteableType_;
}

void ListRepositoryReviewAuthorsRequest::setNoteableType(const std::string& value)
{
    noteableType_ = value;
    noteableTypeIsSet_ = true;
}

bool ListRepositoryReviewAuthorsRequest::noteableTypeIsSet() const
{
    return noteableTypeIsSet_;
}

void ListRepositoryReviewAuthorsRequest::unsetnoteableType()
{
    noteableTypeIsSet_ = false;
}

std::string ListRepositoryReviewAuthorsRequest::getResolvedStatus() const
{
    return resolvedStatus_;
}

void ListRepositoryReviewAuthorsRequest::setResolvedStatus(const std::string& value)
{
    resolvedStatus_ = value;
    resolvedStatusIsSet_ = true;
}

bool ListRepositoryReviewAuthorsRequest::resolvedStatusIsSet() const
{
    return resolvedStatusIsSet_;
}

void ListRepositoryReviewAuthorsRequest::unsetresolvedStatus()
{
    resolvedStatusIsSet_ = false;
}

std::string ListRepositoryReviewAuthorsRequest::getReviewersFilter() const
{
    return reviewersFilter_;
}

void ListRepositoryReviewAuthorsRequest::setReviewersFilter(const std::string& value)
{
    reviewersFilter_ = value;
    reviewersFilterIsSet_ = true;
}

bool ListRepositoryReviewAuthorsRequest::reviewersFilterIsSet() const
{
    return reviewersFilterIsSet_;
}

void ListRepositoryReviewAuthorsRequest::unsetreviewersFilter()
{
    reviewersFilterIsSet_ = false;
}

int32_t ListRepositoryReviewAuthorsRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryReviewAuthorsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryReviewAuthorsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryReviewAuthorsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryReviewAuthorsRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryReviewAuthorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryReviewAuthorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryReviewAuthorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


