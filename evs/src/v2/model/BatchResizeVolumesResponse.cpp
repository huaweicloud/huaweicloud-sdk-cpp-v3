

#include "huaweicloud/evs/v2/model/BatchResizeVolumesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




BatchResizeVolumesResponse::BatchResizeVolumesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

BatchResizeVolumesResponse::~BatchResizeVolumesResponse() = default;

void BatchResizeVolumesResponse::validate()
{
}

web::json::value BatchResizeVolumesResponse::toJson() const
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
bool BatchResizeVolumesResponse::fromJson(const web::json::value& val)
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


std::string BatchResizeVolumesResponse::getJobId() const
{
    return jobId_;
}

void BatchResizeVolumesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchResizeVolumesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchResizeVolumesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string BatchResizeVolumesResponse::getOrderId() const
{
    return orderId_;
}

void BatchResizeVolumesResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool BatchResizeVolumesResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void BatchResizeVolumesResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


