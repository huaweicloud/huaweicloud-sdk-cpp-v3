

#include "huaweicloud/gaussdb/v3/model/Quota.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




Quota::Quota()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    enterpriseProjectName_ = "";
    enterpriseProjectNameIsSet_ = false;
    instanceQuota_ = 0;
    instanceQuotaIsSet_ = false;
    vcpusQuota_ = 0;
    vcpusQuotaIsSet_ = false;
    ramQuota_ = 0;
    ramQuotaIsSet_ = false;
    availabilityInstanceQuota_ = 0;
    availabilityInstanceQuotaIsSet_ = false;
    availabilityVcpusQuota_ = 0;
    availabilityVcpusQuotaIsSet_ = false;
    availabilityRamQuota_ = 0;
    availabilityRamQuotaIsSet_ = false;
}

Quota::~Quota() = default;

void Quota::validate()
{
}

web::json::value Quota::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(enterpriseProjectNameIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_name")] = ModelBase::toJson(enterpriseProjectName_);
    }
    if(instanceQuotaIsSet_) {
        val[utility::conversions::to_string_t("instance_quota")] = ModelBase::toJson(instanceQuota_);
    }
    if(vcpusQuotaIsSet_) {
        val[utility::conversions::to_string_t("vcpus_quota")] = ModelBase::toJson(vcpusQuota_);
    }
    if(ramQuotaIsSet_) {
        val[utility::conversions::to_string_t("ram_quota")] = ModelBase::toJson(ramQuota_);
    }
    if(availabilityInstanceQuotaIsSet_) {
        val[utility::conversions::to_string_t("availability_instance_quota")] = ModelBase::toJson(availabilityInstanceQuota_);
    }
    if(availabilityVcpusQuotaIsSet_) {
        val[utility::conversions::to_string_t("availability_vcpus_quota")] = ModelBase::toJson(availabilityVcpusQuota_);
    }
    if(availabilityRamQuotaIsSet_) {
        val[utility::conversions::to_string_t("availability_ram_quota")] = ModelBase::toJson(availabilityRamQuota_);
    }

    return val;
}
bool Quota::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vcpus_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpusQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRamQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_instance_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_instance_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityInstanceQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_vcpus_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_vcpus_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityVcpusQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_ram_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_ram_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityRamQuota(refVal);
        }
    }
    return ok;
}


std::string Quota::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void Quota::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool Quota::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void Quota::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string Quota::getEnterpriseProjectName() const
{
    return enterpriseProjectName_;
}

void Quota::setEnterpriseProjectName(const std::string& value)
{
    enterpriseProjectName_ = value;
    enterpriseProjectNameIsSet_ = true;
}

bool Quota::enterpriseProjectNameIsSet() const
{
    return enterpriseProjectNameIsSet_;
}

void Quota::unsetenterpriseProjectName()
{
    enterpriseProjectNameIsSet_ = false;
}

int32_t Quota::getInstanceQuota() const
{
    return instanceQuota_;
}

void Quota::setInstanceQuota(int32_t value)
{
    instanceQuota_ = value;
    instanceQuotaIsSet_ = true;
}

bool Quota::instanceQuotaIsSet() const
{
    return instanceQuotaIsSet_;
}

void Quota::unsetinstanceQuota()
{
    instanceQuotaIsSet_ = false;
}

int32_t Quota::getVcpusQuota() const
{
    return vcpusQuota_;
}

void Quota::setVcpusQuota(int32_t value)
{
    vcpusQuota_ = value;
    vcpusQuotaIsSet_ = true;
}

bool Quota::vcpusQuotaIsSet() const
{
    return vcpusQuotaIsSet_;
}

void Quota::unsetvcpusQuota()
{
    vcpusQuotaIsSet_ = false;
}

int32_t Quota::getRamQuota() const
{
    return ramQuota_;
}

void Quota::setRamQuota(int32_t value)
{
    ramQuota_ = value;
    ramQuotaIsSet_ = true;
}

bool Quota::ramQuotaIsSet() const
{
    return ramQuotaIsSet_;
}

void Quota::unsetramQuota()
{
    ramQuotaIsSet_ = false;
}

int32_t Quota::getAvailabilityInstanceQuota() const
{
    return availabilityInstanceQuota_;
}

void Quota::setAvailabilityInstanceQuota(int32_t value)
{
    availabilityInstanceQuota_ = value;
    availabilityInstanceQuotaIsSet_ = true;
}

bool Quota::availabilityInstanceQuotaIsSet() const
{
    return availabilityInstanceQuotaIsSet_;
}

void Quota::unsetavailabilityInstanceQuota()
{
    availabilityInstanceQuotaIsSet_ = false;
}

int32_t Quota::getAvailabilityVcpusQuota() const
{
    return availabilityVcpusQuota_;
}

void Quota::setAvailabilityVcpusQuota(int32_t value)
{
    availabilityVcpusQuota_ = value;
    availabilityVcpusQuotaIsSet_ = true;
}

bool Quota::availabilityVcpusQuotaIsSet() const
{
    return availabilityVcpusQuotaIsSet_;
}

void Quota::unsetavailabilityVcpusQuota()
{
    availabilityVcpusQuotaIsSet_ = false;
}

int32_t Quota::getAvailabilityRamQuota() const
{
    return availabilityRamQuota_;
}

void Quota::setAvailabilityRamQuota(int32_t value)
{
    availabilityRamQuota_ = value;
    availabilityRamQuotaIsSet_ = true;
}

bool Quota::availabilityRamQuotaIsSet() const
{
    return availabilityRamQuotaIsSet_;
}

void Quota::unsetavailabilityRamQuota()
{
    availabilityRamQuotaIsSet_ = false;
}

}
}
}
}
}


