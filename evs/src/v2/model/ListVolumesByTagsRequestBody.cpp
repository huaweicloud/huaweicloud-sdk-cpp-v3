

#include "huaweicloud/evs/v2/model/ListVolumesByTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListVolumesByTagsRequestBody::ListVolumesByTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    matchesIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    tagsIsSet_ = false;
}

ListVolumesByTagsRequestBody::~ListVolumesByTagsRequestBody() = default;

void ListVolumesByTagsRequestBody::validate()
{
}

web::json::value ListVolumesByTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(matchesIsSet_) {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(matches_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ListVolumesByTagsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsForListVolumes> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string ListVolumesByTagsRequestBody::getAction() const
{
    return action_;
}

void ListVolumesByTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListVolumesByTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void ListVolumesByTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

int32_t ListVolumesByTagsRequestBody::getLimit() const
{
    return limit_;
}

void ListVolumesByTagsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVolumesByTagsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListVolumesByTagsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<Match>& ListVolumesByTagsRequestBody::getMatches()
{
    return matches_;
}

void ListVolumesByTagsRequestBody::setMatches(const std::vector<Match>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ListVolumesByTagsRequestBody::matchesIsSet() const
{
    return matchesIsSet_;
}

void ListVolumesByTagsRequestBody::unsetmatches()
{
    matchesIsSet_ = false;
}

int32_t ListVolumesByTagsRequestBody::getOffset() const
{
    return offset_;
}

void ListVolumesByTagsRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListVolumesByTagsRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListVolumesByTagsRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<TagsForListVolumes>& ListVolumesByTagsRequestBody::getTags()
{
    return tags_;
}

void ListVolumesByTagsRequestBody::setTags(const std::vector<TagsForListVolumes>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListVolumesByTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListVolumesByTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


