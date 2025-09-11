

#include "huaweicloud/dbss/v1/model/ShowInstanceQuotaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ShowInstanceQuotaResponse::ShowInstanceQuotaResponse()
{
    cpu_ = 0L;
    cpuIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    quota_ = 0L;
    quotaIsSet_ = false;
    ram_ = 0L;
    ramIsSet_ = false;
}

ShowInstanceQuotaResponse::~ShowInstanceQuotaResponse() = default;

void ShowInstanceQuotaResponse::validate()
{
}

web::json::value ShowInstanceQuotaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ShowInstanceQuotaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


int64_t ShowInstanceQuotaResponse::getCpu() const
{
    return cpu_;
}

void ShowInstanceQuotaResponse::setCpu(int64_t value)
{
    cpu_ = value;
    cpuIsSet_ = true;
}

bool ShowInstanceQuotaResponse::cpuIsSet() const
{
    return cpuIsSet_;
}

void ShowInstanceQuotaResponse::unsetcpu()
{
    cpuIsSet_ = false;
}

std::string ShowInstanceQuotaResponse::getProjectId() const
{
    return projectId_;
}

void ShowInstanceQuotaResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowInstanceQuotaResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowInstanceQuotaResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int64_t ShowInstanceQuotaResponse::getQuota() const
{
    return quota_;
}

void ShowInstanceQuotaResponse::setQuota(int64_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool ShowInstanceQuotaResponse::quotaIsSet() const
{
    return quotaIsSet_;
}

void ShowInstanceQuotaResponse::unsetquota()
{
    quotaIsSet_ = false;
}

int64_t ShowInstanceQuotaResponse::getRam() const
{
    return ram_;
}

void ShowInstanceQuotaResponse::setRam(int64_t value)
{
    ram_ = value;
    ramIsSet_ = true;
}

bool ShowInstanceQuotaResponse::ramIsSet() const
{
    return ramIsSet_;
}

void ShowInstanceQuotaResponse::unsetram()
{
    ramIsSet_ = false;
}

}
}
}
}
}


