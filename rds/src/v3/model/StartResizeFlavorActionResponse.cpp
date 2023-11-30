

#include "huaweicloud/rds/v3/model/StartResizeFlavorActionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




StartResizeFlavorActionResponse::StartResizeFlavorActionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

StartResizeFlavorActionResponse::~StartResizeFlavorActionResponse() = default;

void StartResizeFlavorActionResponse::validate()
{
}

web::json::value StartResizeFlavorActionResponse::toJson() const
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
bool StartResizeFlavorActionResponse::fromJson(const web::json::value& val)
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


std::string StartResizeFlavorActionResponse::getJobId() const
{
    return jobId_;
}

void StartResizeFlavorActionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StartResizeFlavorActionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StartResizeFlavorActionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string StartResizeFlavorActionResponse::getOrderId() const
{
    return orderId_;
}

void StartResizeFlavorActionResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool StartResizeFlavorActionResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void StartResizeFlavorActionResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


