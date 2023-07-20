

#include "huaweicloud/gaussdbforopengauss/v3/model/ListQuotaResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListQuotaResult::ListQuotaResult()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    enterpriseProjectName_ = "";
    enterpriseProjectNameIsSet_ = false;
    instanceEpsQuota_ = 0;
    instanceEpsQuotaIsSet_ = false;
    vcpusEpsQuota_ = 0;
    vcpusEpsQuotaIsSet_ = false;
    ramEpsQuota_ = 0;
    ramEpsQuotaIsSet_ = false;
    volumeEpsQuota_ = 0;
    volumeEpsQuotaIsSet_ = false;
    instanceUsed_ = 0;
    instanceUsedIsSet_ = false;
    vcpusUsed_ = 0;
    vcpusUsedIsSet_ = false;
    ramUsed_ = 0;
    ramUsedIsSet_ = false;
    volumeUsed_ = 0;
    volumeUsedIsSet_ = false;
}

ListQuotaResult::~ListQuotaResult() = default;

void ListQuotaResult::validate()
{
}

web::json::value ListQuotaResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(enterpriseProjectNameIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_name")] = ModelBase::toJson(enterpriseProjectName_);
    }
    if(instanceEpsQuotaIsSet_) {
        val[utility::conversions::to_string_t("instance_eps_quota")] = ModelBase::toJson(instanceEpsQuota_);
    }
    if(vcpusEpsQuotaIsSet_) {
        val[utility::conversions::to_string_t("vcpus_eps_quota")] = ModelBase::toJson(vcpusEpsQuota_);
    }
    if(ramEpsQuotaIsSet_) {
        val[utility::conversions::to_string_t("ram_eps_quota")] = ModelBase::toJson(ramEpsQuota_);
    }
    if(volumeEpsQuotaIsSet_) {
        val[utility::conversions::to_string_t("volume_eps_quota")] = ModelBase::toJson(volumeEpsQuota_);
    }
    if(instanceUsedIsSet_) {
        val[utility::conversions::to_string_t("instance_used")] = ModelBase::toJson(instanceUsed_);
    }
    if(vcpusUsedIsSet_) {
        val[utility::conversions::to_string_t("vcpus_used")] = ModelBase::toJson(vcpusUsed_);
    }
    if(ramUsedIsSet_) {
        val[utility::conversions::to_string_t("ram_used")] = ModelBase::toJson(ramUsed_);
    }
    if(volumeUsedIsSet_) {
        val[utility::conversions::to_string_t("volume_used")] = ModelBase::toJson(volumeUsed_);
    }

    return val;
}

bool ListQuotaResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_eps_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_eps_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceEpsQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vcpus_eps_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus_eps_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpusEpsQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram_eps_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram_eps_quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRamEpsQuota(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vcpus_used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vcpus_used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVcpusUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram_used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram_used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRamUsed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_used"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_used"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeUsed(refVal);
        }
    }
    return ok;
}

std::string ListQuotaResult::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListQuotaResult::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListQuotaResult::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListQuotaResult::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListQuotaResult::getEnterpriseProjectName() const
{
    return enterpriseProjectName_;
}

void ListQuotaResult::setEnterpriseProjectName(const std::string& value)
{
    enterpriseProjectName_ = value;
    enterpriseProjectNameIsSet_ = true;
}

bool ListQuotaResult::enterpriseProjectNameIsSet() const
{
    return enterpriseProjectNameIsSet_;
}

void ListQuotaResult::unsetenterpriseProjectName()
{
    enterpriseProjectNameIsSet_ = false;
}

int32_t ListQuotaResult::getInstanceEpsQuota() const
{
    return instanceEpsQuota_;
}

void ListQuotaResult::setInstanceEpsQuota(int32_t value)
{
    instanceEpsQuota_ = value;
    instanceEpsQuotaIsSet_ = true;
}

bool ListQuotaResult::instanceEpsQuotaIsSet() const
{
    return instanceEpsQuotaIsSet_;
}

void ListQuotaResult::unsetinstanceEpsQuota()
{
    instanceEpsQuotaIsSet_ = false;
}

int32_t ListQuotaResult::getVcpusEpsQuota() const
{
    return vcpusEpsQuota_;
}

void ListQuotaResult::setVcpusEpsQuota(int32_t value)
{
    vcpusEpsQuota_ = value;
    vcpusEpsQuotaIsSet_ = true;
}

bool ListQuotaResult::vcpusEpsQuotaIsSet() const
{
    return vcpusEpsQuotaIsSet_;
}

void ListQuotaResult::unsetvcpusEpsQuota()
{
    vcpusEpsQuotaIsSet_ = false;
}

int32_t ListQuotaResult::getRamEpsQuota() const
{
    return ramEpsQuota_;
}

void ListQuotaResult::setRamEpsQuota(int32_t value)
{
    ramEpsQuota_ = value;
    ramEpsQuotaIsSet_ = true;
}

bool ListQuotaResult::ramEpsQuotaIsSet() const
{
    return ramEpsQuotaIsSet_;
}

void ListQuotaResult::unsetramEpsQuota()
{
    ramEpsQuotaIsSet_ = false;
}

int32_t ListQuotaResult::getVolumeEpsQuota() const
{
    return volumeEpsQuota_;
}

void ListQuotaResult::setVolumeEpsQuota(int32_t value)
{
    volumeEpsQuota_ = value;
    volumeEpsQuotaIsSet_ = true;
}

bool ListQuotaResult::volumeEpsQuotaIsSet() const
{
    return volumeEpsQuotaIsSet_;
}

void ListQuotaResult::unsetvolumeEpsQuota()
{
    volumeEpsQuotaIsSet_ = false;
}

int32_t ListQuotaResult::getInstanceUsed() const
{
    return instanceUsed_;
}

void ListQuotaResult::setInstanceUsed(int32_t value)
{
    instanceUsed_ = value;
    instanceUsedIsSet_ = true;
}

bool ListQuotaResult::instanceUsedIsSet() const
{
    return instanceUsedIsSet_;
}

void ListQuotaResult::unsetinstanceUsed()
{
    instanceUsedIsSet_ = false;
}

int32_t ListQuotaResult::getVcpusUsed() const
{
    return vcpusUsed_;
}

void ListQuotaResult::setVcpusUsed(int32_t value)
{
    vcpusUsed_ = value;
    vcpusUsedIsSet_ = true;
}

bool ListQuotaResult::vcpusUsedIsSet() const
{
    return vcpusUsedIsSet_;
}

void ListQuotaResult::unsetvcpusUsed()
{
    vcpusUsedIsSet_ = false;
}

int32_t ListQuotaResult::getRamUsed() const
{
    return ramUsed_;
}

void ListQuotaResult::setRamUsed(int32_t value)
{
    ramUsed_ = value;
    ramUsedIsSet_ = true;
}

bool ListQuotaResult::ramUsedIsSet() const
{
    return ramUsedIsSet_;
}

void ListQuotaResult::unsetramUsed()
{
    ramUsedIsSet_ = false;
}

int32_t ListQuotaResult::getVolumeUsed() const
{
    return volumeUsed_;
}

void ListQuotaResult::setVolumeUsed(int32_t value)
{
    volumeUsed_ = value;
    volumeUsedIsSet_ = true;
}

bool ListQuotaResult::volumeUsedIsSet() const
{
    return volumeUsedIsSet_;
}

void ListQuotaResult::unsetvolumeUsed()
{
    volumeUsedIsSet_ = false;
}

}
}
}
}
}


