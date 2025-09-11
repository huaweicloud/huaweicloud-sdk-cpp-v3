

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchReplicaResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchReplicaResponse::SwitchReplicaResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

SwitchReplicaResponse::~SwitchReplicaResponse() = default;

void SwitchReplicaResponse::validate()
{
}

web::json::value SwitchReplicaResponse::toJson() const
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
bool SwitchReplicaResponse::fromJson(const web::json::value& val)
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


std::string SwitchReplicaResponse::getJobId() const
{
    return jobId_;
}

void SwitchReplicaResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool SwitchReplicaResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void SwitchReplicaResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string SwitchReplicaResponse::getOrderId() const
{
    return orderId_;
}

void SwitchReplicaResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool SwitchReplicaResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void SwitchReplicaResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


