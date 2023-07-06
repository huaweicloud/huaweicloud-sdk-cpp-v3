

#include "huaweicloud/eip/v2/model/ListPublicipsByTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ListPublicipsByTagsRequestBody::ListPublicipsByTagsRequestBody()
{
    tagsIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    matchesIsSet_ = false;
}

ListPublicipsByTagsRequestBody::~ListPublicipsByTagsRequestBody() = default;

void ListPublicipsByTagsRequestBody::validate()
{
}

web::json::value ListPublicipsByTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
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

bool ListPublicipsByTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
            std::vector<MatchReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatches(refVal);
        }
    }
    return ok;
}

std::vector<TagReq>& ListPublicipsByTagsRequestBody::getTags()
{
    return tags_;
}

void ListPublicipsByTagsRequestBody::setTags(const std::vector<TagReq>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListPublicipsByTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListPublicipsByTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

int32_t ListPublicipsByTagsRequestBody::getLimit() const
{
    return limit_;
}

void ListPublicipsByTagsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPublicipsByTagsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListPublicipsByTagsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListPublicipsByTagsRequestBody::getOffset() const
{
    return offset_;
}

void ListPublicipsByTagsRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPublicipsByTagsRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPublicipsByTagsRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListPublicipsByTagsRequestBody::getAction() const
{
    return action_;
}

void ListPublicipsByTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListPublicipsByTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void ListPublicipsByTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<MatchReq>& ListPublicipsByTagsRequestBody::getMatches()
{
    return matches_;
}

void ListPublicipsByTagsRequestBody::setMatches(const std::vector<MatchReq>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ListPublicipsByTagsRequestBody::matchesIsSet() const
{
    return matchesIsSet_;
}

void ListPublicipsByTagsRequestBody::unsetmatches()
{
    matchesIsSet_ = false;
}

}
}
}
}
}


