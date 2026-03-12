

#include "huaweicloud/organizations/v1/model/UpdateDryRunConfigReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




UpdateDryRunConfigReqBody::UpdateDryRunConfigReqBody()
{
    policyType_ = "";
    policyTypeIsSet_ = false;
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
}

UpdateDryRunConfigReqBody::~UpdateDryRunConfigReqBody() = default;

void UpdateDryRunConfigReqBody::validate()
{
}

web::json::value UpdateDryRunConfigReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(policyTypeIsSet_) {
        val[utility::conversions::to_string_t("policy_type")] = ModelBase::toJson(policyType_);
    }
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

    return val;
}
bool UpdateDryRunConfigReqBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("policy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyType(refVal);
        }
    }
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
    return ok;
}


std::string UpdateDryRunConfigReqBody::getPolicyType() const
{
    return policyType_;
}

void UpdateDryRunConfigReqBody::setPolicyType(const std::string& value)
{
    policyType_ = value;
    policyTypeIsSet_ = true;
}

bool UpdateDryRunConfigReqBody::policyTypeIsSet() const
{
    return policyTypeIsSet_;
}

void UpdateDryRunConfigReqBody::unsetpolicyType()
{
    policyTypeIsSet_ = false;
}

std::string UpdateDryRunConfigReqBody::getRootId() const
{
    return rootId_;
}

void UpdateDryRunConfigReqBody::setRootId(const std::string& value)
{
    rootId_ = value;
    rootIdIsSet_ = true;
}

bool UpdateDryRunConfigReqBody::rootIdIsSet() const
{
    return rootIdIsSet_;
}

void UpdateDryRunConfigReqBody::unsetrootId()
{
    rootIdIsSet_ = false;
}

std::string UpdateDryRunConfigReqBody::getStatus() const
{
    return status_;
}

void UpdateDryRunConfigReqBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateDryRunConfigReqBody::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateDryRunConfigReqBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateDryRunConfigReqBody::getBucketName() const
{
    return bucketName_;
}

void UpdateDryRunConfigReqBody::setBucketName(const std::string& value)
{
    bucketName_ = value;
    bucketNameIsSet_ = true;
}

bool UpdateDryRunConfigReqBody::bucketNameIsSet() const
{
    return bucketNameIsSet_;
}

void UpdateDryRunConfigReqBody::unsetbucketName()
{
    bucketNameIsSet_ = false;
}

std::string UpdateDryRunConfigReqBody::getRegionId() const
{
    return regionId_;
}

void UpdateDryRunConfigReqBody::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool UpdateDryRunConfigReqBody::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void UpdateDryRunConfigReqBody::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string UpdateDryRunConfigReqBody::getBucketPrefix() const
{
    return bucketPrefix_;
}

void UpdateDryRunConfigReqBody::setBucketPrefix(const std::string& value)
{
    bucketPrefix_ = value;
    bucketPrefixIsSet_ = true;
}

bool UpdateDryRunConfigReqBody::bucketPrefixIsSet() const
{
    return bucketPrefixIsSet_;
}

void UpdateDryRunConfigReqBody::unsetbucketPrefix()
{
    bucketPrefixIsSet_ = false;
}

std::string UpdateDryRunConfigReqBody::getAgencyName() const
{
    return agencyName_;
}

void UpdateDryRunConfigReqBody::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool UpdateDryRunConfigReqBody::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void UpdateDryRunConfigReqBody::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

}
}
}
}
}


