

#include "huaweicloud/cfw/v1/model/CreateFirewallReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateFirewallReq::CreateFirewallReq()
{
    name_ = "";
    nameIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    tagsIsSet_ = false;
    flavorIsSet_ = false;
    chargeInfoIsSet_ = false;
}

CreateFirewallReq::~CreateFirewallReq() = default;

void CreateFirewallReq::validate()
{
}

web::json::value CreateFirewallReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(chargeInfoIsSet_) {
        val[utility::conversions::to_string_t("charge_info")] = ModelBase::toJson(chargeInfo_);
    }

    return val;
}
bool CreateFirewallReq::fromJson(const web::json::value& val)
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
            std::vector<CreateFirewallReq_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            CreateFirewallReq_flavor refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_info"));
        if(!fieldValue.is_null())
        {
            CreateFirewallReq_charge_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeInfo(refVal);
        }
    }
    return ok;
}


std::string CreateFirewallReq::getName() const
{
    return name_;
}

void CreateFirewallReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateFirewallReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateFirewallReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateFirewallReq::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateFirewallReq::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateFirewallReq::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateFirewallReq::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<CreateFirewallReq_tags>& CreateFirewallReq::getTags()
{
    return tags_;
}

void CreateFirewallReq::setTags(const std::vector<CreateFirewallReq_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateFirewallReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateFirewallReq::unsettags()
{
    tagsIsSet_ = false;
}

CreateFirewallReq_flavor CreateFirewallReq::getFlavor() const
{
    return flavor_;
}

void CreateFirewallReq::setFlavor(const CreateFirewallReq_flavor& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool CreateFirewallReq::flavorIsSet() const
{
    return flavorIsSet_;
}

void CreateFirewallReq::unsetflavor()
{
    flavorIsSet_ = false;
}

CreateFirewallReq_charge_info CreateFirewallReq::getChargeInfo() const
{
    return chargeInfo_;
}

void CreateFirewallReq::setChargeInfo(const CreateFirewallReq_charge_info& value)
{
    chargeInfo_ = value;
    chargeInfoIsSet_ = true;
}

bool CreateFirewallReq::chargeInfoIsSet() const
{
    return chargeInfoIsSet_;
}

void CreateFirewallReq::unsetchargeInfo()
{
    chargeInfoIsSet_ = false;
}

}
}
}
}
}


