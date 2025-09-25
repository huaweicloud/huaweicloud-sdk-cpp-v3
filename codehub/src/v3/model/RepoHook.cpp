

#include "huaweicloud/codehub/v3/model/RepoHook.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




RepoHook::RepoHook()
{
    buildEvents_ = false;
    buildEventsIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    enableSslVerification_ = false;
    enableSslVerificationIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    issuesEvents_ = false;
    issuesEventsIsSet_ = false;
    mergeRequestsEvents_ = false;
    mergeRequestsEventsIsSet_ = false;
    noteEvents_ = false;
    noteEventsIsSet_ = false;
    pipelineEvents_ = false;
    pipelineEventsIsSet_ = false;
    projectId_ = 0;
    projectIdIsSet_ = false;
    pushEvents_ = false;
    pushEventsIsSet_ = false;
    repositoryUpdateEvents_ = false;
    repositoryUpdateEventsIsSet_ = false;
    tagPushEvents_ = false;
    tagPushEventsIsSet_ = false;
    wikiPageEvents_ = false;
    wikiPageEventsIsSet_ = false;
}

RepoHook::~RepoHook() = default;

void RepoHook::validate()
{
}

web::json::value RepoHook::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildEventsIsSet_) {
        val[utility::conversions::to_string_t("build_events")] = ModelBase::toJson(buildEvents_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(enableSslVerificationIsSet_) {
        val[utility::conversions::to_string_t("enable_ssl_verification")] = ModelBase::toJson(enableSslVerification_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(issuesEventsIsSet_) {
        val[utility::conversions::to_string_t("issues_events")] = ModelBase::toJson(issuesEvents_);
    }
    if(mergeRequestsEventsIsSet_) {
        val[utility::conversions::to_string_t("merge_requests_events")] = ModelBase::toJson(mergeRequestsEvents_);
    }
    if(noteEventsIsSet_) {
        val[utility::conversions::to_string_t("note_events")] = ModelBase::toJson(noteEvents_);
    }
    if(pipelineEventsIsSet_) {
        val[utility::conversions::to_string_t("pipeline_events")] = ModelBase::toJson(pipelineEvents_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(pushEventsIsSet_) {
        val[utility::conversions::to_string_t("push_events")] = ModelBase::toJson(pushEvents_);
    }
    if(repositoryUpdateEventsIsSet_) {
        val[utility::conversions::to_string_t("repository_update_events")] = ModelBase::toJson(repositoryUpdateEvents_);
    }
    if(tagPushEventsIsSet_) {
        val[utility::conversions::to_string_t("tag_push_events")] = ModelBase::toJson(tagPushEvents_);
    }
    if(wikiPageEventsIsSet_) {
        val[utility::conversions::to_string_t("wiki_page_events")] = ModelBase::toJson(wikiPageEvents_);
    }

    return val;
}
bool RepoHook::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("build_events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_events"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_ssl_verification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_ssl_verification"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSslVerification(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issues_events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issues_events"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuesEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_requests_events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_requests_events"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestsEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("note_events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("note_events"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoteEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline_events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_events"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("push_events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push_events"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPushEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_update_events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_update_events"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryUpdateEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_push_events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_push_events"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagPushEvents(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wiki_page_events"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wiki_page_events"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWikiPageEvents(refVal);
        }
    }
    return ok;
}


bool RepoHook::isBuildEvents() const
{
    return buildEvents_;
}

void RepoHook::setBuildEvents(bool value)
{
    buildEvents_ = value;
    buildEventsIsSet_ = true;
}

bool RepoHook::buildEventsIsSet() const
{
    return buildEventsIsSet_;
}

void RepoHook::unsetbuildEvents()
{
    buildEventsIsSet_ = false;
}

utility::datetime RepoHook::getCreatedAt() const
{
    return createdAt_;
}

void RepoHook::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RepoHook::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RepoHook::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

bool RepoHook::isEnableSslVerification() const
{
    return enableSslVerification_;
}

void RepoHook::setEnableSslVerification(bool value)
{
    enableSslVerification_ = value;
    enableSslVerificationIsSet_ = true;
}

bool RepoHook::enableSslVerificationIsSet() const
{
    return enableSslVerificationIsSet_;
}

void RepoHook::unsetenableSslVerification()
{
    enableSslVerificationIsSet_ = false;
}

int32_t RepoHook::getId() const
{
    return id_;
}

void RepoHook::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepoHook::idIsSet() const
{
    return idIsSet_;
}

void RepoHook::unsetid()
{
    idIsSet_ = false;
}

bool RepoHook::isIssuesEvents() const
{
    return issuesEvents_;
}

void RepoHook::setIssuesEvents(bool value)
{
    issuesEvents_ = value;
    issuesEventsIsSet_ = true;
}

bool RepoHook::issuesEventsIsSet() const
{
    return issuesEventsIsSet_;
}

void RepoHook::unsetissuesEvents()
{
    issuesEventsIsSet_ = false;
}

bool RepoHook::isMergeRequestsEvents() const
{
    return mergeRequestsEvents_;
}

void RepoHook::setMergeRequestsEvents(bool value)
{
    mergeRequestsEvents_ = value;
    mergeRequestsEventsIsSet_ = true;
}

bool RepoHook::mergeRequestsEventsIsSet() const
{
    return mergeRequestsEventsIsSet_;
}

void RepoHook::unsetmergeRequestsEvents()
{
    mergeRequestsEventsIsSet_ = false;
}

bool RepoHook::isNoteEvents() const
{
    return noteEvents_;
}

void RepoHook::setNoteEvents(bool value)
{
    noteEvents_ = value;
    noteEventsIsSet_ = true;
}

bool RepoHook::noteEventsIsSet() const
{
    return noteEventsIsSet_;
}

void RepoHook::unsetnoteEvents()
{
    noteEventsIsSet_ = false;
}

bool RepoHook::isPipelineEvents() const
{
    return pipelineEvents_;
}

void RepoHook::setPipelineEvents(bool value)
{
    pipelineEvents_ = value;
    pipelineEventsIsSet_ = true;
}

bool RepoHook::pipelineEventsIsSet() const
{
    return pipelineEventsIsSet_;
}

void RepoHook::unsetpipelineEvents()
{
    pipelineEventsIsSet_ = false;
}

int32_t RepoHook::getProjectId() const
{
    return projectId_;
}

void RepoHook::setProjectId(int32_t value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool RepoHook::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void RepoHook::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool RepoHook::isPushEvents() const
{
    return pushEvents_;
}

void RepoHook::setPushEvents(bool value)
{
    pushEvents_ = value;
    pushEventsIsSet_ = true;
}

bool RepoHook::pushEventsIsSet() const
{
    return pushEventsIsSet_;
}

void RepoHook::unsetpushEvents()
{
    pushEventsIsSet_ = false;
}

bool RepoHook::isRepositoryUpdateEvents() const
{
    return repositoryUpdateEvents_;
}

void RepoHook::setRepositoryUpdateEvents(bool value)
{
    repositoryUpdateEvents_ = value;
    repositoryUpdateEventsIsSet_ = true;
}

bool RepoHook::repositoryUpdateEventsIsSet() const
{
    return repositoryUpdateEventsIsSet_;
}

void RepoHook::unsetrepositoryUpdateEvents()
{
    repositoryUpdateEventsIsSet_ = false;
}

bool RepoHook::isTagPushEvents() const
{
    return tagPushEvents_;
}

void RepoHook::setTagPushEvents(bool value)
{
    tagPushEvents_ = value;
    tagPushEventsIsSet_ = true;
}

bool RepoHook::tagPushEventsIsSet() const
{
    return tagPushEventsIsSet_;
}

void RepoHook::unsettagPushEvents()
{
    tagPushEventsIsSet_ = false;
}

bool RepoHook::isWikiPageEvents() const
{
    return wikiPageEvents_;
}

void RepoHook::setWikiPageEvents(bool value)
{
    wikiPageEvents_ = value;
    wikiPageEventsIsSet_ = true;
}

bool RepoHook::wikiPageEventsIsSet() const
{
    return wikiPageEventsIsSet_;
}

void RepoHook::unsetwikiPageEvents()
{
    wikiPageEventsIsSet_ = false;
}

}
}
}
}
}


