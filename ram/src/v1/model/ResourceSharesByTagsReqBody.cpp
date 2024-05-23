

#include "huaweicloud/ram/v1/model/ResourceSharesByTagsReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ram {
namespace V1 {
namespace Model {




ResourceSharesByTagsReqBody::ResourceSharesByTagsReqBody()
{
    withoutAnyTag_ = false;
    withoutAnyTagIsSet_ = false;
    tagsIsSet_ = false;
    matchesIsSet_ = false;
}

ResourceSharesByTagsReqBody::~ResourceSharesByTagsReqBody() = default;

void ResourceSharesByTagsReqBody::validate()
{
}

web::json::value ResourceSharesByTagsReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(withoutAnyTagIsSet_) {
        val[utility::conversions::to_string_t("without_any_tag")] = ModelBase::toJson(withoutAnyTag_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(matchesIsSet_) {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(matches_);
    }

    return val;
}
bool ResourceSharesByTagsReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("without_any_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("without_any_tag"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWithoutAnyTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagFilter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("matches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matches"));
        if(!fieldValue.is_null())
        {
            std::vector<Match> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatches(refVal);
        }
    }
    return ok;
}


bool ResourceSharesByTagsReqBody::isWithoutAnyTag() const
{
    return withoutAnyTag_;
}

void ResourceSharesByTagsReqBody::setWithoutAnyTag(bool value)
{
    withoutAnyTag_ = value;
    withoutAnyTagIsSet_ = true;
}

bool ResourceSharesByTagsReqBody::withoutAnyTagIsSet() const
{
    return withoutAnyTagIsSet_;
}

void ResourceSharesByTagsReqBody::unsetwithoutAnyTag()
{
    withoutAnyTagIsSet_ = false;
}

std::vector<TagFilter>& ResourceSharesByTagsReqBody::getTags()
{
    return tags_;
}

void ResourceSharesByTagsReqBody::setTags(const std::vector<TagFilter>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ResourceSharesByTagsReqBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ResourceSharesByTagsReqBody::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<Match>& ResourceSharesByTagsReqBody::getMatches()
{
    return matches_;
}

void ResourceSharesByTagsReqBody::setMatches(const std::vector<Match>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ResourceSharesByTagsReqBody::matchesIsSet() const
{
    return matchesIsSet_;
}

void ResourceSharesByTagsReqBody::unsetmatches()
{
    matchesIsSet_ = false;
}

}
}
}
}
}


