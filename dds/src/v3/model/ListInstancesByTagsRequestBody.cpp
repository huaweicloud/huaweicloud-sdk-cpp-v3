

#include "huaweicloud/dds/v3/model/ListInstancesByTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListInstancesByTagsRequestBody::ListInstancesByTagsRequestBody()
{
    offset_ = "";
    offsetIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    matchesIsSet_ = false;
    tagsIsSet_ = false;
}

ListInstancesByTagsRequestBody::~ListInstancesByTagsRequestBody() = default;

void ListInstancesByTagsRequestBody::validate()
{
}

web::json::value ListInstancesByTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool ListInstancesByTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<QueryMatchItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryTagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}

std::string ListInstancesByTagsRequestBody::getOffset() const
{
    return offset_;
}

void ListInstancesByTagsRequestBody::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstancesByTagsRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstancesByTagsRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListInstancesByTagsRequestBody::getLimit() const
{
    return limit_;
}

void ListInstancesByTagsRequestBody::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstancesByTagsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstancesByTagsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInstancesByTagsRequestBody::getAction() const
{
    return action_;
}

void ListInstancesByTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListInstancesByTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void ListInstancesByTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<QueryMatchItem>& ListInstancesByTagsRequestBody::getMatches()
{
    return matches_;
}

void ListInstancesByTagsRequestBody::setMatches(const std::vector<QueryMatchItem>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ListInstancesByTagsRequestBody::matchesIsSet() const
{
    return matchesIsSet_;
}

void ListInstancesByTagsRequestBody::unsetmatches()
{
    matchesIsSet_ = false;
}

std::vector<QueryTagItem>& ListInstancesByTagsRequestBody::getTags()
{
    return tags_;
}

void ListInstancesByTagsRequestBody::setTags(const std::vector<QueryTagItem>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListInstancesByTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListInstancesByTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


