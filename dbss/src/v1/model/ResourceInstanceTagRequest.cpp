

#include "huaweicloud/dbss/v1/model/ResourceInstanceTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ResourceInstanceTagRequest::ResourceInstanceTagRequest()
{
    matchesIsSet_ = false;
    notTagsIsSet_ = false;
    tagsIsSet_ = false;
    tagsAnyIsSet_ = false;
    notTagsAnyIsSet_ = false;
    sysTagsIsSet_ = false;
    withoutAnyTag_ = false;
    withoutAnyTagIsSet_ = false;
}

ResourceInstanceTagRequest::~ResourceInstanceTagRequest() = default;

void ResourceInstanceTagRequest::validate()
{
}

web::json::value ResourceInstanceTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(matchesIsSet_) {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(matches_);
    }
    if(notTagsIsSet_) {
        val[utility::conversions::to_string_t("not_tags")] = ModelBase::toJson(notTags_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(tagsAnyIsSet_) {
        val[utility::conversions::to_string_t("tags_any")] = ModelBase::toJson(tagsAny_);
    }
    if(notTagsAnyIsSet_) {
        val[utility::conversions::to_string_t("not_tags_any")] = ModelBase::toJson(notTagsAny_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }
    if(withoutAnyTagIsSet_) {
        val[utility::conversions::to_string_t("without_any_tag")] = ModelBase::toJson(withoutAnyTag_);
    }

    return val;
}
bool ResourceInstanceTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("matches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matches"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceInstanceTagRequest_matches> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagKeyValuesBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagKeyValuesBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags_any"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags_any"));
        if(!fieldValue.is_null())
        {
            std::vector<TagKeyValuesBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagsAny(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_tags_any"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_tags_any"));
        if(!fieldValue.is_null())
        {
            std::vector<TagKeyValuesBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotTagsAny(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagKeyValuesBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
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


std::vector<ResourceInstanceTagRequest_matches>& ResourceInstanceTagRequest::getMatches()
{
    return matches_;
}

void ResourceInstanceTagRequest::setMatches(const std::vector<ResourceInstanceTagRequest_matches>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ResourceInstanceTagRequest::matchesIsSet() const
{
    return matchesIsSet_;
}

void ResourceInstanceTagRequest::unsetmatches()
{
    matchesIsSet_ = false;
}

std::vector<TagKeyValuesBean>& ResourceInstanceTagRequest::getNotTags()
{
    return notTags_;
}

void ResourceInstanceTagRequest::setNotTags(const std::vector<TagKeyValuesBean>& value)
{
    notTags_ = value;
    notTagsIsSet_ = true;
}

bool ResourceInstanceTagRequest::notTagsIsSet() const
{
    return notTagsIsSet_;
}

void ResourceInstanceTagRequest::unsetnotTags()
{
    notTagsIsSet_ = false;
}

std::vector<TagKeyValuesBean>& ResourceInstanceTagRequest::getTags()
{
    return tags_;
}

void ResourceInstanceTagRequest::setTags(const std::vector<TagKeyValuesBean>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ResourceInstanceTagRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ResourceInstanceTagRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<TagKeyValuesBean>& ResourceInstanceTagRequest::getTagsAny()
{
    return tagsAny_;
}

void ResourceInstanceTagRequest::setTagsAny(const std::vector<TagKeyValuesBean>& value)
{
    tagsAny_ = value;
    tagsAnyIsSet_ = true;
}

bool ResourceInstanceTagRequest::tagsAnyIsSet() const
{
    return tagsAnyIsSet_;
}

void ResourceInstanceTagRequest::unsettagsAny()
{
    tagsAnyIsSet_ = false;
}

std::vector<TagKeyValuesBean>& ResourceInstanceTagRequest::getNotTagsAny()
{
    return notTagsAny_;
}

void ResourceInstanceTagRequest::setNotTagsAny(const std::vector<TagKeyValuesBean>& value)
{
    notTagsAny_ = value;
    notTagsAnyIsSet_ = true;
}

bool ResourceInstanceTagRequest::notTagsAnyIsSet() const
{
    return notTagsAnyIsSet_;
}

void ResourceInstanceTagRequest::unsetnotTagsAny()
{
    notTagsAnyIsSet_ = false;
}

std::vector<TagKeyValuesBean>& ResourceInstanceTagRequest::getSysTags()
{
    return sysTags_;
}

void ResourceInstanceTagRequest::setSysTags(const std::vector<TagKeyValuesBean>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ResourceInstanceTagRequest::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ResourceInstanceTagRequest::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

bool ResourceInstanceTagRequest::isWithoutAnyTag() const
{
    return withoutAnyTag_;
}

void ResourceInstanceTagRequest::setWithoutAnyTag(bool value)
{
    withoutAnyTag_ = value;
    withoutAnyTagIsSet_ = true;
}

bool ResourceInstanceTagRequest::withoutAnyTagIsSet() const
{
    return withoutAnyTagIsSet_;
}

void ResourceInstanceTagRequest::unsetwithoutAnyTag()
{
    withoutAnyTagIsSet_ = false;
}

}
}
}
}
}


