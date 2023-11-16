

#include "huaweicloud/aad/v1/model/ProtectedIpResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




ProtectedIpResponse::ProtectedIpResponse()
{
    id_ = "";
    idIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    statusDetailIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    packageId_ = "";
    packageIdIsSet_ = false;
    packageName_ = "";
    packageNameIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    tag_ = "";
    tagIsSet_ = false;
    isResale_ = false;
    isResaleIsSet_ = false;
    packageVersion_ = "";
    packageVersionIsSet_ = false;
}

ProtectedIpResponse::~ProtectedIpResponse() = default;

void ProtectedIpResponse::validate()
{
}

web::json::value ProtectedIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(statusDetailIsSet_) {
        val[utility::conversions::to_string_t("status_detail")] = ModelBase::toJson(statusDetail_);
    }
    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(packageIdIsSet_) {
        val[utility::conversions::to_string_t("package_id")] = ModelBase::toJson(packageId_);
    }
    if(packageNameIsSet_) {
        val[utility::conversions::to_string_t("package_name")] = ModelBase::toJson(packageName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(isResaleIsSet_) {
        val[utility::conversions::to_string_t("is_resale")] = ModelBase::toJson(isResale_);
    }
    if(packageVersionIsSet_) {
        val[utility::conversions::to_string_t("package_version")] = ModelBase::toJson(packageVersion_);
    }

    return val;
}
bool ProtectedIpResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_detail"));
        if(!fieldValue.is_null())
        {
            IpStatusDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_resale"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_resale"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsResale(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("package_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageVersion(refVal);
        }
    }
    return ok;
}


std::string ProtectedIpResponse::getId() const
{
    return id_;
}

void ProtectedIpResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProtectedIpResponse::idIsSet() const
{
    return idIsSet_;
}

void ProtectedIpResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ProtectedIpResponse::getIp() const
{
    return ip_;
}

void ProtectedIpResponse::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool ProtectedIpResponse::ipIsSet() const
{
    return ipIsSet_;
}

void ProtectedIpResponse::unsetip()
{
    ipIsSet_ = false;
}

std::string ProtectedIpResponse::getType() const
{
    return type_;
}

void ProtectedIpResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ProtectedIpResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ProtectedIpResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ProtectedIpResponse::getName() const
{
    return name_;
}

void ProtectedIpResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ProtectedIpResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ProtectedIpResponse::unsetname()
{
    nameIsSet_ = false;
}

int32_t ProtectedIpResponse::getStatus() const
{
    return status_;
}

void ProtectedIpResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ProtectedIpResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ProtectedIpResponse::unsetstatus()
{
    statusIsSet_ = false;
}

IpStatusDetail ProtectedIpResponse::getStatusDetail() const
{
    return statusDetail_;
}

void ProtectedIpResponse::setStatusDetail(const IpStatusDetail& value)
{
    statusDetail_ = value;
    statusDetailIsSet_ = true;
}

bool ProtectedIpResponse::statusDetailIsSet() const
{
    return statusDetailIsSet_;
}

void ProtectedIpResponse::unsetstatusDetail()
{
    statusDetailIsSet_ = false;
}

std::string ProtectedIpResponse::getPolicyName() const
{
    return policyName_;
}

void ProtectedIpResponse::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool ProtectedIpResponse::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void ProtectedIpResponse::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

std::string ProtectedIpResponse::getRegion() const
{
    return region_;
}

void ProtectedIpResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ProtectedIpResponse::regionIsSet() const
{
    return regionIsSet_;
}

void ProtectedIpResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string ProtectedIpResponse::getPackageId() const
{
    return packageId_;
}

void ProtectedIpResponse::setPackageId(const std::string& value)
{
    packageId_ = value;
    packageIdIsSet_ = true;
}

bool ProtectedIpResponse::packageIdIsSet() const
{
    return packageIdIsSet_;
}

void ProtectedIpResponse::unsetpackageId()
{
    packageIdIsSet_ = false;
}

std::string ProtectedIpResponse::getPackageName() const
{
    return packageName_;
}

void ProtectedIpResponse::setPackageName(const std::string& value)
{
    packageName_ = value;
    packageNameIsSet_ = true;
}

bool ProtectedIpResponse::packageNameIsSet() const
{
    return packageNameIsSet_;
}

void ProtectedIpResponse::unsetpackageName()
{
    packageNameIsSet_ = false;
}

std::string ProtectedIpResponse::getTags() const
{
    return tags_;
}

void ProtectedIpResponse::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ProtectedIpResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ProtectedIpResponse::unsettags()
{
    tagsIsSet_ = false;
}

std::string ProtectedIpResponse::getTag() const
{
    return tag_;
}

void ProtectedIpResponse::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool ProtectedIpResponse::tagIsSet() const
{
    return tagIsSet_;
}

void ProtectedIpResponse::unsettag()
{
    tagIsSet_ = false;
}

bool ProtectedIpResponse::isIsResale() const
{
    return isResale_;
}

void ProtectedIpResponse::setIsResale(bool value)
{
    isResale_ = value;
    isResaleIsSet_ = true;
}

bool ProtectedIpResponse::isResaleIsSet() const
{
    return isResaleIsSet_;
}

void ProtectedIpResponse::unsetisResale()
{
    isResaleIsSet_ = false;
}

std::string ProtectedIpResponse::getPackageVersion() const
{
    return packageVersion_;
}

void ProtectedIpResponse::setPackageVersion(const std::string& value)
{
    packageVersion_ = value;
    packageVersionIsSet_ = true;
}

bool ProtectedIpResponse::packageVersionIsSet() const
{
    return packageVersionIsSet_;
}

void ProtectedIpResponse::unsetpackageVersion()
{
    packageVersionIsSet_ = false;
}

}
}
}
}
}


