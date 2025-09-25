

#include "huaweicloud/codeartspipeline/v2/model/ListProjectStrategyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListProjectStrategyRequest::ListProjectStrategyRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    includeTenantRuleSet_ = false;
    includeTenantRuleSetIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    isValid_ = false;
    isValidIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ListProjectStrategyRequest::~ListProjectStrategyRequest() = default;

void ListProjectStrategyRequest::validate()
{
}

web::json::value ListProjectStrategyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(includeTenantRuleSetIsSet_) {
        val[utility::conversions::to_string_t("include_tenant_rule_set")] = ModelBase::toJson(includeTenantRuleSet_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(isValidIsSet_) {
        val[utility::conversions::to_string_t("is_valid")] = ModelBase::toJson(isValid_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListProjectStrategyRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("include_tenant_rule_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_tenant_rule_set"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeTenantRuleSet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_valid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsValid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ListProjectStrategyRequest::getProjectId() const
{
    return projectId_;
}

void ListProjectStrategyRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListProjectStrategyRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListProjectStrategyRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListProjectStrategyRequest::getOffset() const
{
    return offset_;
}

void ListProjectStrategyRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProjectStrategyRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProjectStrategyRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListProjectStrategyRequest::getLimit() const
{
    return limit_;
}

void ListProjectStrategyRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProjectStrategyRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProjectStrategyRequest::unsetlimit()
{
    limitIsSet_ = false;
}

bool ListProjectStrategyRequest::isIncludeTenantRuleSet() const
{
    return includeTenantRuleSet_;
}

void ListProjectStrategyRequest::setIncludeTenantRuleSet(bool value)
{
    includeTenantRuleSet_ = value;
    includeTenantRuleSetIsSet_ = true;
}

bool ListProjectStrategyRequest::includeTenantRuleSetIsSet() const
{
    return includeTenantRuleSetIsSet_;
}

void ListProjectStrategyRequest::unsetincludeTenantRuleSet()
{
    includeTenantRuleSetIsSet_ = false;
}

std::string ListProjectStrategyRequest::getName() const
{
    return name_;
}

void ListProjectStrategyRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListProjectStrategyRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListProjectStrategyRequest::unsetname()
{
    nameIsSet_ = false;
}

bool ListProjectStrategyRequest::isIsValid() const
{
    return isValid_;
}

void ListProjectStrategyRequest::setIsValid(bool value)
{
    isValid_ = value;
    isValidIsSet_ = true;
}

bool ListProjectStrategyRequest::isValidIsSet() const
{
    return isValidIsSet_;
}

void ListProjectStrategyRequest::unsetisValid()
{
    isValidIsSet_ = false;
}

std::string ListProjectStrategyRequest::getType() const
{
    return type_;
}

void ListProjectStrategyRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListProjectStrategyRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListProjectStrategyRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


