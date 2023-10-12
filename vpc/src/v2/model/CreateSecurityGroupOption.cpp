

#include "huaweicloud/vpc/v2/model/CreateSecurityGroupOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSecurityGroupOption::CreateSecurityGroupOption()
{
    name_ = "";
    nameIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

CreateSecurityGroupOption::~CreateSecurityGroupOption() = default;

void CreateSecurityGroupOption::validate()
{
}

web::json::value CreateSecurityGroupOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool CreateSecurityGroupOption::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateSecurityGroupOption::getName() const
{
    return name_;
}

void CreateSecurityGroupOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateSecurityGroupOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreateSecurityGroupOption::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateSecurityGroupOption::getVpcId() const
{
    return vpcId_;
}

void CreateSecurityGroupOption::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool CreateSecurityGroupOption::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void CreateSecurityGroupOption::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

std::string CreateSecurityGroupOption::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateSecurityGroupOption::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateSecurityGroupOption::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateSecurityGroupOption::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


