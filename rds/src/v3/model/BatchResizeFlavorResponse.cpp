

#include "huaweicloud/rds/v3/model/BatchResizeFlavorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchResizeFlavorResponse::BatchResizeFlavorResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
}

BatchResizeFlavorResponse::~BatchResizeFlavorResponse() = default;

void BatchResizeFlavorResponse::validate()
{
}

web::json::value BatchResizeFlavorResponse::toJson() const
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
bool BatchResizeFlavorResponse::fromJson(const web::json::value& val)
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


std::string BatchResizeFlavorResponse::getJobId() const
{
    return jobId_;
}

void BatchResizeFlavorResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool BatchResizeFlavorResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void BatchResizeFlavorResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string BatchResizeFlavorResponse::getOrderId() const
{
    return orderId_;
}

void BatchResizeFlavorResponse::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool BatchResizeFlavorResponse::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void BatchResizeFlavorResponse::unsetorderId()
{
    orderIdIsSet_ = false;
}

}
}
}
}
}


