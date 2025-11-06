

#include "huaweicloud/codeartsrepo/v4/model/ListProjectWebhookLogsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListProjectWebhookLogsRequest::ListProjectWebhookLogsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
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

ListProjectWebhookLogsRequest::~ListProjectWebhookLogsRequest() = default;

void ListProjectWebhookLogsRequest::validate()
{
}

web::json::value ListProjectWebhookLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
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
bool ListProjectWebhookLogsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
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


std::string ListProjectWebhookLogsRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectWebhookLogsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectWebhookLogsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectWebhookLogsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListProjectWebhookLogsRequest::getHookId() const
{
    return hookId_;
}

void ListProjectWebhookLogsRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool ListProjectWebhookLogsRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void ListProjectWebhookLogsRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

int32_t ListProjectWebhookLogsRequest::getOffset() const
{
    return offset_;
}

void ListProjectWebhookLogsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectWebhookLogsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectWebhookLogsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectWebhookLogsRequest::getLimit() const
{
    return limit_;
}

void ListProjectWebhookLogsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectWebhookLogsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectWebhookLogsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListProjectWebhookLogsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListProjectWebhookLogsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListProjectWebhookLogsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListProjectWebhookLogsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListProjectWebhookLogsRequest::getUuid() const
{
    return uuid_;
}

void ListProjectWebhookLogsRequest::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool ListProjectWebhookLogsRequest::uuidIsSet() const
{
    return uuidIsSet_;
}

void ListProjectWebhookLogsRequest::unsetuuid()
{
    uuidIsSet_ = false;
}

utility::datetime ListProjectWebhookLogsRequest::getCreatedAfter() const
{
    return createdAfter_;
}

void ListProjectWebhookLogsRequest::setCreatedAfter(const utility::datetime& value)
{
    createdAfter_ = value;
    createdAfterIsSet_ = true;
}

bool ListProjectWebhookLogsRequest::createdAfterIsSet() const
{
    return createdAfterIsSet_;
}

void ListProjectWebhookLogsRequest::unsetcreatedAfter()
{
    createdAfterIsSet_ = false;
}

utility::datetime ListProjectWebhookLogsRequest::getCreatedBefore() const
{
    return createdBefore_;
}

void ListProjectWebhookLogsRequest::setCreatedBefore(const utility::datetime& value)
{
    createdBefore_ = value;
    createdBeforeIsSet_ = true;
}

bool ListProjectWebhookLogsRequest::createdBeforeIsSet() const
{
    return createdBeforeIsSet_;
}

void ListProjectWebhookLogsRequest::unsetcreatedBefore()
{
    createdBeforeIsSet_ = false;
}

}
}
}
}
}


