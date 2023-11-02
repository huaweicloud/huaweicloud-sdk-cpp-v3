

#include "huaweicloud/dbss/v1/model/ShowAuditQuotaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditQuotaResponse::ShowAuditQuotaResponse()
{
    auditQuota_ = 0L;
    auditQuotaIsSet_ = false;
    cpu_ = 0L;
    cpuIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    quota_ = 0L;
    quotaIsSet_ = false;
    ram_ = 0L;
    ramIsSet_ = false;
}

ShowAuditQuotaResponse::~ShowAuditQuotaResponse() = default;

void ShowAuditQuotaResponse::validate()
{
}

web::json::value ShowAuditQuotaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(auditQuotaIsSet_) {
        val[utility::conversions::to_string_t("audit_quota")] = ModelBase::toJson(auditQuota_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }

    return val;
}
bool ShowAuditQuotaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audit_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audit_quota"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuditQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ram"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ram"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRam(refVal);
        }
    }
    return ok;
}


int64_t ShowAuditQuotaResponse::getAuditQuota() const
{
    return auditQuota_;
}

void ShowAuditQuotaResponse::setAuditQuota(int64_t value)
{
    auditQuota_ = value;
    auditQuotaIsSet_ = true;
}

bool ShowAuditQuotaResponse::auditQuotaIsSet() const
{
    return auditQuotaIsSet_;
}

void ShowAuditQuotaResponse::unsetauditQuota()
{
    auditQuotaIsSet_ = false;
}

int64_t ShowAuditQuotaResponse::getCpu() const
{
    return cpu_;
}

void ShowAuditQuotaResponse::setCpu(int64_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ShowAuditQuotaResponse::cpuIsSet() const
{
    return cpuIsSet_;
}

void ShowAuditQuotaResponse::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string ShowAuditQuotaResponse::getProjectId() const
{
    return projectId_;
}

void ShowAuditQuotaResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowAuditQuotaResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowAuditQuotaResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int64_t ShowAuditQuotaResponse::getQuota() const
{
    return quota_;
}

void ShowAuditQuotaResponse::setQuota(int64_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool ShowAuditQuotaResponse::quotaIsSet() const
{
    return quotaIsSet_;
}

void ShowAuditQuotaResponse::unsetquota()
{
    quotaIsSet_ = false;
}

int64_t ShowAuditQuotaResponse::getRam() const
{
    return ram_;
}

void ShowAuditQuotaResponse::setRam(int64_t value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool ShowAuditQuotaResponse::ramIsSet() const
{
    return ramIsSet_;
}

void ShowAuditQuotaResponse::unsetram()
{
    ramIsSet_ = false;
}

}
}
}
}
}


