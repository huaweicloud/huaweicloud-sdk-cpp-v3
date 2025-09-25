

#include "huaweicloud/codehub/v4/model/WebhookDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




WebhookDto::WebhookDto()
{
    url_ = "";
    urlIsSet_ = false;
    pushEvents_ = false;
    pushEventsIsSet_ = false;
    pushEventsBranchRegexFilter_ = "";
    pushEventsBranchRegexFilterIsSet_ = false;
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
    id_ = 0;
    idIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

WebhookDto::~WebhookDto() = default;

void WebhookDto::validate()
{
}

web::json::value WebhookDto::toJson() const
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
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool WebhookDto::fromJson(const web::json::value& val)
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
    return ok;
}


std::string WebhookDto::getUrl() const
{
    return url_;
}

void WebhookDto::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool WebhookDto::urlIsSet() const
{
    return urlIsSet_;
}

void WebhookDto::unseturl()
{
    urlIsSet_ = false;
}

bool WebhookDto::isPushEvents() const
{
    return pushEvents_;
}

void WebhookDto::setPushEvents(bool value)
{
    pushEvents_ = value;
    pushEventsIsSet_ = true;
}

bool WebhookDto::pushEventsIsSet() const
{
    return pushEventsIsSet_;
}

void WebhookDto::unsetpushEvents()
{
    pushEventsIsSet_ = false;
}

std::string WebhookDto::getPushEventsBranchRegexFilter() const
{
    return pushEventsBranchRegexFilter_;
}

void WebhookDto::setPushEventsBranchRegexFilter(const std::string& value)
{
    pushEventsBranchRegexFilter_ = value;
    pushEventsBranchRegexFilterIsSet_ = true;
}

bool WebhookDto::pushEventsBranchRegexFilterIsSet() const
{
    return pushEventsBranchRegexFilterIsSet_;
}

void WebhookDto::unsetpushEventsBranchRegexFilter()
{
    pushEventsBranchRegexFilterIsSet_ = false;
}

bool WebhookDto::isTagPushEvents() const
{
    return tagPushEvents_;
}

void WebhookDto::setTagPushEvents(bool value)
{
    tagPushEvents_ = value;
    tagPushEventsIsSet_ = true;
}

bool WebhookDto::tagPushEventsIsSet() const
{
    return tagPushEventsIsSet_;
}

void WebhookDto::unsettagPushEvents()
{
    tagPushEventsIsSet_ = false;
}

bool WebhookDto::isMergeRequestsEvents() const
{
    return mergeRequestsEvents_;
}

void WebhookDto::setMergeRequestsEvents(bool value)
{
    mergeRequestsEvents_ = value;
    mergeRequestsEventsIsSet_ = true;
}

bool WebhookDto::mergeRequestsEventsIsSet() const
{
    return mergeRequestsEventsIsSet_;
}

void WebhookDto::unsetmergeRequestsEvents()
{
    mergeRequestsEventsIsSet_ = false;
}

bool WebhookDto::isNoteEvents() const
{
    return noteEvents_;
}

void WebhookDto::setNoteEvents(bool value)
{
    noteEvents_ = value;
    noteEventsIsSet_ = true;
}

bool WebhookDto::noteEventsIsSet() const
{
    return noteEventsIsSet_;
}

void WebhookDto::unsetnoteEvents()
{
    noteEventsIsSet_ = false;
}

std::string WebhookDto::getToken() const
{
    return token_;
}

void WebhookDto::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool WebhookDto::tokenIsSet() const
{
    return tokenIsSet_;
}

void WebhookDto::unsettoken()
{
    tokenIsSet_ = false;
}

std::string WebhookDto::getTokenType() const
{
    return tokenType_;
}

void WebhookDto::setTokenType(const std::string& value)
{
    tokenType_ = value;
    tokenTypeIsSet_ = true;
}

bool WebhookDto::tokenTypeIsSet() const
{
    return tokenTypeIsSet_;
}

void WebhookDto::unsettokenType()
{
    tokenTypeIsSet_ = false;
}

std::string WebhookDto::getName() const
{
    return name_;
}

void WebhookDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WebhookDto::nameIsSet() const
{
    return nameIsSet_;
}

void WebhookDto::unsetname()
{
    nameIsSet_ = false;
}

std::string WebhookDto::getDescription() const
{
    return description_;
}

void WebhookDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool WebhookDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void WebhookDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t WebhookDto::getId() const
{
    return id_;
}

void WebhookDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WebhookDto::idIsSet() const
{
    return idIsSet_;
}

void WebhookDto::unsetid()
{
    idIsSet_ = false;
}

std::string WebhookDto::getCreatedAt() const
{
    return createdAt_;
}

void WebhookDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool WebhookDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void WebhookDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string WebhookDto::getUpdatedAt() const
{
    return updatedAt_;
}

void WebhookDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool WebhookDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void WebhookDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


