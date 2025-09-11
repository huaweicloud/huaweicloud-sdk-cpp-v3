

#include "huaweicloud/functiongraph/v2/model/ListEnterpriseResourceRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListEnterpriseResourceRequestBody::ListEnterpriseResourceRequestBody()
{
    withoutAnyTag_ = false;
    withoutAnyTagIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    offset_ = "";
    offsetIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    matchesIsSet_ = false;
    sysTagsIsSet_ = false;
}

ListEnterpriseResourceRequestBody::~ListEnterpriseResourceRequestBody() = default;

void ListEnterpriseResourceRequestBody::validate()
{
}

web::json::value ListEnterpriseResourceRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(withoutAnyTagIsSet_) {
        val[utility::conversions::to_string_t("without_any_tag")] = ModelBase::toJson(withoutAnyTag_);
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
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }

    return val;
}
bool ListEnterpriseResourceRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("matches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matches"));
        if(!fieldValue.is_null())
        {
            std::vector<KvItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    return ok;
}


bool ListEnterpriseResourceRequestBody::isWithoutAnyTag() const
{
    return withoutAnyTag_;
}

void ListEnterpriseResourceRequestBody::setWithoutAnyTag(bool value)
{
    withoutAnyTag_ = value;
    withoutAnyTagIsSet_ = true;
}

bool ListEnterpriseResourceRequestBody::withoutAnyTagIsSet() const
{
    return withoutAnyTagIsSet_;
}

void ListEnterpriseResourceRequestBody::unsetwithoutAnyTag()
{
    withoutAnyTagIsSet_ = false;
}

std::string ListEnterpriseResourceRequestBody::getLimit() const
{
    return limit_;
}

void ListEnterpriseResourceRequestBody::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEnterpriseResourceRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListEnterpriseResourceRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListEnterpriseResourceRequestBody::getOffset() const
{
    return offset_;
}

void ListEnterpriseResourceRequestBody::setOffset(const std::string& value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListEnterpriseResourceRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListEnterpriseResourceRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListEnterpriseResourceRequestBody::getAction() const
{
    return action_;
}

void ListEnterpriseResourceRequestBody::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool ListEnterpriseResourceRequestBody::actionIsSet() const
{
    return actionIsSet_;
}

void ListEnterpriseResourceRequestBody::unsetaction()
{
    actionIsSet_ = false;
}

std::vector<KvItem>& ListEnterpriseResourceRequestBody::getMatches()
{
    return matches_;
}

void ListEnterpriseResourceRequestBody::setMatches(const std::vector<KvItem>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ListEnterpriseResourceRequestBody::matchesIsSet() const
{
    return matchesIsSet_;
}

void ListEnterpriseResourceRequestBody::unsetmatches()
{
    matchesIsSet_ = false;
}

std::vector<TagItem>& ListEnterpriseResourceRequestBody::getSysTags()
{
    return sysTags_;
}

void ListEnterpriseResourceRequestBody::setSysTags(const std::vector<TagItem>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ListEnterpriseResourceRequestBody::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ListEnterpriseResourceRequestBody::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

}
}
}
}
}


