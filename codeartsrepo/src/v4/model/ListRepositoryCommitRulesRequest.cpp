

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryCommitRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryCommitRulesRequest::ListRepositoryCommitRulesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRepositoryCommitRulesRequest::~ListRepositoryCommitRulesRequest() = default;

void ListRepositoryCommitRulesRequest::validate()
{
}

web::json::value ListRepositoryCommitRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRepositoryCommitRulesRequest::fromJson(const web::json::value& val)
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


int32_t ListRepositoryCommitRulesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryCommitRulesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryCommitRulesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryCommitRulesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListRepositoryCommitRulesRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryCommitRulesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryCommitRulesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryCommitRulesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryCommitRulesRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryCommitRulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryCommitRulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryCommitRulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


