

#include "huaweicloud/codeartsrepo/v4/model/UpdateGroupWebhookResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateGroupWebhookResponse::UpdateGroupWebhookResponse()
{
    url_ = "";
    urlIsSet_ = false;
    pushEvents_ = false;
    pushEventsIsSet_ = false;
    pushEventsBranchRegexFilter_ = "";
    pushEventsBranchRegexFilterIsSet_ = false;
    notePlainTextFilterIsSet_ = false;
    tagPushEvents_ = false;
    tagPushEventsIsSet_ = false;
    mergeRequestsEvents_ = false;
    mergeRequestsEventsIsSet_ = false;
    noteEvents_ = false;
    noteEventsIsSet_ = false;
    token_ = "";
    tokenIsSet_ = false;
    tokenType_ = "";
    tokenTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    eventCfgsIsSet_ = false;
    projectCfgsIsSet_ = false;
    branchCfgsIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    service_ = "";
    serviceIsSet_ = false;
}

UpdateGroupWebhookResponse::~UpdateGroupWebhookResponse() = default;

void UpdateGroupWebhookResponse::validate()
{
}

web::json::value UpdateGroupWebhookResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(pushEventsIsSet_) {
        val[utility::conversions::to_string_t("push_events")] = ModelBase::toJson(pushEvents_);
    }
    if(pushEventsBranchRegexFilterIsSet_) {
        val[utility::conversions::to_string_t("push_events_branch_regex_filter")] = ModelBase::toJson(pushEventsBranchRegexFilter_);
    }
    if(notePlainTextFilterIsSet_) {
        val[utility::conversions::to_string_t("note_plain_text_filter")] = ModelBase::toJson(notePlainTextFilter_);
    }
    if(tagPushEventsIsSet_) {
        val[utility::conversions::to_string_t("tag_push_events")] = ModelBase::toJson(tagPushEvents_);
    }
    if(mergeRequestsEventsIsSet_) {
        val[utility::conversions::to_string_t("merge_requests_events")] = ModelBase::toJson(mergeRequestsEvents_);
    }
    if(noteEventsIsSet_) {
        val[utility::conversions::to_string_t("note_events")] = ModelBase::toJson(noteEvents_);
    }
    if(tokenIsSet_) {
        val[utility::conversions::to_string_t("token")] = ModelBase::toJson(token_);
    }
    if(tokenTypeIsSet_) {
        val[utility::conversions::to_string_t("token_type")] = ModelBase::toJson(tokenType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(eventCfgsIsSet_) {
        val[utility::conversions::to_string_t("event_cfgs")] = ModelBase::toJson(eventCfgs_);
    }
    if(projectCfgsIsSet_) {
        val[utility::conversions::to_string_t("project_cfgs")] = ModelBase::toJson(projectCfgs_);
    }
    if(branchCfgsIsSet_) {
        val[utility::conversions::to_string_t("branch_cfgs")] = ModelBase::toJson(branchCfgs_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(serviceIsSet_) {
        val[utility::conversions::to_string_t("service")] = ModelBase::toJson(service_);
    }

    return val;
}
bool UpdateGroupWebhookResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("push_events_branch_regex_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push_events_branch_regex_filter"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPushEventsBranchRegexFilter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("note_plain_text_filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("note_plain_text_filter"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotePlainTextFilter(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("token_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("token_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTokenType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("event_cfgs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_cfgs"));
        if(!fieldValue.is_null())
        {
            std::vector<WebHookEventCfgDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventCfgs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_cfgs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_cfgs"));
        if(!fieldValue.is_null())
        {
            std::vector<WebHookBranchCfgDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectCfgs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_cfgs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_cfgs"));
        if(!fieldValue.is_null())
        {
            std::vector<WebHookBranchCfgDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchCfgs(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setService(refVal);
        }
    }
    return ok;
}


std::string UpdateGroupWebhookResponse::getUrl() const
{
    return url_;
}

void UpdateGroupWebhookResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool UpdateGroupWebhookResponse::urlIsSet() const
{
    return urlIsSet_;
}

void UpdateGroupWebhookResponse::unseturl()
{
    urlIsSet_ = false;
}

bool UpdateGroupWebhookResponse::isPushEvents() const
{
    return pushEvents_;
}

void UpdateGroupWebhookResponse::setPushEvents(bool value)
{
    pushEvents_ = value;
    pushEventsIsSet_ = true;
}

bool UpdateGroupWebhookResponse::pushEventsIsSet() const
{
    return pushEventsIsSet_;
}

void UpdateGroupWebhookResponse::unsetpushEvents()
{
    pushEventsIsSet_ = false;
}

std::string UpdateGroupWebhookResponse::getPushEventsBranchRegexFilter() const
{
    return pushEventsBranchRegexFilter_;
}

void UpdateGroupWebhookResponse::setPushEventsBranchRegexFilter(const std::string& value)
{
    pushEventsBranchRegexFilter_ = value;
    pushEventsBranchRegexFilterIsSet_ = true;
}

bool UpdateGroupWebhookResponse::pushEventsBranchRegexFilterIsSet() const
{
    return pushEventsBranchRegexFilterIsSet_;
}

void UpdateGroupWebhookResponse::unsetpushEventsBranchRegexFilter()
{
    pushEventsBranchRegexFilterIsSet_ = false;
}

std::vector<std::string>& UpdateGroupWebhookResponse::getNotePlainTextFilter()
{
    return notePlainTextFilter_;
}

void UpdateGroupWebhookResponse::setNotePlainTextFilter(const std::vector<std::string>& value)
{
    notePlainTextFilter_ = value;
    notePlainTextFilterIsSet_ = true;
}

bool UpdateGroupWebhookResponse::notePlainTextFilterIsSet() const
{
    return notePlainTextFilterIsSet_;
}

void UpdateGroupWebhookResponse::unsetnotePlainTextFilter()
{
    notePlainTextFilterIsSet_ = false;
}

bool UpdateGroupWebhookResponse::isTagPushEvents() const
{
    return tagPushEvents_;
}

void UpdateGroupWebhookResponse::setTagPushEvents(bool value)
{
    tagPushEvents_ = value;
    tagPushEventsIsSet_ = true;
}

bool UpdateGroupWebhookResponse::tagPushEventsIsSet() const
{
    return tagPushEventsIsSet_;
}

void UpdateGroupWebhookResponse::unsettagPushEvents()
{
    tagPushEventsIsSet_ = false;
}

bool UpdateGroupWebhookResponse::isMergeRequestsEvents() const
{
    return mergeRequestsEvents_;
}

void UpdateGroupWebhookResponse::setMergeRequestsEvents(bool value)
{
    mergeRequestsEvents_ = value;
    mergeRequestsEventsIsSet_ = true;
}

bool UpdateGroupWebhookResponse::mergeRequestsEventsIsSet() const
{
    return mergeRequestsEventsIsSet_;
}

void UpdateGroupWebhookResponse::unsetmergeRequestsEvents()
{
    mergeRequestsEventsIsSet_ = false;
}

bool UpdateGroupWebhookResponse::isNoteEvents() const
{
    return noteEvents_;
}

void UpdateGroupWebhookResponse::setNoteEvents(bool value)
{
    noteEvents_ = value;
    noteEventsIsSet_ = true;
}

bool UpdateGroupWebhookResponse::noteEventsIsSet() const
{
    return noteEventsIsSet_;
}

void UpdateGroupWebhookResponse::unsetnoteEvents()
{
    noteEventsIsSet_ = false;
}

std::string UpdateGroupWebhookResponse::getToken() const
{
    return token_;
}

void UpdateGroupWebhookResponse::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool UpdateGroupWebhookResponse::tokenIsSet() const
{
    return tokenIsSet_;
}

void UpdateGroupWebhookResponse::unsettoken()
{
    tokenIsSet_ = false;
}

std::string UpdateGroupWebhookResponse::getTokenType() const
{
    return tokenType_;
}

void UpdateGroupWebhookResponse::setTokenType(const std::string& value)
{
    tokenType_ = value;
    tokenTypeIsSet_ = true;
}

bool UpdateGroupWebhookResponse::tokenTypeIsSet() const
{
    return tokenTypeIsSet_;
}

void UpdateGroupWebhookResponse::unsettokenType()
{
    tokenTypeIsSet_ = false;
}

std::string UpdateGroupWebhookResponse::getName() const
{
    return name_;
}

void UpdateGroupWebhookResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateGroupWebhookResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateGroupWebhookResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateGroupWebhookResponse::getDescription() const
{
    return description_;
}

void UpdateGroupWebhookResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateGroupWebhookResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateGroupWebhookResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<WebHookEventCfgDto>& UpdateGroupWebhookResponse::getEventCfgs()
{
    return eventCfgs_;
}

void UpdateGroupWebhookResponse::setEventCfgs(const std::vector<WebHookEventCfgDto>& value)
{
    eventCfgs_ = value;
    eventCfgsIsSet_ = true;
}

bool UpdateGroupWebhookResponse::eventCfgsIsSet() const
{
    return eventCfgsIsSet_;
}

void UpdateGroupWebhookResponse::unseteventCfgs()
{
    eventCfgsIsSet_ = false;
}

std::vector<WebHookBranchCfgDto>& UpdateGroupWebhookResponse::getProjectCfgs()
{
    return projectCfgs_;
}

void UpdateGroupWebhookResponse::setProjectCfgs(const std::vector<WebHookBranchCfgDto>& value)
{
    projectCfgs_ = value;
    projectCfgsIsSet_ = true;
}

bool UpdateGroupWebhookResponse::projectCfgsIsSet() const
{
    return projectCfgsIsSet_;
}

void UpdateGroupWebhookResponse::unsetprojectCfgs()
{
    projectCfgsIsSet_ = false;
}

std::vector<WebHookBranchCfgDto>& UpdateGroupWebhookResponse::getBranchCfgs()
{
    return branchCfgs_;
}

void UpdateGroupWebhookResponse::setBranchCfgs(const std::vector<WebHookBranchCfgDto>& value)
{
    branchCfgs_ = value;
    branchCfgsIsSet_ = true;
}

bool UpdateGroupWebhookResponse::branchCfgsIsSet() const
{
    return branchCfgsIsSet_;
}

void UpdateGroupWebhookResponse::unsetbranchCfgs()
{
    branchCfgsIsSet_ = false;
}

int32_t UpdateGroupWebhookResponse::getId() const
{
    return id_;
}

void UpdateGroupWebhookResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateGroupWebhookResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateGroupWebhookResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateGroupWebhookResponse::getCreatedAt() const
{
    return createdAt_;
}

void UpdateGroupWebhookResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UpdateGroupWebhookResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UpdateGroupWebhookResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string UpdateGroupWebhookResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void UpdateGroupWebhookResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool UpdateGroupWebhookResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void UpdateGroupWebhookResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string UpdateGroupWebhookResponse::getService() const
{
    return service_;
}

void UpdateGroupWebhookResponse::setService(const std::string& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool UpdateGroupWebhookResponse::serviceIsSet() const
{
    return serviceIsSet_;
}

void UpdateGroupWebhookResponse::unsetservice()
{
    serviceIsSet_ = false;
}

}
}
}
}
}


