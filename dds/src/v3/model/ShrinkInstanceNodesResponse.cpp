

#include "huaweicloud/dds/v3/model/ShrinkInstanceNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShrinkInstanceNodesResponse::ShrinkInstanceNodesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

ShrinkInstanceNodesResponse::~ShrinkInstanceNodesResponse() = default;

void ShrinkInstanceNodesResponse::validate()
{
}

web::json::value ShrinkInstanceNodesResponse::toJson() const
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
bool ShrinkInstanceNodesResponse::fromJson(const web::json::value& val)
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


std::string ShrinkInstanceNodesResponse::getJobId() const
{
    return jobId_;
}

void ShrinkInstanceNodesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShrinkInstanceNodesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShrinkInstanceNodesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShrinkInstanceNodesResponse::getOrderId() const
{
    return orderId_;
}

void ShrinkInstanceNodesResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ShrinkInstanceNodesResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ShrinkInstanceNodesResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


