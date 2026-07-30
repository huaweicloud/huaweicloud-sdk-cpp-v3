

#include "huaweicloud/modelarts/v1/model/QueryTmsResourceCountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




QueryTmsResourceCountRequest::QueryTmsResourceCountRequest()
{
    matchesIsSet_ = false;
    tagsIsSet_ = false;
    withoutAnyTag_ = false;
    withoutAnyTagIsSet_ = false;
}

QueryTmsResourceCountRequest::~QueryTmsResourceCountRequest() = default;

void QueryTmsResourceCountRequest::validate()
{
}

web::json::value QueryTmsResourceCountRequest::toJson() const
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

    return val;
}
bool QueryTmsResourceCountRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::vector<TmsMatch>& QueryTmsResourceCountRequest::getMatches()
{
    return matches_;
}

void QueryTmsResourceCountRequest::setMatches(const std::vector<TmsMatch>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool QueryTmsResourceCountRequest::matchesIsSet() const
{
    return matchesIsSet_;
}

void QueryTmsResourceCountRequest::unsetmatches()
{
    matchesIsSet_ = false;
}

std::vector<CombineInferTmsTags>& QueryTmsResourceCountRequest::getTags()
{
    return tags_;
}

void QueryTmsResourceCountRequest::setTags(const std::vector<CombineInferTmsTags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool QueryTmsResourceCountRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void QueryTmsResourceCountRequest::unsettags()
{
    tagsIsSet_ = false;
}

bool QueryTmsResourceCountRequest::isWithoutAnyTag() const
{
    return withoutAnyTag_;
}

void QueryTmsResourceCountRequest::setWithoutAnyTag(bool value)
{
    withoutAnyTag_ = value;
    withoutAnyTagIsSet_ = true;
}

bool QueryTmsResourceCountRequest::withoutAnyTagIsSet() const
{
    return withoutAnyTagIsSet_;
}

void QueryTmsResourceCountRequest::unsetwithoutAnyTag()
{
    withoutAnyTagIsSet_ = false;
}

}
}
}
}
}


