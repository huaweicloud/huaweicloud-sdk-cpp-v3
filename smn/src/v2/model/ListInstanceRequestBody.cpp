

#include "huaweicloud/smn/v2/model/ListInstanceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ListInstanceRequestBody::ListInstanceRequestBody()
{
    tagsIsSet_ = false;
    tagsAnyIsSet_ = false;
    notTagsIsSet_ = false;
    notTagsAnyIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    matchesIsSet_ = false;
    withoutAnyTag_ = false;
    withoutAnyTagIsSet_ = false;
}

ListInstanceRequestBody::~ListInstanceRequestBody() = default;

void ListInstanceRequestBody::validate()
{
}

web::json::value ListInstanceRequestBody::toJson() const
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(matchesIsSet_) {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(matches_);
    }
    if(withoutAnyTagIsSet_) {
        val[utility::conversions::to_string_t("without_any_tag")] = ModelBase::toJson(withoutAnyTag_);
    }

    return val;
}
bool ListInstanceRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags_any"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags_any"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagsAny(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_tags_any"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_tags_any"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceTags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotTagsAny(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
            std::vector<TagMatch> refVal;
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


std::vector<ResourceTags>& ListInstanceRequestBody::getTags()
{
    return tags_;
}

void ListInstanceRequestBody::setTags(const std::vector<ResourceTags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListInstanceRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListInstanceRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<ResourceTags>& ListInstanceRequestBody::getTagsAny()
{
    return tagsAny_;
}

void ListInstanceRequestBody::setTagsAny(const std::vector<ResourceTags>& value)
{
    tagsAny_ = value;
    tagsAnyIsSet_ = true;
}

bool ListInstanceRequestBody::tagsAnyIsSet() const
{
    return tagsAnyIsSet_;
}

void ListInstanceRequestBody::unsettagsAny()
{
    tagsAnyIsSet_ = false;
}

std::vector<ResourceTags>& ListInstanceRequestBody::getNotTags()
{
    return notTags_;
}

void ListInstanceRequestBody::setNotTags(const std::vector<ResourceTags>& value)
{
    notTags_ = value;
    notTagsIsSet_ = true;
}

bool ListInstanceRequestBody::notTagsIsSet() const
{
    return notTagsIsSet_;
}

void ListInstanceRequestBody::unsetnotTags()
{
    notTagsIsSet_ = false;
}

std::vector<ResourceTags>& ListInstanceRequestBody::getNotTagsAny()
{
    return notTagsAny_;
}

void ListInstanceRequestBody::setNotTagsAny(const std::vector<ResourceTags>& value)
{
    notTagsAny_ = value;
    notTagsAnyIsSet_ = true;
}

bool ListInstanceRequestBody::notTagsAnyIsSet() const
{
    return notTagsAnyIsSet_;
}

void ListInstanceRequestBody::unsetnotTagsAny()
{
    notTagsAnyIsSet_ = false;
}

std::string ListInstanceRequestBody::getOffset() const
{
    return offset_;
}

void ListInstanceRequestBody::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstanceRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstanceRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListInstanceRequestBody::getLimit() const
{
    return limit_;
}

void ListInstanceRequestBody::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstanceRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstanceRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInstanceRequestBody::getAction() const
{
    return action_;
}

void ListInstanceRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListInstanceRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void ListInstanceRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<TagMatch>& ListInstanceRequestBody::getMatches()
{
    return matches_;
}

void ListInstanceRequestBody::setMatches(const std::vector<TagMatch>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ListInstanceRequestBody::matchesIsSet() const
{
    return matchesIsSet_;
}

void ListInstanceRequestBody::unsetmatches()
{
    matchesIsSet_ = false;
}

bool ListInstanceRequestBody::isWithoutAnyTag() const
{
    return withoutAnyTag_;
}

void ListInstanceRequestBody::setWithoutAnyTag(bool value)
{
    withoutAnyTag_ = value;
    withoutAnyTagIsSet_ = true;
}

bool ListInstanceRequestBody::withoutAnyTagIsSet() const
{
    return withoutAnyTagIsSet_;
}

void ListInstanceRequestBody::unsetwithoutAnyTag()
{
    withoutAnyTagIsSet_ = false;
}

}
}
}
}
}


