

#include "huaweicloud/dds/v3/model/ExpandReplicasetNodeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ExpandReplicasetNodeResponse::ExpandReplicasetNodeResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

ExpandReplicasetNodeResponse::~ExpandReplicasetNodeResponse() = default;

void ExpandReplicasetNodeResponse::validate()
{
}

web::json::value ExpandReplicasetNodeResponse::toJson() const
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

bool ExpandReplicasetNodeResponse::fromJson(const web::json::value& val)
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

std::string ExpandReplicasetNodeResponse::getJobId() const
{
    return jobId_;
}

void ExpandReplicasetNodeResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ExpandReplicasetNodeResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ExpandReplicasetNodeResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ExpandReplicasetNodeResponse::getOrderId() const
{
    return orderId_;
}

void ExpandReplicasetNodeResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ExpandReplicasetNodeResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ExpandReplicasetNodeResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


