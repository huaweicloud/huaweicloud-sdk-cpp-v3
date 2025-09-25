

#include "huaweicloud/codeartspipeline/v2/model/ListStrategyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListStrategyRequest::ListStrategyRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
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
    cloudProjectId_ = "";
    cloudProjectIdIsSet_ = false;
}

ListStrategyRequest::~ListStrategyRequest() = default;

void ListStrategyRequest::validate()
{
}

web::json::value ListStrategyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
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
    if(cloudProjectIdIsSet_) {
        val[utility::conversions::to_string_t("cloud_project_id")] = ModelBase::toJson(cloudProjectId_);
    }

    return val;
}
bool ListStrategyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cloud_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudProjectId(refVal);
        }
    }
    return ok;
}


std::string ListStrategyRequest::getDomainId() const
{
    return domainId_;
}

void ListStrategyRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ListStrategyRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ListStrategyRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

int32_t ListStrategyRequest::getOffset() const
{
    return offset_;
}

void ListStrategyRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListStrategyRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListStrategyRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListStrategyRequest::getLimit() const
{
    return limit_;
}

void ListStrategyRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListStrategyRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListStrategyRequest::unsetlimit()
{
    limitIsSet_ = false;
}

bool ListStrategyRequest::isIncludeTenantRuleSet() const
{
    return includeTenantRuleSet_;
}

void ListStrategyRequest::setIncludeTenantRuleSet(bool value)
{
    includeTenantRuleSet_ = value;
    includeTenantRuleSetIsSet_ = true;
}

bool ListStrategyRequest::includeTenantRuleSetIsSet() const
{
    return includeTenantRuleSetIsSet_;
}

void ListStrategyRequest::unsetincludeTenantRuleSet()
{
    includeTenantRuleSetIsSet_ = false;
}

std::string ListStrategyRequest::getName() const
{
    return name_;
}

void ListStrategyRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListStrategyRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListStrategyRequest::unsetname()
{
    nameIsSet_ = false;
}

bool ListStrategyRequest::isIsValid() const
{
    return isValid_;
}

void ListStrategyRequest::setIsValid(bool value)
{
    isValid_ = value;
    isValidIsSet_ = true;
}

bool ListStrategyRequest::isValidIsSet() const
{
    return isValidIsSet_;
}

void ListStrategyRequest::unsetisValid()
{
    isValidIsSet_ = false;
}

std::string ListStrategyRequest::getType() const
{
    return type_;
}

void ListStrategyRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListStrategyRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListStrategyRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListStrategyRequest::getCloudProjectId() const
{
    return cloudProjectId_;
}

void ListStrategyRequest::setCloudProjectId(const std::string& value)
{
    cloudProjectId_ = value;
    cloudProjectIdIsSet_ = true;
}

bool ListStrategyRequest::cloudProjectIdIsSet() const
{
    return cloudProjectIdIsSet_;
}

void ListStrategyRequest::unsetcloudProjectId()
{
    cloudProjectIdIsSet_ = false;
}

}
}
}
}
}


