

#include "huaweicloud/codehub/v4/model/ListRepositoryDeployKeysRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListRepositoryDeployKeysRequest::ListRepositoryDeployKeysRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRepositoryDeployKeysRequest::~ListRepositoryDeployKeysRequest() = default;

void ListRepositoryDeployKeysRequest::validate()
{
}

web::json::value ListRepositoryDeployKeysRequest::toJson() const
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
bool ListRepositoryDeployKeysRequest::fromJson(const web::json::value& val)
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


int32_t ListRepositoryDeployKeysRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryDeployKeysRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryDeployKeysRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryDeployKeysRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListRepositoryDeployKeysRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryDeployKeysRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryDeployKeysRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryDeployKeysRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryDeployKeysRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryDeployKeysRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryDeployKeysRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryDeployKeysRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


