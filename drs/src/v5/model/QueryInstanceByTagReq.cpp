

#include "huaweicloud/drs/v5/model/QueryInstanceByTagReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryInstanceByTagReq::QueryInstanceByTagReq()
{
    withoutAnyTag_ = false;
    withoutAnyTagIsSet_ = false;
    tagsIsSet_ = false;
    matchesIsSet_ = false;
}

QueryInstanceByTagReq::~QueryInstanceByTagReq() = default;

void QueryInstanceByTagReq::validate()
{
}

web::json::value QueryInstanceByTagReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(withoutAnyTagIsSet_) {
        val[utility::conversions::to_string_t("without_any_tag")] = ModelBase::toJson(withoutAnyTag_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(matchesIsSet_) {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(matches_);
    }

    return val;
}
bool QueryInstanceByTagReq::fromJson(const web::json::value& val)
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
            std::vector<TagMatch> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatches(refVal);
        }
    }
    return ok;
}


bool QueryInstanceByTagReq::isWithoutAnyTag() const
{
    return withoutAnyTag_;
}

void QueryInstanceByTagReq::setWithoutAnyTag(bool value)
{
    withoutAnyTag_ = value;
    withoutAnyTagIsSet_ = true;
}

bool QueryInstanceByTagReq::withoutAnyTagIsSet() const
{
    return withoutAnyTagIsSet_;
}

void QueryInstanceByTagReq::unsetwithoutAnyTag()
{
    withoutAnyTagIsSet_ = false;
}

std::vector<Tag>& QueryInstanceByTagReq::getTags()
{
    return tags_;
}

void QueryInstanceByTagReq::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool QueryInstanceByTagReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void QueryInstanceByTagReq::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<TagMatch>& QueryInstanceByTagReq::getMatches()
{
    return matches_;
}

void QueryInstanceByTagReq::setMatches(const std::vector<TagMatch>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool QueryInstanceByTagReq::matchesIsSet() const
{
    return matchesIsSet_;
}

void QueryInstanceByTagReq::unsetmatches()
{
    matchesIsSet_ = false;
}

}
}
}
}
}


