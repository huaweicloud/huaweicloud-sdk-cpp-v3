

#include "huaweicloud/csms/v1/model/ListResourceInstancesRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ListResourceInstancesRequestBody::ListResourceInstancesRequestBody()
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

ListResourceInstancesRequestBody::~ListResourceInstancesRequestBody() = default;

void ListResourceInstancesRequestBody::validate()
{
}

web::json::value ListResourceInstancesRequestBody::toJson() const
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

bool ListResourceInstancesRequestBody::fromJson(const web::json::value& val)
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


std::string ListResourceInstancesRequestBody::getLimit() const
{
    return limit_;
}

void ListResourceInstancesRequestBody::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListResourceInstancesRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListResourceInstancesRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListResourceInstancesRequestBody::getOffset() const
{
    return offset_;
}

void ListResourceInstancesRequestBody::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListResourceInstancesRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListResourceInstancesRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListResourceInstancesRequestBody::getAction() const
{
    return action_;
}

void ListResourceInstancesRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListResourceInstancesRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void ListResourceInstancesRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<Tag>& ListResourceInstancesRequestBody::getTags()
{
    return tags_;
}

void ListResourceInstancesRequestBody::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListResourceInstancesRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListResourceInstancesRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<TagItem>& ListResourceInstancesRequestBody::getMatches()
{
    return matches_;
}

void ListResourceInstancesRequestBody::setMatches(const std::vector<TagItem>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ListResourceInstancesRequestBody::matchesIsSet() const
{
    return matchesIsSet_;
}

void ListResourceInstancesRequestBody::unsetmatches()
{
    matchesIsSet_ = false;
}

std::string ListResourceInstancesRequestBody::getSequence() const
{
    return sequence_;
}

void ListResourceInstancesRequestBody::setSequence(const std::string& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool ListResourceInstancesRequestBody::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void ListResourceInstancesRequestBody::unsetsequence()
{
    sequenceIsSet_ = false;
}

}
}
}
}
}


