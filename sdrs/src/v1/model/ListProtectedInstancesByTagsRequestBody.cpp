

#include "huaweicloud/sdrs/v1/model/ListProtectedInstancesByTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ListProtectedInstancesByTagsRequestBody::ListProtectedInstancesByTagsRequestBody()
{
    tagsIsSet_ = false;
    tagsAnyIsSet_ = false;
    notTagsIsSet_ = false;
    notTagsAnyIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    matchesIsSet_ = false;
}

ListProtectedInstancesByTagsRequestBody::~ListProtectedInstancesByTagsRequestBody() = default;

void ListProtectedInstancesByTagsRequestBody::validate()
{
}

web::json::value ListProtectedInstancesByTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(tagsAnyIsSet_) {
        val[utility::conversions::to_string_t("tags_any")] = ModelBase::toJson(tagsAny_);
    }
    if(notTagsIsSet_) {
        val[utility::conversions::to_string_t("not_tags")] = ModelBase::toJson(notTags_);
    }
    if(notTagsAnyIsSet_) {
        val[utility::conversions::to_string_t("not_tags_any")] = ModelBase::toJson(notTagsAny_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(matchesIsSet_) {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(matches_);
    }

    return val;
}

bool ListProtectedInstancesByTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags_any"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags_any"));
        if(!fieldValue.is_null())
        {
            std::vector<TagParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagsAny(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_tags_any"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_tags_any"));
        if(!fieldValue.is_null())
        {
            std::vector<TagParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotTagsAny(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("matches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matches"));
        if(!fieldValue.is_null())
        {
            std::vector<MatchParams> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatches(refVal);
        }
    }
    return ok;
}

std::vector<TagParams>& ListProtectedInstancesByTagsRequestBody::getTags()
{
    return tags_;
}

void ListProtectedInstancesByTagsRequestBody::setTags(const std::vector<TagParams>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListProtectedInstancesByTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListProtectedInstancesByTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<TagParams>& ListProtectedInstancesByTagsRequestBody::getTagsAny()
{
    return tagsAny_;
}

void ListProtectedInstancesByTagsRequestBody::setTagsAny(const std::vector<TagParams>& value)
{
    tagsAny_ = value;
    tagsAnyIsSet_ = true;
}

bool ListProtectedInstancesByTagsRequestBody::tagsAnyIsSet() const
{
    return tagsAnyIsSet_;
}

void ListProtectedInstancesByTagsRequestBody::unsettagsAny()
{
    tagsAnyIsSet_ = false;
}

std::vector<TagParams>& ListProtectedInstancesByTagsRequestBody::getNotTags()
{
    return notTags_;
}

void ListProtectedInstancesByTagsRequestBody::setNotTags(const std::vector<TagParams>& value)
{
    notTags_ = value;
    notTagsIsSet_ = true;
}

bool ListProtectedInstancesByTagsRequestBody::notTagsIsSet() const
{
    return notTagsIsSet_;
}

void ListProtectedInstancesByTagsRequestBody::unsetnotTags()
{
    notTagsIsSet_ = false;
}

std::vector<TagParams>& ListProtectedInstancesByTagsRequestBody::getNotTagsAny()
{
    return notTagsAny_;
}

void ListProtectedInstancesByTagsRequestBody::setNotTagsAny(const std::vector<TagParams>& value)
{
    notTagsAny_ = value;
    notTagsAnyIsSet_ = true;
}

bool ListProtectedInstancesByTagsRequestBody::notTagsAnyIsSet() const
{
    return notTagsAnyIsSet_;
}

void ListProtectedInstancesByTagsRequestBody::unsetnotTagsAny()
{
    notTagsAnyIsSet_ = false;
}

std::string ListProtectedInstancesByTagsRequestBody::getLimit() const
{
    return limit_;
}

void ListProtectedInstancesByTagsRequestBody::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProtectedInstancesByTagsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListProtectedInstancesByTagsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListProtectedInstancesByTagsRequestBody::getOffset() const
{
    return offset_;
}

void ListProtectedInstancesByTagsRequestBody::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProtectedInstancesByTagsRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProtectedInstancesByTagsRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListProtectedInstancesByTagsRequestBody::getAction() const
{
    return action_;
}

void ListProtectedInstancesByTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListProtectedInstancesByTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void ListProtectedInstancesByTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<MatchParams>& ListProtectedInstancesByTagsRequestBody::getMatches()
{
    return matches_;
}

void ListProtectedInstancesByTagsRequestBody::setMatches(const std::vector<MatchParams>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ListProtectedInstancesByTagsRequestBody::matchesIsSet() const
{
    return matchesIsSet_;
}

void ListProtectedInstancesByTagsRequestBody::unsetmatches()
{
    matchesIsSet_ = false;
}

}
}
}
}
}


