

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowEpsRemainingQuotaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowEpsRemainingQuotaResponse::ShowEpsRemainingQuotaResponse()
{
    epsRemainingQuotasIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowEpsRemainingQuotaResponse::~ShowEpsRemainingQuotaResponse() = default;

void ShowEpsRemainingQuotaResponse::validate()
{
}

web::json::value ShowEpsRemainingQuotaResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(epsRemainingQuotasIsSet_) {
        val[utility::conversions::to_string_t("eps_remaining_quotas")] = ModelBase::toJson(epsRemainingQuotas_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowEpsRemainingQuotaResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("eps_remaining_quotas"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eps_remaining_quotas"));
        if(!fieldValue.is_null())
        {
            std::vector<EpsRemainingQuotaResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEpsRemainingQuotas(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<EpsRemainingQuotaResult>& ShowEpsRemainingQuotaResponse::getEpsRemainingQuotas()
{
    return epsRemainingQuotas_;
}

void ShowEpsRemainingQuotaResponse::setEpsRemainingQuotas(const std::vector<EpsRemainingQuotaResult>& value)
{
    epsRemainingQuotas_ = value;
    epsRemainingQuotasIsSet_ = true;
}

bool ShowEpsRemainingQuotaResponse::epsRemainingQuotasIsSet() const
{
    return epsRemainingQuotasIsSet_;
}

void ShowEpsRemainingQuotaResponse::unsetepsRemainingQuotas()
{
    epsRemainingQuotasIsSet_ = false;
}

std::string ShowEpsRemainingQuotaResponse::getJobId() const
{
    return jobId_;
}

void ShowEpsRemainingQuotaResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowEpsRemainingQuotaResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowEpsRemainingQuotaResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

int32_t ShowEpsRemainingQuotaResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowEpsRemainingQuotaResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowEpsRemainingQuotaResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowEpsRemainingQuotaResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


