

#include "huaweicloud/codeartsrepo/v4/model/WebhookParamsRequestDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




WebhookParamsRequestDto::WebhookParamsRequestDto()
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
}

WebhookParamsRequestDto::~WebhookParamsRequestDto() = default;

void WebhookParamsRequestDto::validate()
{
}

web::json::value WebhookParamsRequestDto::toJson() const
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

    return val;
}
bool WebhookParamsRequestDto::fromJson(const web::json::value& val)
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
    return ok;
}


std::string WebhookParamsRequestDto::getUrl() const
{
    return url_;
}

void WebhookParamsRequestDto::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool WebhookParamsRequestDto::urlIsSet() const
{
    return urlIsSet_;
}

void WebhookParamsRequestDto::unseturl()
{
    urlIsSet_ = false;
}

bool WebhookParamsRequestDto::isPushEvents() const
{
    return pushEvents_;
}

void WebhookParamsRequestDto::setPushEvents(bool value)
{
    pushEvents_ = value;
    pushEventsIsSet_ = true;
}

bool WebhookParamsRequestDto::pushEventsIsSet() const
{
    return pushEventsIsSet_;
}

void WebhookParamsRequestDto::unsetpushEvents()
{
    pushEventsIsSet_ = false;
}

std::string WebhookParamsRequestDto::getPushEventsBranchRegexFilter() const
{
    return pushEventsBranchRegexFilter_;
}

void WebhookParamsRequestDto::setPushEventsBranchRegexFilter(const std::string& value)
{
    pushEventsBranchRegexFilter_ = value;
    pushEventsBranchRegexFilterIsSet_ = true;
}

bool WebhookParamsRequestDto::pushEventsBranchRegexFilterIsSet() const
{
    return pushEventsBranchRegexFilterIsSet_;
}

void WebhookParamsRequestDto::unsetpushEventsBranchRegexFilter()
{
    pushEventsBranchRegexFilterIsSet_ = false;
}

std::vector<std::string>& WebhookParamsRequestDto::getNotePlainTextFilter()
{
    return notePlainTextFilter_;
}

void WebhookParamsRequestDto::setNotePlainTextFilter(const std::vector<std::string>& value)
{
    notePlainTextFilter_ = value;
    notePlainTextFilterIsSet_ = true;
}

bool WebhookParamsRequestDto::notePlainTextFilterIsSet() const
{
    return notePlainTextFilterIsSet_;
}

void WebhookParamsRequestDto::unsetnotePlainTextFilter()
{
    notePlainTextFilterIsSet_ = false;
}

bool WebhookParamsRequestDto::isTagPushEvents() const
{
    return tagPushEvents_;
}

void WebhookParamsRequestDto::setTagPushEvents(bool value)
{
    tagPushEvents_ = value;
    tagPushEventsIsSet_ = true;
}

bool WebhookParamsRequestDto::tagPushEventsIsSet() const
{
    return tagPushEventsIsSet_;
}

void WebhookParamsRequestDto::unsettagPushEvents()
{
    tagPushEventsIsSet_ = false;
}

bool WebhookParamsRequestDto::isMergeRequestsEvents() const
{
    return mergeRequestsEvents_;
}

void WebhookParamsRequestDto::setMergeRequestsEvents(bool value)
{
    mergeRequestsEvents_ = value;
    mergeRequestsEventsIsSet_ = true;
}

bool WebhookParamsRequestDto::mergeRequestsEventsIsSet() const
{
    return mergeRequestsEventsIsSet_;
}

void WebhookParamsRequestDto::unsetmergeRequestsEvents()
{
    mergeRequestsEventsIsSet_ = false;
}

bool WebhookParamsRequestDto::isNoteEvents() const
{
    return noteEvents_;
}

void WebhookParamsRequestDto::setNoteEvents(bool value)
{
    noteEvents_ = value;
    noteEventsIsSet_ = true;
}

bool WebhookParamsRequestDto::noteEventsIsSet() const
{
    return noteEventsIsSet_;
}

void WebhookParamsRequestDto::unsetnoteEvents()
{
    noteEventsIsSet_ = false;
}

std::string WebhookParamsRequestDto::getToken() const
{
    return token_;
}

void WebhookParamsRequestDto::setToken(const std::string& value)
{
    token_ = value;
    tokenIsSet_ = true;
}

bool WebhookParamsRequestDto::tokenIsSet() const
{
    return tokenIsSet_;
}

void WebhookParamsRequestDto::unsettoken()
{
    tokenIsSet_ = false;
}

std::string WebhookParamsRequestDto::getTokenType() const
{
    return tokenType_;
}

void WebhookParamsRequestDto::setTokenType(const std::string& value)
{
    tokenType_ = value;
    tokenTypeIsSet_ = true;
}

bool WebhookParamsRequestDto::tokenTypeIsSet() const
{
    return tokenTypeIsSet_;
}

void WebhookParamsRequestDto::unsettokenType()
{
    tokenTypeIsSet_ = false;
}

std::string WebhookParamsRequestDto::getName() const
{
    return name_;
}

void WebhookParamsRequestDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WebhookParamsRequestDto::nameIsSet() const
{
    return nameIsSet_;
}

void WebhookParamsRequestDto::unsetname()
{
    nameIsSet_ = false;
}

std::string WebhookParamsRequestDto::getDescription() const
{
    return description_;
}

void WebhookParamsRequestDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool WebhookParamsRequestDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void WebhookParamsRequestDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

}
}
}
}
}


