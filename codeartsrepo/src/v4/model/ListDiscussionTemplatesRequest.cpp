

#include "huaweicloud/codeartsrepo/v4/model/ListDiscussionTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListDiscussionTemplatesRequest::ListDiscussionTemplatesRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    isDefault_ = false;
    isDefaultIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListDiscussionTemplatesRequest::~ListDiscussionTemplatesRequest() = default;

void ListDiscussionTemplatesRequest::validate()
{
}

web::json::value ListDiscussionTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("is_default")] = ModelBase::toJson(isDefault_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListDiscussionTemplatesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("is_default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_default"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
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


int32_t ListDiscussionTemplatesRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListDiscussionTemplatesRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListDiscussionTemplatesRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListDiscussionTemplatesRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

bool ListDiscussionTemplatesRequest::isIsDefault() const
{
    return isDefault_;
}

void ListDiscussionTemplatesRequest::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool ListDiscussionTemplatesRequest::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void ListDiscussionTemplatesRequest::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

int32_t ListDiscussionTemplatesRequest::getOffset() const
{
    return offset_;
}

void ListDiscussionTemplatesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDiscussionTemplatesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDiscussionTemplatesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListDiscussionTemplatesRequest::getLimit() const
{
    return limit_;
}

void ListDiscussionTemplatesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDiscussionTemplatesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDiscussionTemplatesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


