

#include "huaweicloud/vpc/v2/model/CreateVpcOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateVpcOption::CreateVpcOption()
{
    cidr_ = "";
    cidrIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
}

CreateVpcOption::~CreateVpcOption() = default;

void CreateVpcOption::validate()
{
}

web::json::value CreateVpcOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}

bool CreateVpcOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string CreateVpcOption::getCidr() const
{
    return cidr_;
}

void CreateVpcOption::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool CreateVpcOption::cidrIsSet() const
{
    return cidrIsSet_;
}

void CreateVpcOption::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string CreateVpcOption::getName() const
{
    return name_;
}

void CreateVpcOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateVpcOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreateVpcOption::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateVpcOption::getDescription() const
{
    return description_;
}

void CreateVpcOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateVpcOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateVpcOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateVpcOption::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateVpcOption::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateVpcOption::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateVpcOption::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<std::string>& CreateVpcOption::getTags()
{
    return tags_;
}

void CreateVpcOption::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateVpcOption::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateVpcOption::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


