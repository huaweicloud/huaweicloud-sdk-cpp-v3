

#include "huaweicloud/codeartsbuild/v3/model/ShowDomainStatus_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowDomainStatus_result::ShowDomainStatus_result()
{
    status_ = 0.0;
    statusIsSet_ = false;
    freeQuota_ = false;
    freeQuotaIsSet_ = false;
    allowCustomEnv_ = 0.0;
    allowCustomEnvIsSet_ = false;
}

ShowDomainStatus_result::~ShowDomainStatus_result() = default;

void ShowDomainStatus_result::validate()
{
}

web::json::value ShowDomainStatus_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(freeQuotaIsSet_) {
        val[utility::conversions::to_string_t("free_quota")] = ModelBase::toJson(freeQuota_);
    }
    if(allowCustomEnvIsSet_) {
        val[utility::conversions::to_string_t("allow_custom_env")] = ModelBase::toJson(allowCustomEnv_);
    }

    return val;
}
bool ShowDomainStatus_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("free_quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("free_quota"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFreeQuota(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allow_custom_env"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allow_custom_env"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowCustomEnv(refVal);
        }
    }
    return ok;
}


double ShowDomainStatus_result::getStatus() const
{
    return status_;
}

void ShowDomainStatus_result::setStatus(double value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowDomainStatus_result::statusIsSet() const
{
    return statusIsSet_;
}

void ShowDomainStatus_result::unsetstatus()
{
    statusIsSet_ = false;
}

bool ShowDomainStatus_result::isFreeQuota() const
{
    return freeQuota_;
}

void ShowDomainStatus_result::setFreeQuota(bool value)
{
    freeQuota_ = value;
    freeQuotaIsSet_ = true;
}

bool ShowDomainStatus_result::freeQuotaIsSet() const
{
    return freeQuotaIsSet_;
}

void ShowDomainStatus_result::unsetfreeQuota()
{
    freeQuotaIsSet_ = false;
}

double ShowDomainStatus_result::getAllowCustomEnv() const
{
    return allowCustomEnv_;
}

void ShowDomainStatus_result::setAllowCustomEnv(double value)
{
    allowCustomEnv_ = value;
    allowCustomEnvIsSet_ = true;
}

bool ShowDomainStatus_result::allowCustomEnvIsSet() const
{
    return allowCustomEnvIsSet_;
}

void ShowDomainStatus_result::unsetallowCustomEnv()
{
    allowCustomEnvIsSet_ = false;
}

}
}
}
}
}


