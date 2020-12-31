

#include "huaweicloud/ecs/model/ResizeServerResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResizeServerResponse::ResizeServerResponse()
{
    orderId_ = "";
    orderIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ResizeServerResponse::~ResizeServerResponse() = default;

void ResizeServerResponse::validate()
{
}

web::json::value ResizeServerResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool ResizeServerResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string ResizeServerResponse::getOrderId() const
{
    return orderId_;
}

void ResizeServerResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ResizeServerResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ResizeServerResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ResizeServerResponse::getJobId() const
{
    return jobId_;
}

void ResizeServerResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ResizeServerResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ResizeServerResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


