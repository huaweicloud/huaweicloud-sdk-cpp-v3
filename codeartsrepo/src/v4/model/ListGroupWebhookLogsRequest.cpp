

#include "huaweicloud/codeartsrepo/v4/model/ListGroupWebhookLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListGroupWebhookLogsRequest::ListGroupWebhookLogsRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    uuid_ = "";
    uuidIsSet_ = false;
    createdAfter_ = utility::datetime();
    createdAfterIsSet_ = false;
    createdBefore_ = utility::datetime();
    createdBeforeIsSet_ = false;
}

ListGroupWebhookLogsRequest::~ListGroupWebhookLogsRequest() = default;

void ListGroupWebhookLogsRequest::validate()
{
}

web::json::value ListGroupWebhookLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
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
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
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
bool ListGroupWebhookLogsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
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


int32_t ListGroupWebhookLogsRequest::getGroupId() const
{
    return groupId_;
}

void ListGroupWebhookLogsRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListGroupWebhookLogsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListGroupWebhookLogsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t ListGroupWebhookLogsRequest::getHookId() const
{
    return hookId_;
}

void ListGroupWebhookLogsRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool ListGroupWebhookLogsRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void ListGroupWebhookLogsRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

int32_t ListGroupWebhookLogsRequest::getOffset() const
{
    return offset_;
}

void ListGroupWebhookLogsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGroupWebhookLogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGroupWebhookLogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListGroupWebhookLogsRequest::getLimit() const
{
    return limit_;
}

void ListGroupWebhookLogsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGroupWebhookLogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGroupWebhookLogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListGroupWebhookLogsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListGroupWebhookLogsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListGroupWebhookLogsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListGroupWebhookLogsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListGroupWebhookLogsRequest::getUuid() const
{
    return uuid_;
}

void ListGroupWebhookLogsRequest::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool ListGroupWebhookLogsRequest::uuidIsSet() const
{
    return uuidIsSet_;
}

void ListGroupWebhookLogsRequest::unsetuuid()
{
    uuidIsSet_ = false;
}

utility::datetime ListGroupWebhookLogsRequest::getCreatedAfter() const
{
    return createdAfter_;
}

void ListGroupWebhookLogsRequest::setCreatedAfter(const utility::datetime& value)
{
    createdAfter_ = value;
    createdAfterIsSet_ = true;
}

bool ListGroupWebhookLogsRequest::createdAfterIsSet() const
{
    return createdAfterIsSet_;
}

void ListGroupWebhookLogsRequest::unsetcreatedAfter()
{
    createdAfterIsSet_ = false;
}

utility::datetime ListGroupWebhookLogsRequest::getCreatedBefore() const
{
    return createdBefore_;
}

void ListGroupWebhookLogsRequest::setCreatedBefore(const utility::datetime& value)
{
    createdBefore_ = value;
    createdBeforeIsSet_ = true;
}

bool ListGroupWebhookLogsRequest::createdBeforeIsSet() const
{
    return createdBeforeIsSet_;
}

void ListGroupWebhookLogsRequest::unsetcreatedBefore()
{
    createdBeforeIsSet_ = false;
}

}
}
}
}
}


