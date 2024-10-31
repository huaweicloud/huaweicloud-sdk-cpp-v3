

#include "huaweicloud/cfw/v1/model/DomainSetVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DomainSetVo::DomainSetVo()
{
    setId_ = "";
    setIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    refCount_ = 0;
    refCountIsSet_ = false;
    domainSetType_ = 0;
    domainSetTypeIsSet_ = false;
    configStatus_ = 0;
    configStatusIsSet_ = false;
    rulesIsSet_ = false;
}

DomainSetVo::~DomainSetVo() = default;

void DomainSetVo::validate()
{
}

web::json::value DomainSetVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(refCountIsSet_) {
        val[utility::conversions::to_string_t("ref_count")] = ModelBase::toJson(refCount_);
    }
    if(domainSetTypeIsSet_) {
        val[utility::conversions::to_string_t("domain_set_type")] = ModelBase::toJson(domainSetType_);
    }
    if(configStatusIsSet_) {
        val[utility::conversions::to_string_t("config_status")] = ModelBase::toJson(configStatus_);
    }
    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}
bool DomainSetVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRefCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_set_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_set_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainSetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("config_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<UseRuleVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


std::string DomainSetVo::getSetId() const
{
    return setId_;
}

void DomainSetVo::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool DomainSetVo::setIdIsSet() const
{
    return setIdIsSet_;
}

void DomainSetVo::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string DomainSetVo::getName() const
{
    return name_;
}

void DomainSetVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DomainSetVo::nameIsSet() const
{
    return nameIsSet_;
}

void DomainSetVo::unsetname()
{
    nameIsSet_ = false;
}

std::string DomainSetVo::getDescription() const
{
    return description_;
}

void DomainSetVo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool DomainSetVo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void DomainSetVo::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t DomainSetVo::getRefCount() const
{
    return refCount_;
}

void DomainSetVo::setRefCount(int32_t value)
{
    refCount_ = value;
    refCountIsSet_ = true;
}

bool DomainSetVo::refCountIsSet() const
{
    return refCountIsSet_;
}

void DomainSetVo::unsetrefCount()
{
    refCountIsSet_ = false;
}

int32_t DomainSetVo::getDomainSetType() const
{
    return domainSetType_;
}

void DomainSetVo::setDomainSetType(int32_t value)
{
    domainSetType_ = value;
    domainSetTypeIsSet_ = true;
}

bool DomainSetVo::domainSetTypeIsSet() const
{
    return domainSetTypeIsSet_;
}

void DomainSetVo::unsetdomainSetType()
{
    domainSetTypeIsSet_ = false;
}

int32_t DomainSetVo::getConfigStatus() const
{
    return configStatus_;
}

void DomainSetVo::setConfigStatus(int32_t value)
{
    configStatus_ = value;
    configStatusIsSet_ = true;
}

bool DomainSetVo::configStatusIsSet() const
{
    return configStatusIsSet_;
}

void DomainSetVo::unsetconfigStatus()
{
    configStatusIsSet_ = false;
}

std::vector<UseRuleVO>& DomainSetVo::getRules()
{
    return rules_;
}

void DomainSetVo::setRules(const std::vector<UseRuleVO>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool DomainSetVo::rulesIsSet() const
{
    return rulesIsSet_;
}

void DomainSetVo::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


