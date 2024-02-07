

#include "huaweicloud/geip/v3/model/CreateInternetBandwidth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




CreateInternetBandwidth::CreateInternetBandwidth()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    ingressSize_ = 0;
    ingressSizeIsSet_ = false;
    isp_ = "";
    ispIsSet_ = false;
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
    domainId_ = "";
    domainIdIsSet_ = false;
    billingInfo_ = "";
    billingInfoIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    isPrePaid_ = false;
    isPrePaidIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    lockInfosIsSet_ = false;
}

CreateInternetBandwidth::~CreateInternetBandwidth() = default;

void CreateInternetBandwidth::validate()
{
}

web::json::value CreateInternetBandwidth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ingressSizeIsSet_) {
        val[utility::conversions::to_string_t("ingress_size")] = ModelBase::toJson(ingressSize_);
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
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(billingInfoIsSet_) {
        val[utility::conversions::to_string_t("billing_info")] = ModelBase::toJson(billingInfo_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(isPrePaidIsSet_) {
        val[utility::conversions::to_string_t("is_pre_paid")] = ModelBase::toJson(isPrePaid_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
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
bool CreateInternetBandwidth::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ingress_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ingress_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIngressSize(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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


std::string CreateInternetBandwidth::getId() const
{
    return id_;
}

void CreateInternetBandwidth::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateInternetBandwidth::idIsSet() const
{
    return idIsSet_;
}

void CreateInternetBandwidth::unsetid()
{
    idIsSet_ = false;
}

std::string CreateInternetBandwidth::getName() const
{
    return name_;
}

void CreateInternetBandwidth::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateInternetBandwidth::nameIsSet() const
{
    return nameIsSet_;
}

void CreateInternetBandwidth::unsetname()
{
    nameIsSet_ = false;
}

int32_t CreateInternetBandwidth::getIngressSize() const
{
    return ingressSize_;
}

void CreateInternetBandwidth::setIngressSize(int32_t value)
{
    ingressSize_ = value;
    ingressSizeIsSet_ = true;
}

bool CreateInternetBandwidth::ingressSizeIsSet() const
{
    return ingressSizeIsSet_;
}

void CreateInternetBandwidth::unsetingressSize()
{
    ingressSizeIsSet_ = false;
}

std::string CreateInternetBandwidth::getIsp() const
{
    return isp_;
}

void CreateInternetBandwidth::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool CreateInternetBandwidth::ispIsSet() const
{
    return ispIsSet_;
}

void CreateInternetBandwidth::unsetisp()
{
    ispIsSet_ = false;
}

std::string CreateInternetBandwidth::getAccessSite() const
{
    return accessSite_;
}

void CreateInternetBandwidth::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool CreateInternetBandwidth::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void CreateInternetBandwidth::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

int32_t CreateInternetBandwidth::getSize() const
{
    return size_;
}

void CreateInternetBandwidth::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool CreateInternetBandwidth::sizeIsSet() const
{
    return sizeIsSet_;
}

void CreateInternetBandwidth::unsetsize()
{
    sizeIsSet_ = false;
}

std::string CreateInternetBandwidth::getDescription() const
{
    return description_;
}

void CreateInternetBandwidth::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateInternetBandwidth::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateInternetBandwidth::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateInternetBandwidth::getChargeMode() const
{
    return chargeMode_;
}

void CreateInternetBandwidth::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool CreateInternetBandwidth::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void CreateInternetBandwidth::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

int32_t CreateInternetBandwidth::getRatio95peak() const
{
    return ratio95peak_;
}

void CreateInternetBandwidth::setRatio95peak(int32_t value)
{
    ratio95peak_ = value;
    ratio95peakIsSet_ = true;
}

bool CreateInternetBandwidth::ratio95peakIsSet() const
{
    return ratio95peakIsSet_;
}

void CreateInternetBandwidth::unsetratio95peak()
{
    ratio95peakIsSet_ = false;
}

std::string CreateInternetBandwidth::getFreezenInfo() const
{
    return freezenInfo_;
}

void CreateInternetBandwidth::setFreezenInfo(const std::string& value)
{
    freezenInfo_ = value;
    freezenInfoIsSet_ = true;
}

bool CreateInternetBandwidth::freezenInfoIsSet() const
{
    return freezenInfoIsSet_;
}

void CreateInternetBandwidth::unsetfreezenInfo()
{
    freezenInfoIsSet_ = false;
}

std::string CreateInternetBandwidth::getDomainId() const
{
    return domainId_;
}

void CreateInternetBandwidth::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateInternetBandwidth::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateInternetBandwidth::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string CreateInternetBandwidth::getBillingInfo() const
{
    return billingInfo_;
}

void CreateInternetBandwidth::setBillingInfo(const std::string& value)
{
    billingInfo_ = value;
    billingInfoIsSet_ = true;
}

bool CreateInternetBandwidth::billingInfoIsSet() const
{
    return billingInfoIsSet_;
}

void CreateInternetBandwidth::unsetbillingInfo()
{
    billingInfoIsSet_ = false;
}

std::string CreateInternetBandwidth::getStatus() const
{
    return status_;
}

void CreateInternetBandwidth::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateInternetBandwidth::statusIsSet() const
{
    return statusIsSet_;
}

void CreateInternetBandwidth::unsetstatus()
{
    statusIsSet_ = false;
}

bool CreateInternetBandwidth::isIsPrePaid() const
{
    return isPrePaid_;
}

void CreateInternetBandwidth::setIsPrePaid(bool value)
{
    isPrePaid_ = value;
    isPrePaidIsSet_ = true;
}

bool CreateInternetBandwidth::isPrePaidIsSet() const
{
    return isPrePaidIsSet_;
}

void CreateInternetBandwidth::unsetisPrePaid()
{
    isPrePaidIsSet_ = false;
}

utility::datetime CreateInternetBandwidth::getCreatedAt() const
{
    return createdAt_;
}

void CreateInternetBandwidth::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool CreateInternetBandwidth::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void CreateInternetBandwidth::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime CreateInternetBandwidth::getUpdatedAt() const
{
    return updatedAt_;
}

void CreateInternetBandwidth::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool CreateInternetBandwidth::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void CreateInternetBandwidth::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::vector<Tag>& CreateInternetBandwidth::getTags()
{
    return tags_;
}

void CreateInternetBandwidth::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateInternetBandwidth::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateInternetBandwidth::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<Tag>& CreateInternetBandwidth::getSysTags()
{
    return sysTags_;
}

void CreateInternetBandwidth::setSysTags(const std::vector<Tag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool CreateInternetBandwidth::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void CreateInternetBandwidth::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

std::string CreateInternetBandwidth::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void CreateInternetBandwidth::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool CreateInternetBandwidth::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void CreateInternetBandwidth::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string CreateInternetBandwidth::getType() const
{
    return type_;
}

void CreateInternetBandwidth::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateInternetBandwidth::typeIsSet() const
{
    return typeIsSet_;
}

void CreateInternetBandwidth::unsettype()
{
    typeIsSet_ = false;
}

std::vector<LockInfo>& CreateInternetBandwidth::getLockInfos()
{
    return lockInfos_;
}

void CreateInternetBandwidth::setLockInfos(const std::vector<LockInfo>& value)
{
    lockInfos_ = value;
    lockInfosIsSet_ = true;
}

bool CreateInternetBandwidth::lockInfosIsSet() const
{
    return lockInfosIsSet_;
}

void CreateInternetBandwidth::unsetlockInfos()
{
    lockInfosIsSet_ = false;
}

}
}
}
}
}


