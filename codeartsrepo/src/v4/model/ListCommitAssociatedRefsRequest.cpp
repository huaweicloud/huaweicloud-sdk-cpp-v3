

#include "huaweicloud/codeartsrepo/v4/model/ListCommitAssociatedRefsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListCommitAssociatedRefsRequest::ListCommitAssociatedRefsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListCommitAssociatedRefsRequest::~ListCommitAssociatedRefsRequest() = default;

void ListCommitAssociatedRefsRequest::validate()
{
}

web::json::value ListCommitAssociatedRefsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListCommitAssociatedRefsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
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


int32_t ListCommitAssociatedRefsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListCommitAssociatedRefsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListCommitAssociatedRefsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListCommitAssociatedRefsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListCommitAssociatedRefsRequest::getSha() const
{
    return sha_;
}

void ListCommitAssociatedRefsRequest::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool ListCommitAssociatedRefsRequest::shaIsSet() const
{
    return shaIsSet_;
}

void ListCommitAssociatedRefsRequest::unsetsha()
{
    shaIsSet_ = false;
}

int32_t ListCommitAssociatedRefsRequest::getOffset() const
{
    return offset_;
}

void ListCommitAssociatedRefsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListCommitAssociatedRefsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListCommitAssociatedRefsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListCommitAssociatedRefsRequest::getLimit() const
{
    return limit_;
}

void ListCommitAssociatedRefsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListCommitAssociatedRefsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListCommitAssociatedRefsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


