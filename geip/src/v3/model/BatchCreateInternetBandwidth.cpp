

#include "huaweicloud/geip/v3/model/BatchCreateInternetBandwidth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




BatchCreateInternetBandwidth::BatchCreateInternetBandwidth()
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
    domainId_ = "";
    domainIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    retStatus_ = "";
    retStatusIsSet_ = false;
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    lockInfosIsSet_ = false;
}

BatchCreateInternetBandwidth::~BatchCreateInternetBandwidth() = default;

void BatchCreateInternetBandwidth::validate()
{
}

web::json::value BatchCreateInternetBandwidth::toJson() const
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
    if(retStatusIsSet_) {
        val[utility::conversions::to_string_t("ret_status")] = ModelBase::toJson(retStatus_);
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
bool BatchCreateInternetBandwidth::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ret_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ret_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetStatus(refVal);
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


std::string BatchCreateInternetBandwidth::getId() const
{
    return id_;
}

void BatchCreateInternetBandwidth::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool BatchCreateInternetBandwidth::idIsSet() const
{
    return idIsSet_;
}

void BatchCreateInternetBandwidth::unsetid()
{
    idIsSet_ = false;
}

std::string BatchCreateInternetBandwidth::getName() const
{
    return name_;
}

void BatchCreateInternetBandwidth::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BatchCreateInternetBandwidth::nameIsSet() const
{
    return nameIsSet_;
}

void BatchCreateInternetBandwidth::unsetname()
{
    nameIsSet_ = false;
}

std::string BatchCreateInternetBandwidth::getIsp() const
{
    return isp_;
}

void BatchCreateInternetBandwidth::setIsp(const std::string& value)
{
    isp_ = value;
    ispIsSet_ = true;
}

bool BatchCreateInternetBandwidth::ispIsSet() const
{
    return ispIsSet_;
}

void BatchCreateInternetBandwidth::unsetisp()
{
    ispIsSet_ = false;
}

int32_t BatchCreateInternetBandwidth::getIngressSize() const
{
    return ingressSize_;
}

void BatchCreateInternetBandwidth::setIngressSize(int32_t value)
{
    ingressSize_ = value;
    ingressSizeIsSet_ = true;
}

bool BatchCreateInternetBandwidth::ingressSizeIsSet() const
{
    return ingressSizeIsSet_;
}

void BatchCreateInternetBandwidth::unsetingressSize()
{
    ingressSizeIsSet_ = false;
}

std::string BatchCreateInternetBandwidth::getAccessSite() const
{
    return accessSite_;
}

void BatchCreateInternetBandwidth::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool BatchCreateInternetBandwidth::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void BatchCreateInternetBandwidth::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

int32_t BatchCreateInternetBandwidth::getSize() const
{
    return size_;
}

void BatchCreateInternetBandwidth::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool BatchCreateInternetBandwidth::sizeIsSet() const
{
    return sizeIsSet_;
}

void BatchCreateInternetBandwidth::unsetsize()
{
    sizeIsSet_ = false;
}

std::string BatchCreateInternetBandwidth::getDescription() const
{
    return description_;
}

void BatchCreateInternetBandwidth::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool BatchCreateInternetBandwidth::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void BatchCreateInternetBandwidth::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string BatchCreateInternetBandwidth::getChargeMode() const
{
    return chargeMode_;
}

void BatchCreateInternetBandwidth::setChargeMode(const std::string& value)
{
    chargeMode_ = value;
    chargeModeIsSet_ = true;
}

bool BatchCreateInternetBandwidth::chargeModeIsSet() const
{
    return chargeModeIsSet_;
}

void BatchCreateInternetBandwidth::unsetchargeMode()
{
    chargeModeIsSet_ = false;
}

std::string BatchCreateInternetBandwidth::getDomainId() const
{
    return domainId_;
}

void BatchCreateInternetBandwidth::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool BatchCreateInternetBandwidth::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void BatchCreateInternetBandwidth::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string BatchCreateInternetBandwidth::getStatus() const
{
    return status_;
}

void BatchCreateInternetBandwidth::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool BatchCreateInternetBandwidth::statusIsSet() const
{
    return statusIsSet_;
}

void BatchCreateInternetBandwidth::unsetstatus()
{
    statusIsSet_ = false;
}

utility::datetime BatchCreateInternetBandwidth::getCreatedAt() const
{
    return createdAt_;
}

void BatchCreateInternetBandwidth::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool BatchCreateInternetBandwidth::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void BatchCreateInternetBandwidth::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime BatchCreateInternetBandwidth::getUpdatedAt() const
{
    return updatedAt_;
}

void BatchCreateInternetBandwidth::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool BatchCreateInternetBandwidth::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void BatchCreateInternetBandwidth::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string BatchCreateInternetBandwidth::getRetStatus() const
{
    return retStatus_;
}

void BatchCreateInternetBandwidth::setRetStatus(const std::string& value)
{
    retStatus_ = value;
    retStatusIsSet_ = true;
}

bool BatchCreateInternetBandwidth::retStatusIsSet() const
{
    return retStatusIsSet_;
}

void BatchCreateInternetBandwidth::unsetretStatus()
{
    retStatusIsSet_ = false;
}

std::vector<Tag>& BatchCreateInternetBandwidth::getTags()
{
    return tags_;
}

void BatchCreateInternetBandwidth::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchCreateInternetBandwidth::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchCreateInternetBandwidth::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<Tag>& BatchCreateInternetBandwidth::getSysTags()
{
    return sysTags_;
}

void BatchCreateInternetBandwidth::setSysTags(const std::vector<Tag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool BatchCreateInternetBandwidth::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void BatchCreateInternetBandwidth::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

std::string BatchCreateInternetBandwidth::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void BatchCreateInternetBandwidth::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool BatchCreateInternetBandwidth::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void BatchCreateInternetBandwidth::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string BatchCreateInternetBandwidth::getType() const
{
    return type_;
}

void BatchCreateInternetBandwidth::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BatchCreateInternetBandwidth::typeIsSet() const
{
    return typeIsSet_;
}

void BatchCreateInternetBandwidth::unsettype()
{
    typeIsSet_ = false;
}

std::vector<LockInfo>& BatchCreateInternetBandwidth::getLockInfos()
{
    return lockInfos_;
}

void BatchCreateInternetBandwidth::setLockInfos(const std::vector<LockInfo>& value)
{
    lockInfos_ = value;
    lockInfosIsSet_ = true;
}

bool BatchCreateInternetBandwidth::lockInfosIsSet() const
{
    return lockInfosIsSet_;
}

void BatchCreateInternetBandwidth::unsetlockInfos()
{
    lockInfosIsSet_ = false;
}

}
}
}
}
}


