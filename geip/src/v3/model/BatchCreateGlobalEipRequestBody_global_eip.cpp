

#include "huaweicloud/geip/v3/model/BatchCreateGlobalEipRequestBody_global_eip.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateGlobalEipRequestBody_global_eip::BatchCreateGlobalEipRequestBody_global_eip()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    geipPoolName_ = "";
    geipPoolNameIsSet_ = false;
    accessSite_ = "";
    accessSiteIsSet_ = false;
    internetBandwidthInfoIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    tagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

BatchCreateGlobalEipRequestBody_global_eip::~BatchCreateGlobalEipRequestBody_global_eip() = default;

void BatchCreateGlobalEipRequestBody_global_eip::validate()
{
}

web::json::value BatchCreateGlobalEipRequestBody_global_eip::toJson() const
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
    if(internetBandwidthInfoIsSet_) {
        val[utility::conversions::to_string_t("internet_bandwidth_info")] = ModelBase::toJson(internetBandwidthInfo_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool BatchCreateGlobalEipRequestBody_global_eip::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("internet_bandwidth_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internet_bandwidth_info"));
        if(!fieldValue.is_null())
        {
            BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternetBandwidthInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
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


std::string BatchCreateGlobalEipRequestBody_global_eip::getName() const
{
    return name_;
}

void BatchCreateGlobalEipRequestBody_global_eip::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip::nameIsSet() const
{
    return nameIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip::unsetname()
{
    nameIsSet_ = false;
}

std::string BatchCreateGlobalEipRequestBody_global_eip::getDescription() const
{
    return description_;
}

void BatchCreateGlobalEipRequestBody_global_eip::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string BatchCreateGlobalEipRequestBody_global_eip::getGeipPoolName() const
{
    return geipPoolName_;
}

void BatchCreateGlobalEipRequestBody_global_eip::setGeipPoolName(const std::string& value)
{
    geipPoolName_ = value;
    geipPoolNameIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip::geipPoolNameIsSet() const
{
    return geipPoolNameIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip::unsetgeipPoolName()
{
    geipPoolNameIsSet_ = false;
}

std::string BatchCreateGlobalEipRequestBody_global_eip::getAccessSite() const
{
    return accessSite_;
}

void BatchCreateGlobalEipRequestBody_global_eip::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info BatchCreateGlobalEipRequestBody_global_eip::getInternetBandwidthInfo() const
{
    return internetBandwidthInfo_;
}

void BatchCreateGlobalEipRequestBody_global_eip::setInternetBandwidthInfo(const BatchCreateGlobalEipRequestBody_global_eip_internet_bandwidth_info& value)
{
    internetBandwidthInfo_ = value;
    internetBandwidthInfoIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip::internetBandwidthInfoIsSet() const
{
    return internetBandwidthInfoIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip::unsetinternetBandwidthInfo()
{
    internetBandwidthInfoIsSet_ = false;
}

int32_t BatchCreateGlobalEipRequestBody_global_eip::getCount() const
{
    return count_;
}

void BatchCreateGlobalEipRequestBody_global_eip::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip::countIsSet() const
{
    return countIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip::unsetcount()
{
    countIsSet_ = false;
}

std::vector<CreateGlobalEipRequestBody_global_eip_tags>& BatchCreateGlobalEipRequestBody_global_eip::getTags()
{
    return tags_;
}

void BatchCreateGlobalEipRequestBody_global_eip::setTags(const std::vector<CreateGlobalEipRequestBody_global_eip_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip::unsettags()
{
    tagsIsSet_ = false;
}

std::string BatchCreateGlobalEipRequestBody_global_eip::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void BatchCreateGlobalEipRequestBody_global_eip::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool BatchCreateGlobalEipRequestBody_global_eip::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void BatchCreateGlobalEipRequestBody_global_eip::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


