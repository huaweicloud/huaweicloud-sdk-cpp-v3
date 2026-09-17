

#include "huaweicloud/codeartspipeline/v2/model/AlertPolicyDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




AlertPolicyDTO::AlertPolicyDTO()
{
    policyId_ = "";
    policyIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    isDefault_ = false;
    isDefaultIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    rulesIsSet_ = false;
}

AlertPolicyDTO::~AlertPolicyDTO() = default;

void AlertPolicyDTO::validate()
{
}

web::json::value AlertPolicyDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyIdIsSet_) {
        val[utility::conversions::to_string_t("policyId")] = ModelBase::toJson(policyId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domainId")] = ModelBase::toJson(domainId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(isDefaultIsSet_) {
        val[utility::conversions::to_string_t("isDefault")] = ModelBase::toJson(isDefault_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("createTime")] = ModelBase::toJson(createTime_);
    }
    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}
bool AlertPolicyDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policyId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policyId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domainId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domainId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isDefault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isDefault"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<AlertRuleDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


std::string AlertPolicyDTO::getPolicyId() const
{
    return policyId_;
}

void AlertPolicyDTO::setPolicyId(const std::string& value)
{
    policyId_ = value;
    policyIdIsSet_ = true;
}

bool AlertPolicyDTO::policyIdIsSet() const
{
    return policyIdIsSet_;
}

void AlertPolicyDTO::unsetpolicyId()
{
    policyIdIsSet_ = false;
}

std::string AlertPolicyDTO::getName() const
{
    return name_;
}

void AlertPolicyDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlertPolicyDTO::nameIsSet() const
{
    return nameIsSet_;
}

void AlertPolicyDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string AlertPolicyDTO::getDomainId() const
{
    return domainId_;
}

void AlertPolicyDTO::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool AlertPolicyDTO::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void AlertPolicyDTO::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string AlertPolicyDTO::getProjectId() const
{
    return projectId_;
}

void AlertPolicyDTO::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AlertPolicyDTO::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AlertPolicyDTO::unsetprojectId()
{
    projectIdIsSet_ = false;
}

bool AlertPolicyDTO::isIsDefault() const
{
    return isDefault_;
}

void AlertPolicyDTO::setIsDefault(bool value)
{
    isDefault_ = value;
    isDefaultIsSet_ = true;
}

bool AlertPolicyDTO::isDefaultIsSet() const
{
    return isDefaultIsSet_;
}

void AlertPolicyDTO::unsetisDefault()
{
    isDefaultIsSet_ = false;
}

int64_t AlertPolicyDTO::getCreateTime() const
{
    return createTime_;
}

void AlertPolicyDTO::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool AlertPolicyDTO::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void AlertPolicyDTO::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::vector<AlertRuleDTO>& AlertPolicyDTO::getRules()
{
    return rules_;
}

void AlertPolicyDTO::setRules(const std::vector<AlertRuleDTO>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool AlertPolicyDTO::rulesIsSet() const
{
    return rulesIsSet_;
}

void AlertPolicyDTO::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


