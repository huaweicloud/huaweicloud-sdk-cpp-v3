

#include "huaweicloud/modelarts/v1/model/QueryTmsResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




QueryTmsResourceRequest::QueryTmsResourceRequest()
{
    matchesIsSet_ = false;
    tagsIsSet_ = false;
    withoutAnyTag_ = false;
    withoutAnyTagIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

QueryTmsResourceRequest::~QueryTmsResourceRequest() = default;

void QueryTmsResourceRequest::validate()
{
}

web::json::value QueryTmsResourceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(matchesIsSet_) {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(matches_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(withoutAnyTagIsSet_) {
        val[utility::conversions::to_string_t("without_any_tag")] = ModelBase::toJson(withoutAnyTag_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool QueryTmsResourceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("matches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("matches"));
        if(!fieldValue.is_null())
        {
            std::vector<TmsMatch> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CombineInferTmsTags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
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
    return ok;
}


std::vector<TmsMatch>& QueryTmsResourceRequest::getMatches()
{
    return matches_;
}

void QueryTmsResourceRequest::setMatches(const std::vector<TmsMatch>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool QueryTmsResourceRequest::matchesIsSet() const
{
    return matchesIsSet_;
}

void QueryTmsResourceRequest::unsetmatches()
{
    matchesIsSet_ = false;
}

std::vector<CombineInferTmsTags>& QueryTmsResourceRequest::getTags()
{
    return tags_;
}

void QueryTmsResourceRequest::setTags(const std::vector<CombineInferTmsTags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool QueryTmsResourceRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void QueryTmsResourceRequest::unsettags()
{
    tagsIsSet_ = false;
}

bool QueryTmsResourceRequest::isWithoutAnyTag() const
{
    return withoutAnyTag_;
}

void QueryTmsResourceRequest::setWithoutAnyTag(bool value)
{
    withoutAnyTag_ = value;
    withoutAnyTagIsSet_ = true;
}

bool QueryTmsResourceRequest::withoutAnyTagIsSet() const
{
    return withoutAnyTagIsSet_;
}

void QueryTmsResourceRequest::unsetwithoutAnyTag()
{
    withoutAnyTagIsSet_ = false;
}

int32_t QueryTmsResourceRequest::getLimit() const
{
    return limit_;
}

void QueryTmsResourceRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool QueryTmsResourceRequest::limitIsSet() const
{
    return limitIsSet_;
}

void QueryTmsResourceRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t QueryTmsResourceRequest::getOffset() const
{
    return offset_;
}

void QueryTmsResourceRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool QueryTmsResourceRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void QueryTmsResourceRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


