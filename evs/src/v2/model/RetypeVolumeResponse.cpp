

#include "huaweicloud/evs/v2/model/RetypeVolumeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




RetypeVolumeResponse::RetypeVolumeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

RetypeVolumeResponse::~RetypeVolumeResponse() = default;

void RetypeVolumeResponse::validate()
{
}

web::json::value RetypeVolumeResponse::toJson() const
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
bool RetypeVolumeResponse::fromJson(const web::json::value& val)
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


std::string RetypeVolumeResponse::getJobId() const
{
    return jobId_;
}

void RetypeVolumeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RetypeVolumeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RetypeVolumeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string RetypeVolumeResponse::getOrderId() const
{
    return orderId_;
}

void RetypeVolumeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool RetypeVolumeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void RetypeVolumeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


