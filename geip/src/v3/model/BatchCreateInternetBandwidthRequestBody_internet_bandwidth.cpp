

#include "huaweicloud/geip/v3/model/BatchCreateInternetBandwidthRequestBody_internet_bandwidth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateInternetBandwidthRequestBody_internet_bandwidth::BatchCreateInternetBandwidthRequestBody_internet_bandwidth()
{
    ingressSize_ = 0;
    ingressSizeIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    isp_ = "";
    ispIsSet_ = false;
    accessSite_ = "";
    accessSiteIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    tagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

BatchCreateInternetBandwidthRequestBody_internet_bandwidth::~BatchCreateInternetBandwidthRequestBody_internet_bandwidth() = default;

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::validate()
{
}

web::json::value BatchCreateInternetBandwidthRequestBody_internet_bandwidth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ingressSizeIsSet_) {
        val[utility::conversions::to_string_t("ingress_size")] = ModelBase::toJson(ingressSize_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(accessSiteIsSet_) {
        val[utility::conversions::to_string_t("access_site")] = ModelBase::toJson(accessSite_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool BatchCreateInternetBandwidthRequestBody_internet_bandwidth::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ingress_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ingress_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIngressSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charge_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charge_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargeMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


int32_t BatchCreateInternetBandwidthRequestBody_internet_bandwidth::getIngressSize() const
{
    return ingressSize_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::setIngressSize(int32_t value)
{
    ingressSize_ = value;
    ingressSizeIsSet_ = true;
}

bool BatchCreateInternetBandwidthRequestBody_internet_bandwidth::ingressSizeIsSet() const
{
    return ingressSizeIsSet_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::unsetingressSize()
{
    ingressSizeIsSet_ = false;
}

std::string BatchCreateInternetBandwidthRequestBody_internet_bandwidth::getChargeMode() const
{
    return chargeMode_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool BatchCreateInternetBandwidthRequestBody_internet_bandwidth::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string BatchCreateInternetBandwidthRequestBody_internet_bandwidth::getIsp() const
{
    return isp_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool BatchCreateInternetBandwidthRequestBody_internet_bandwidth::ispIsSet() const
{
    return ispIsSet_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::unsetisp()
{
    ispIsSet_ = false;
}

std::string BatchCreateInternetBandwidthRequestBody_internet_bandwidth::getAccessSite() const
{
    return accessSite_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool BatchCreateInternetBandwidthRequestBody_internet_bandwidth::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

int32_t BatchCreateInternetBandwidthRequestBody_internet_bandwidth::getSize() const
{
    return size_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BatchCreateInternetBandwidthRequestBody_internet_bandwidth::sizeIsSet() const
{
    return sizeIsSet_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BatchCreateInternetBandwidthRequestBody_internet_bandwidth::getName() const
{
    return name_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BatchCreateInternetBandwidthRequestBody_internet_bandwidth::nameIsSet() const
{
    return nameIsSet_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::unsetname()
{
    nameIsSet_ = false;
}

std::string BatchCreateInternetBandwidthRequestBody_internet_bandwidth::getDescription() const
{
    return description_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BatchCreateInternetBandwidthRequestBody_internet_bandwidth::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t BatchCreateInternetBandwidthRequestBody_internet_bandwidth::getCount() const
{
    return count_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchCreateInternetBandwidthRequestBody_internet_bandwidth::countIsSet() const
{
    return countIsSet_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::unsetcount()
{
    countIsSet_ = false;
}

std::vector<CreateGlobalEipRequestBody_global_eip_tags>& BatchCreateInternetBandwidthRequestBody_internet_bandwidth::getTags()
{
    return tags_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::setTags(const std::vector<CreateGlobalEipRequestBody_global_eip_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateInternetBandwidthRequestBody_internet_bandwidth::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::unsettags()
{
    tagsIsSet_ = false;
}

std::string BatchCreateInternetBandwidthRequestBody_internet_bandwidth::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool BatchCreateInternetBandwidthRequestBody_internet_bandwidth::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string BatchCreateInternetBandwidthRequestBody_internet_bandwidth::getType() const
{
    return type_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BatchCreateInternetBandwidthRequestBody_internet_bandwidth::typeIsSet() const
{
    return typeIsSet_;
}

void BatchCreateInternetBandwidthRequestBody_internet_bandwidth::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


