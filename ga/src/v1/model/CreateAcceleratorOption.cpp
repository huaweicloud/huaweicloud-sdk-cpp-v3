

#include "huaweicloud/ga/v1/model/CreateAcceleratorOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




CreateAcceleratorOption::CreateAcceleratorOption()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    ipSetsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
}

CreateAcceleratorOption::~CreateAcceleratorOption() = default;

void CreateAcceleratorOption::validate()
{
}

web::json::value CreateAcceleratorOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(ipSetsIsSet_) {
        val[utility::conversions::to_string_t("ip_sets")] = ModelBase::toJson(ipSets_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreateAcceleratorOption::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ip_sets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_sets"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateAcceleratorOption_ip_sets> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpSets(refVal);
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
            std::vector<ResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string CreateAcceleratorOption::getName() const
{
    return name_;
}

void CreateAcceleratorOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateAcceleratorOption::nameIsSet() const
{
    return nameIsSet_;
}

void CreateAcceleratorOption::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateAcceleratorOption::getDescription() const
{
    return description_;
}

void CreateAcceleratorOption::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateAcceleratorOption::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateAcceleratorOption::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<CreateAcceleratorOption_ip_sets>& CreateAcceleratorOption::getIpSets()
{
    return ipSets_;
}

void CreateAcceleratorOption::setIpSets(const std::vector<CreateAcceleratorOption_ip_sets>& value)
{
    ipSets_ = value;
    ipSetsIsSet_ = true;
}

bool CreateAcceleratorOption::ipSetsIsSet() const
{
    return ipSetsIsSet_;
}

void CreateAcceleratorOption::unsetipSets()
{
    ipSetsIsSet_ = false;
}

std::string CreateAcceleratorOption::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateAcceleratorOption::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateAcceleratorOption::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateAcceleratorOption::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<ResourceTag>& CreateAcceleratorOption::getTags()
{
    return tags_;
}

void CreateAcceleratorOption::setTags(const std::vector<ResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateAcceleratorOption::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateAcceleratorOption::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


