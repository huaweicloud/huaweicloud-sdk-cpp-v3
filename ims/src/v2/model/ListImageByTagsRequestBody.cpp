

#include "huaweicloud/ims/v2/model/ListImageByTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




ListImageByTagsRequestBody::ListImageByTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
    tagsAnyIsSet_ = false;
    notTagsIsSet_ = false;
    notTagsAnyIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    matchesIsSet_ = false;
    withoutAnyTag_ = false;
    withoutAnyTagIsSet_ = false;
}

ListImageByTagsRequestBody::~ListImageByTagsRequestBody() = default;

void ListImageByTagsRequestBody::validate()
{
}

web::json::value ListImageByTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
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
    if(matchesIsSet_) {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(matches_);
    }
    if(withoutAnyTagIsSet_) {
        val[utility::conversions::to_string_t("without_any_tag")] = ModelBase::toJson(withoutAnyTag_);
    }

    return val;
}
bool ListImageByTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags_any"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags_any"));
        if(!fieldValue.is_null())
        {
            std::vector<Tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagsAny(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_tags_any"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_tags_any"));
        if(!fieldValue.is_null())
        {
            std::vector<Tags> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("matches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matches"));
        if(!fieldValue.is_null())
        {
            std::vector<TagKeyValue> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("without_any_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("without_any_tag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWithoutAnyTag(refVal);
        }
    }
    return ok;
}


std::string ListImageByTagsRequestBody::getAction() const
{
    return action_;
}

void ListImageByTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListImageByTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void ListImageByTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<Tags>& ListImageByTagsRequestBody::getTags()
{
    return tags_;
}

void ListImageByTagsRequestBody::setTags(const std::vector<Tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListImageByTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListImageByTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<Tags>& ListImageByTagsRequestBody::getTagsAny()
{
    return tagsAny_;
}

void ListImageByTagsRequestBody::setTagsAny(const std::vector<Tags>& value)
{
    tagsAny_ = value;
    tagsAnyIsSet_ = true;
}

bool ListImageByTagsRequestBody::tagsAnyIsSet() const
{
    return tagsAnyIsSet_;
}

void ListImageByTagsRequestBody::unsettagsAny()
{
    tagsAnyIsSet_ = false;
}

std::vector<Tags>& ListImageByTagsRequestBody::getNotTags()
{
    return notTags_;
}

void ListImageByTagsRequestBody::setNotTags(const std::vector<Tags>& value)
{
    notTags_ = value;
    notTagsIsSet_ = true;
}

bool ListImageByTagsRequestBody::notTagsIsSet() const
{
    return notTagsIsSet_;
}

void ListImageByTagsRequestBody::unsetnotTags()
{
    notTagsIsSet_ = false;
}

std::vector<Tags>& ListImageByTagsRequestBody::getNotTagsAny()
{
    return notTagsAny_;
}

void ListImageByTagsRequestBody::setNotTagsAny(const std::vector<Tags>& value)
{
    notTagsAny_ = value;
    notTagsAnyIsSet_ = true;
}

bool ListImageByTagsRequestBody::notTagsAnyIsSet() const
{
    return notTagsAnyIsSet_;
}

void ListImageByTagsRequestBody::unsetnotTagsAny()
{
    notTagsAnyIsSet_ = false;
}

std::string ListImageByTagsRequestBody::getLimit() const
{
    return limit_;
}

void ListImageByTagsRequestBody::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListImageByTagsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListImageByTagsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListImageByTagsRequestBody::getOffset() const
{
    return offset_;
}

void ListImageByTagsRequestBody::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListImageByTagsRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListImageByTagsRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<TagKeyValue>& ListImageByTagsRequestBody::getMatches()
{
    return matches_;
}

void ListImageByTagsRequestBody::setMatches(const std::vector<TagKeyValue>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ListImageByTagsRequestBody::matchesIsSet() const
{
    return matchesIsSet_;
}

void ListImageByTagsRequestBody::unsetmatches()
{
    matchesIsSet_ = false;
}

bool ListImageByTagsRequestBody::isWithoutAnyTag() const
{
    return withoutAnyTag_;
}

void ListImageByTagsRequestBody::setWithoutAnyTag(bool value)
{
    withoutAnyTag_ = value;
    withoutAnyTagIsSet_ = true;
}

bool ListImageByTagsRequestBody::withoutAnyTagIsSet() const
{
    return withoutAnyTagIsSet_;
}

void ListImageByTagsRequestBody::unsetwithoutAnyTag()
{
    withoutAnyTagIsSet_ = false;
}

}
}
}
}
}


