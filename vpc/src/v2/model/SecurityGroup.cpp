

#include "huaweicloud/vpc/v2/model/SecurityGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




SecurityGroup::SecurityGroup()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    securityGroupRulesIsSet_ = false;
}

SecurityGroup::~SecurityGroup() = default;

void SecurityGroup::validate()
{
}

web::json::value SecurityGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(securityGroupRulesIsSet_) {
        val[utility::conversions::to_string_t("security_group_rules")] = ModelBase::toJson(securityGroupRules_);
    }

    return val;
}

bool SecurityGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_rules"));
        if(!fieldValue.is_null())
        {
            std::vector<SecurityGroupRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupRules(refVal);
        }
    }
    return ok;
}


std::string SecurityGroup::getName() const
{
    return name_;
}

void SecurityGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SecurityGroup::nameIsSet() const
{
    return nameIsSet_;
}

void SecurityGroup::unsetname()
{
    nameIsSet_ = false;
}

std::string SecurityGroup::getDescription() const
{
    return description_;
}

void SecurityGroup::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SecurityGroup::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SecurityGroup::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string SecurityGroup::getId() const
{
    return id_;
}

void SecurityGroup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SecurityGroup::idIsSet() const
{
    return idIsSet_;
}

void SecurityGroup::unsetid()
{
    idIsSet_ = false;
}

std::string SecurityGroup::getVpcId() const
{
    return vpcId_;
}

void SecurityGroup::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool SecurityGroup::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void SecurityGroup::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string SecurityGroup::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SecurityGroup::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SecurityGroup::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SecurityGroup::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<SecurityGroupRule>& SecurityGroup::getSecurityGroupRules()
{
    return securityGroupRules_;
}

void SecurityGroup::setSecurityGroupRules(const std::vector<SecurityGroupRule>& value)
{
    securityGroupRules_ = value;
    securityGroupRulesIsSet_ = true;
}

bool SecurityGroup::securityGroupRulesIsSet() const
{
    return securityGroupRulesIsSet_;
}

void SecurityGroup::unsetsecurityGroupRules()
{
    securityGroupRulesIsSet_ = false;
}

}
}
}
}
}


