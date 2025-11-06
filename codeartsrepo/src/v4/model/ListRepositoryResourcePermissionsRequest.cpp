

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryResourcePermissionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryResourcePermissionsRequest::ListRepositoryResourcePermissionsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    resourceName_ = "";
    resourceNameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRepositoryResourcePermissionsRequest::~ListRepositoryResourcePermissionsRequest() = default;

void ListRepositoryResourcePermissionsRequest::validate()
{
}

web::json::value ListRepositoryResourcePermissionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(resourceNameIsSet_) {
        val[utility::conversions::to_string_t("resource_name")] = ModelBase::toJson(resourceName_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRepositoryResourcePermissionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("resource_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceName(refVal);
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


int32_t ListRepositoryResourcePermissionsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryResourcePermissionsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryResourcePermissionsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryResourcePermissionsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListRepositoryResourcePermissionsRequest::getResourceName() const
{
    return resourceName_;
}

void ListRepositoryResourcePermissionsRequest::setResourceName(const std::string& value)
{
    resourceName_ = value;
    resourceNameIsSet_ = true;
}

bool ListRepositoryResourcePermissionsRequest::resourceNameIsSet() const
{
    return resourceNameIsSet_;
}

void ListRepositoryResourcePermissionsRequest::unsetresourceName()
{
    resourceNameIsSet_ = false;
}

int32_t ListRepositoryResourcePermissionsRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryResourcePermissionsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryResourcePermissionsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryResourcePermissionsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryResourcePermissionsRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryResourcePermissionsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryResourcePermissionsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryResourcePermissionsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


