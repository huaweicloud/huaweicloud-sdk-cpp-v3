

#include "huaweicloud/rds/v3/model/StartInstanceEnlargeVolumeActionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartInstanceEnlargeVolumeActionResponse::StartInstanceEnlargeVolumeActionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

StartInstanceEnlargeVolumeActionResponse::~StartInstanceEnlargeVolumeActionResponse() = default;

void StartInstanceEnlargeVolumeActionResponse::validate()
{
}

web::json::value StartInstanceEnlargeVolumeActionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }

    return val;
}
bool StartInstanceEnlargeVolumeActionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    return ok;
}


std::string StartInstanceEnlargeVolumeActionResponse::getJobId() const
{
    return jobId_;
}

void StartInstanceEnlargeVolumeActionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartInstanceEnlargeVolumeActionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartInstanceEnlargeVolumeActionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string StartInstanceEnlargeVolumeActionResponse::getOrderId() const
{
    return orderId_;
}

void StartInstanceEnlargeVolumeActionResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool StartInstanceEnlargeVolumeActionResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void StartInstanceEnlargeVolumeActionResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


