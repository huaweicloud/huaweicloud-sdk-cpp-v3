

#include "huaweicloud/codeartsrepo/v4/model/ListRepositoryWebhookLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListRepositoryWebhookLogsRequest::ListRepositoryWebhookLogsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    createdAfter_ = utility::datetime();
    createdAfterIsSet_ = false;
    createdBefore_ = utility::datetime();
    createdBeforeIsSet_ = false;
}

ListRepositoryWebhookLogsRequest::~ListRepositoryWebhookLogsRequest() = default;

void ListRepositoryWebhookLogsRequest::validate()
{
}

web::json::value ListRepositoryWebhookLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(hookIdIsSet_) {
        val[utility::conversions::to_string_t("hook_id")] = ModelBase::toJson(hookId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
    }
    if(createdAfterIsSet_) {
        val[utility::conversions::to_string_t("created_after")] = ModelBase::toJson(createdAfter_);
    }
    if(createdBeforeIsSet_) {
        val[utility::conversions::to_string_t("created_before")] = ModelBase::toJson(createdBefore_);
    }

    return val;
}
bool ListRepositoryWebhookLogsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hook_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hook_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHookId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_after"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_after"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAfter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_before"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_before"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBefore(refVal);
        }
    }
    return ok;
}


int32_t ListRepositoryWebhookLogsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListRepositoryWebhookLogsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListRepositoryWebhookLogsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListRepositoryWebhookLogsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListRepositoryWebhookLogsRequest::getHookId() const
{
    return hookId_;
}

void ListRepositoryWebhookLogsRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool ListRepositoryWebhookLogsRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void ListRepositoryWebhookLogsRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

int32_t ListRepositoryWebhookLogsRequest::getOffset() const
{
    return offset_;
}

void ListRepositoryWebhookLogsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRepositoryWebhookLogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRepositoryWebhookLogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRepositoryWebhookLogsRequest::getLimit() const
{
    return limit_;
}

void ListRepositoryWebhookLogsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRepositoryWebhookLogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListRepositoryWebhookLogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListRepositoryWebhookLogsRequest::getUuid() const
{
    return uuid_;
}

void ListRepositoryWebhookLogsRequest::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool ListRepositoryWebhookLogsRequest::uuidIsSet() const
{
    return uuidIsSet_;
}

void ListRepositoryWebhookLogsRequest::unsetuuid()
{
    uuidIsSet_ = false;
}

utility::datetime ListRepositoryWebhookLogsRequest::getCreatedAfter() const
{
    return createdAfter_;
}

void ListRepositoryWebhookLogsRequest::setCreatedAfter(const utility::datetime& value)
{
    createdAfter_ = value;
    createdAfterIsSet_ = true;
}

bool ListRepositoryWebhookLogsRequest::createdAfterIsSet() const
{
    return createdAfterIsSet_;
}

void ListRepositoryWebhookLogsRequest::unsetcreatedAfter()
{
    createdAfterIsSet_ = false;
}

utility::datetime ListRepositoryWebhookLogsRequest::getCreatedBefore() const
{
    return createdBefore_;
}

void ListRepositoryWebhookLogsRequest::setCreatedBefore(const utility::datetime& value)
{
    createdBefore_ = value;
    createdBeforeIsSet_ = true;
}

bool ListRepositoryWebhookLogsRequest::createdBeforeIsSet() const
{
    return createdBeforeIsSet_;
}

void ListRepositoryWebhookLogsRequest::unsetcreatedBefore()
{
    createdBeforeIsSet_ = false;
}

}
}
}
}
}


