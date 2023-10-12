

#include "huaweicloud/gaussdbforopengauss/v3/model/EpsQuotasOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




EpsQuotasOption::EpsQuotasOption()
{
    enterpriseProjectsId_ = "";
    enterpriseProjectsIdIsSet_ = false;
    instanceQuota_ = 0;
    instanceQuotaIsSet_ = false;
    vcpusQuota_ = 0;
    vcpusQuotaIsSet_ = false;
    ramQuota_ = 0;
    ramQuotaIsSet_ = false;
    volumeQuota_ = 0;
    volumeQuotaIsSet_ = false;
}

EpsQuotasOption::~EpsQuotasOption() = default;

void EpsQuotasOption::validate()
{
}

web::json::value EpsQuotasOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectsIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_projects_id")] = ModelBase::toJson(enterpriseProjectsId_);
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
    if(volumeQuotaIsSet_) {
        val[utility::conversions::to_string_t("volume_quota")] = ModelBase::toJson(volumeQuota_);
    }

    return val;
}
bool EpsQuotasOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_projects_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_projects_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectsId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("volume_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeQuota(refVal);
        }
    }
    return ok;
}


std::string EpsQuotasOption::getEnterpriseProjectsId() const
{
    return enterpriseProjectsId_;
}

void EpsQuotasOption::setEnterpriseProjectsId(const std::string& value)
{
    enterpriseProjectsId_ = value;
    enterpriseProjectsIdIsSet_ = true;
}

bool EpsQuotasOption::enterpriseProjectsIdIsSet() const
{
    return enterpriseProjectsIdIsSet_;
}

void EpsQuotasOption::unsetenterpriseProjectsId()
{
    enterpriseProjectsIdIsSet_ = false;
}

int32_t EpsQuotasOption::getInstanceQuota() const
{
    return instanceQuota_;
}

void EpsQuotasOption::setInstanceQuota(int32_t value)
{
    instanceQuota_ = value;
    instanceQuotaIsSet_ = true;
}

bool EpsQuotasOption::instanceQuotaIsSet() const
{
    return instanceQuotaIsSet_;
}

void EpsQuotasOption::unsetinstanceQuota()
{
    instanceQuotaIsSet_ = false;
}

int32_t EpsQuotasOption::getVcpusQuota() const
{
    return vcpusQuota_;
}

void EpsQuotasOption::setVcpusQuota(int32_t value)
{
    vcpusQuota_ = value;
    vcpusQuotaIsSet_ = true;
}

bool EpsQuotasOption::vcpusQuotaIsSet() const
{
    return vcpusQuotaIsSet_;
}

void EpsQuotasOption::unsetvcpusQuota()
{
    vcpusQuotaIsSet_ = false;
}

int32_t EpsQuotasOption::getRamQuota() const
{
    return ramQuota_;
}

void EpsQuotasOption::setRamQuota(int32_t value)
{
    ramQuota_ = value;
    ramQuotaIsSet_ = true;
}

bool EpsQuotasOption::ramQuotaIsSet() const
{
    return ramQuotaIsSet_;
}

void EpsQuotasOption::unsetramQuota()
{
    ramQuotaIsSet_ = false;
}

int32_t EpsQuotasOption::getVolumeQuota() const
{
    return volumeQuota_;
}

void EpsQuotasOption::setVolumeQuota(int32_t value)
{
    volumeQuota_ = value;
    volumeQuotaIsSet_ = true;
}

bool EpsQuotasOption::volumeQuotaIsSet() const
{
    return volumeQuotaIsSet_;
}

void EpsQuotasOption::unsetvolumeQuota()
{
    volumeQuotaIsSet_ = false;
}

}
}
}
}
}


