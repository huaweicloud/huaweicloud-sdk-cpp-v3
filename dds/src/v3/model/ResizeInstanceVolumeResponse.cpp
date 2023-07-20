

#include "huaweicloud/dds/v3/model/ResizeInstanceVolumeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ResizeInstanceVolumeResponse::ResizeInstanceVolumeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

ResizeInstanceVolumeResponse::~ResizeInstanceVolumeResponse() = default;

void ResizeInstanceVolumeResponse::validate()
{
}

web::json::value ResizeInstanceVolumeResponse::toJson() const
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

bool ResizeInstanceVolumeResponse::fromJson(const web::json::value& val)
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

std::string ResizeInstanceVolumeResponse::getJobId() const
{
    return jobId_;
}

void ResizeInstanceVolumeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ResizeInstanceVolumeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ResizeInstanceVolumeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ResizeInstanceVolumeResponse::getOrderId() const
{
    return orderId_;
}

void ResizeInstanceVolumeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ResizeInstanceVolumeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ResizeInstanceVolumeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


