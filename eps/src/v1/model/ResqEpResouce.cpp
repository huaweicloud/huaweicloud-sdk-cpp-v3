

#include "huaweicloud/eps/v1/model/ResqEpResouce.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eps {
namespace V1 {
namespace Model {




ResqEpResouce::ResqEpResouce()
{
    projectsIsSet_ = false;
    resourceTypesIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    matchesIsSet_ = false;
}

ResqEpResouce::~ResqEpResouce() = default;

void ResqEpResouce::validate()
{
}

web::json::value ResqEpResouce::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectsIsSet_) {
        val[utility::conversions::to_string_t("projects")] = ModelBase::toJson(projects_);
    }
    if(resourceTypesIsSet_) {
        val[utility::conversions::to_string_t("resource_types")] = ModelBase::toJson(resourceTypes_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(matchesIsSet_) {
        val[utility::conversions::to_string_t("matches")] = ModelBase::toJson(matches_);
    }

    return val;
}

bool ResqEpResouce::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("projects"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projects"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjects(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceTypes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    return ok;
}

std::vector<std::string>& ResqEpResouce::getProjects()
{
    return projects_;
}

void ResqEpResouce::setProjects(const std::vector<std::string>& value)
{
    projects_ = value;
    projectsIsSet_ = true;
}

bool ResqEpResouce::projectsIsSet() const
{
    return projectsIsSet_;
}

void ResqEpResouce::unsetprojects()
{
    projectsIsSet_ = false;
}

std::vector<std::string>& ResqEpResouce::getResourceTypes()
{
    return resourceTypes_;
}

void ResqEpResouce::setResourceTypes(const std::vector<std::string>& value)
{
    resourceTypes_ = value;
    resourceTypesIsSet_ = true;
}

bool ResqEpResouce::resourceTypesIsSet() const
{
    return resourceTypesIsSet_;
}

void ResqEpResouce::unsetresourceTypes()
{
    resourceTypesIsSet_ = false;
}

int32_t ResqEpResouce::getOffset() const
{
    return offset_;
}

void ResqEpResouce::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ResqEpResouce::offsetIsSet() const
{
    return offsetIsSet_;
}

void ResqEpResouce::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ResqEpResouce::getLimit() const
{
    return limit_;
}

void ResqEpResouce::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ResqEpResouce::limitIsSet() const
{
    return limitIsSet_;
}

void ResqEpResouce::unsetlimit()
{
    limitIsSet_ = false;
}

std::vector<Match>& ResqEpResouce::getMatches()
{
    return matches_;
}

void ResqEpResouce::setMatches(const std::vector<Match>& value)
{
    matches_ = value;
    matchesIsSet_ = true;
}

bool ResqEpResouce::matchesIsSet() const
{
    return matchesIsSet_;
}

void ResqEpResouce::unsetmatches()
{
    matchesIsSet_ = false;
}

}
}
}
}
}


