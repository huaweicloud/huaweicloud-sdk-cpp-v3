

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryWebhooksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryWebhooksRequest::ListRepositoryWebhooksRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRepositoryWebhooksRequest::~ListRepositoryWebhooksRequest() = default;

void ListRepositoryWebhooksRequest::validate()
{
}

web::json::value ListRepositoryWebhooksRequest::toJson() const
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
bool ListRepositoryWebhooksRequest::fromJson(const web::json::value& val)
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


int32_t ListRepositoryWebhooksRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryWebhooksRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryWebhooksRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryWebhooksRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListRepositoryWebhooksRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryWebhooksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryWebhooksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryWebhooksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryWebhooksRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryWebhooksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryWebhooksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryWebhooksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


