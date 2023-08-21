

#include "huaweicloud/kms/v2/model/ListKmsByTagsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKmsByTagsRequestBody::ListKmsByTagsRequestBody()
{
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    tagsIsSet_ = false;
    matchesIsSet_ = false;
    sequence_ = "";
    sequenceIsSet_ = false;
}

ListKmsByTagsRequestBody::~ListKmsByTagsRequestBody() = default;

void ListKmsByTagsRequestBody::validate()
{
}

web::json::value ListKmsByTagsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(matchesIsSet_) {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(matches_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }

    return val;
}

bool ListKmsByTagsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("matches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matches"));
        if(!fieldValue.is_null())
        {
            std::vector<TagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    return ok;
}

std::string ListKmsByTagsRequestBody::getLimit() const
{
    return limit_;
}

void ListKmsByTagsRequestBody::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListKmsByTagsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListKmsByTagsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListKmsByTagsRequestBody::getOffset() const
{
    return offset_;
}

void ListKmsByTagsRequestBody::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListKmsByTagsRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListKmsByTagsRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListKmsByTagsRequestBody::getAction() const
{
    return action_;
}

void ListKmsByTagsRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListKmsByTagsRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void ListKmsByTagsRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<Tag>& ListKmsByTagsRequestBody::getTags()
{
    return tags_;
}

void ListKmsByTagsRequestBody::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListKmsByTagsRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListKmsByTagsRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<TagItem>& ListKmsByTagsRequestBody::getMatches()
{
    return matches_;
}

void ListKmsByTagsRequestBody::setMatches(const std::vector<TagItem>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ListKmsByTagsRequestBody::matchesIsSet() const
{
    return matchesIsSet_;
}

void ListKmsByTagsRequestBody::unsetmatches()
{
    matchesIsSet_ = false;
}

std::string ListKmsByTagsRequestBody::getSequence() const
{
    return sequence_;
}

void ListKmsByTagsRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool ListKmsByTagsRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void ListKmsByTagsRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


