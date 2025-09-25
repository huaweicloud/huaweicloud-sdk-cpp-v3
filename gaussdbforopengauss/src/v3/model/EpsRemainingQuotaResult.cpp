

#include "huaweicloud/gaussdbforopengauss/v3/model/EpsRemainingQuotaResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




EpsRemainingQuotaResult::EpsRemainingQuotaResult()
{
    epsTag_ = "";
    epsTagIsSet_ = false;
    instanceEpsQuota_ = 0;
    instanceEpsQuotaIsSet_ = false;
    cpuEpsQuota_ = 0;
    cpuEpsQuotaIsSet_ = false;
    memEpsQuota_ = 0;
    memEpsQuotaIsSet_ = false;
    volumeEpsQuota_ = 0;
    volumeEpsQuotaIsSet_ = false;
    instanceEpsRemainingQuota_ = 0;
    instanceEpsRemainingQuotaIsSet_ = false;
    cpuEpsRemainingQuota_ = 0;
    cpuEpsRemainingQuotaIsSet_ = false;
    memEpsRemainingQuota_ = 0;
    memEpsRemainingQuotaIsSet_ = false;
    volumeEpsRemainingQuota_ = 0;
    volumeEpsRemainingQuotaIsSet_ = false;
}

EpsRemainingQuotaResult::~EpsRemainingQuotaResult() = default;

void EpsRemainingQuotaResult::validate()
{
}

web::json::value EpsRemainingQuotaResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(epsTagIsSet_) {
        val[utility::conversions::to_string_t("eps_tag")] = ModelBase::toJson(epsTag_);
    }
    if(instanceEpsQuotaIsSet_) {
        val[utility::conversions::to_string_t("instance_eps_quota")] = ModelBase::toJson(instanceEpsQuota_);
    }
    if(cpuEpsQuotaIsSet_) {
        val[utility::conversions::to_string_t("cpu_eps_quota")] = ModelBase::toJson(cpuEpsQuota_);
    }
    if(memEpsQuotaIsSet_) {
        val[utility::conversions::to_string_t("mem_eps_quota")] = ModelBase::toJson(memEpsQuota_);
    }
    if(volumeEpsQuotaIsSet_) {
        val[utility::conversions::to_string_t("volume_eps_quota")] = ModelBase::toJson(volumeEpsQuota_);
    }
    if(instanceEpsRemainingQuotaIsSet_) {
        val[utility::conversions::to_string_t("instance_eps_remaining_quota")] = ModelBase::toJson(instanceEpsRemainingQuota_);
    }
    if(cpuEpsRemainingQuotaIsSet_) {
        val[utility::conversions::to_string_t("cpu_eps_remaining_quota")] = ModelBase::toJson(cpuEpsRemainingQuota_);
    }
    if(memEpsRemainingQuotaIsSet_) {
        val[utility::conversions::to_string_t("mem_eps_remaining_quota")] = ModelBase::toJson(memEpsRemainingQuota_);
    }
    if(volumeEpsRemainingQuotaIsSet_) {
        val[utility::conversions::to_string_t("volume_eps_remaining_quota")] = ModelBase::toJson(volumeEpsRemainingQuota_);
    }

    return val;
}
bool EpsRemainingQuotaResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eps_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eps_tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpsTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_eps_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_eps_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceEpsQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_eps_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_eps_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuEpsQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem_eps_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem_eps_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemEpsQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_eps_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_eps_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeEpsQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_eps_remaining_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_eps_remaining_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceEpsRemainingQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_eps_remaining_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_eps_remaining_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuEpsRemainingQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem_eps_remaining_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem_eps_remaining_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemEpsRemainingQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_eps_remaining_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_eps_remaining_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeEpsRemainingQuota(refVal);
        }
    }
    return ok;
}


std::string EpsRemainingQuotaResult::getEpsTag() const
{
    return epsTag_;
}

void EpsRemainingQuotaResult::setEpsTag(const std::string& value)
{
    epsTag_ = value;
    epsTagIsSet_ = true;
}

bool EpsRemainingQuotaResult::epsTagIsSet() const
{
    return epsTagIsSet_;
}

void EpsRemainingQuotaResult::unsetepsTag()
{
    epsTagIsSet_ = false;
}

int32_t EpsRemainingQuotaResult::getInstanceEpsQuota() const
{
    return instanceEpsQuota_;
}

void EpsRemainingQuotaResult::setInstanceEpsQuota(int32_t value)
{
    instanceEpsQuota_ = value;
    instanceEpsQuotaIsSet_ = true;
}

bool EpsRemainingQuotaResult::instanceEpsQuotaIsSet() const
{
    return instanceEpsQuotaIsSet_;
}

void EpsRemainingQuotaResult::unsetinstanceEpsQuota()
{
    instanceEpsQuotaIsSet_ = false;
}

int32_t EpsRemainingQuotaResult::getCpuEpsQuota() const
{
    return cpuEpsQuota_;
}

void EpsRemainingQuotaResult::setCpuEpsQuota(int32_t value)
{
    cpuEpsQuota_ = value;
    cpuEpsQuotaIsSet_ = true;
}

bool EpsRemainingQuotaResult::cpuEpsQuotaIsSet() const
{
    return cpuEpsQuotaIsSet_;
}

void EpsRemainingQuotaResult::unsetcpuEpsQuota()
{
    cpuEpsQuotaIsSet_ = false;
}

int32_t EpsRemainingQuotaResult::getMemEpsQuota() const
{
    return memEpsQuota_;
}

void EpsRemainingQuotaResult::setMemEpsQuota(int32_t value)
{
    memEpsQuota_ = value;
    memEpsQuotaIsSet_ = true;
}

bool EpsRemainingQuotaResult::memEpsQuotaIsSet() const
{
    return memEpsQuotaIsSet_;
}

void EpsRemainingQuotaResult::unsetmemEpsQuota()
{
    memEpsQuotaIsSet_ = false;
}

int32_t EpsRemainingQuotaResult::getVolumeEpsQuota() const
{
    return volumeEpsQuota_;
}

void EpsRemainingQuotaResult::setVolumeEpsQuota(int32_t value)
{
    volumeEpsQuota_ = value;
    volumeEpsQuotaIsSet_ = true;
}

bool EpsRemainingQuotaResult::volumeEpsQuotaIsSet() const
{
    return volumeEpsQuotaIsSet_;
}

void EpsRemainingQuotaResult::unsetvolumeEpsQuota()
{
    volumeEpsQuotaIsSet_ = false;
}

int32_t EpsRemainingQuotaResult::getInstanceEpsRemainingQuota() const
{
    return instanceEpsRemainingQuota_;
}

void EpsRemainingQuotaResult::setInstanceEpsRemainingQuota(int32_t value)
{
    instanceEpsRemainingQuota_ = value;
    instanceEpsRemainingQuotaIsSet_ = true;
}

bool EpsRemainingQuotaResult::instanceEpsRemainingQuotaIsSet() const
{
    return instanceEpsRemainingQuotaIsSet_;
}

void EpsRemainingQuotaResult::unsetinstanceEpsRemainingQuota()
{
    instanceEpsRemainingQuotaIsSet_ = false;
}

int32_t EpsRemainingQuotaResult::getCpuEpsRemainingQuota() const
{
    return cpuEpsRemainingQuota_;
}

void EpsRemainingQuotaResult::setCpuEpsRemainingQuota(int32_t value)
{
    cpuEpsRemainingQuota_ = value;
    cpuEpsRemainingQuotaIsSet_ = true;
}

bool EpsRemainingQuotaResult::cpuEpsRemainingQuotaIsSet() const
{
    return cpuEpsRemainingQuotaIsSet_;
}

void EpsRemainingQuotaResult::unsetcpuEpsRemainingQuota()
{
    cpuEpsRemainingQuotaIsSet_ = false;
}

int32_t EpsRemainingQuotaResult::getMemEpsRemainingQuota() const
{
    return memEpsRemainingQuota_;
}

void EpsRemainingQuotaResult::setMemEpsRemainingQuota(int32_t value)
{
    memEpsRemainingQuota_ = value;
    memEpsRemainingQuotaIsSet_ = true;
}

bool EpsRemainingQuotaResult::memEpsRemainingQuotaIsSet() const
{
    return memEpsRemainingQuotaIsSet_;
}

void EpsRemainingQuotaResult::unsetmemEpsRemainingQuota()
{
    memEpsRemainingQuotaIsSet_ = false;
}

int32_t EpsRemainingQuotaResult::getVolumeEpsRemainingQuota() const
{
    return volumeEpsRemainingQuota_;
}

void EpsRemainingQuotaResult::setVolumeEpsRemainingQuota(int32_t value)
{
    volumeEpsRemainingQuota_ = value;
    volumeEpsRemainingQuotaIsSet_ = true;
}

bool EpsRemainingQuotaResult::volumeEpsRemainingQuotaIsSet() const
{
    return volumeEpsRemainingQuotaIsSet_;
}

void EpsRemainingQuotaResult::unsetvolumeEpsRemainingQuota()
{
    volumeEpsRemainingQuotaIsSet_ = false;
}

}
}
}
}
}


