

#include "huaweicloud/organizations/v1/model/DryRunConfigDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




DryRunConfigDto::DryRunConfigDto()
{
    rootId_ = "";
    rootIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    bucketName_ = "";
    bucketNameIsSet_ = false;
    regionId_ = "";
    regionIdIsSet_ = false;
    bucketPrefix_ = "";
    bucketPrefixIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
    policyType_ = "";
    policyTypeIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
}

DryRunConfigDto::~DryRunConfigDto() = default;

void DryRunConfigDto::validate()
{
}

web::json::value DryRunConfigDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(rootIdIsSet_) {
        val[utility::conversions::to_string_t("root_id")] = ModelBase::toJson(rootId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(bucketNameIsSet_) {
        val[utility::conversions::to_string_t("bucket_name")] = ModelBase::toJson(bucketName_);
    }
    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(bucketPrefixIsSet_) {
        val[utility::conversions::to_string_t("bucket_prefix")] = ModelBase::toJson(bucketPrefix_);
    }
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(policyTypeIsSet_) {
        val[utility::conversions::to_string_t("policy_type")] = ModelBase::toJson(policyType_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool DryRunConfigDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("root_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("root_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("bucket_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bucket_prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bucket_prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBucketPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyType(refVal);
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
    return ok;
}


std::string DryRunConfigDto::getRootId() const
{
    return rootId_;
}

void DryRunConfigDto::setRootId(const std::string& value)
{
    rootId_ = value;
    rootIdIsSet_ = true;
}

bool DryRunConfigDto::rootIdIsSet() const
{
    return rootIdIsSet_;
}

void DryRunConfigDto::unsetrootId()
{
    rootIdIsSet_ = false;
}

std::string DryRunConfigDto::getStatus() const
{
    return status_;
}

void DryRunConfigDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DryRunConfigDto::statusIsSet() const
{
    return statusIsSet_;
}

void DryRunConfigDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DryRunConfigDto::getBucketName() const
{
    return bucketName_;
}

void DryRunConfigDto::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool DryRunConfigDto::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void DryRunConfigDto::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string DryRunConfigDto::getRegionId() const
{
    return regionId_;
}

void DryRunConfigDto::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool DryRunConfigDto::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void DryRunConfigDto::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string DryRunConfigDto::getBucketPrefix() const
{
    return bucketPrefix_;
}

void DryRunConfigDto::setBucketPrefix(const std::string& value)
{
    bucketPrefix_ = value;
    bucketPrefixIsSet_ = true;
}

bool DryRunConfigDto::bucketPrefixIsSet() const
{
    return bucketPrefixIsSet_;
}

void DryRunConfigDto::unsetbucketPrefix()
{
    bucketPrefixIsSet_ = false;
}

std::string DryRunConfigDto::getAgencyName() const
{
    return agencyName_;
}

void DryRunConfigDto::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool DryRunConfigDto::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void DryRunConfigDto::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::string DryRunConfigDto::getPolicyType() const
{
    return policyType_;
}

void DryRunConfigDto::setPolicyType(const std::string& value)
{
    policyType_ = value;
    policyTypeIsSet_ = true;
}

bool DryRunConfigDto::policyTypeIsSet() const
{
    return policyTypeIsSet_;
}

void DryRunConfigDto::unsetpolicyType()
{
    policyTypeIsSet_ = false;
}

utility::datetime DryRunConfigDto::getCreatedAt() const
{
    return createdAt_;
}

void DryRunConfigDto::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool DryRunConfigDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void DryRunConfigDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

utility::datetime DryRunConfigDto::getUpdatedAt() const
{
    return updatedAt_;
}

void DryRunConfigDto::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool DryRunConfigDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void DryRunConfigDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


