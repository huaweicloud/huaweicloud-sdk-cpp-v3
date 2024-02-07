

#include "huaweicloud/geip/v3/model/ShowInternetBandwidth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ShowInternetBandwidth::ShowInternetBandwidth()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    isp_ = "";
    ispIsSet_ = false;
    ingressSize_ = 0;
    ingressSizeIsSet_ = false;
    accessSite_ = "";
    accessSiteIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    chargeMode_ = "";
    chargeModeIsSet_ = false;
    ratio95peak_ = 0;
    ratio95peakIsSet_ = false;
    billingInfo_ = "";
    billingInfoIsSet_ = false;
    freezenInfo_ = "";
    freezenInfoIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    isPrePaid_ = false;
    isPrePaidIsSet_ = false;
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    lockInfosIsSet_ = false;
}

ShowInternetBandwidth::~ShowInternetBandwidth() = default;

void ShowInternetBandwidth::validate()
{
}

web::json::value ShowInternetBandwidth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ispIsSet_) {
        val[utility::conversions::to_string_t("isp")] = ModelBase::toJson(isp_);
    }
    if(ingressSizeIsSet_) {
        val[utility::conversions::to_string_t("ingress_size")] = ModelBase::toJson(ingressSize_);
    }
    if(accessSiteIsSet_) {
        val[utility::conversions::to_string_t("access_site")] = ModelBase::toJson(accessSite_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(chargeModeIsSet_) {
        val[utility::conversions::to_string_t("charge_mode")] = ModelBase::toJson(chargeMode_);
    }
    if(ratio95peakIsSet_) {
        val[utility::conversions::to_string_t("ratio_95peak")] = ModelBase::toJson(ratio95peak_);
    }
    if(billingInfoIsSet_) {
        val[utility::conversions::to_string_t("billing_info")] = ModelBase::toJson(billingInfo_);
    }
    if(freezenInfoIsSet_) {
        val[utility::conversions::to_string_t("freezen_info")] = ModelBase::toJson(freezenInfo_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(isPrePaidIsSet_) {
        val[utility::conversions::to_string_t("is_pre_paid")] = ModelBase::toJson(isPrePaid_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(lockInfosIsSet_) {
        val[utility::conversions::to_string_t("lock_infos")] = ModelBase::toJson(lockInfos_);
    }

    return val;
}
bool ShowInternetBandwidth::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("isp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isp"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ingress_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ingress_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIngressSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ratio_95peak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ratio_95peak"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRatio95peak(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billing_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billing_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("freezen_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freezen_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreezenInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_pre_paid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_pre_paid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPrePaid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("lock_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<LockInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockInfos(refVal);
        }
    }
    return ok;
}


std::string ShowInternetBandwidth::getId() const
{
    return id_;
}

void ShowInternetBandwidth::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowInternetBandwidth::idIsSet() const
{
    return idIsSet_;
}

void ShowInternetBandwidth::unsetid()
{
    idIsSet_ = false;
}

std::string ShowInternetBandwidth::getName() const
{
    return name_;
}

void ShowInternetBandwidth::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowInternetBandwidth::nameIsSet() const
{
    return nameIsSet_;
}

void ShowInternetBandwidth::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowInternetBandwidth::getIsp() const
{
    return isp_;
}

void ShowInternetBandwidth::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool ShowInternetBandwidth::ispIsSet() const
{
    return ispIsSet_;
}

void ShowInternetBandwidth::unsetisp()
{
    ispIsSet_ = false;
}

int32_t ShowInternetBandwidth::getIngressSize() const
{
    return ingressSize_;
}

void ShowInternetBandwidth::setIngressSize(int32_t value)
{
    ingressSize_ = value;
    ingressSizeIsSet_ = true;
}

bool ShowInternetBandwidth::ingressSizeIsSet() const
{
    return ingressSizeIsSet_;
}

void ShowInternetBandwidth::unsetingressSize()
{
    ingressSizeIsSet_ = false;
}

std::string ShowInternetBandwidth::getAccessSite() const
{
    return accessSite_;
}

void ShowInternetBandwidth::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool ShowInternetBandwidth::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void ShowInternetBandwidth::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

int32_t ShowInternetBandwidth::getSize() const
{
    return size_;
}

void ShowInternetBandwidth::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ShowInternetBandwidth::sizeIsSet() const
{
    return sizeIsSet_;
}

void ShowInternetBandwidth::unsetsize()
{
    sizeIsSet_ = false;
}

std::string ShowInternetBandwidth::getDescription() const
{
    return description_;
}

void ShowInternetBandwidth::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowInternetBandwidth::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowInternetBandwidth::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowInternetBandwidth::getChargeMode() const
{
    return chargeMode_;
}

void ShowInternetBandwidth::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool ShowInternetBandwidth::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void ShowInternetBandwidth::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

int32_t ShowInternetBandwidth::getRatio95peak() const
{
    return ratio95peak_;
}

void ShowInternetBandwidth::setRatio95peak(int32_t value)
{
    ratio95peak_ = value;
    ratio95peakIsSet_ = true;
}

bool ShowInternetBandwidth::ratio95peakIsSet() const
{
    return ratio95peakIsSet_;
}

void ShowInternetBandwidth::unsetratio95peak()
{
    ratio95peakIsSet_ = false;
}

std::string ShowInternetBandwidth::getBillingInfo() const
{
    return billingInfo_;
}

void ShowInternetBandwidth::setBillingInfo(const std::string& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool ShowInternetBandwidth::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void ShowInternetBandwidth::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

std::string ShowInternetBandwidth::getFreezenInfo() const
{
    return freezenInfo_;
}

void ShowInternetBandwidth::setFreezenInfo(const std::string& value)
{
    freezenInfo_ = value;
    freezenInfoIsSet_ = true;
}

bool ShowInternetBandwidth::freezenInfoIsSet() const
{
    return freezenInfoIsSet_;
}

void ShowInternetBandwidth::unsetfreezenInfo()
{
    freezenInfoIsSet_ = false;
}

std::string ShowInternetBandwidth::getDomainId() const
{
    return domainId_;
}

void ShowInternetBandwidth::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowInternetBandwidth::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowInternetBandwidth::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowInternetBandwidth::getStatus() const
{
    return status_;
}

void ShowInternetBandwidth::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowInternetBandwidth::statusIsSet() const
{
    return statusIsSet_;
}

void ShowInternetBandwidth::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime ShowInternetBandwidth::getCreatedAt() const
{
    return createdAt_;
}

void ShowInternetBandwidth::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowInternetBandwidth::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowInternetBandwidth::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime ShowInternetBandwidth::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowInternetBandwidth::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowInternetBandwidth::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowInternetBandwidth::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool ShowInternetBandwidth::isIsPrePaid() const
{
    return isPrePaid_;
}

void ShowInternetBandwidth::setIsPrePaid(bool value)
{
    isPrePaid_ = value;
    isPrePaidIsSet_ = true;
}

bool ShowInternetBandwidth::isPrePaidIsSet() const
{
    return isPrePaidIsSet_;
}

void ShowInternetBandwidth::unsetisPrePaid()
{
    isPrePaidIsSet_ = false;
}

std::vector<Tag>& ShowInternetBandwidth::getTags()
{
    return tags_;
}

void ShowInternetBandwidth::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowInternetBandwidth::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowInternetBandwidth::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<Tag>& ShowInternetBandwidth::getSysTags()
{
    return sysTags_;
}

void ShowInternetBandwidth::setSysTags(const std::vector<Tag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool ShowInternetBandwidth::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void ShowInternetBandwidth::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

std::string ShowInternetBandwidth::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowInternetBandwidth::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowInternetBandwidth::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowInternetBandwidth::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ShowInternetBandwidth::getType() const
{
    return type_;
}

void ShowInternetBandwidth::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowInternetBandwidth::typeIsSet() const
{
    return typeIsSet_;
}

void ShowInternetBandwidth::unsettype()
{
    typeIsSet_ = false;
}

std::vector<LockInfo>& ShowInternetBandwidth::getLockInfos()
{
    return lockInfos_;
}

void ShowInternetBandwidth::setLockInfos(const std::vector<LockInfo>& value)
{
    lockInfos_ = value;
    lockInfosIsSet_ = true;
}

bool ShowInternetBandwidth::lockInfosIsSet() const
{
    return lockInfosIsSet_;
}

void ShowInternetBandwidth::unsetlockInfos()
{
    lockInfosIsSet_ = false;
}

}
}
}
}
}


