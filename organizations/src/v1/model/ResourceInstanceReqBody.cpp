

#include "huaweicloud/organizations/v1/model/ResourceInstanceReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ResourceInstanceReqBody::ResourceInstanceReqBody()
{
    withoutAnyTag_ = false;
    withoutAnyTagIsSet_ = false;
    tagsIsSet_ = false;
    matchesIsSet_ = false;
}

ResourceInstanceReqBody::~ResourceInstanceReqBody() = default;

void ResourceInstanceReqBody::validate()
{
}

web::json::value ResourceInstanceReqBody::toJson() const
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
bool ResourceInstanceReqBody::fromJson(const web::json::value& val)
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
            std::vector<TagsDTO> refVal;
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


bool ResourceInstanceReqBody::isWithoutAnyTag() const
{
    return withoutAnyTag_;
}

void ResourceInstanceReqBody::setWithoutAnyTag(bool value)
{
    withoutAnyTag_ = value;
    withoutAnyTagIsSet_ = true;
}

bool ResourceInstanceReqBody::withoutAnyTagIsSet() const
{
    return withoutAnyTagIsSet_;
}

void ResourceInstanceReqBody::unsetwithoutAnyTag()
{
    withoutAnyTagIsSet_ = false;
}

std::vector<TagsDTO>& ResourceInstanceReqBody::getTags()
{
    return tags_;
}

void ResourceInstanceReqBody::setTags(const std::vector<TagsDTO>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ResourceInstanceReqBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ResourceInstanceReqBody::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<Match>& ResourceInstanceReqBody::getMatches()
{
    return matches_;
}

void ResourceInstanceReqBody::setMatches(const std::vector<Match>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ResourceInstanceReqBody::matchesIsSet() const
{
    return matchesIsSet_;
}

void ResourceInstanceReqBody::unsetmatches()
{
    matchesIsSet_ = false;
}

}
}
}
}
}


