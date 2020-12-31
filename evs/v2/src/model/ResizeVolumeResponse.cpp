

#include "huaweicloud/evs/model/ResizeVolumeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ResizeVolumeResponse::ResizeVolumeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

ResizeVolumeResponse::~ResizeVolumeResponse() = default;

void ResizeVolumeResponse::validate()
{
}

web::json::value ResizeVolumeResponse::toJson() const
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

bool ResizeVolumeResponse::fromJson(const web::json::value& val)
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


std::string ResizeVolumeResponse::getJobId() const
{
    return jobId_;
}

void ResizeVolumeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ResizeVolumeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ResizeVolumeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ResizeVolumeResponse::getOrderId() const
{
    return orderId_;
}

void ResizeVolumeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ResizeVolumeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ResizeVolumeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


