

#include "huaweicloud/gaussdb/v3/model/SetQuota.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SetQuota::SetQuota()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    instanceQuota_ = 0;
    instanceQuotaIsSet_ = false;
    vcpusQuota_ = 0;
    vcpusQuotaIsSet_ = false;
    ramQuota_ = 0;
    ramQuotaIsSet_ = false;
}

SetQuota::~SetQuota() = default;

void SetQuota::validate()
{
}

web::json::value SetQuota::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
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

    return val;
}

bool SetQuota::fromJson(const web::json::value& val)
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
    return ok;
}

std::string SetQuota::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void SetQuota::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool SetQuota::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void SetQuota::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

int32_t SetQuota::getInstanceQuota() const
{
    return instanceQuota_;
}

void SetQuota::setInstanceQuota(int32_t value)
{
    instanceQuota_ = value;
    instanceQuotaIsSet_ = true;
}

bool SetQuota::instanceQuotaIsSet() const
{
    return instanceQuotaIsSet_;
}

void SetQuota::unsetinstanceQuota()
{
    instanceQuotaIsSet_ = false;
}

int32_t SetQuota::getVcpusQuota() const
{
    return vcpusQuota_;
}

void SetQuota::setVcpusQuota(int32_t value)
{
    vcpusQuota_ = value;
    vcpusQuotaIsSet_ = true;
}

bool SetQuota::vcpusQuotaIsSet() const
{
    return vcpusQuotaIsSet_;
}

void SetQuota::unsetvcpusQuota()
{
    vcpusQuotaIsSet_ = false;
}

int32_t SetQuota::getRamQuota() const
{
    return ramQuota_;
}

void SetQuota::setRamQuota(int32_t value)
{
    ramQuota_ = value;
    ramQuotaIsSet_ = true;
}

bool SetQuota::ramQuotaIsSet() const
{
    return ramQuotaIsSet_;
}

void SetQuota::unsetramQuota()
{
    ramQuotaIsSet_ = false;
}

}
}
}
}
}


