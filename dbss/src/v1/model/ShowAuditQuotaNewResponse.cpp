

#include "huaweicloud/dbss/v1/model/ShowAuditQuotaNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowAuditQuotaNewResponse::ShowAuditQuotaNewResponse()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    auditQuota_ = 0L;
    auditQuotaIsSet_ = false;
    cpu_ = 0L;
    cpuIsSet_ = false;
    ram_ = 0L;
    ramIsSet_ = false;
}

ShowAuditQuotaNewResponse::~ShowAuditQuotaNewResponse() = default;

void ShowAuditQuotaNewResponse::validate()
{
}

web::json::value ShowAuditQuotaNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(auditQuotaIsSet_) {
        val[utility::conversions::to_string_t("audit_quota")] = ModelBase::toJson(auditQuota_);
    }
    if(cpuIsSet_) {
        val[utility::conversions::to_string_t("cpu")] = ModelBase::toJson(cpu_);
    }
    if(ramIsSet_) {
        val[utility::conversions::to_string_t("ram")] = ModelBase::toJson(ram_);
    }

    return val;
}
bool ShowAuditQuotaNewResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
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


std::string ShowAuditQuotaNewResponse::getProjectId() const
{
    return projectId_;
}

void ShowAuditQuotaNewResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowAuditQuotaNewResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowAuditQuotaNewResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int64_t ShowAuditQuotaNewResponse::getAuditQuota() const
{
    return auditQuota_;
}

void ShowAuditQuotaNewResponse::setAuditQuota(int64_t value)
{
    auditQuota_ = value;
    auditQuotaIsSet_ = true;
}

bool ShowAuditQuotaNewResponse::auditQuotaIsSet() const
{
    return auditQuotaIsSet_;
}

void ShowAuditQuotaNewResponse::unsetauditQuota()
{
    auditQuotaIsSet_ = false;
}

int64_t ShowAuditQuotaNewResponse::getCpu() const
{
    return cpu_;
}

void ShowAuditQuotaNewResponse::setCpu(int64_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ShowAuditQuotaNewResponse::cpuIsSet() const
{
    return cpuIsSet_;
}

void ShowAuditQuotaNewResponse::unsetcpu()
{
    cpuIsSet_ = false;
}

int64_t ShowAuditQuotaNewResponse::getRam() const
{
    return ram_;
}

void ShowAuditQuotaNewResponse::setRam(int64_t value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool ShowAuditQuotaNewResponse::ramIsSet() const
{
    return ramIsSet_;
}

void ShowAuditQuotaNewResponse::unsetram()
{
    ramIsSet_ = false;
}

}
}
}
}
}


