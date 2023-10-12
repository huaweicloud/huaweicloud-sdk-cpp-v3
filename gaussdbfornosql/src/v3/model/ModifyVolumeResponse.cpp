

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyVolumeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyVolumeResponse::ModifyVolumeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

ModifyVolumeResponse::~ModifyVolumeResponse() = default;

void ModifyVolumeResponse::validate()
{
}

web::json::value ModifyVolumeResponse::toJson() const
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
bool ModifyVolumeResponse::fromJson(const web::json::value& val)
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


std::string ModifyVolumeResponse::getJobId() const
{
    return jobId_;
}

void ModifyVolumeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ModifyVolumeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ModifyVolumeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ModifyVolumeResponse::getOrderId() const
{
    return orderId_;
}

void ModifyVolumeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ModifyVolumeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ModifyVolumeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


