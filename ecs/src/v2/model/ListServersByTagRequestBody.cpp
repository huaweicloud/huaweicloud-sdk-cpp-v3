

#include "huaweicloud/ecs/v2/model/ListServersByTagRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ListServersByTagRequestBody::ListServersByTagRequestBody()
{
    action_ = "";
    actionIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    tagsIsSet_ = false;
    notTagsIsSet_ = false;
    matchesIsSet_ = false;
}

ListServersByTagRequestBody::~ListServersByTagRequestBody() = default;

void ListServersByTagRequestBody::validate()
{
}

web::json::value ListServersByTagRequestBody::toJson() const
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
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(notTagsIsSet_) {
        val[utility::conversions::to_string_t("not_tags")] = ModelBase::toJson(notTags_);
    }
    if(matchesIsSet_) {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(matches_);
    }

    return val;
}

bool ListServersByTagRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerTags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerTags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("matches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matches"));
        if(!fieldValue.is_null())
        {
            std::vector<ServerTagMatch> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatches(refVal);
        }
    }
    return ok;
}

std::string ListServersByTagRequestBody::getAction() const
{
    return action_;
}

void ListServersByTagRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListServersByTagRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void ListServersByTagRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::string ListServersByTagRequestBody::getLimit() const
{
    return limit_;
}

void ListServersByTagRequestBody::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListServersByTagRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListServersByTagRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListServersByTagRequestBody::getOffset() const
{
    return offset_;
}

void ListServersByTagRequestBody::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListServersByTagRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListServersByTagRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<ServerTags>& ListServersByTagRequestBody::getTags()
{
    return tags_;
}

void ListServersByTagRequestBody::setTags(const std::vector<ServerTags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListServersByTagRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListServersByTagRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<ServerTags>& ListServersByTagRequestBody::getNotTags()
{
    return notTags_;
}

void ListServersByTagRequestBody::setNotTags(const std::vector<ServerTags>& value)
{
    notTags_ = value;
    notTagsIsSet_ = true;
}

bool ListServersByTagRequestBody::notTagsIsSet() const
{
    return notTagsIsSet_;
}

void ListServersByTagRequestBody::unsetnotTags()
{
    notTagsIsSet_ = false;
}

std::vector<ServerTagMatch>& ListServersByTagRequestBody::getMatches()
{
    return matches_;
}

void ListServersByTagRequestBody::setMatches(const std::vector<ServerTagMatch>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ListServersByTagRequestBody::matchesIsSet() const
{
    return matchesIsSet_;
}

void ListServersByTagRequestBody::unsetmatches()
{
    matchesIsSet_ = false;
}

}
}
}
}
}


