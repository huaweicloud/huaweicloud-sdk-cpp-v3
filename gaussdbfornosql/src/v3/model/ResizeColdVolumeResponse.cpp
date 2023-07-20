

#include "huaweicloud/gaussdbfornosql/v3/model/ResizeColdVolumeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ResizeColdVolumeResponse::ResizeColdVolumeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

ResizeColdVolumeResponse::~ResizeColdVolumeResponse() = default;

void ResizeColdVolumeResponse::validate()
{
}

web::json::value ResizeColdVolumeResponse::toJson() const
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

bool ResizeColdVolumeResponse::fromJson(const web::json::value& val)
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

std::string ResizeColdVolumeResponse::getJobId() const
{
    return jobId_;
}

void ResizeColdVolumeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ResizeColdVolumeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ResizeColdVolumeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ResizeColdVolumeResponse::getOrderId() const
{
    return orderId_;
}

void ResizeColdVolumeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ResizeColdVolumeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ResizeColdVolumeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


