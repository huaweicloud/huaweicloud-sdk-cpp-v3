

#include "huaweicloud/metastudio/v1/model/TransferAssetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TransferAssetResponse::TransferAssetResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

TransferAssetResponse::~TransferAssetResponse() = default;

void TransferAssetResponse::validate()
{
}

web::json::value TransferAssetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool TransferAssetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string TransferAssetResponse::getJobId() const
{
    return jobId_;
}

void TransferAssetResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool TransferAssetResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void TransferAssetResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string TransferAssetResponse::getXRequestId() const
{
    return xRequestId_;
}

void TransferAssetResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool TransferAssetResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void TransferAssetResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


