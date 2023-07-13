

#include "huaweicloud/vpc/v2/model/ListVpcsByTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListVpcsByTagsRequestBody::ListVpcsByTagsRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    matchesIsSet_ = false;
    tagsIsSet_ = false;
}

ListVpcsByTagsRequestBody::~ListVpcsByTagsRequestBody() = default;

void ListVpcsByTagsRequestBody::validate()
{
}

web::json::value ListVpcsByTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
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
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ListVpcsByTagsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ListTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string ListVpcsByTagsRequestBody::getAction() const
{
    return action_;
}

void ListVpcsByTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListVpcsByTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void ListVpcsByTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

int32_t ListVpcsByTagsRequestBody::getLimit() const
{
    return limit_;
}

void ListVpcsByTagsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVpcsByTagsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListVpcsByTagsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListVpcsByTagsRequestBody::getOffset() const
{
    return offset_;
}

void ListVpcsByTagsRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListVpcsByTagsRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListVpcsByTagsRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<Match>& ListVpcsByTagsRequestBody::getMatches()
{
    return matches_;
}

void ListVpcsByTagsRequestBody::setMatches(const std::vector<Match>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ListVpcsByTagsRequestBody::matchesIsSet() const
{
    return matchesIsSet_;
}

void ListVpcsByTagsRequestBody::unsetmatches()
{
    matchesIsSet_ = false;
}

std::vector<ListTag>& ListVpcsByTagsRequestBody::getTags()
{
    return tags_;
}

void ListVpcsByTagsRequestBody::setTags(const std::vector<ListTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListVpcsByTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListVpcsByTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


