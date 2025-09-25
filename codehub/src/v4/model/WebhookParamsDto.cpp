

#include "huaweicloud/codehub/v4/model/WebhookParamsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




WebhookParamsDto::WebhookParamsDto()
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
}

WebhookParamsDto::~WebhookParamsDto() = default;

void WebhookParamsDto::validate()
{
}

web::json::value WebhookParamsDto::toJson() const
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

    return val;
}
bool WebhookParamsDto::fromJson(const web::json::value& val)
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
    return ok;
}


std::string WebhookParamsDto::getUrl() const
{
    return url_;
}

void WebhookParamsDto::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool WebhookParamsDto::urlIsSet() const
{
    return urlIsSet_;
}

void WebhookParamsDto::unseturl()
{
    urlIsSet_ = false;
}

bool WebhookParamsDto::isPushEvents() const
{
    return pushEvents_;
}

void WebhookParamsDto::setPushEvents(bool value)
{
    pushEvents_ = value;
    pushEventsIsSet_ = true;
}

bool WebhookParamsDto::pushEventsIsSet() const
{
    return pushEventsIsSet_;
}

void WebhookParamsDto::unsetpushEvents()
{
    pushEventsIsSet_ = false;
}

std::string WebhookParamsDto::getPushEventsBranchRegexFilter() const
{
    return pushEventsBranchRegexFilter_;
}

void WebhookParamsDto::setPushEventsBranchRegexFilter(const std::string& value)
{
    pushEventsBranchRegexFilter_ = value;
    pushEventsBranchRegexFilterIsSet_ = true;
}

bool WebhookParamsDto::pushEventsBranchRegexFilterIsSet() const
{
    return pushEventsBranchRegexFilterIsSet_;
}

void WebhookParamsDto::unsetpushEventsBranchRegexFilter()
{
    pushEventsBranchRegexFilterIsSet_ = false;
}

bool WebhookParamsDto::isTagPushEvents() const
{
    return tagPushEvents_;
}

void WebhookParamsDto::setTagPushEvents(bool value)
{
    tagPushEvents_ = value;
    tagPushEventsIsSet_ = true;
}

bool WebhookParamsDto::tagPushEventsIsSet() const
{
    return tagPushEventsIsSet_;
}

void WebhookParamsDto::unsettagPushEvents()
{
    tagPushEventsIsSet_ = false;
}

bool WebhookParamsDto::isMergeRequestsEvents() const
{
    return mergeRequestsEvents_;
}

void WebhookParamsDto::setMergeRequestsEvents(bool value)
{
    mergeRequestsEvents_ = value;
    mergeRequestsEventsIsSet_ = true;
}

bool WebhookParamsDto::mergeRequestsEventsIsSet() const
{
    return mergeRequestsEventsIsSet_;
}

void WebhookParamsDto::unsetmergeRequestsEvents()
{
    mergeRequestsEventsIsSet_ = false;
}

bool WebhookParamsDto::isNoteEvents() const
{
    return noteEvents_;
}

void WebhookParamsDto::setNoteEvents(bool value)
{
    noteEvents_ = value;
    noteEventsIsSet_ = true;
}

bool WebhookParamsDto::noteEventsIsSet() const
{
    return noteEventsIsSet_;
}

void WebhookParamsDto::unsetnoteEvents()
{
    noteEventsIsSet_ = false;
}

std::string WebhookParamsDto::getToken() const
{
    return token_;
}

void WebhookParamsDto::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool WebhookParamsDto::tokenIsSet() const
{
    return tokenIsSet_;
}

void WebhookParamsDto::unsettoken()
{
    tokenIsSet_ = false;
}

std::string WebhookParamsDto::getTokenType() const
{
    return tokenType_;
}

void WebhookParamsDto::setTokenType(const std::string& value)
{
    tokenType_ = value;
    tokenTypeIsSet_ = true;
}

bool WebhookParamsDto::tokenTypeIsSet() const
{
    return tokenTypeIsSet_;
}

void WebhookParamsDto::unsettokenType()
{
    tokenTypeIsSet_ = false;
}

std::string WebhookParamsDto::getName() const
{
    return name_;
}

void WebhookParamsDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WebhookParamsDto::nameIsSet() const
{
    return nameIsSet_;
}

void WebhookParamsDto::unsetname()
{
    nameIsSet_ = false;
}

std::string WebhookParamsDto::getDescription() const
{
    return description_;
}

void WebhookParamsDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool WebhookParamsDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void WebhookParamsDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


