

#include "huaweicloud/codeartsrepo/v4/model/ListCommitsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListCommitsRequest::ListCommitsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    refName_ = "";
    refNameIsSet_ = false;
    since_ = "";
    sinceIsSet_ = false;
    until_ = "";
    untilIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    author_ = "";
    authorIsSet_ = false;
    orderByDate_ = false;
    orderByDateIsSet_ = false;
    follow_ = false;
    followIsSet_ = false;
}

ListCommitsRequest::~ListCommitsRequest() = default;

void ListCommitsRequest::validate()
{
}

web::json::value ListCommitsRequest::toJson() const
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
    if(refNameIsSet_) {
        val[utility::conversions::to_string_t("ref_name")] = ModelBase::toJson(refName_);
    }
    if(sinceIsSet_) {
        val[utility::conversions::to_string_t("since")] = ModelBase::toJson(since_);
    }
    if(untilIsSet_) {
        val[utility::conversions::to_string_t("until")] = ModelBase::toJson(until_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(orderByDateIsSet_) {
        val[utility::conversions::to_string_t("order_by_date")] = ModelBase::toJson(orderByDate_);
    }
    if(followIsSet_) {
        val[utility::conversions::to_string_t("follow")] = ModelBase::toJson(follow_);
    }

    return val;
}
bool ListCommitsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ref_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("since"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("since"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("until"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("until"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUntil(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_by_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_by_date"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderByDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("follow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("follow"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFollow(refVal);
        }
    }
    return ok;
}


int32_t ListCommitsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListCommitsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListCommitsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListCommitsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListCommitsRequest::getOffset() const
{
    return offset_;
}

void ListCommitsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListCommitsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListCommitsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListCommitsRequest::getLimit() const
{
    return limit_;
}

void ListCommitsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListCommitsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListCommitsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListCommitsRequest::getRefName() const
{
    return refName_;
}

void ListCommitsRequest::setRefName(const std::string& value)
{
    refName_ = value;
    refNameIsSet_ = true;
}

bool ListCommitsRequest::refNameIsSet() const
{
    return refNameIsSet_;
}

void ListCommitsRequest::unsetrefName()
{
    refNameIsSet_ = false;
}

std::string ListCommitsRequest::getSince() const
{
    return since_;
}

void ListCommitsRequest::setSince(const std::string& value)
{
    since_ = value;
    sinceIsSet_ = true;
}

bool ListCommitsRequest::sinceIsSet() const
{
    return sinceIsSet_;
}

void ListCommitsRequest::unsetsince()
{
    sinceIsSet_ = false;
}

std::string ListCommitsRequest::getUntil() const
{
    return until_;
}

void ListCommitsRequest::setUntil(const std::string& value)
{
    until_ = value;
    untilIsSet_ = true;
}

bool ListCommitsRequest::untilIsSet() const
{
    return untilIsSet_;
}

void ListCommitsRequest::unsetuntil()
{
    untilIsSet_ = false;
}

std::string ListCommitsRequest::getPath() const
{
    return path_;
}

void ListCommitsRequest::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool ListCommitsRequest::pathIsSet() const
{
    return pathIsSet_;
}

void ListCommitsRequest::unsetpath()
{
    pathIsSet_ = false;
}

std::string ListCommitsRequest::getMessage() const
{
    return message_;
}

void ListCommitsRequest::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ListCommitsRequest::messageIsSet() const
{
    return messageIsSet_;
}

void ListCommitsRequest::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ListCommitsRequest::getAuthor() const
{
    return author_;
}

void ListCommitsRequest::setAuthor(const std::string& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool ListCommitsRequest::authorIsSet() const
{
    return authorIsSet_;
}

void ListCommitsRequest::unsetauthor()
{
    authorIsSet_ = false;
}

bool ListCommitsRequest::isOrderByDate() const
{
    return orderByDate_;
}

void ListCommitsRequest::setOrderByDate(bool value)
{
    orderByDate_ = value;
    orderByDateIsSet_ = true;
}

bool ListCommitsRequest::orderByDateIsSet() const
{
    return orderByDateIsSet_;
}

void ListCommitsRequest::unsetorderByDate()
{
    orderByDateIsSet_ = false;
}

bool ListCommitsRequest::isFollow() const
{
    return follow_;
}

void ListCommitsRequest::setFollow(bool value)
{
    follow_ = value;
    followIsSet_ = true;
}

bool ListCommitsRequest::followIsSet() const
{
    return followIsSet_;
}

void ListCommitsRequest::unsetfollow()
{
    followIsSet_ = false;
}

}
}
}
}
}


