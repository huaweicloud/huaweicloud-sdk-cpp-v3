

#include "huaweicloud/geip/v3/model/CreateGlobalEipRequestBody_global_eip.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateGlobalEipRequestBody_global_eip::CreateGlobalEipRequestBody_global_eip()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    geipPoolName_ = "";
    geipPoolNameIsSet_ = false;
    accessSite_ = "";
    accessSiteIsSet_ = false;
    internetBandwidthId_ = "";
    internetBandwidthIdIsSet_ = false;
    tagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

CreateGlobalEipRequestBody_global_eip::~CreateGlobalEipRequestBody_global_eip() = default;

void CreateGlobalEipRequestBody_global_eip::validate()
{
}

web::json::value CreateGlobalEipRequestBody_global_eip::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(geipPoolNameIsSet_) {
        val[utility::conversions::to_string_t("geip_pool_name")] = ModelBase::toJson(geipPoolName_);
    }
    if(accessSiteIsSet_) {
        val[utility::conversions::to_string_t("access_site")] = ModelBase::toJson(accessSite_);
    }
    if(internetBandwidthIdIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth_id")] = ModelBase::toJson(internetBandwidthId_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool CreateGlobalEipRequestBody_global_eip::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("geip_pool_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("geip_pool_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGeipPoolName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("access_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_site"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidthId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateGlobalEipRequestBody_global_eip_tags> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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


std::string CreateGlobalEipRequestBody_global_eip::getName() const
{
    return name_;
}

void CreateGlobalEipRequestBody_global_eip::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateGlobalEipRequestBody_global_eip::nameIsSet() const
{
    return nameIsSet_;
}

void CreateGlobalEipRequestBody_global_eip::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateGlobalEipRequestBody_global_eip::getDescription() const
{
    return description_;
}

void CreateGlobalEipRequestBody_global_eip::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateGlobalEipRequestBody_global_eip::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateGlobalEipRequestBody_global_eip::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateGlobalEipRequestBody_global_eip::getGeipPoolName() const
{
    return geipPoolName_;
}

void CreateGlobalEipRequestBody_global_eip::setGeipPoolName(const std::string& value)
{
    geipPoolName_ = value;
    geipPoolNameIsSet_ = true;
}

bool CreateGlobalEipRequestBody_global_eip::geipPoolNameIsSet() const
{
    return geipPoolNameIsSet_;
}

void CreateGlobalEipRequestBody_global_eip::unsetgeipPoolName()
{
    geipPoolNameIsSet_ = false;
}

std::string CreateGlobalEipRequestBody_global_eip::getAccessSite() const
{
    return accessSite_;
}

void CreateGlobalEipRequestBody_global_eip::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool CreateGlobalEipRequestBody_global_eip::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void CreateGlobalEipRequestBody_global_eip::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::string CreateGlobalEipRequestBody_global_eip::getInternetBandwidthId() const
{
    return internetBandwidthId_;
}

void CreateGlobalEipRequestBody_global_eip::setInternetBandwidthId(const std::string& value)
{
    internetBandwidthId_ = value;
    internetBandwidthIdIsSet_ = true;
}

bool CreateGlobalEipRequestBody_global_eip::internetBandwidthIdIsSet() const
{
    return internetBandwidthIdIsSet_;
}

void CreateGlobalEipRequestBody_global_eip::unsetinternetBandwidthId()
{
    internetBandwidthIdIsSet_ = false;
}

std::vector<CreateGlobalEipRequestBody_global_eip_tags>& CreateGlobalEipRequestBody_global_eip::getTags()
{
    return tags_;
}

void CreateGlobalEipRequestBody_global_eip::setTags(const std::vector<CreateGlobalEipRequestBody_global_eip_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateGlobalEipRequestBody_global_eip::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateGlobalEipRequestBody_global_eip::unsettags()
{
    tagsIsSet_ = false;
}

std::string CreateGlobalEipRequestBody_global_eip::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateGlobalEipRequestBody_global_eip::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateGlobalEipRequestBody_global_eip::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateGlobalEipRequestBody_global_eip::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


