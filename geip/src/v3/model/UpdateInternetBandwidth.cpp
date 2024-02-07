

#include "huaweicloud/geip/v3/model/UpdateInternetBandwidth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




UpdateInternetBandwidth::UpdateInternetBandwidth()
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
    freezenInfo_ = "";
    freezenInfoIsSet_ = false;
    billingInfo_ = "";
    billingInfoIsSet_ = false;
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
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    lockInfosIsSet_ = false;
}

UpdateInternetBandwidth::~UpdateInternetBandwidth() = default;

void UpdateInternetBandwidth::validate()
{
}

web::json::value UpdateInternetBandwidth::toJson() const
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
    if(freezenInfoIsSet_) {
        val[utility::conversions::to_string_t("freezen_info")] = ModelBase::toJson(freezenInfo_);
    }
    if(billingInfoIsSet_) {
        val[utility::conversions::to_string_t("billing_info")] = ModelBase::toJson(billingInfo_);
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(lockInfosIsSet_) {
        val[utility::conversions::to_string_t("lock_infos")] = ModelBase::toJson(lockInfos_);
    }

    return val;
}
bool UpdateInternetBandwidth::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("freezen_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("freezen_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreezenInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
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


std::string UpdateInternetBandwidth::getId() const
{
    return id_;
}

void UpdateInternetBandwidth::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateInternetBandwidth::idIsSet() const
{
    return idIsSet_;
}

void UpdateInternetBandwidth::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateInternetBandwidth::getName() const
{
    return name_;
}

void UpdateInternetBandwidth::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateInternetBandwidth::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateInternetBandwidth::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateInternetBandwidth::getIsp() const
{
    return isp_;
}

void UpdateInternetBandwidth::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool UpdateInternetBandwidth::ispIsSet() const
{
    return ispIsSet_;
}

void UpdateInternetBandwidth::unsetisp()
{
    ispIsSet_ = false;
}

int32_t UpdateInternetBandwidth::getIngressSize() const
{
    return ingressSize_;
}

void UpdateInternetBandwidth::setIngressSize(int32_t value)
{
    ingressSize_ = value;
    ingressSizeIsSet_ = true;
}

bool UpdateInternetBandwidth::ingressSizeIsSet() const
{
    return ingressSizeIsSet_;
}

void UpdateInternetBandwidth::unsetingressSize()
{
    ingressSizeIsSet_ = false;
}

std::string UpdateInternetBandwidth::getAccessSite() const
{
    return accessSite_;
}

void UpdateInternetBandwidth::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool UpdateInternetBandwidth::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void UpdateInternetBandwidth::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

int32_t UpdateInternetBandwidth::getSize() const
{
    return size_;
}

void UpdateInternetBandwidth::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool UpdateInternetBandwidth::sizeIsSet() const
{
    return sizeIsSet_;
}

void UpdateInternetBandwidth::unsetsize()
{
    sizeIsSet_ = false;
}

std::string UpdateInternetBandwidth::getDescription() const
{
    return description_;
}

void UpdateInternetBandwidth::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateInternetBandwidth::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateInternetBandwidth::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateInternetBandwidth::getChargeMode() const
{
    return chargeMode_;
}

void UpdateInternetBandwidth::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool UpdateInternetBandwidth::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void UpdateInternetBandwidth::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

int32_t UpdateInternetBandwidth::getRatio95peak() const
{
    return ratio95peak_;
}

void UpdateInternetBandwidth::setRatio95peak(int32_t value)
{
    ratio95peak_ = value;
    ratio95peakIsSet_ = true;
}

bool UpdateInternetBandwidth::ratio95peakIsSet() const
{
    return ratio95peakIsSet_;
}

void UpdateInternetBandwidth::unsetratio95peak()
{
    ratio95peakIsSet_ = false;
}

std::string UpdateInternetBandwidth::getFreezenInfo() const
{
    return freezenInfo_;
}

void UpdateInternetBandwidth::setFreezenInfo(const std::string& value)
{
    freezenInfo_ = value;
    freezenInfoIsSet_ = true;
}

bool UpdateInternetBandwidth::freezenInfoIsSet() const
{
    return freezenInfoIsSet_;
}

void UpdateInternetBandwidth::unsetfreezenInfo()
{
    freezenInfoIsSet_ = false;
}

std::string UpdateInternetBandwidth::getBillingInfo() const
{
    return billingInfo_;
}

void UpdateInternetBandwidth::setBillingInfo(const std::string& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool UpdateInternetBandwidth::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void UpdateInternetBandwidth::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

std::string UpdateInternetBandwidth::getDomainId() const
{
    return domainId_;
}

void UpdateInternetBandwidth::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateInternetBandwidth::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateInternetBandwidth::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string UpdateInternetBandwidth::getStatus() const
{
    return status_;
}

void UpdateInternetBandwidth::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateInternetBandwidth::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateInternetBandwidth::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime UpdateInternetBandwidth::getCreatedAt() const
{
    return createdAt_;
}

void UpdateInternetBandwidth::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool UpdateInternetBandwidth::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void UpdateInternetBandwidth::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime UpdateInternetBandwidth::getUpdatedAt() const
{
    return updatedAt_;
}

void UpdateInternetBandwidth::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool UpdateInternetBandwidth::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void UpdateInternetBandwidth::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool UpdateInternetBandwidth::isIsPrePaid() const
{
    return isPrePaid_;
}

void UpdateInternetBandwidth::setIsPrePaid(bool value)
{
    isPrePaid_ = value;
    isPrePaidIsSet_ = true;
}

bool UpdateInternetBandwidth::isPrePaidIsSet() const
{
    return isPrePaidIsSet_;
}

void UpdateInternetBandwidth::unsetisPrePaid()
{
    isPrePaidIsSet_ = false;
}

std::vector<Tag>& UpdateInternetBandwidth::getTags()
{
    return tags_;
}

void UpdateInternetBandwidth::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateInternetBandwidth::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateInternetBandwidth::unsettags()
{
    tagsIsSet_ = false;
}

std::string UpdateInternetBandwidth::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateInternetBandwidth::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateInternetBandwidth::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateInternetBandwidth::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::vector<LockInfo>& UpdateInternetBandwidth::getLockInfos()
{
    return lockInfos_;
}

void UpdateInternetBandwidth::setLockInfos(const std::vector<LockInfo>& value)
{
    lockInfos_ = value;
    lockInfosIsSet_ = true;
}

bool UpdateInternetBandwidth::lockInfosIsSet() const
{
    return lockInfosIsSet_;
}

void UpdateInternetBandwidth::unsetlockInfos()
{
    lockInfosIsSet_ = false;
}

}
}
}
}
}


