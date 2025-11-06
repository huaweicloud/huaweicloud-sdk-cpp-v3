

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryEventsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryEventsRequest::ListRepositoryEventsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    authorId_ = 0;
    authorIdIsSet_ = false;
    filter_ = "";
    filterIsSet_ = false;
    before_ = utility::datetime();
    beforeIsSet_ = false;
    after_ = utility::datetime();
    afterIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRepositoryEventsRequest::~ListRepositoryEventsRequest() = default;

void ListRepositoryEventsRequest::validate()
{
}

web::json::value ListRepositoryEventsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(authorIdIsSet_) {
        val[utility::conversions::to_string_t("author_id")] = ModelBase::toJson(authorId_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(beforeIsSet_) {
        val[utility::conversions::to_string_t("before")] = ModelBase::toJson(before_);
    }
    if(afterIsSet_) {
        val[utility::conversions::to_string_t("after")] = ModelBase::toJson(after_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRepositoryEventsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("author_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("before"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("before"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBefore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("after"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAfter(refVal);
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


int32_t ListRepositoryEventsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryEventsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryEventsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryEventsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListRepositoryEventsRequest::getAuthorId() const
{
    return authorId_;
}

void ListRepositoryEventsRequest::setAuthorId(int32_t value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool ListRepositoryEventsRequest::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void ListRepositoryEventsRequest::unsetauthorId()
{
    authorIdIsSet_ = false;
}

std::string ListRepositoryEventsRequest::getFilter() const
{
    return filter_;
}

void ListRepositoryEventsRequest::setFilter(const std::string& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool ListRepositoryEventsRequest::filterIsSet() const
{
    return filterIsSet_;
}

void ListRepositoryEventsRequest::unsetfilter()
{
    filterIsSet_ = false;
}

utility::datetime ListRepositoryEventsRequest::getBefore() const
{
    return before_;
}

void ListRepositoryEventsRequest::setBefore(const utility::datetime& value)
{
    before_ = value;
    beforeIsSet_ = true;
}

bool ListRepositoryEventsRequest::beforeIsSet() const
{
    return beforeIsSet_;
}

void ListRepositoryEventsRequest::unsetbefore()
{
    beforeIsSet_ = false;
}

utility::datetime ListRepositoryEventsRequest::getAfter() const
{
    return after_;
}

void ListRepositoryEventsRequest::setAfter(const utility::datetime& value)
{
    after_ = value;
    afterIsSet_ = true;
}

bool ListRepositoryEventsRequest::afterIsSet() const
{
    return afterIsSet_;
}

void ListRepositoryEventsRequest::unsetafter()
{
    afterIsSet_ = false;
}

int32_t ListRepositoryEventsRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryEventsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryEventsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryEventsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryEventsRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryEventsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryEventsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryEventsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


