

#include "huaweicloud/vpc/v2/model/ListSubnetsByTagsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ListSubnetsByTagsRequestBody::ListSubnetsByTagsRequestBody()
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

ListSubnetsByTagsRequestBody::~ListSubnetsByTagsRequestBody() = default;

void ListSubnetsByTagsRequestBody::validate()
{
}

web::json::value ListSubnetsByTagsRequestBody::toJson() const
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
bool ListSubnetsByTagsRequestBody::fromJson(const web::json::value& val)
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


std::string ListSubnetsByTagsRequestBody::getAction() const
{
    return action_;
}

void ListSubnetsByTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListSubnetsByTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void ListSubnetsByTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

int32_t ListSubnetsByTagsRequestBody::getLimit() const
{
    return limit_;
}

void ListSubnetsByTagsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSubnetsByTagsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListSubnetsByTagsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListSubnetsByTagsRequestBody::getOffset() const
{
    return offset_;
}

void ListSubnetsByTagsRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSubnetsByTagsRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSubnetsByTagsRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<Match>& ListSubnetsByTagsRequestBody::getMatches()
{
    return matches_;
}

void ListSubnetsByTagsRequestBody::setMatches(const std::vector<Match>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ListSubnetsByTagsRequestBody::matchesIsSet() const
{
    return matchesIsSet_;
}

void ListSubnetsByTagsRequestBody::unsetmatches()
{
    matchesIsSet_ = false;
}

std::vector<ListTag>& ListSubnetsByTagsRequestBody::getTags()
{
    return tags_;
}

void ListSubnetsByTagsRequestBody::setTags(const std::vector<ListTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListSubnetsByTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListSubnetsByTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


