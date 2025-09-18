

#include "huaweicloud/codeartscheck/v2/model/ListTemplateRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ListTemplateRulesRequest::ListTemplateRulesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    rulesetId_ = "";
    rulesetIdIsSet_ = false;
    types_ = "";
    typesIsSet_ = false;
    languages_ = "";
    languagesIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListTemplateRulesRequest::~ListTemplateRulesRequest() = default;

void ListTemplateRulesRequest::validate()
{
}

web::json::value ListTemplateRulesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(rulesetIdIsSet_) {
        val[utility::conversions::to_string_t("ruleset_id")] = ModelBase::toJson(rulesetId_);
    }
    if(typesIsSet_) {
        val[utility::conversions::to_string_t("types")] = ModelBase::toJson(types_);
    }
    if(languagesIsSet_) {
        val[utility::conversions::to_string_t("languages")] = ModelBase::toJson(languages_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListTemplateRulesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ruleset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ruleset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRulesetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("types"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("languages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("languages"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    return ok;
}


std::string ListTemplateRulesRequest::getProjectId() const
{
    return projectId_;
}

void ListTemplateRulesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTemplateRulesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTemplateRulesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListTemplateRulesRequest::getRulesetId() const
{
    return rulesetId_;
}

void ListTemplateRulesRequest::setRulesetId(const std::string& value)
{
    rulesetId_ = value;
    rulesetIdIsSet_ = true;
}

bool ListTemplateRulesRequest::rulesetIdIsSet() const
{
    return rulesetIdIsSet_;
}

void ListTemplateRulesRequest::unsetrulesetId()
{
    rulesetIdIsSet_ = false;
}

std::string ListTemplateRulesRequest::getTypes() const
{
    return types_;
}

void ListTemplateRulesRequest::setTypes(const std::string& value)
{
    types_ = value;
    typesIsSet_ = true;
}

bool ListTemplateRulesRequest::typesIsSet() const
{
    return typesIsSet_;
}

void ListTemplateRulesRequest::unsettypes()
{
    typesIsSet_ = false;
}

std::string ListTemplateRulesRequest::getLanguages() const
{
    return languages_;
}

void ListTemplateRulesRequest::setLanguages(const std::string& value)
{
    languages_ = value;
    languagesIsSet_ = true;
}

bool ListTemplateRulesRequest::languagesIsSet() const
{
    return languagesIsSet_;
}

void ListTemplateRulesRequest::unsetlanguages()
{
    languagesIsSet_ = false;
}

std::string ListTemplateRulesRequest::getTags() const
{
    return tags_;
}

void ListTemplateRulesRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListTemplateRulesRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListTemplateRulesRequest::unsettags()
{
    tagsIsSet_ = false;
}

int32_t ListTemplateRulesRequest::getOffset() const
{
    return offset_;
}

void ListTemplateRulesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTemplateRulesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTemplateRulesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListTemplateRulesRequest::getLimit() const
{
    return limit_;
}

void ListTemplateRulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTemplateRulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTemplateRulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


